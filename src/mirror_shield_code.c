#include "modding.h"
#include "global.h"
#include "recomputils.h"
#include "recompconfig.h"
#include "gOotMirrorShield.h"
#include "segment_symbols.h"

u64 gMirrorShieldSwappableTexture[] = {
	0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 
	0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0c8edfdfd, 0xfdfdfdebb3a0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 
	0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0a2dccfbfbf, 0xbfcfeffdf5c2a0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 
	0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0828abfbfbfbf, 0xbfbfafbffdf8b4a0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 
	0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0837abfbfbfbfbf, 0xbfbfbfafbffdf8a3, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 
	0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xa367aebfbfbfbfbf, 0xbfbfbfbfafdffce7, 0xa3b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 
	0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b3, 0x799ebfbfbfbfbfbf, 0xbfbfbfbfbfaffffc, 0xd7a3b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 
	0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b1b68b, 0x9fbfbfbfbfbfbfbf, 0xbfbfbfbfbfbfbfff, 0xfcd8a4b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 
	0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b2b7ad9f, 0xbfbfbfbfbfbfbfbf, 0xbfbfbfbfbfbfbfbf, 0xfffde9a4a1b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 
	0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0a0b1c7cdbfbf, 0xbfbfbfbfbfbfbfbf, 0xbfbfbfbfbfbfbfbf, 0xbfeffef9c6a3a1b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 
	0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0d1d5ccbfbfbf, 0xbfbfbfbfbfbfbfbf, 0xbfbfbfbfbfbfbfbf, 0xbfafcffffcf8d4b2, 0xa1b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 
	0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0c1, 0xd1e3c9bdbfbfbfbf, 0xbfbfbfbfbfbfbfbf, 0xbfbfbfbfbfbfbfbf, 0xbfbfafafcffefaf5, 0xf2b1a1b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 
	0xb0b0b0b0b0b0b0b0, 0xb0b0b0b2b3c5d7d9, 0xc9bcafbfbfbfbfbf, 0xbfbfbfbfbfbfbfbf, 0xbfbfbfbfbfbfbfbf, 0xbfbfbfbfafafbfed, 0xfaf7f4b3a1b0b0b0, 0xb0b0b0b0b0b0b0b0, 
	0xb0b0b0b0b0b0b0b0, 0xb0b0b2bbcedecebf, 0xbfbfbfbfbfbfbfbf, 0xbfbfbfbfbfbfbfbf, 0xbfbfbfbfbfbfbfbf, 0xbfbfbfbfbfbfbfaf, 0xbfeffcfae6b1b0b0, 0xb0b0b0b0b0b0b0b0, 
	0xb0b0b0b0b0b0b0b0, 0xb0b0a0746c5d6e7d, 0x8f9fbfbfbfbfbfbf, 0xbfbfbfbfbfbfbfbf, 0xbfbfbfbfbfbfbfbf, 0xbfbfbfbfbfbfad9d, 0x8d7d7ca9d6b1b0b0, 0xb0b0b0b0b0b0b0b0, 
	0xb0b0b0b0b0b0b0b0, 0xb0b0b0a091817164, 0x5b4d4d6f9fbfbfbf, 0xbfbfbfbfbfbfbfbf, 0xbfbfbfbfbfbfbfbf, 0xbfbfbfaf9d7b7472, 0x82829191a0b0b0b0, 0xb0b0b0b0b0b0b0b0, 
	0xb0b0b0b0b0b0b0b0, 0xb0b1b1b0b0b0b0b0, 0xb2a2845b3d5f9fbf, 0xbfbfbfbfbfbfbfbf, 0xbfbfbfbfbfbfbfbf, 0xbfbf9f8b84a1b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 
	0xb0b0b0b0b0b0a1a2, 0xb2b2b3b4b5b4a2a1, 0xb1b0b0b2a45b3f7f, 0xbfbfbfbfbfbfbfbf, 0xbfbfbfbfbfbfbfbf, 0xbfbdabb4b0b0b0b0, 0xb0a1a2b2b2b2b2b3, 0xa1a1a0b0b0b0b0b0, 
	0xb0b0b0b0b0b3d9ed, 0xfdfdfdfdfefefdec, 0xc7b3a1b0b0b47b3d, 0x6fbfbfbfbfbfbfbf, 0xbfbfbfbfbfbfafcf, 0xdbb4b2b0b0b0a2b3, 0xc4e9fdfdfdfdfefc, 0xf8f4c2a1b0b0b0b0, 
	0xb0b0b0b0a39adfdf, 0xcfbfbfbfcfdfffff, 0xfffce7b3a0b0b284, 0x3b6fbfbfbfbfbfbf, 0xbfbfbfbfbfafcfeb, 0xb4b0b0b0b0b3d9ec, 0xeddfcfbfbfbfbfcf, 0xeffcf7d4a2b0b0b0, 
	0xb0b0b0b37b8fbfbf, 0xbfbfbfbfbfafafbf, 0xcffffffbd4a0b0b0, 0x833b6fbfbfbfbfbf, 0xbfbfbfbfafcfebb4, 0xb0b0b0b2c5dbcfbf, 0xafafbfbfbfbfbfbf, 0xafbffef9c5b2b0b0, 
	0xb0b0b28b7fbfbfbf, 0xbfbfbfbfbfbfbfbf, 0xbfafbffffbf4a1b1, 0xb0833b5fbfbfbfbf, 0xbfbfbfbfcfebb4b0, 0xb0b0a4abbebfbfbf, 0xbfbfbfbfbfbfbfbf, 0xbfafbffdf7a3b0b0, 
	0xb0b0a45dafbfbfbf, 0xafafafbfbfbfbfbf, 0xbfbfbfafeffdfab5, 0xb1b0943b4f9fbfbf, 0xbfbfafafcbb4b0b0, 0xb0a48bafbfbfbfbf, 0xbfbfbfbfbfafafaf, 0xafbfbfeffbd2a0b0, 
	0xb0b47b8faf8d7d6d, 0x6d6d5d5d5d7f9fbf, 0xbfbfbfbfafdffffc, 0xb5a2b0a35b3d5d7d, 0x7d7d8dabb4b0b0b0, 0xa48bafbfbfbfbfbf, 0xbfaf9f7f6d6e6f5f, 0x5f5e6e8ffef6b0b0, 
	0xb0ab4f7d7b8492a2, 0xa2a2a292745b3d5f, 0x8fbfbfbfbfafdfff, 0xfcb7a4b0b1a18272, 0x7292b2b2b0b0b0a4, 0x8bbfbfbfbfbfbfaf, 0x9f7e8e98a3a0a0a0, 0xa28768485ffcd4b0, 
	0xb08b7ba4b2b0b0b0, 0xa0a0a0b0b0b2a46b, 0x3d5fafbfbfbfafcf, 0xfffecba5a1b0b0b0, 0xb0b0b0b0b0b2b49b, 0xbfbfbfbfbfbfbf9f, 0x9bb4b3b2b2b2a2a2, 0xb2b2b2b47b8dc9b0, 
	0xb0b2b2b0b0a0b2c2, 0xd2e2e2c2b2a0b0b2, 0x944b4dafbfbfbfaf, 0xbffffffdcab4a2a2, 0xa2a2b2b2c4dbbdbf, 0xbfbfbfbfafdfcfbc, 0xb4b1b1a2b2d2e2e2, 0xd4c5a2b0b1b2b2b0, 
	0xb0b0b0b0b2c4ebfd, 0xfdfdfdfdfbe4b0b0, 0xb0a2445dbfbfbfbf, 0xbfafdffffffdfdfd, 0xfdfdfdedddbfbfbf, 0xbfbfbfafdfefbcb5, 0xb1b2b4dbedfdfdfd, 0xfefefac3a0b0b0b0, 
	0xb0b0b0a4abcdbfaf, 0xafafafbfeffbf4b0, 0xa0b0923b7fbfbfbf, 0xbfbfafafbfcfdfef, 0xdfdfcfbfafbfbfbf, 0xbfbfafcfffbcb4b1, 0xb29abdcfbfafafaf, 0xbfcffff9e5a0b0b0, 
	0xb0b0a47bafbfbfbf, 0xbfbfbfbfafcffbf3, 0xb0b0b0644dbfbfbf, 0xbfbfbfbfbfafafaf, 0xafafbfbfbfbfbfbf, 0xbfbfafffeda4b1b2, 0x897fbfbfbfbfbfbf, 0xbfafaffffad2a0b0, 
	0xb0b27b7fbfbfbfbf, 0xbfbfbfbfbfafdffb, 0xe5a1b0923d9fbfbf, 0xbfbfbfbfbfbfbfbf, 0xbfbfbfbfbfbfbfbf, 0xbfbfbfffcbb2b0a2, 0x5dafbfbfbfbfbfbf, 0xbfbfbfbffef7b1b0, 
	0xb0b25d8fbfbfbfbf, 0xbfbfbfbfbfbfbfff, 0xfaa1b0a23d8fbfbf, 0xbfbfbfbfbfbfbfbf, 0xbfbfbfbfbfbfbfbf, 0xbfafdffdb4b0b072, 0x5dbfbfbfbfbfbfbf, 0xbfbfbfafeffbb1b0, 
	
};

