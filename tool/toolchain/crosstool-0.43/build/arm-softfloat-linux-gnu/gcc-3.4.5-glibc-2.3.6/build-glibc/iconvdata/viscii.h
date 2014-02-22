static const uint32_t to_ucs4[256] = {
  [0x01] = 0x0001,
  [0x02] = 0x1EB2,
  [0x03] = 0x0003,
  [0x04] = 0x0004,
  [0x05] = 0x1EB4,
  [0x06] = 0x1EAA,
  [0x07] = 0x0007,
  [0x08] = 0x0008,
  [0x09] = 0x0009,
  [0x0a] = 0x000A,
  [0x0b] = 0x000B,
  [0x0c] = 0x000C,
  [0x0d] = 0x000D,
  [0x0e] = 0x000E,
  [0x0f] = 0x000F,
  [0x10] = 0x0010,
  [0x11] = 0x0011,
  [0x12] = 0x0012,
  [0x13] = 0x0013,
  [0x14] = 0x1EF6,
  [0x15] = 0x0015,
  [0x16] = 0x0016,
  [0x17] = 0x0017,
  [0x18] = 0x0018,
  [0x19] = 0x1EF8,
  [0x1a] = 0x001A,
  [0x1b] = 0x001B,
  [0x1c] = 0x001C,
  [0x1d] = 0x001D,
  [0x1e] = 0x1EF4,
  [0x1f] = 0x001F,
  [0x20] = 0x0020,
  [0x21] = 0x0021,
  [0x22] = 0x0022,
  [0x23] = 0x0023,
  [0x24] = 0x0024,
  [0x25] = 0x0025,
  [0x26] = 0x0026,
  [0x27] = 0x0027,
  [0x28] = 0x0028,
  [0x29] = 0x0029,
  [0x2a] = 0x002A,
  [0x2b] = 0x002B,
  [0x2c] = 0x002C,
  [0x2d] = 0x002D,
  [0x2e] = 0x002E,
  [0x2f] = 0x002F,
  [0x30] = 0x0030,
  [0x31] = 0x0031,
  [0x32] = 0x0032,
  [0x33] = 0x0033,
  [0x34] = 0x0034,
  [0x35] = 0x0035,
  [0x36] = 0x0036,
  [0x37] = 0x0037,
  [0x38] = 0x0038,
  [0x39] = 0x0039,
  [0x3a] = 0x003A,
  [0x3b] = 0x003B,
  [0x3c] = 0x003C,
  [0x3d] = 0x003D,
  [0x3e] = 0x003E,
  [0x3f] = 0x003F,
  [0x40] = 0x0040,
  [0x41] = 0x0041,
  [0x42] = 0x0042,
  [0x43] = 0x0043,
  [0x44] = 0x0044,
  [0x45] = 0x0045,
  [0x46] = 0x0046,
  [0x47] = 0x0047,
  [0x48] = 0x0048,
  [0x49] = 0x0049,
  [0x4a] = 0x004A,
  [0x4b] = 0x004B,
  [0x4c] = 0x004C,
  [0x4d] = 0x004D,
  [0x4e] = 0x004E,
  [0x4f] = 0x004F,
  [0x50] = 0x0050,
  [0x51] = 0x0051,
  [0x52] = 0x0052,
  [0x53] = 0x0053,
  [0x54] = 0x0054,
  [0x55] = 0x0055,
  [0x56] = 0x0056,
  [0x57] = 0x0057,
  [0x58] = 0x0058,
  [0x59] = 0x0059,
  [0x5a] = 0x005A,
  [0x5b] = 0x005B,
  [0x5c] = 0x005C,
  [0x5d] = 0x005D,
  [0x5e] = 0x005E,
  [0x5f] = 0x005F,
  [0x60] = 0x0060,
  [0x61] = 0x0061,
  [0x62] = 0x0062,
  [0x63] = 0x0063,
  [0x64] = 0x0064,
  [0x65] = 0x0065,
  [0x66] = 0x0066,
  [0x67] = 0x0067,
  [0x68] = 0x0068,
  [0x69] = 0x0069,
  [0x6a] = 0x006A,
  [0x6b] = 0x006B,
  [0x6c] = 0x006C,
  [0x6d] = 0x006D,
  [0x6e] = 0x006E,
  [0x6f] = 0x006F,
  [0x70] = 0x0070,
  [0x71] = 0x0071,
  [0x72] = 0x0072,
  [0x73] = 0x0073,
  [0x74] = 0x0074,
  [0x75] = 0x0075,
  [0x76] = 0x0076,
  [0x77] = 0x0077,
  [0x78] = 0x0078,
  [0x79] = 0x0079,
  [0x7a] = 0x007A,
  [0x7b] = 0x007B,
  [0x7c] = 0x007C,
  [0x7d] = 0x007D,
  [0x7e] = 0x007E,
  [0x7f] = 0x007F,
  [0x80] = 0x1EA0,
  [0x81] = 0x1EAE,
  [0x82] = 0x1EB0,
  [0x83] = 0x1EB6,
  [0x84] = 0x1EA4,
  [0x85] = 0x1EA6,
  [0x86] = 0x1EA8,
  [0x87] = 0x1EAC,
  [0x88] = 0x1EBC,
  [0x89] = 0x1EB8,
  [0x8a] = 0x1EBE,
  [0x8b] = 0x1EC0,
  [0x8c] = 0x1EC2,
  [0x8d] = 0x1EC4,
  [0x8e] = 0x1EC6,
  [0x8f] = 0x1ED0,
  [0x90] = 0x1ED2,
  [0x91] = 0x1ED4,
  [0x92] = 0x1ED6,
  [0x93] = 0x1ED8,
  [0x94] = 0x1EE2,
  [0x95] = 0x1EDA,
  [0x96] = 0x1EDC,
  [0x97] = 0x1EDE,
  [0x98] = 0x1ECA,
  [0x99] = 0x1ECE,
  [0x9a] = 0x1ECC,
  [0x9b] = 0x1EC8,
  [0x9c] = 0x1EE6,
  [0x9d] = 0x0168,
  [0x9e] = 0x1EE4,
  [0x9f] = 0x1EF2,
  [0xa0] = 0x00D5,
  [0xa1] = 0x1EAF,
  [0xa2] = 0x1EB1,
  [0xa3] = 0x1EB7,
  [0xa4] = 0x1EA5,
  [0xa5] = 0x1EA7,
  [0xa6] = 0x1EA9,
  [0xa7] = 0x1EAD,
  [0xa8] = 0x1EBD,
  [0xa9] = 0x1EB9,
  [0xaa] = 0x1EBF,
  [0xab] = 0x1EC1,
  [0xac] = 0x1EC3,
  [0xad] = 0x1EC5,
  [0xae] = 0x1EC7,
  [0xaf] = 0x1ED1,
  [0xb0] = 0x1ED3,
  [0xb1] = 0x1ED5,
  [0xb2] = 0x1ED7,
  [0xb3] = 0x1EE0,
  [0xb4] = 0x01A0,
  [0xb5] = 0x1ED9,
  [0xb6] = 0x1EDD,
  [0xb7] = 0x1EDF,
  [0xb8] = 0x1ECB,
  [0xb9] = 0x1EF0,
  [0xba] = 0x1EE8,
  [0xbb] = 0x1EEA,
  [0xbc] = 0x1EEC,
  [0xbd] = 0x01A1,
  [0xbe] = 0x1EDB,
  [0xbf] = 0x01AF,
  [0xc0] = 0x00C0,
  [0xc1] = 0x00C1,
  [0xc2] = 0x00C2,
  [0xc3] = 0x00C3,
  [0xc4] = 0x1EA2,
  [0xc5] = 0x0102,
  [0xc6] = 0x1EB3,
  [0xc7] = 0x1EB5,
  [0xc8] = 0x00C8,
  [0xc9] = 0x00C9,
  [0xca] = 0x00CA,
  [0xcb] = 0x1EBA,
  [0xcc] = 0x00CC,
  [0xcd] = 0x00CD,
  [0xce] = 0x0128,
  [0xcf] = 0x1EF3,
  [0xd0] = 0x0110,
  [0xd1] = 0x1EE9,
  [0xd2] = 0x00D2,
  [0xd3] = 0x00D3,
  [0xd4] = 0x00D4,
  [0xd5] = 0x1EA1,
  [0xd6] = 0x1EF7,
  [0xd7] = 0x1EEB,
  [0xd8] = 0x1EED,
  [0xd9] = 0x00D9,
  [0xda] = 0x00DA,
  [0xdb] = 0x1EF9,
  [0xdc] = 0x1EF5,
  [0xdd] = 0x00DD,
  [0xde] = 0x1EE1,
  [0xdf] = 0x01B0,
  [0xe0] = 0x00E0,
  [0xe1] = 0x00E1,
  [0xe2] = 0x00E2,
  [0xe3] = 0x00E3,
  [0xe4] = 0x1EA3,
  [0xe5] = 0x0103,
  [0xe6] = 0x1EEF,
  [0xe7] = 0x1EAB,
  [0xe8] = 0x00E8,
  [0xe9] = 0x00E9,
  [0xea] = 0x00EA,
  [0xeb] = 0x1EBB,
  [0xec] = 0x00EC,
  [0xed] = 0x00ED,
  [0xee] = 0x0129,
  [0xef] = 0x1EC9,
  [0xf0] = 0x0111,
  [0xf1] = 0x1EF1,
  [0xf2] = 0x00F2,
  [0xf3] = 0x00F3,
  [0xf4] = 0x00F4,
  [0xf5] = 0x00F5,
  [0xf6] = 0x1ECF,
  [0xf7] = 0x1ECD,
  [0xf8] = 0x1EE5,
  [0xf9] = 0x00F9,
  [0xfa] = 0x00FA,
  [0xfb] = 0x0169,
  [0xfc] = 0x1EE7,
  [0xfd] = 0x00FD,
  [0xfe] = 0x1EE3,
  [0xff] = 0x1EEE,
};
static const char from_ucs4[] = {
  [0x0001] = 0x01,
  [0x0003] = 0x03,
  [0x0004] = 0x04,
  [0x0007] = 0x07,
  [0x0008] = 0x08,
  [0x0009] = 0x09,
  [0x000A] = 0x0a,
  [0x000B] = 0x0b,
  [0x000C] = 0x0c,
  [0x000D] = 0x0d,
  [0x000E] = 0x0e,
  [0x000F] = 0x0f,
  [0x0010] = 0x10,
  [0x0011] = 0x11,
  [0x0012] = 0x12,
  [0x0013] = 0x13,
  [0x0015] = 0x15,
  [0x0016] = 0x16,
  [0x0017] = 0x17,
  [0x0018] = 0x18,
  [0x001A] = 0x1a,
  [0x001B] = 0x1b,
  [0x001C] = 0x1c,
  [0x001D] = 0x1d,
  [0x001F] = 0x1f,
  [0x0020] = 0x20,
  [0x0021] = 0x21,
  [0x0022] = 0x22,
  [0x0023] = 0x23,
  [0x0024] = 0x24,
  [0x0025] = 0x25,
  [0x0026] = 0x26,
  [0x0027] = 0x27,
  [0x0028] = 0x28,
  [0x0029] = 0x29,
  [0x002A] = 0x2a,
  [0x002B] = 0x2b,
  [0x002C] = 0x2c,
  [0x002D] = 0x2d,
  [0x002E] = 0x2e,
  [0x002F] = 0x2f,
  [0x0030] = 0x30,
  [0x0031] = 0x31,
  [0x0032] = 0x32,
  [0x0033] = 0x33,
  [0x0034] = 0x34,
  [0x0035] = 0x35,
  [0x0036] = 0x36,
  [0x0037] = 0x37,
  [0x0038] = 0x38,
  [0x0039] = 0x39,
  [0x003A] = 0x3a,
  [0x003B] = 0x3b,
  [0x003C] = 0x3c,
  [0x003D] = 0x3d,
  [0x003E] = 0x3e,
  [0x003F] = 0x3f,
  [0x0040] = 0x40,
  [0x0041] = 0x41,
  [0x0042] = 0x42,
  [0x0043] = 0x43,
  [0x0044] = 0x44,
  [0x0045] = 0x45,
  [0x0046] = 0x46,
  [0x0047] = 0x47,
  [0x0048] = 0x48,
  [0x0049] = 0x49,
  [0x004A] = 0x4a,
  [0x004B] = 0x4b,
  [0x004C] = 0x4c,
  [0x004D] = 0x4d,
  [0x004E] = 0x4e,
  [0x004F] = 0x4f,
  [0x0050] = 0x50,
  [0x0051] = 0x51,
  [0x0052] = 0x52,
  [0x0053] = 0x53,
  [0x0054] = 0x54,
  [0x0055] = 0x55,
  [0x0056] = 0x56,
  [0x0057] = 0x57,
  [0x0058] = 0x58,
  [0x0059] = 0x59,
  [0x005A] = 0x5a,
  [0x005B] = 0x5b,
  [0x005C] = 0x5c,
  [0x005D] = 0x5d,
  [0x005E] = 0x5e,
  [0x005F] = 0x5f,
  [0x0060] = 0x60,
  [0x0061] = 0x61,
  [0x0062] = 0x62,
  [0x0063] = 0x63,
  [0x0064] = 0x64,
  [0x0065] = 0x65,
  [0x0066] = 0x66,
  [0x0067] = 0x67,
  [0x0068] = 0x68,
  [0x0069] = 0x69,
  [0x006A] = 0x6a,
  [0x006B] = 0x6b,
  [0x006C] = 0x6c,
  [0x006D] = 0x6d,
  [0x006E] = 0x6e,
  [0x006F] = 0x6f,
  [0x0070] = 0x70,
  [0x0071] = 0x71,
  [0x0072] = 0x72,
  [0x0073] = 0x73,
  [0x0074] = 0x74,
  [0x0075] = 0x75,
  [0x0076] = 0x76,
  [0x0077] = 0x77,
  [0x0078] = 0x78,
  [0x0079] = 0x79,
  [0x007A] = 0x7a,
  [0x007B] = 0x7b,
  [0x007C] = 0x7c,
  [0x007D] = 0x7d,
  [0x007E] = 0x7e,
  [0x007F] = 0x7f,
  [0x00C0] = 0xc0,
  [0x00C1] = 0xc1,
  [0x00C2] = 0xc2,
  [0x00C3] = 0xc3,
  [0x00C8] = 0xc8,
  [0x00C9] = 0xc9,
  [0x00CA] = 0xca,
  [0x00CC] = 0xcc,
  [0x00CD] = 0xcd,
  [0x00D2] = 0xd2,
  [0x00D3] = 0xd3,
  [0x00D4] = 0xd4,
  [0x00D5] = 0xa0,
  [0x00D9] = 0xd9,
  [0x00DA] = 0xda,
  [0x00DD] = 0xdd,
  [0x00E0] = 0xe0,
  [0x00E1] = 0xe1,
  [0x00E2] = 0xe2,
  [0x00E3] = 0xe3,
  [0x00E8] = 0xe8,
  [0x00E9] = 0xe9,
  [0x00EA] = 0xea,
  [0x00EC] = 0xec,
  [0x00ED] = 0xed,
  [0x00F2] = 0xf2,
  [0x00F3] = 0xf3,
  [0x00F4] = 0xf4,
  [0x00F5] = 0xf5,
  [0x00F9] = 0xf9,
  [0x00FA] = 0xfa,
  [0x00FD] = 0xfd,
  [0x0102] = 0xc5,
  [0x0103] = 0xe5,
  [0x0110] = 0xd0,
  [0x0111] = 0xf0,
  [0x0128] = 0xce,
  [0x0129] = 0xee,
  [0x0168] = 0x9d,
  [0x0169] = 0xfb,
  [0x01A0] = 0xb4,
  [0x01A1] = 0xbd,
  [0x01AF] = 0xbf,
  [0x01B0] = 0xdf,
  [0x1EA0] = 0x80,
  [0x1EA1] = 0xd5,
  [0x1EA2] = 0xc4,
  [0x1EA3] = 0xe4,
  [0x1EA4] = 0x84,
  [0x1EA5] = 0xa4,
  [0x1EA6] = 0x85,
  [0x1EA7] = 0xa5,
  [0x1EA8] = 0x86,
  [0x1EA9] = 0xa6,
  [0x1EAA] = 0x06,
  [0x1EAB] = 0xe7,
  [0x1EAC] = 0x87,
  [0x1EAD] = 0xa7,
  [0x1EAE] = 0x81,
  [0x1EAF] = 0xa1,
  [0x1EB0] = 0x82,
  [0x1EB1] = 0xa2,
  [0x1EB2] = 0x02,
  [0x1EB3] = 0xc6,
  [0x1EB4] = 0x05,
  [0x1EB5] = 0xc7,
  [0x1EB6] = 0x83,
  [0x1EB7] = 0xa3,
  [0x1EB8] = 0x89,
  [0x1EB9] = 0xa9,
  [0x1EBA] = 0xcb,
  [0x1EBB] = 0xeb,
  [0x1EBC] = 0x88,
  [0x1EBD] = 0xa8,
  [0x1EBE] = 0x8a,
  [0x1EBF] = 0xaa,
  [0x1EC0] = 0x8b,
  [0x1EC1] = 0xab,
  [0x1EC2] = 0x8c,
  [0x1EC3] = 0xac,
  [0x1EC4] = 0x8d,
  [0x1EC5] = 0xad,
  [0x1EC6] = 0x8e,
  [0x1EC7] = 0xae,
  [0x1EC8] = 0x9b,
  [0x1EC9] = 0xef,
  [0x1ECA] = 0x98,
  [0x1ECB] = 0xb8,
  [0x1ECC] = 0x9a,
  [0x1ECD] = 0xf7,
  [0x1ECE] = 0x99,
  [0x1ECF] = 0xf6,
  [0x1ED0] = 0x8f,
  [0x1ED1] = 0xaf,
  [0x1ED2] = 0x90,
  [0x1ED3] = 0xb0,
  [0x1ED4] = 0x91,
  [0x1ED5] = 0xb1,
  [0x1ED6] = 0x92,
  [0x1ED7] = 0xb2,
  [0x1ED8] = 0x93,
  [0x1ED9] = 0xb5,
  [0x1EDA] = 0x95,
  [0x1EDB] = 0xbe,
  [0x1EDC] = 0x96,
  [0x1EDD] = 0xb6,
  [0x1EDE] = 0x97,
  [0x1EDF] = 0xb7,
  [0x1EE0] = 0xb3,
  [0x1EE1] = 0xde,
  [0x1EE2] = 0x94,
  [0x1EE3] = 0xfe,
  [0x1EE4] = 0x9e,
  [0x1EE5] = 0xf8,
  [0x1EE6] = 0x9c,
  [0x1EE7] = 0xfc,
  [0x1EE8] = 0xba,
  [0x1EE9] = 0xd1,
  [0x1EEA] = 0xbb,
  [0x1EEB] = 0xd7,
  [0x1EEC] = 0xbc,
  [0x1EED] = 0xd8,
  [0x1EEE] = 0xff,
  [0x1EEF] = 0xe6,
  [0x1EF0] = 0xb9,
  [0x1EF1] = 0xf1,
  [0x1EF2] = 0x9f,
  [0x1EF3] = 0xcf,
  [0x1EF4] = 0x1e,
  [0x1EF5] = 0xdc,
  [0x1EF6] = 0x14,
  [0x1EF7] = 0xd6,
  [0x1EF8] = 0x19,
  [0x1EF9] = 0xdb,
};
