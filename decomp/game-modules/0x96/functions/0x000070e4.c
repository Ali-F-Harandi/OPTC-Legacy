
undefined8 FUN_000070e4(uint *param_1,byte *param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  uint *puVar11;
  uint *puVar12;
  
  uVar3 = ((uint)param_2[1] << 0x10 | (uint)*param_2 << 0x18) ^ (uint)param_2[3] |
          (uint)param_2[2] << 8;
  *param_1 = uVar3;
  uVar4 = ((uint)param_2[5] << 0x10 | (uint)param_2[4] << 0x18) ^ (uint)param_2[7] |
          (uint)param_2[6] << 8;
  param_1[1] = uVar4;
  uVar5 = ((uint)param_2[9] << 0x10 | (uint)param_2[8] << 0x18) ^ (uint)param_2[0xb] |
          (uint)param_2[10] << 8;
  param_1[2] = uVar5;
  uVar6 = ((uint)param_2[0xd] << 0x10 | (uint)param_2[0xc] << 0x18) ^ (uint)param_2[0xf] |
          (uint)param_2[0xe] << 8;
  param_1[3] = uVar6;
  if (param_3 == 0x80) {
    puVar11 = param_1;
    puVar12 = &DAT_000125a0;
    do {
      uVar5 = puVar11[3];
      bVar10 = puVar11 != param_1 + 0x24;
      uVar4 = *puVar12 ^ *puVar11 ^ *(uint *)(&DAT_000125d0 + (ulong)(uVar5 & 0xff) * 4) & 0xff00 ^
              *(uint *)(&DAT_000125d0 + (ulong)(uVar5 >> 0x18) * 4) & 0xff ^
              *(uint *)(&DAT_000125d0 + ((ulong)(uVar5 >> 0x10) & 0xff) * 4) & 0xff000000 ^
              *(uint *)(&DAT_000125d0 + ((ulong)(uVar5 >> 8) & 0xff) * 4) & 0xff0000;
      puVar11[4] = uVar4;
      uVar4 = uVar4 ^ puVar11[1];
      puVar11[5] = uVar4;
      uVar4 = uVar4 ^ puVar11[2];
      puVar11[6] = uVar4;
      puVar11[7] = uVar4 ^ uVar5;
      puVar11 = puVar11 + 4;
      puVar12 = puVar12 + 1;
    } while (bVar10);
    return 10;
  }
  uVar7 = ((uint)param_2[0x11] << 0x10 | (uint)param_2[0x10] << 0x18) ^ (uint)param_2[0x13] |
          (uint)param_2[0x12] << 8;
  param_1[4] = uVar7;
  bVar2 = param_2[0x14];
  uVar8 = (uint)param_2[0x15] << 0x10 | (uint)bVar2 << 0x18;
  uVar1 = uVar8 ^ param_2[0x17];
  uVar9 = uVar1 | (uint)param_2[0x16] << 8;
  param_1[5] = uVar9;
  if (param_3 != 0xc0) {
    param_1[6] = ((uint)param_2[0x19] << 0x10 | (uint)param_2[0x18] << 0x18) ^ (uint)param_2[0x1b] |
                 (uint)param_2[0x1a] << 8;
    param_1[7] = ((uint)param_2[0x1d] << 0x10 | (uint)param_2[0x1c] << 0x18) ^ (uint)param_2[0x1f] |
                 (uint)param_2[0x1e] << 8;
    if (param_3 != 0x100) {
      return 0;
    }
    puVar11 = param_1;
    puVar12 = &DAT_000125a0;
    while( true ) {
      uVar3 = puVar11[7];
      uVar4 = *puVar12 ^ *puVar11 ^ *(uint *)(&DAT_000125d0 + (ulong)(uVar3 & 0xff) * 4) & 0xff00 ^
              *(uint *)(&DAT_000125d0 + (ulong)(uVar3 >> 0x18) * 4) & 0xff ^
              *(uint *)(&DAT_000125d0 + ((ulong)(uVar3 >> 0x10) & 0xff) * 4) & 0xff000000 ^
              *(uint *)(&DAT_000125d0 + ((ulong)(uVar3 >> 8) & 0xff) * 4) & 0xff0000;
      uVar5 = uVar4 ^ puVar11[1];
      puVar11[8] = uVar4;
      uVar4 = uVar5 ^ puVar11[2];
      uVar6 = uVar4 ^ puVar11[3];
      puVar11[9] = uVar5;
      puVar11[10] = uVar4;
      puVar11[0xb] = uVar6;
      if (puVar11 == param_1 + 0x30) break;
      uVar4 = *(uint *)(&DAT_000125d0 + (ulong)(uVar6 >> 0x18) * 4) & 0xff000000 ^
              *(uint *)(&DAT_000125d0 + (ulong)(uVar6 & 0xff) * 4) & 0xff ^ puVar11[4] ^
              *(uint *)(&DAT_000125d0 + ((ulong)(uVar6 >> 0x10) & 0xff) * 4) & 0xff0000 ^
              *(uint *)(&DAT_000125d0 + ((ulong)(uVar6 >> 8) & 0xff) * 4) & 0xff00;
      puVar11[0xc] = uVar4;
      uVar4 = uVar4 ^ puVar11[5];
      puVar11[0xd] = uVar4;
      uVar4 = uVar4 ^ puVar11[6];
      puVar11[0xe] = uVar4;
      puVar11[0xf] = uVar4 ^ uVar3;
      puVar11 = puVar11 + 8;
      puVar12 = puVar12 + 1;
    }
    return 0xe;
  }
  uVar3 = uVar3 ^ 0x1000000 ^ *(uint *)(&DAT_000125d0 + (ulong)(uVar1 & 0xff) * 4) & 0xff00 ^
          *(uint *)(&DAT_000125d0 + (ulong)(uint)bVar2 * 4) & 0xff ^
          *(uint *)(&DAT_000125d0 + ((ulong)(uVar8 >> 0x10) & 0xff) * 4) & 0xff000000 ^
          *(uint *)(&DAT_000125d0 + ((ulong)(uVar9 >> 8) & 0xff) * 4) & 0xff0000;
  param_1[6] = uVar3;
  uVar4 = uVar3 ^ uVar4;
  uVar5 = uVar4 ^ uVar5;
  param_1[7] = uVar4;
  uVar6 = uVar5 ^ uVar6;
  param_1[8] = uVar5;
  uVar7 = uVar6 ^ uVar7;
  param_1[10] = uVar7;
  uVar9 = uVar7 ^ uVar9;
  param_1[0xb] = uVar9;
  param_1[9] = uVar6;
  uVar3 = uVar3 ^ 0x2000000 ^ *(uint *)(&DAT_000125d0 + (ulong)(uVar9 & 0xff) * 4) & 0xff00 ^
          *(uint *)(&DAT_000125d0 + (ulong)(uVar9 >> 0x18) * 4) & 0xff ^
          *(uint *)(&DAT_000125d0 + ((ulong)(uVar9 >> 0x10) & 0xff) * 4) & 0xff000000 ^
          *(uint *)(&DAT_000125d0 + ((ulong)(uVar9 >> 8) & 0xff) * 4) & 0xff0000;
  param_1[0xc] = uVar3;
  uVar4 = uVar3 ^ uVar4;
  uVar5 = uVar4 ^ uVar5;
  param_1[0xd] = uVar4;
  uVar6 = uVar5 ^ uVar6;
  param_1[0xe] = uVar5;
  uVar7 = uVar6 ^ uVar7;
  param_1[0xf] = uVar6;
  uVar9 = uVar7 ^ uVar9;
  param_1[0x10] = uVar7;
  param_1[0x11] = uVar9;
  uVar3 = uVar3 ^ 0x4000000 ^ *(uint *)(&DAT_000125d0 + (ulong)(uVar9 & 0xff) * 4) & 0xff00 ^
          *(uint *)(&DAT_000125d0 + (ulong)(uVar9 >> 0x18) * 4) & 0xff ^
          *(uint *)(&DAT_000125d0 + ((ulong)(uVar9 >> 0x10) & 0xff) * 4) & 0xff000000 ^
          *(uint *)(&DAT_000125d0 + ((ulong)(uVar9 >> 8) & 0xff) * 4) & 0xff0000;
  param_1[0x12] = uVar3;
  uVar4 = uVar3 ^ uVar4;
  uVar5 = uVar4 ^ uVar5;
  param_1[0x13] = uVar4;
  uVar6 = uVar5 ^ uVar6;
  param_1[0x14] = uVar5;
  uVar7 = uVar6 ^ uVar7;
  param_1[0x15] = uVar6;
  uVar9 = uVar7 ^ uVar9;
  param_1[0x16] = uVar7;
  param_1[0x17] = uVar9;
  uVar3 = uVar3 ^ 0x8000000 ^ *(uint *)(&DAT_000125d0 + (ulong)(uVar9 & 0xff) * 4) & 0xff00 ^
          *(uint *)(&DAT_000125d0 + (ulong)(uVar9 >> 0x18) * 4) & 0xff ^
          *(uint *)(&DAT_000125d0 + ((ulong)(uVar9 >> 0x10) & 0xff) * 4) & 0xff000000 ^
          *(uint *)(&DAT_000125d0 + ((ulong)(uVar9 >> 8) & 0xff) * 4) & 0xff0000;
  param_1[0x18] = uVar3;
  uVar4 = uVar3 ^ uVar4;
  uVar5 = uVar4 ^ uVar5;
  param_1[0x19] = uVar4;
  uVar6 = uVar5 ^ uVar6;
  param_1[0x1a] = uVar5;
  uVar7 = uVar6 ^ uVar7;
  param_1[0x1b] = uVar6;
  uVar9 = uVar7 ^ uVar9;
  param_1[0x1c] = uVar7;
  param_1[0x1d] = uVar9;
  uVar3 = uVar3 ^ 0x10000000 ^ *(uint *)(&DAT_000125d0 + (ulong)(uVar9 & 0xff) * 4) & 0xff00 ^
          *(uint *)(&DAT_000125d0 + (ulong)(uVar9 >> 0x18) * 4) & 0xff ^
          *(uint *)(&DAT_000125d0 + ((ulong)(uVar9 >> 0x10) & 0xff) * 4) & 0xff000000 ^
          *(uint *)(&DAT_000125d0 + ((ulong)(uVar9 >> 8) & 0xff) * 4) & 0xff0000;
  param_1[0x1e] = uVar3;
  uVar4 = uVar3 ^ uVar4;
  uVar5 = uVar4 ^ uVar5;
  param_1[0x1f] = uVar4;
  uVar6 = uVar5 ^ uVar6;
  param_1[0x20] = uVar5;
  uVar7 = uVar6 ^ uVar7;
  param_1[0x21] = uVar6;
  uVar9 = uVar7 ^ uVar9;
  param_1[0x22] = uVar7;
  param_1[0x23] = uVar9;
  uVar3 = uVar3 ^ 0x20000000 ^ *(uint *)(&DAT_000125d0 + (ulong)(uVar9 & 0xff) * 4) & 0xff00 ^
          *(uint *)(&DAT_000125d0 + (ulong)(uVar9 >> 0x18) * 4) & 0xff ^
          *(uint *)(&DAT_000125d0 + ((ulong)(uVar9 >> 0x10) & 0xff) * 4) & 0xff000000 ^
          *(uint *)(&DAT_000125d0 + ((ulong)(uVar9 >> 8) & 0xff) * 4) & 0xff0000;
  param_1[0x24] = uVar3;
  uVar4 = uVar3 ^ uVar4;
  uVar5 = uVar4 ^ uVar5;
  param_1[0x25] = uVar4;
  uVar6 = uVar5 ^ uVar6;
  param_1[0x26] = uVar5;
  uVar7 = uVar6 ^ uVar7;
  param_1[0x27] = uVar6;
  uVar9 = uVar7 ^ uVar9;
  param_1[0x28] = uVar7;
  param_1[0x29] = uVar9;
  uVar3 = uVar3 ^ 0x40000000 ^ *(uint *)(&DAT_000125d0 + (ulong)(uVar9 & 0xff) * 4) & 0xff00 ^
          *(uint *)(&DAT_000125d0 + (ulong)(uVar9 >> 0x18) * 4) & 0xff ^
          *(uint *)(&DAT_000125d0 + ((ulong)(uVar9 >> 0x10) & 0xff) * 4) & 0xff000000 ^
          *(uint *)(&DAT_000125d0 + ((ulong)(uVar9 >> 8) & 0xff) * 4) & 0xff0000;
  param_1[0x2a] = uVar3;
  uVar4 = uVar3 ^ uVar4;
  param_1[0x2b] = uVar4;
  uVar5 = uVar4 ^ uVar5;
  param_1[0x2c] = uVar5;
  uVar6 = uVar5 ^ uVar6;
  param_1[0x2e] = uVar6 ^ uVar7;
  uVar9 = uVar6 ^ uVar7 ^ uVar9;
  param_1[0x2f] = uVar9;
  param_1[0x2d] = uVar6;
  uVar3 = uVar3 ^ 0x80000000 ^ *(uint *)(&DAT_000125d0 + (ulong)(uVar9 & 0xff) * 4) & 0xff00 ^
          *(uint *)(&DAT_000125d0 + (ulong)(uVar9 >> 0x18) * 4) & 0xff ^
          *(uint *)(&DAT_000125d0 + ((ulong)(uVar9 >> 0x10) & 0xff) * 4) & 0xff000000 ^
          *(uint *)(&DAT_000125d0 + ((ulong)(uVar9 >> 8) & 0xff) * 4) & 0xff0000;
  param_1[0x30] = uVar3;
  uVar3 = uVar3 ^ uVar4;
  param_1[0x31] = uVar3;
  uVar3 = uVar3 ^ uVar5;
  param_1[0x32] = uVar3;
  param_1[0x33] = uVar3 ^ uVar6;
  return 0xc;
}