u64 gMirrorShieldGCDesign[] = {
	0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 
	0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0c8edfdfd, 0xfdfdfdebb3a0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 
	0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0a2dccfbfbf, 0xbfcfeffdf5c2a0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 
	0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0828abfbfbfbf, 0xbfbfafbffdf8b4a0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 
	0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0837abfbfbfbfbf, 0xbfbfbfafbffdf8a3, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 
	0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xa367aebfbfbfbfbf, 0xbfbfbfbfafdffce7, 0xa3b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 
	0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b3, 0x799ebfbfbfbfbfbf, 0xbfbfbfbfbfaffffc, 0xd7a3b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 
	0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b1b68b, 0x9fbfbfbfbfbfbfbf, 0xbfbfbfbfbfbfbfff, 0xfcd8a4b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 
	0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b2b7ad9f, 0xbfbfbfbfbfbfbfbf, 0xbfbfbfbfbfbfbfbf, 0xfffde9a4a1b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 
	0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0a0b1c7cdbfbf, 0xbfbfbfbfbfbfbfbf, 0xbfbfbfbfbfbfbfbf, 0xbfeffef9c6a3a1b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 
	0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0d1d5ccbfbfbf, 0xbfbfbfbfbfbfbfbf, 0xbfbfbfbfbfbfbfbf, 0xbfafcffffcf8d4b2, 0xa1b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 
	0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0c1, 0xd1e3c9bdbfbfbfbf, 0xbfbfbfbfbfbfbfbf, 0xbfbfbfbfbfbfbfbf, 0xbfbfafafcffefaf5, 0xf2b1a1b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 
	0xb0b0b0b0b0b0b0b0, 0xb0b0b0b2b3c5d7d9, 0xc9bcafbfbfbfbfbf, 0xbfbfbfbfbfbfbfbf, 0xbfbfbfbfbfbfbfbf, 0xbfbfbfbfafafbfed, 0xfaf7f4b3a1b0b0b0, 0xb0b0b0b0b0b0b0b0, 
	0xb0b0b0b0b0b0b0b0, 0xb0b0b2bbcedecebf, 0xbfbfbfbfbfbfbfbf, 0xbfbfbfbfbfbfbfbf, 0xbfbfbfbfbfbfbfbf, 0xbfbfbfbfbfbfbfaf, 0xbfeffcfae6b1b0b0, 0xb0b0b0b0b0b0b0b0, 
	0xb0b0b0b0b0b0b0b0, 0xb0b0a0746c5d6e7d, 0x8f9fbfbfbfbfbfbf, 0xbfbfbfbfbfbfbfbf, 0xbfbfbfbfbfbfbfbf, 0xbfbfbfbfbfbfad9d, 0x8d7d7ca9d6b1b0b0, 0xb0b0b0b0b0b0b0b0, 
	0xb0b0b0b0b0b0b0b0, 0xb0b0b0a091817164, 0x5b4d4d6f9fbfbfbf, 0xbfbfbfbfbfbfbfbf, 0xbfbfbfbfbfbfbfbf, 0xbfbfbfaf9d7b7472, 0x82829191a0b0b0b0, 0xb0b0b0b0b0b0b0b0, 
	0xb0b0b0b0b0b0b0b0, 0xb0b1b1b0b0b0b0b0, 0xb2a2845b3d5f9fbf, 0xbfbfbfbfbfbfbfbf, 0xbfbfbfbfbfbfbfbf, 0xbfbf9f8b84a1b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 
	0xb0b0b0b0b0b0a1a2, 0xb2b2b3b4b5b4a2a1, 0xb1b0b0b2a45b3f7f, 0xbfbfbfbfbfbfbfbf, 0xbfbfbfbfbfbfbfbf, 0xbfbdabb4b0b0b0b0, 0xb0a1a2b2b2b2b2b3, 0xa1a1a0b0b0b0b0b0, 
	0xb0b0b0b0b0b3d9ed, 0xfdfdfdfdfefefdec, 0xc7b3a1b0b0b47b3d, 0x6fbfbfbfbfbfbfbf, 0xbfbfbfbfbfbfafcf, 0xdbb4b2b0b0b0a2b3, 0xc4e9fdfdfdfdfefc, 0xf8f4c2a1b0b0b0b0, 
	0xb0b0b0b0a39adfdf, 0xcfbfbfbfcfdfffff, 0xfffce7b3a0b0b284, 0x3b6fbfbfbfbfbfbf, 0xbfbfbfbfbfafcfeb, 0xb4b0b0b0b0b3d9ec, 0xeddfcfbfbfbfbfcf, 0xeffcf7d4a2b0b0b0, 
	0xb0b0b0b37b8fbfbf, 0xbfbfbfbfbfafafbf, 0xcffffffbd4a0b0b0, 0x833b6fbfbfbfbfbf, 0xbfbfbfbfafcfebb4, 0xb0b0b0b2c5dbcfbf, 0xafafbfbfbfbfbfbf, 0xafbffef9c5b2b0b0, 
	0xb0b0b28b7fbfbfbf, 0xbfbfbfbfbfbfbfbf, 0xbfafbffffbf4a1b1, 0xb0833b5fbfbfbfbf, 0xbfbfbfbfcfebb4b0, 0xb0b0a4abbebfbfbf, 0xbfbfbfbfbfbfbfbf, 0xbfafbffdf7a3b0b0, 
	0xb0b0a45dafbfbfbf, 0xafafafbfbfbfbfbf, 0xbfbfbfafeffdfab5, 0xb1b0943b4f9fbfbf, 0xbfbfafafcbb4b0b0, 0xb0a48bafbfbfbfbf, 0xbfbfbfbfbfafafaf, 0xafbfbfeffbd2a0b0, 
	0xb0b47b8faf8d7d6d, 0x6d6d5d5d5d7f9fbf, 0xbfbfbfbfafdffffc, 0xb5a2b0a35b3d5d7d, 0x7d7d8dabb4b0b0b0, 0xa48bafbfbfbfbfbf, 0xbfaf9f7f6d6e6f5f, 0x5f5e6e8ffef6b0b0, 
	0xb0ab4f7d7b8492a2, 0xa2a2a292745b3d5f, 0x8fbfbfbfbfafdfff, 0xfcb7a4b0b1a18272, 0x7292b2b2b0b0b0a4, 0x8bbfbfbfbfbfbfaf, 0x9f7e8e98a3a0a0a0, 0xa28768485ffcd4b0, 
	0xb08b7ba4b2b0b0b0, 0xa0a0a0b0b0b2a46b, 0x3d5fafbfbfbfafcf, 0xfffecba5a1b0b0b0, 0xb0b0b0b0b0b2b49b, 0xbfbfbfbfbfbfbf9f, 0x9bb4b3b2b2b2a2a2, 0xb2b2b2b47b8dc9b0, 
	0xb0b2b2b0b0a0b2c2, 0xd2e2e2c2b2a0b0b2, 0x944b4dafbfbfbfaf, 0xbffffffdcab4a2a2, 0xa2a2b2b2c4dbbdbf, 0xbfbfbfbfafdfcfbc, 0xb4b1b1a2b2d2e2e2, 0xd4c5a2b0b1b2b2b0, 
	0xb0b0b0b0b2c4ebfd, 0xfdfdfdfdfbe4b0b0, 0xb0a2445dbfbfbfbf, 0xbfafdffffffdfdfd, 0xfdfdfdedddbfbfbf, 0xbfbfbfafdfefbcb5, 0xb1b2b4dbedfdfdfd, 0xfefefac3a0b0b0b0, 
	0xb0b0b0a4abcdbfaf, 0xafafafbfeffbf4b0, 0xa0b0923b7fbfbfbf, 0xbfbfafafbfcfdfef, 0xdfdfcfbfafbfbfbf, 0xbfbfafcfffbcb4b1, 0xb29abdcfbfafafaf, 0xbfcffff9e5a0b0b0, 
	0xb0b0a47bafbfbfbf, 0xbfbfbfbfafcffbf3, 0xb0b0b0644dbfbfbf, 0xbfbfbfbfbfafafaf, 0xafafbfbfbfbfbfbf, 0xbfbfafffeda4b1b2, 0x897fbfbfbfbfbfbf, 0xbfafaffffad2a0b0, 
	0xb0b27b7fbfbfbfbf, 0xbfbfbfbfbfafdffb, 0xe5a1b0923d9fbfbf, 0xbfbfbfbfbfbfbfbf, 0xbfbfbfbfbfbfbfbf, 0xbfbfbfffcbb2b0a2, 0x5dafbfbfbfbfbfbf, 0xbfbfbfbffef7b1b0, 
	0xb0b25d8fbfbfbfbf, 0xbfbfbfbfbfbfbfff, 0xfaa1b0a23d8fbfbf, 0xbfbfbfbfbfbfbfbf, 0xbfbfbfbfbfbfbfbf, 0xbfafdffdb4b0b072, 0x5dbfbfbfbfbfbfbf, 0xbfbfbfafeffbb1b0, 
	
};

