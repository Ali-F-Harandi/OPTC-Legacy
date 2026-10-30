
void FUN_000071ac(undefined1 *param_1,long *param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  uint uVar14;
  char local_1028;
  char local_1027;
  char local_1026;
  char local_1025;
  undefined1 local_1008 [4096];
  long local_8;
  
  local_8 = *(long *)PTR_DAT_0001cfe0;
  if ((param_2 == (long *)0x0 || param_1 == (undefined1 *)0x0) || (bVar3 = param_3 == 0, bVar3)) {
    uVar13 = 0;
    goto LAB_00007418;
  }
  *(bool *)((long)param_2 + 0x2c) = bVar3;
  local_1008[0] = bVar3;
  lVar8 = FUN_0000925c(local_1008,0x1000,*(undefined8 *)(param_3 + 8),param_3 + 0x20,0);
  if (lVar8 == 0) {
    uVar13 = 1;
    *param_1 = 1;
    goto LAB_00007418;
  }
  FUN_00008c64(&local_1028,local_1008);
  lVar8 = FUN_00008c24(local_1008);
  lVar9 = FUN_000084b8(&local_1028,0x2d);
  if (lVar9 != 0) {
    *(bool *)lVar9 = bVar3;
  }
  lVar10 = FUN_00008a74(&local_1028);
  lVar9 = FUN_00008a74(lVar9 + 1);
  if (lVar8 == 0) {
    uVar7 = 0;
    uVar14 = 0;
LAB_00007460:
    lVar8 = 0;
LAB_00007464:
    uVar5 = 0;
    uVar4 = 0;
LAB_0000746c:
    uVar6 = 0;
  }
  else {
    FUN_00008c64(&local_1028,lVar8);
    lVar8 = FUN_00008c24(lVar8);
    uVar14 = 0;
    if (local_1028 == 'r') {
      uVar14 = 4;
    }
    uVar2 = uVar14 | 2;
    if (local_1027 != 'w') {
      uVar2 = uVar14;
    }
    uVar14 = uVar2 | 1;
    if (local_1026 != 'x') {
      uVar14 = uVar2;
    }
    if (local_1025 == 's') {
      uVar7 = 1;
    }
    else {
      uVar7 = 0;
      if (local_1025 == 'p') {
        uVar7 = 2;
      }
    }
    if (lVar8 == 0) goto LAB_00007460;
    FUN_00008c64(&local_1028,lVar8);
    lVar11 = FUN_00008c24(lVar8);
    lVar8 = FUN_00008a74(&local_1028);
    if (lVar11 == 0) goto LAB_00007464;
    FUN_00008c64(&local_1028,lVar11);
    lVar11 = FUN_00008c24(lVar11);
    puVar12 = (undefined1 *)FUN_000084b8(&local_1028,0x3a);
    if (puVar12 != (undefined1 *)0x0) {
      *puVar12 = 0;
    }
    uVar4 = FUN_00008a74(&local_1028);
    uVar5 = FUN_00008a74(puVar12 + 1);
    if (lVar11 == 0) goto LAB_0000746c;
    FUN_00008c64(&local_1028,lVar11);
    lVar11 = FUN_00008c24(lVar11);
    uVar6 = FUN_00008ad4(&local_1028);
    if (lVar11 != 0) {
      lVar1 = (long)param_2 + 0x2c;
      FUN_00008020(lVar1,0,0x400);
      FUN_000086e4(lVar1,lVar11,0x3ff);
      puVar12 = (undefined1 *)FUN_000084b8(lVar1,10);
      if (puVar12 != (undefined1 *)0x0) {
        *puVar12 = 0;
      }
      puVar12 = (undefined1 *)FUN_000084b8(lVar1,0xd);
      if (puVar12 != (undefined1 *)0x0) {
        *puVar12 = 0;
      }
    }
  }
  *param_2 = lVar10;
  uVar13 = 1;
  param_2[1] = lVar9 - lVar10;
  param_2[2] = lVar8;
  *(uint *)(param_2 + 3) = uVar14;
  *(undefined4 *)((long)param_2 + 0x1c) = uVar7;
  *(undefined4 *)(param_2 + 5) = uVar6;
  *(undefined4 *)(param_2 + 4) = uVar4;
  *(undefined4 *)((long)param_2 + 0x24) = uVar5;
  *param_1 = 0;
LAB_00007418:
  if (local_8 != *(long *)PTR_DAT_0001cfe0) {
                    /* WARNING: Subroutine does not return */
    FUN_00009bac(uVar13);
  }
  return;
}
