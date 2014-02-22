static const uint32_t to_ucs4[256] = {
  [0x01] = 0x0001,
  [0x02] = 0x0002,
  [0x03] = 0x0003,
  [0x04] = 0x0004,
  [0x05] = 0x0005,
  [0x06] = 0x0006,
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
  [0x14] = 0x0014,
  [0x15] = 0x0015,
  [0x16] = 0x0016,
  [0x17] = 0x0017,
  [0x18] = 0x0018,
  [0x19] = 0x0019,
  [0x1a] = 0x001A,
  [0x1b] = 0x001B,
  [0x1c] = 0x001C,
  [0x1d] = 0x001D,
  [0x1e] = 0x001E,
  [0x1f] = 0x001F,
  [0x40] = 0x0020,
  [0x45] = 0x00E1,
  [0x4a] = 0x003C,
  [0x4b] = 0x002E,
  [0x4c] = 0x00C1,
  [0x4d] = 0x0028,
  [0x4e] = 0x002B,
  [0x4f] = 0x0021,
  [0x50] = 0x00D0,
  [0x51] = 0x00E9,
  [0x55] = 0x00ED,
  [0x59] = 0x0024,
  [0x5a] = 0x0025,
  [0x5b] = 0x00C9,
  [0x5c] = 0x002A,
  [0x5d] = 0x0029,
  [0x5e] = 0x003B,
  [0x5f] = 0x0026,
  [0x60] = 0x002D,
  [0x61] = 0x002F,
  [0x69] = 0x0023,
  [0x6a] = 0x2018,
  [0x6b] = 0x002C,
  [0x6c] = 0x00DE,
  [0x6d] = 0x005F,
  [0x6e] = 0x003E,
  [0x6f] = 0x003F,
  [0x75] = 0x00CD,
  [0x78] = 0x007C,
  [0x79] = 0x00F0,
  [0x7a] = 0x003A,
  [0x7b] = 0x00C6,
  [0x7c] = 0x00D6,
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
  [0x8d] = 0x00DD,
  [0x91] = 0x006A,
  [0x92] = 0x006B,
  [0x93] = 0x006C,
  [0x94] = 0x006D,
  [0x95] = 0x006E,
  [0x96] = 0x006F,
  [0x97] = 0x0070,
  [0x98] = 0x0071,
  [0x99] = 0x0072,
  [0xa0] = 0x00B0,
  [0xa1] = 0x00F6,
  [0xa2] = 0x0073,
  [0xa3] = 0x0074,
  [0xa4] = 0x0075,
  [0xa5] = 0x0076,
  [0xa6] = 0x0077,
  [0xa7] = 0x0078,
  [0xa8] = 0x0079,
  [0xa9] = 0x007A,
  [0xac] = 0x005B,
  [0xad] = 0x00FD,
  [0xbc] = 0x005D,
  [0xbd] = 0x00A8,
  [0xc0] = 0x00FE,
  [0xc1] = 0x0041,
  [0xc2] = 0x0042,
  [0xc3] = 0x0043,
  [0xc4] = 0x0044,
  [0xc5] = 0x0045,
  [0xc6] = 0x0046,
  [0xc7] = 0x0047,
  [0xc8] = 0x0048,
  [0xc9] = 0x0049,
  [0xce] = 0x00F3,
  [0xd0] = 0x00E6,
  [0xd1] = 0x004A,
  [0xd2] = 0x004B,
  [0xd3] = 0x004C,
  [0xd4] = 0x004D,
  [0xd5] = 0x004E,
  [0xd6] = 0x004F,
  [0xd7] = 0x0050,
  [0xd8] = 0x0051,
  [0xd9] = 0x0052,
  [0xde] = 0x00FA,
  [0xe0] = 0x00B4,
  [0xe2] = 0x0053,
  [0xe3] = 0x0054,
  [0xe4] = 0x0055,
  [0xe5] = 0x0056,
  [0xe6] = 0x0057,
  [0xe7] = 0x0058,
  [0xe8] = 0x0059,
  [0xe9] = 0x005A,
  [0xee] = 0x00D3,
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
  [0xfe] = 0x00DA,
  [0xff] = 0x007F,
};
static const char from_ucs4[] = {
  [0x0001] = 0x01,
  [0x0002] = 0x02,
  [0x0003] = 0x03,
  [0x0004] = 0x04,
  [0x0005] = 0x05,
  [0x0006] = 0x06,
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
  [0x0014] = 0x14,
  [0x0015] = 0x15,
  [0x0016] = 0x16,
  [0x0017] = 0x17,
  [0x0018] = 0x18,
  [0x0019] = 0x19,
  [0x001A] = 0x1a,
  [0x001B] = 0x1b,
  [0x001C] = 0x1c,
  [0x001D] = 0x1d,
  [0x001E] = 0x1e,
  [0x001F] = 0x1f,
  [0x0020] = 0x40,
  [0x0021] = 0x4f,
  [0x0022] = 0x7f,
  [0x0023] = 0x69,
  [0x0024] = 0x59,
  [0x0025] = 0x5a,
  [0x0026] = 0x5f,
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
  [0x003C] = 0x4a,
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
  [0x005B] = 0xac,
  [0x005D] = 0xbc,
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
  [0x007C] = 0x78,
  [0x007F] = 0xff,
  [0x00A8] = 0xbd,
  [0x00B0] = 0xa0,
  [0x00B4] = 0xe0,
  [0x00C1] = 0x4c,
  [0x00C6] = 0x7b,
  [0x00C9] = 0x5b,
  [0x00CD] = 0x75,
  [0x00D0] = 0x50,
  [0x00D3] = 0xee,
  [0x00D6] = 0x7c,
  [0x00DA] = 0xfe,
  [0x00DD] = 0x8d,
  [0x00DE] = 0x6c,
  [0x00E1] = 0x45,
  [0x00E6] = 0xd0,
  [0x00E9] = 0x51,
  [0x00ED] = 0x55,
  [0x00F0] = 0x79,
  [0x00F3] = 0xce,
  [0x00F6] = 0xa1,
  [0x00FA] = 0xde,
  [0x00FD] = 0xad,
  [0x00FE] = 0xc0,
  [0x2018] = 0x6a,
};