u64 gMirrorShieldN64Design[] = {
	0x9090909090909090, 0x9090909090909090, 0x9090909090909090, 0x9090909090909090, 0x9090909090909090, 0x9090909090909090, 0x9090909090909090, 0x9090909090909090, 
	0x9090909090909090, 0x9090909090909090, 0x9090909090909090, 0x909090909090a0b0, 0xb0b0b0b0b0b0b0b0, 0xb0a0909090909090, 0x9090909090909090, 0x9090909090909090, 
	0x9090909090909090, 0x9090909090909090, 0x9090909090909090, 0x9090a0b0b0b2c3e4, 0xe4e4e4e4e4e4e4e3, 0xe2d0b0b0b0a09090, 0x9090909090909090, 0x9090909090909090, 
	0x9090909090909090, 0x9090909090909090, 0x9090909090909090, 0xa0b2c3e4d5d7daeb, 0xebebebebebebebfa, 0xf7f4e4e3e2c0b0a0, 0x9090909090909090, 0x9090909090909090, 
	0x9090909090909090, 0x9090909090909090, 0x909090909090a0b2, 0xb4c7daebdcbdbfbf, 0xbfbfbfbfbfbfbfde, 0xedecebfaf7f4e2c0, 0xb0a0909090909090, 0x9090909090909090, 
	0x9090909090909090, 0x9090909090909090, 0x90909090a0b2b4c7, 0xcbbdbeafaf9f9f9f, 0x9f9f9f9f9f9f9faf, 0xbfbfbfdeedfaf7f4, 0xe1c0b0a090909090, 0x9090909090909090, 
	0x9090909090909090, 0x9090909090909090, 0x909090a2b4c7babd, 0xae9f8f8f7f7f7f7f, 0x7f7f7f8f9f9f9f9f, 0x9f9f9fafbfdeedfa, 0xf7f4e1c0a0909090, 0x9090909090909090, 
	0x9090909090909090, 0x9090909090909090, 0x90a0a2a6baac9e8f, 0x7f7d6c4b4b4b4b4b, 0x4b4c4d5f7f7f7f8f, 0x9f9f9f9f9fafbfde, 0xedfaf6e2c0b0a090, 0x9090909090909090, 
	0x9090909090909090, 0x9090909090909090, 0xa1b4b7ab9e8d6c4b, 0x4b58554444444444, 0x3435283a4b4c4d5f, 0x7f8f9f9f9f9f9faf, 0xbfdefbf7f4e1c0a0, 0x9090909090909090, 
	0x9090909090909090, 0x9090909090909092, 0xa6ba9c8d7b685544, 0x5372707070707070, 0x705042433435283b, 0x4d5f7f8f9f9f9f9f, 0xafbfdfecfaf6e2c0, 0xa090909090909090, 
	0x9090909090909090, 0x9090909090909296, 0x9b9c7b6865727070, 0x8090909090909090, 0x9080707070504234, 0x283b4d6f8f9f9f9f, 0x9f9fafbfdefbf6e2, 0xc0a0909090909090, 
	0x9090909090909090, 0x909090909092968a, 0x8c89757280909090, 0x9090909090909090, 0x9090909090807050, 0x4235283d5f7f8f9f, 0x9f9f9fafbfdefbf6, 0xe2c0a09090909090, 
	0x9090909090909090, 0x909090908286897a, 0x7884819090909090, 0x9090909090909090, 0x9090909090909080, 0x705133283b4e6f8f, 0x9f9f9f9fafbfdefb, 0xf6e1b09090909090, 
	0x9090909090909090, 0x9090908174787875, 0x8290909090909090, 0x9090909090909090, 0x9090909090909090, 0x8070504235293d6f, 0x8f9f9f9f9fafbfee, 0xfaf4c0a090909090, 
	0x9090909090909090, 0x9090908275868481, 0x9090909090909090, 0x9090909090909090, 0x9090909090909090, 0x909080705134283d, 0x6f8f9f9f9f9fafbf, 0xedf6e2c0a0909090, 
	0x9090909090909090, 0x9090818495939190, 0x9090909090909090, 0x9090909090909090, 0x9090909090909090, 0x9090908070503429, 0x4d7f8f9f9f9f9faf, 0xdffbf6e1b0909090, 
	0x9090909090909090, 0x90808396a3a19090, 0x9090909090909090, 0x9090909090909090, 0x9090909090909090, 0x9090909090705034, 0x3a5e8f9f9f9f9f9f, 0xbfeefaf4c0a09090, 
	0x9090909090909090, 0x90817495a2909090, 0x9090909090909090, 0x9090909090909090, 0x9090909090909090, 0x9090909090907042, 0x273d6f8f9f9f9f9f, 0xafcfecf6e1b09090, 
	0x9090909090909090, 0x8072849390909090, 0x9090909090909090, 0x9090909090909090, 0x9090909090909090, 0x9090909090908050, 0x33294d7f8f9f9f9f, 0x9fafdefaf4c0a090, 
	0x9090909090909090, 0x8182929190909090, 0x9090909090909090, 0x9090909090909090, 0x9090909090909090, 0x9090909090909070, 0x51343a5e8f9f9f9f, 0x9f9fcfecf6e1b090, 
	0x9090909090909090, 0x8293a19090909090, 0x9090909090909090, 0x9090909090909090, 0x9090909090909090, 0x9090909090909090, 0x7042284d7f8f9f9f, 0x9f9fafdefaf3c090, 
	0x9090909090909081, 0x82a2a09090909090, 0x9090909090909090, 0x9090909090909090, 0x9090909090909090, 0x9090909090909090, 0x8050343b5e8f9f9f, 0x9f9fafcffcf6e0b0, 
	0x9090d0c090909082, 0x93a19090909090a0, 0xc0c0909090909090, 0x9090909090909090, 0x9090909090909090, 0x9090909090909090, 0x907042284d7f9f9f, 0x9f9f9fafdef9e3b0, 
	0x9099c5f0f0d09081, 0xa3c0a090a0b0e1f7, 0xf7b0909090909090, 0x9090909090909090, 0x9090909090909090, 0x9090909090909090, 0x908050343b6f9f9f, 0x9f9f9fafcffbf4b0, 
	0x50679ffcf8f3f1c3, 0xa7d2a0a1f4fadede, 0xe490909090909090, 0x9090909090909090, 0x9090909090909090, 0x9090909090909090, 0x909070433a6e8f9f, 0x9f9f9f9fbfecf4c0, 
	0x60203d9fffffe963, 0xa9d2a17c7fafafea, 0xc090909090909090, 0x9090909090909090, 0x9090909090909090, 0x9090909090909090, 0x909080423a5e8f9f, 0x9f9f9f9fbfecf6e0, 
	0x9020283f9fcda153, 0xb9d250252f5fbef6, 0x9090909090909090, 0x9090909090909090, 0x9090909090909090, 0x9090909090909090, 0x90908042284d7f9f, 0x9f9f9f9fafdefae0, 
	0x9050222f7fc47065, 0xdaf4b020273fbcd0, 0x9090909090909090, 0x9090909090909090, 0x9090909090909090, 0x9090909090909090, 0x90908050343b7f9f, 0x9f9f9f9fafcffbf0, 
	0x9080202a7890737b, 0xdef9e270213a9890, 0x9090909090909090, 0x9090909090909090, 0x9090909090909090, 0x9090909090909090, 0x90909070433a6e9f, 0x9f9f9f9f9fbffcf0, 
	0x90904060a091668d, 0xcffcf4d06060a0a0, 0x9090909090909090, 0x9090909090909090, 0x9090909090909090, 0x9090909090909090, 0x90909080423a6e9f, 0x9f9f9f9f9fbffcf0, 
	0x9090a2c2d3a58b9f, 0xbfeef9f4e3d2d2c0, 0xa090909090909090, 0x9090909090909090, 0x9090909090909090, 0x9090909090909090, 0x90909080423a6e9f, 0x9f9f9f9f9fbffcf0, 
	0x908297b9b98a7e8f, 0xafcfedeac9c8d6c1, 0xa090909090909090, 0x9090909090909090, 0x9090909090909090, 0x9090909090909090, 0x90909080423a6e9f, 0x9f9f9f9f9fbffcf0, 
	
};

