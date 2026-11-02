
void FUN_00006bc8(long *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  char cVar5;
  char cVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  long lStack_20;
  uint local_14;
  long local_8;
  
  local_8 = *(long *)PTR_DAT_00029e38;
  uVar16 = *(uint *)((long)param_1 + 0x14);
  uVar1 = *(uint *)(param_1 + 3);
  lVar15 = param_1[4];
  lVar12 = *param_1;
  lVar10 = param_1[1];
  iVar2 = *(int *)((long)param_1 + 0x1c);
  cVar5 = FUN_00003e74();
  if ((int)uVar16 < (int)uVar1) {
    uVar9 = (ulong)(iVar2 - 1);
    plVar11 = (long *)(lVar10 + (long)(int)uVar16 * 0x18);
    do {
      while (cVar5 == '\0') {
        uVar16 = uVar16 + 1;
        uVar7 = FUN_000059dc(0);
        uVar7 = FUN_00006f70(lVar12,plVar11,uVar7);
        *(undefined8 *)(lVar12 + *plVar11) = uVar7;
        plVar11 = plVar11 + 3;
        if (uVar16 == uVar1) goto LAB_00006cc8;
      }
      uVar14 = *(uint *)((long)plVar11 + 0xc);
      plVar13 = plVar11;
      if ((ulong)uVar14 != 0) {
        if ((iVar2 != 0) && (cVar6 = FUN_00003e74(), cVar6 != '\0')) {
          uVar3 = *(int *)PTR_DAT_00029f50 * *(int *)PTR_DAT_00029f50;
          uVar8 = (ulong)((uVar3 >> (ulong)(uVar16 & 0x1b)) + 0x1bc5 |
                         (uVar3 << (ulong)(uVar16 & 3)) + 0x2048);
          uVar4 = 0;
          if (uVar9 != 0) {
            uVar4 = uVar8 / uVar9;
          }
          uVar8 = ((uVar9 - 1) + (ulong)uVar14) - (uVar8 - uVar4 * uVar9);
          uVar4 = uVar8 - uVar9;
          if (uVar8 < uVar9) {
            uVar4 = uVar8;
          }
          uVar14 = (int)uVar4 + 1;
        }
        FUN_00010a04(&lStack_20,plVar11,0x18);
        plVar13 = &lStack_20;
        local_14 = uVar14;
      }
      uVar7 = FUN_000059dc(0);
      uVar7 = FUN_00006f70(lVar12,plVar13,uVar7);
      cVar6 = FUN_0000841c(plVar13,lVar15,lVar12,uVar7);
      if (cVar6 == '\0') goto LAB_00006ccc;
      uVar16 = uVar16 + 1;
      plVar11 = plVar11 + 3;
    } while (uVar16 != uVar1);
  }
LAB_00006cc8:
  cVar6 = '\x01';
LAB_00006ccc:
  if (local_8 == *(long *)PTR_DAT_00029e38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0001249c(cVar6);
}
