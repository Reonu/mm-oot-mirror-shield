#include "modding.h"
#include "global.h"
#include "recomputils.h"
#include "recompconfig.h"
#include "gOotMirrorShield.h"
#include "segment_symbols.h"
#include "ray_og.h"
#include "texture_data.h"

DECLARE_ROM_SEGMENT(object_link_child);
DECLARE_ROM_SEGMENT(object_mir_ray);
DECLARE_ROM_SEGMENT(icon_item_static_yar);

extern Gfx* gPlayerShields[];
extern Gfx gLinkHumanMirrorShieldDL[];
extern Mtx gLinkHumanMirrorShieldMtx;
extern Gfx object_mir_ray_DL_0004B0[];

//Gfx gCustomMirrorShielDL[] = {
    //gsSPDisplayList(gOotMirrorShield),
    //gsSPEndDisplayList(),
//};

Gfx gOotMirrorShieldWithMtxDL[] = {
    gsSPMatrix(&gLinkHumanMirrorShieldMtx, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPBranchList(gOotMirrorShield),    
};

//RECOMP_HOOK("Player_Init") void on_Player_Init() {
    //gPlayerShields[2] = gOotMirrorShieldWithMtxDL;
    //gPlayerShields[3] = gOotMirrorShieldWithMtxDL;
//}

void* gRam;
uintptr_t gVrom;
size_t gSize;
RECOMP_HOOK("DmaMgr_ProcessRequest") void on_DmaMgr_RequestSync(DmaRequest* req) {
    gRam = req->dramAddr;
    gVrom = req->vromAddr;
    gSize = req->size;
}

enum MirrorShieldDesigns {
    MIRROR_SHIELD_DESIGN_N64,
    MIRROR_SHIELD_DESIGN_GC,
};

enum OnOffToggles {
    TOGGLE_ON,
    TOGGLE_OFF,
};
RECOMP_HOOK_RETURN("DmaMgr_ProcessRequest") void after_dma() {
    switch (recomp_get_config_u32("mirror_shield_design")) {
        case MIRROR_SHIELD_DESIGN_N64:
            Lib_MemCpy(gMirrorShieldSwappableTexture, gMirrorShieldN64Design, 2048);
            Lib_MemCpy(gMirrorShieldReflectionSwappableTexture, gMirrorShieldReflectionN64Design, 4096);
            break;
        case MIRROR_SHIELD_DESIGN_GC:
            Lib_MemCpy(gMirrorShieldSwappableTexture, gMirrorShieldGCDesign, 2048);
            Lib_MemCpy(gMirrorShieldReflectionSwappableTexture, gMirrorShieldReflectionGCDesign, 4096);
            break;
    }
    if (gVrom == SEGMENT_ROM_START(object_link_child)) {
        uintptr_t old_segment_6 = gSegments[0x06];
        gSegments[0x06] = OS_K0_TO_PHYSICAL(gRam);
        Gfx* to_patch = Lib_SegmentedToVirtual(gLinkHumanMirrorShieldDL);
        gSPBranchList(to_patch , gOotMirrorShield);
        gSegments[0x06] = old_segment_6;
    }
    if (gVrom == SEGMENT_ROM_START(object_mir_ray)) {
        uintptr_t old_segment_6 = gSegments[0x06];
        gSegments[0x06] = OS_K0_TO_PHYSICAL(gRam);
        Gfx* to_patch = Lib_SegmentedToVirtual(object_mir_ray_DL_0004B0);
        gSPBranchList(to_patch , ray_og);
        gSegments[0x06] = old_segment_6;
    }
    gVrom = 0;
    gRam = NULL;
}

extern u64 gItemIconMirrorShieldTex[];
u8 gCurIconIsMirrorShield = 0;
PlayState* gPlayState;
u8 gId;
void* gDst;
u8 gAlreadyTranslated = 0;
uintptr_t gTranslatedAddress;
// Translate the address only once, and check if it's currently rendering the Blast Mask icon in the UI. 
RECOMP_HOOK("CmpDma_LoadFileImpl") void on_CmpDma_LoadFileImpl(uintptr_t segmentRom, s32 id, void* dst, size_t size) {
    if (!gAlreadyTranslated ) {
        gTranslatedAddress = DmaMgr_TranslateVromToRom(SEGMENT_ROM_START(icon_item_static_yar));
        gAlreadyTranslated = 1;
    }
    if (id == ITEM_SHIELD_MIRROR && segmentRom == gTranslatedAddress) {
        gCurIconIsMirrorShield = 1;
    } else {
        gCurIconIsMirrorShield = 0;
    } 
    gId = id;
    gDst = dst;
}

// Replace the Blast Mask icon in the UI with the shades.
RECOMP_HOOK_RETURN("CmpDma_LoadFileImpl") void return_CmpDma_LoadFileImpl(void) {
    if (gCurIconIsMirrorShield) {
        Lib_MemCpy(gDst, gMirrorShieldIconGCTex, ICON_ITEM_TEX_SIZE);
    }
    gCurIconIsMirrorShield = 0;
}

Gfx gOotMirrorShieldColor[] = {
    gsDPSetPrimColor(0, 0xFF, 1, 1, 1, 0),
    gsSPEndDisplayList()
};

void hsv_to_rgb(float h, float s, float v, Color_RGB8* out) {
    float r = 0, g = 0, b = 0;
    if (s == 0) {
        r = g = b = v;
    } else {
        int i;
        float f, p, q, t;
        h = h / 60.0f;
        i = (int)(h);
        f = h - i;
        p = v * (1 - s);
        q = v * (1 - f * s);
        t = v * (1 - (1 - f) * s);
        switch (i) {
            case 0:
                r = v;
                g = t;
                b = p;
                break;
            case 1:
                r = q;
                g = v;
                b = p;
                break;
            case 2:
                r = p;
                g = v;
                b = t;
                break;
            case 3:
                r = p;
                g = q;
                b = v;
                break;
            case 4:
                r = t;
                g = p;
                b = v;
                break;
            default:
                r = v;
                g = p;
                b = q;
                break;
        }
    }
    out->r = r * 255;
    out->g = g * 255;
    out->b = b * 255;
}

RECOMP_HOOK("Player_UpdateCommon") void on_Player_UpdateCommon(Player* this, PlayState* play, Input* input) {
    static Color_RGB8 color = {0, 0, 0};
    static float hue = 0.0f;
    hue += recomp_get_config_double("mirror_shield_rainbow_cycle");
    
    if (hue >= 360.0f) {
        hue -= 360.0f;
    }

    if (recomp_get_config_u32("mirror_shield_rainbow_mode") == TOGGLE_ON) {
        hsv_to_rgb(hue, 1.0f, 1.0f, &color);
    } else {
        color.r = recomp_get_config_u32("mirror_shield_color_r");
        color.g = recomp_get_config_u32("mirror_shield_color_g");
        color.b = recomp_get_config_u32("mirror_shield_color_b");
    }

    gDPSetPrimColor(&gOotMirrorShieldColor, 0, 0xFF, color.r, color.g, color.b, 255);
}