DECLARE_ROM_SEGMENT(object_link_child);

extern Gfx* gPlayerShields[];
extern Gfx gLinkHumanMirrorShieldDL[];
extern Mtx gLinkHumanMirrorShieldMtx;

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

RECOMP_HOOK_RETURN("DmaMgr_ProcessRequest") void after_dma() {
    switch (recomp_get_config_u32("mirror_shield_design")) {
        case MIRROR_SHIELD_DESIGN_N64:
            Lib_MemCpy(gMirrorShieldSwappableTexture, gMirrorShieldN64Design, sizeof(gMirrorShieldSwappableTexture));
            break;
        case MIRROR_SHIELD_DESIGN_GC:
            Lib_MemCpy(gMirrorShieldSwappableTexture, gMirrorShieldGCDesign, sizeof(gMirrorShieldSwappableTexture));
            break;
    }
    if (gVrom == SEGMENT_ROM_START(object_link_child)) {
        uintptr_t old_segment_6 = gSegments[0x06];
        gSegments[0x06] = OS_K0_TO_PHYSICAL(gRam);
        Gfx* to_patch = Lib_SegmentedToVirtual(gLinkHumanMirrorShieldDL);
        gSPBranchList(to_patch , gOotMirrorShield);
        gSegments[0x06] = old_segment_6;
    }
    gVrom = 0;
    gRam = NULL;
}

