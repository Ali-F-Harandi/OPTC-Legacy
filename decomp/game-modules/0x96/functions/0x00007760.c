
void FUN_00007760(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  uint *puVar16;
  int iVar17;
  
  iVar14 = FUN_000070e4();
  iVar13 = iVar14 * 4;
  if (0 < iVar13) {
    iVar17 = 0;
    puVar15 = param_1 + iVar13;
    puVar16 = param_1;
    do {
      iVar17 = iVar17 + 4;
      uVar1 = *puVar16;
      *puVar16 = *puVar15;
      *puVar15 = uVar1;
      uVar1 = puVar16[1];
      puVar16[1] = puVar15[1];
      puVar15[1] = uVar1;
      uVar1 = puVar16[2];
      puVar16[2] = puVar15[2];
      puVar15[2] = uVar1;
      uVar1 = puVar16[3];
      puVar16[3] = puVar15[3];
      puVar15[3] = uVar1;
      puVar15 = puVar15 + -4;
      puVar16 = puVar16 + 4;
    } while (iVar17 < iVar13 - iVar17);
  }
  if (1 < iVar14) {
    puVar15 = param_1;
    do {
      puVar16 = puVar15 + 4;
      uVar4 = *puVar16;
      uVar1 = puVar15[5];
      uVar2 = puVar15[6];
      uVar3 = puVar15[7];
      uVar5 = *(uint *)(&DAT_00012dd0 +
                       (ulong)(*(uint *)(&DAT_000125d0 + (ulong)(uVar1 >> 0x18) * 4) & 0xff) * 4);
      uVar6 = *(uint *)(&DAT_000129d0 +
                       (ulong)(*(uint *)(&DAT_000125d0 + (ulong)(uVar1 & 0xff) * 4) & 0xff) * 4);
      uVar7 = *(uint *)(&DAT_000129d0 +
                       (ulong)(*(uint *)(&DAT_000125d0 + (ulong)(uVar2 & 0xff) * 4) & 0xff) * 4);
      uVar8 = *(uint *)(&DAT_00012dd0 +
                       (ulong)(*(uint *)(&DAT_000125d0 + (ulong)(uVar2 >> 0x18) * 4) & 0xff) * 4);
      uVar9 = *(uint *)(&DAT_000125d0 + (ulong)(uVar3 & 0xff) * 4);
      uVar10 = *(uint *)(&DAT_000131d0 +
                        (ulong)(*(uint *)(&DAT_000125d0 + ((ulong)(uVar1 >> 0x10) & 0xff) * 4) &
                               0xff) * 4);
      uVar11 = *(uint *)(&DAT_000131d0 +
                        (ulong)(*(uint *)(&DAT_000125d0 + ((ulong)(uVar2 >> 0x10) & 0xff) * 4) &
                               0xff) * 4);
      uVar2 = *(uint *)(&DAT_000135d0 +
                       (ulong)(*(uint *)(&DAT_000125d0 + ((ulong)(uVar2 >> 8) & 0xff) * 4) & 0xff) *
                       4);
      uVar1 = *(uint *)(&DAT_000135d0 +
                       (ulong)(*(uint *)(&DAT_000125d0 + ((ulong)(uVar1 >> 8) & 0xff) * 4) & 0xff) *
                       4);
      uVar12 = *(uint *)(&DAT_000125d0 + (ulong)(uVar3 >> 0x18) * 4);
      *puVar16 = *(uint *)(&DAT_000129d0 +
                          (ulong)(*(uint *)(&DAT_000125d0 + (ulong)(uVar4 & 0xff) * 4) & 0xff) * 4)
                 ^ *(uint *)(&DAT_00012dd0 +
                            (ulong)(*(uint *)(&DAT_000125d0 + (ulong)(uVar4 >> 0x18) * 4) & 0xff) *
                            4) ^
                 *(uint *)(&DAT_000131d0 +
                          (ulong)(*(uint *)(&DAT_000125d0 + ((ulong)(uVar4 >> 0x10) & 0xff) * 4) &
                                 0xff) * 4) ^
                 *(uint *)(&DAT_000135d0 +
                          (ulong)(*(uint *)(&DAT_000125d0 + ((ulong)(uVar4 >> 8) & 0xff) * 4) & 0xff
                                 ) * 4);
      puVar15[5] = uVar6 ^ uVar5 ^ uVar10 ^ uVar1;
      puVar15[6] = uVar7 ^ uVar8 ^ uVar11 ^ uVar2;
      puVar15[7] = *(uint *)(&DAT_000129d0 + (ulong)(uVar9 & 0xff) * 4) ^
                   *(uint *)(&DAT_00012dd0 + (ulong)(uVar12 & 0xff) * 4) ^
                   *(uint *)(&DAT_000131d0 +
                            (ulong)(*(uint *)(&DAT_000125d0 + ((ulong)(uVar3 >> 0x10) & 0xff) * 4) &
                                   0xff) * 4) ^
                   *(uint *)(&DAT_000135d0 +
                            (ulong)(*(uint *)(&DAT_000125d0 + ((ulong)(uVar3 >> 8) & 0xff) * 4) &
                                   0xff) * 4);
      puVar15 = puVar16;
    } while (puVar16 != param_1 + ((ulong)(iVar14 - 2) + 1) * 4);
  }
  return;
}
