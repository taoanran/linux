static const uint32_t to_ucs4[256] = {
  [0x01] = 0x0001,
  [0x02] = 0x0002,
  [0x03] = 0x0003,
  [0x04] = 0x009C,
  [0x05] = 0x0009,
  [0x06] = 0x0086,
  [0x07] = 0x007F,
  [0x08] = 0x0097,
  [0x09] = 0x008D,
  [0x0a] = 0x008E,
  [0x0b] = 0x000B,
  [0x0c] = 0x000C,
  [0x0d] = 0x000D,
  [0x0e] = 0x000E,
  [0x0f] = 0x000F,
  [0x10] = 0x0010,
  [0x11] = 0x0011,
  [0x12] = 0x0012,
  [0x13] = 0x0013,
  [0x14] = 0x009D,
  [0x15] = 0x0085,
  [0x16] = 0x0008,
  [0x17] = 0x0087,
  [0x18] = 0x0018,
  [0x19] = 0x0019,
  [0x1a] = 0x0092,
  [0x1b] = 0x008F,
  [0x1c] = 0x001C,
  [0x1d] = 0x001D,
  [0x1e] = 0x001E,
  [0x1f] = 0x001F,
  [0x20] = 0x0080,
  [0x21] = 0x0081,
  [0x22] = 0x0082,
  [0x23] = 0x0083,
  [0x24] = 0x0084,
  [0x25] = 0x000A,
  [0x26] = 0x0017,
  [0x27] = 0x001B,
  [0x28] = 0x0088,
  [0x29] = 0x0089,
  [0x2a] = 0x008A,
  [0x2b] = 0x008B,
  [0x2c] = 0x008C,
  [0x2d] = 0x0005,
  [0x2e] = 0x0006,
  [0x2f] = 0x0007,
  [0x30] = 0x0090,
  [0x31] = 0x0091,
  [0x32] = 0x0016,
  [0x33] = 0x0093,
  [0x34] = 0x0094,
  [0x35] = 0x0095,
  [0x36] = 0x0096,
  [0x37] = 0x0004,
  [0x38] = 0x0098,
  [0x39] = 0x0099,
  [0x3a] = 0x009A,
  [0x3b] = 0x009B,
  [0x3c] = 0x0014,
  [0x3d] = 0x0015,
  [0x3e] = 0x009E,
  [0x3f] = 0x001A,
  [0x40] = 0x0020,
  [0x4a] = 0x00B0,
  [0x4b] = 0x002E,
  [0x4c] = 0x003C,
  [0x4d] = 0x0028,
  [0x4e] = 0x002B,
  [0x4f] = 0x0021,
  [0x50] = 0x0026,
  [0x5a] = 0x00E9,
  [0x5b] = 0x0024,
  [0x5c] = 0x002A,
  [0x5d] = 0x0029,
  [0x5e] = 0x003B,
  [0x5f] = 0x005E,
  [0x60] = 0x002D,
  [0x61] = 0x002F,
  [0x6a] = 0x00F2,
  [0x6b] = 0x002C,
  [0x6c] = 0x0025,
  [0x6d] = 0x005F,
  [0x6e] = 0x003E,
  [0x6f] = 0x003F,
  [0x79] = 0x00F9,
  [0x7a] = 0x003A,
  [0x7b] = 0x00A3,
  [0x7c] = 0x00A7,
  [0x7d] = 0x0027,
  [0x7e] = 0x003D,
  [0x7f] = 0x0022,
  [0x81] = 0x0061,
  [0x82] = 0x0062,
  [0x83] = 0x0063,
  [0x84] = 0x0064,
  [0x85] = 0x0065,
  [0x86] = 0x0066,
  [0x87] = 0x0067,
  [0x88] = 0x0068,
  [0x89] = 0x0069,
  [0x91] = 0x006A,
  [0x92] = 0x006B,
  [0x93] = 0x006C,
  [0x94] = 0x006D,
  [0x95] = 0x006E,
  [0x96] = 0x006F,
  [0x97] = 0x0070,
  [0x98] = 0x0071,
  [0x99] = 0x0072,
  [0xa1] = 0x00EC,
  [0xa2] = 0x0073,
  [0xa3] = 0x0074,
  [0xa4] = 0x0075,
  [0xa5] = 0x0076,
  [0xa6] = 0x0077,
  [0xa7] = 0x0078,
  [0xa8] = 0x0079,
  [0xa9] = 0x007A,
  [0xc0] = 0x00E0,
  [0xc1] = 0x0041,
  [0xc2] = 0x0042,
  [0xc3] = 0x0043,
  [0xc4] = 0x0044,
  [0xc5] = 0x0045,
  [0xc6] = 0x0046,
  [0xc7] = 0x0047,
  [0xc8] = 0x0048,
  [0xc9] = 0x0049,
  [0xd0] = 0x00E8,
  [0xd1] = 0x004A,
  [0xd2] = 0x004B,
  [0xd3] = 0x004C,
  [0xd4] = 0x004D,
  [0xd5] = 0x004E,
  [0xd6] = 0x004F,
  [0xd7] = 0x0050,
  [0xd8] = 0x0051,
  [0xd9] = 0x0052,
  [0xe0] = 0x00E7,
  [0xe2] = 0x0053,
  [0xe3] = 0x0054,
  [0xe4] = 0x0055,
  [0xe5] = 0x0056,
  [0xe6] = 0x0057,
  [0xe7] = 0x0058,
  [0xe8] = 0x0059,
  [0xe9] = 0x005A,
  [0xf0] = 0x0030,
  [0xf1] = 0x0031,
  [0xf2] = 0x0032,
  [0xf3] = 0x0033,
  [0xf4] = 0x0034,
  [0xf5] = 0x0035,
  [0xf6] = 0x0036,
  [0xf7] = 0x0037,
  [0xf8] = 0x0038,
  [0xf9] = 0x0039,
  [0xff] = 0x009F,
};
static const char from_ucs4[] = {
  [0x0001] = 0x01,
  [0x0002] = 0x02,
  [0x0003] = 0x03,
  [0x0004] = 0x37,
  [0x0005] = 0x2d,
  [0x0006] = 0x2e,
  [0x0007] = 0x2f,
  [0x0008] = 0x16,
  [0x0009] = 0x05,
  [0x000A] = 0x25,
  [0x000B] = 0x0b,
  [0x000C] = 0x0c,
  [0x000D] = 0x0d,
  [0x000E] = 0x0e,
  [0x000F] = 0x0f,
  [0x0010] = 0x10,
  [0x0011] = 0x11,
  [0x0012] = 0x12,
  [0x0013] = 0x13,
  [0x0014] = 0x3c,
  [0x0015] = 0x3d,
  [0x0016] = 0x32,
  [0x0017] = 0x26,
  [0x0018] = 0x18,
  [0x0019] = 0x19,
  [0x001A] = 0x3f,
  [0x001B] = 0x27,
  [0x001C] = 0x1c,
  [0x001D] = 0x1d,
  [0x001E] = 0x1e,
  [0x001F] = 0x1f,
  [0x0020] = 0x40,
  [0x0021] = 0x4f,
  [0x0022] = 0x7f,
  [0x0024] = 0x5b,
  [0x0025] = 0x6c,
  [0x0026] = 0x50,
  [0x0027] = 0x7d,
  [0x0028] = 0x4d,
  [0x0029] = 0x5d,
  [0x002A] = 0x5c,
  [0x002B] = 0x4e,
  [0x002C] = 0x6b,
  [0x002D] = 0x60,
  [0x002E] = 0x4b,
  [0x002F] = 0x61,
  [0x0030] = 0xf0,
  [0x0031] = 0xf1,
  [0x0032] = 0xf2,
  [0x0033] = 0xf3,
  [0x0034] = 0xf4,
  [0x0035] = 0xf5,
  [0x0036] = 0xf6,
  [0x0037] = 0xf7,
  [0x0038] = 0xf8,
  [0x0039] = 0xf9,
  [0x003A] = 0x7a,
  [0x003B] = 0x5e,
  [0x003C] = 0x4c,
  [0x003D] = 0x7e,
  [0x003E] = 0x6e,
  [0x003F] = 0x6f,
  [0x0041] = 0xc1,
  [0x0042] = 0xc2,
  [0x0043] = 0xc3,
  [0x0044] = 0xc4,
  [0x0045] = 0xc5,
  [0x0046] = 0xc6,
  [0x0047] = 0xc7,
  [0x0048] = 0xc8,
  [0x0049] = 0xc9,
  [0x004A] = 0xd1,
  [0x004B] = 0xd2,
  [0x004C] = 0xd3,
  [0x004D] = 0xd4,
  [0x004E] = 0xd5,
  [0x004F] = 0xd6,
  [0x0050] = 0xd7,
  [0x0051] = 0xd8,
  [0x0052] = 0xd9,
  [0x0053] = 0xe2,
  [0x0054] = 0xe3,
  [0x0055] = 0xe4,
  [0x0056] = 0xe5,
  [0x0057] = 0xe6,
  [0x0058] = 0xe7,
  [0x0059] = 0xe8,
  [0x005A] = 0xe9,
  [0x005E] = 0x5f,
  [0x005F] = 0x6d,
  [0x0061] = 0x81,
  [0x0062] = 0x82,
  [0x0063] = 0x83,
  [0x0064] = 0x84,
  [0x0065] = 0x85,
  [0x0066] = 0x86,
  [0x0067] = 0x87,
  [0x0068] = 0x88,
  [0x0069] = 0x89,
  [0x006A] = 0x91,
  [0x006B] = 0x92,
  [0x006C] = 0x93,
  [0x006D] = 0x94,
  [0x006E] = 0x95,
  [0x006F] = 0x96,
  [0x0070] = 0x97,
  [0x0071] = 0x98,
  [0x0072] = 0x99,
  [0x0073] = 0xa2,
  [0x0074] = 0xa3,
  [0x0075] = 0xa4,
  [0x0076] = 0xa5,
  [0x0077] = 0xa6,
  [0x0078] = 0xa7,
  [0x0079] = 0xa8,
  [0x007A] = 0xa9,
  [0x007F] = 0x07,
  [0x0080] = 0x20,
  [0x0081] = 0x21,
  [0x0082] = 0x22,
  [0x0083] = 0x23,
  [0x0084] = 0x24,
  [0x0085] = 0x15,
  [0x0086] = 0x06,
  [0x0087] = 0x17,
  [0x0088] = 0x28,
  [0x0089] = 0x29,
  [0x008A] = 0x2a,
  [0x008B] = 0x2b,
  [0x008C] = 0x2c,
  [0x008D] = 0x09,
  [0x008E] = 0x0a,
  [0x008F] = 0x1b,
  [0x0090] = 0x30,
  [0x0091] = 0x31,
  [0x0092] = 0x1a,
  [0x0093] = 0x33,
  [0x0094] = 0x34,
  [0x0095] = 0x35,
  [0x0096] = 0x36,
  [0x0097] = 0x08,
  [0x0098] = 0x38,
  [0x0099] = 0x39,
  [0x009A] = 0x3a,
  [0x009B] = 0x3b,
  [0x009C] = 0x04,
  [0x009D] = 0x14,
  [0x009E] = 0x3e,
  [0x009F] = 0xff,
  [0x00A3] = 0x7b,
  [0x00A7] = 0x7c,
  [0x00B0] = 0x4a,
  [0x00E0] = 0xc0,
  [0x00E7] = 0xe0,
  [0x00E8] = 0xd0,
  [0x00E9] = 0x5a,
  [0x00EC] = 0xa1,
  [0x00F2] = 0x6a,
  [0x00F9] = 0x79,
};