u32 color_word_from_components(u8 r, u8 g, u8 b, u8 a) {
    return (_SHIFTL(r, 24, 8) | _SHIFTL(g, 16, 8) | _SHIFTL(b, 8, 8) | _SHIFTL(a, 0, 8));
}

#define MAX_SCAN 10000
Gfx* scan_for_color(Gfx* dl, u32 command, u8 r, u8 g, u8 b, u8 a) {
    Gfx* cur_cmd = dl;
    // Build the 32-bit color word from the input colors.
    u32 color_word = color_word_from_components(r, g, b, a);

    for (u32 i = 0; i < MAX_SCAN; i++) {
        // Get the command ID (top 8 bits of the first word).
        u32 command_id = (cur_cmd->words.w0 >> 24) & 0xFF;
        switch (command_id) {
            case G_ENDDL:
                // Reached the end of the displaylist without finding the target command.
                return NULL;
            case G_DL:
                // If this is a branchlist (G_DL_NOPUSH) then treat it as the end of a displaylist.
                {
                    u32 push = (cur_cmd->words.w0 >> 16) & 0xFF;
                    if (push == G_DL_NOPUSH) {
                        return NULL;
                    }
                }
            default:
                // Just continue forward for any other command.
                break;
        }
        // If this is the right command ID, check if the color matches.
        if (command_id == command) {
            // Check the color.
            // TODO this can be changed into a threshold per-component check if catching similar colors is desirable.
            // This will allow detecting slightly differently colors for recoloring custom models.
            if (cur_cmd->words.w1 == color_word) {
                return cur_cmd;
            }
        }

        // Go to the next command.
        cur_cmd++;
    }

    recomp_printf("dl patching warning: hit scan limit (started at %08X)\n", (u32)dl);

    return NULL;
}

