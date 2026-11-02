
void FUN_000072b0(undefined1 param_1,long param_2,undefined8 param_3,long *param_4,ulong *param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  uint uVar18;
  ulong uVar19;
  long local_5b20;
  char *local_5b18;
  uint local_5b10;
  uint local_5b08 [512];
  undefined8 local_5308 [256];
  undefined8 local_4b08 [1536];
  char local_1b08 [6912];
  long local_8;
  
  local_5b18 = (char *)((ulong)local_5b18 & 0xffffffff00000000);
  local_8 = *(long *)PTR_DAT_0001fe30;
  uVar18 = (uint)(DAT_00020318 * DAT_00020318) >> 0x11 ^ DAT_00020318 * DAT_00020318 * 0x800;
  DAT_00020050 = param_1;
  FUN_0000ab28(&local_5b18,param_2,4);
  iVar6 = FUN_000086e0((ulong)local_5b18 & 0xffffffff);
  uVar11 = 1;
  uVar14 = (-0x5de204c6 << (ulong)(uVar18 & 7)) + uVar18 * -0x784cc84 + iVar6;
  if (uVar14 == 0) goto LAB_00007370;
  local_5b18 = (char *)((ulong)local_5b18 & 0xffffffff00000000);
  lVar15 = 0;
  FUN_0000ab28(&local_5b18,param_2 + 4,4);
  uVar7 = FUN_000086e0((ulong)local_5b18 & 0xffffffff);
  local_5b18 = (char *)((ulong)local_5b18 & 0xffffffff00000000);
  uVar7 = uVar7 ^ uVar18 + 0xbd19c63c + (0x416e2af2 >> (uVar18 & 0xd));
  uVar3 = uVar7 & 0xff;
  FUN_0000ab28(&local_5b18,param_2 + 8,4);
  iVar6 = FUN_000086e0((ulong)local_5b18 & 0xffffffff);
  uVar2 = ((0x643a3a3b << (ulong)(uVar18 & 0xb)) - (uVar18 ^ 0x3b2bf538)) + iVar6;
  FUN_0000aa04(local_1b08,0,&DAT_00001b00);
  FUN_0000ab28(local_1b08,param_2 + 0xc,(ulong)uVar2);
  if (uVar2 >> 2 == 0) {
    if (uVar2 != 0) goto LAB_000074d4;
  }
  else {
    do {
      uVar8 = FUN_000086e0(*(undefined4 *)(local_1b08 + lVar15 * 4));
      *(undefined4 *)(local_1b08 + lVar15 * 4) = uVar8;
      lVar15 = lVar15 + 1;
    } while ((uint)lVar15 < uVar2 >> 2);
LAB_000074d4:
    lVar15 = 0;
    iVar6 = (uVar18 + 0xf1cb5b81) * uVar18;
    do {
      uVar13 = (uint)lVar15;
      iVar9 = FUN_000086e0(iVar6 << (ulong)(uVar13 & 0x1b));
      local_1b08[lVar15] =
           (char)(iVar9 - (iVar6 + uVar18 * -0x23b32203 >> (ulong)(uVar13 & 0x17)) >>
                 (ulong)(uVar13 & 0x1f)) + local_1b08[lVar15];
      lVar15 = lVar15 + 1;
    } while (lVar15 != (ulong)(uVar2 - 1) + 1);
  }
  lVar15 = FUN_0000b630((ulong)uVar2 + 0xc,4,1);
  FUN_0000aa04(&local_5b18,0,0xc);
  local_5b18 = local_1b08;
  local_5b10 = uVar2;
  FUN_0000aa04(local_5b08,0,0x800);
  FUN_0000ab28(local_5b08,param_2 + lVar15,(ulong)uVar3 << 3);
  if (uVar3 != 0) {
    uVar16 = 0;
    iVar6 = (uVar18 + 0xb31f451c) * uVar18;
    do {
      iVar9 = FUN_000086e0(*(uint *)(uVar16 + (long)local_5b08) ^ iVar6 * 8);
      *(uint *)(uVar16 + (long)local_5b08) =
           (iVar6 + uVar18 * 0x7dd017d3 >> (ulong)(((uint)uVar16 & 7) + 5)) + iVar9;
      uVar16 = uVar16 + 4;
    } while (uVar16 < (ulong)uVar3 << 3);
  }
  if ((param_4 == (long *)0x0) || (lVar15 = *param_4, lVar15 == 0)) {
    bVar4 = 1;
    lVar15 = FUN_0000a0cc(uVar14);
    if (lVar15 == 0) {
      uVar8 = FUN_00007ab0();
      cVar5 = FUN_0000baa8(0,0,uVar8,1,0x1b0,1,8,uVar14,0,0);
      if (cVar5 == '\0') {
        FUN_0000aa04(local_4b08,0,0x30);
        goto LAB_00007710;
      }
    }
  }
  else {
    bVar4 = 0;
    uVar14 = (uint)*param_5;
  }
  puVar17 = local_4b08;
  FUN_0000aa04(puVar17,0,0x30);
  if (uVar3 != 0) {
    uVar16 = (ulong)(uVar3 - 1) + 1;
    puVar12 = local_5b08;
    puVar10 = puVar17;
    do {
      puVar1 = puVar10 + 6;
      uVar18 = *puVar12;
      uVar2 = puVar12[1];
      *puVar10 = &local_5b18;
      puVar10[1] = lVar15;
      puVar12 = puVar12 + 2;
      puVar10[2] = (ulong)uVar14;
      puVar10[3] = param_2 + (ulong)uVar18;
      puVar10[4] = (ulong)uVar2;
      *(bool *)(puVar10 + 5) = (uVar7 >> 8 & 0xff) == 1;
      puVar10 = puVar1;
    } while (puVar1 != puVar17 + uVar16 * 6);
    if (uVar3 < 0x10) {
      puVar17 = local_4b08;
      puVar10 = puVar17 + ((ulong)(uVar3 - 1) + 1) * 6;
      do {
        cVar5 = FUN_0000708c(*puVar17,puVar17[1],puVar17[3],puVar17[4],*(undefined1 *)(puVar17 + 5))
        ;
        if (cVar5 == '\0') goto LAB_00007700;
        puVar17 = puVar17 + 6;
      } while (puVar17 != puVar10);
    }
    else {
      uVar18 = 0;
      puVar10 = local_5308;
      FUN_0000aa04(puVar10,0,0x800);
      do {
        iVar6 = thunk_FUN_000021f0(puVar10,0,&LAB_00007264,puVar17);
        if (iVar6 != 0) {
          uVar8 = FUN_00007ab0();
          cVar5 = FUN_0000baa8(0,0,uVar8,1,0xef,1,4,uVar18,0,0);
          if (cVar5 == '\0') goto LAB_00007700;
        }
        uVar18 = uVar18 + 1;
        puVar10 = puVar10 + 1;
        puVar17 = puVar17 + 6;
      } while (uVar18 != uVar3);
      uVar19 = 0;
      do {
        local_5b20 = 0;
        iVar6 = thunk_FUN_000021f0(local_5308[uVar19],&local_5b20);
        if (iVar6 != 0) {
          uVar8 = FUN_00007ab0();
          cVar5 = FUN_0000baa8(0,0,uVar8,1,0xfb,1,5,uVar19 & 0xffffffff,0,0);
          if (cVar5 == '\0') goto LAB_00007700;
        }
        if (local_5b20 == 0) {
          uVar8 = FUN_00007ab0();
          cVar5 = FUN_0000baa8(0,0,uVar8,1,0xfc,1,6,uVar19 & 0xffffffff,0,0);
          if (cVar5 == '\0') goto LAB_00007700;
        }
        uVar19 = uVar19 + 1;
      } while (uVar16 != uVar19);
    }
  }
  uVar11 = 1;
  goto LAB_0000771c;
LAB_00007700:
  if ((bool)(bVar4 & lVar15 != 0)) {
    FUN_0000a128(lVar15,(ulong)uVar14);
    uVar14 = 0;
    uVar11 = 0;
    lVar15 = 0;
  }
  else {
LAB_00007710:
    uVar11 = 0;
    uVar14 = 0;
    lVar15 = 0;
  }
LAB_0000771c:
  if (param_4 != (long *)0x0) {
    *param_4 = lVar15;
  }
  if (param_5 != (ulong *)0x0) {
    *param_5 = (ulong)uVar14;
  }
LAB_00007370:
  if (local_8 != *(long *)PTR_DAT_0001fe30) {
                    /* WARNING: Subroutine does not return */
    FUN_0000bf54(uVar11);
  }
  return;
}