bool patch_prim_color(Gfx* dl, u8 old_r, u8 old_g, u8 old_b, u8 old_a, u8 new_r, u8 new_g, u8 new_b, u8 new_a) {
    // Look for a prim color command with the old color value.
    Gfx* to_patch = scan_for_color(dl, G_SETPRIMCOLOR, old_r, old_g, old_b, old_a);
    if (to_patch != NULL) {
        // Overwrite the color with the new value.
        to_patch->words.w1 = color_word_from_components(new_r, new_g, new_b, new_a);
        return true;
    }
    return false;
}


Gfx** curDList;
s32 curLimbIndex;

RECOMP_HOOK("Player_OverrideLimbDrawGameplayDefault")
void Recolor_OverrideLimbDrawDefault(PlayState* play, s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3s* rot, Actor* actor) {
    Player* player = (Player*)actor;

    curLimbIndex = limbIndex;
    curDList = dList;
}

RECOMP_HOOK_RETURN("Player_OverrideLimbDrawGameplayDefault")
void Recolor_AfterOverrideLimbDrawDefault() {
    if (curDList != NULL && *curDList != NULL) {
        // Get the real address of the displaylist.
        recomp_printf("Running");
        Gfx* toPatch = Lib_SegmentedToVirtual(gOotMirrorShield);

        // Patch the displaylist based on the form's color to point to the custom color DL instead.
        patch_prim_color(toPatch, 1, 1, 1, 255, 215, 0, 0, 255);
    }
    curDList = NULL;
}

