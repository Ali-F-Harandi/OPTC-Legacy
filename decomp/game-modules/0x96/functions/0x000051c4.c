
void FUN_000051c4(long *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  char local_9;
  long local_8;
  
  lVar17 = param_1[2];
  uVar12 = *(uint *)((long)param_1 + 0x24);
  uVar1 = *(uint *)(param_1 + 5);
  lVar18 = param_1[1];
  lVar16 = *param_1;
  lVar4 = *(long *)(lVar17 + 0xa8);
  local_8 = *(long *)PTR_DAT_00029e38;
  lVar5 = *(long *)(lVar17 + 0xb8);
  if ((int)uVar12 < (int)uVar1) {
    lVar11 = param_1[3] + (long)(int)uVar12 * 0x18 + 8;
    do {
      uVar6 = (ulong)*(uint *)(lVar11 + 4);
      if (uVar6 != 0) {
        iVar13 = (int)*(undefined8 *)(lVar17 + 0xb0);
        if ((iVar13 != 0) && (cVar3 = FUN_00003e74(), cVar3 != '\0')) {
          uVar15 = (ulong)(iVar13 - 1);
          uVar2 = *(int *)PTR_DAT_00029f50 * *(int *)PTR_DAT_00029f50;
          uVar8 = (ulong)((uVar2 >> (ulong)(uVar12 & 0x1b)) + 0x1bc5 |
                         (uVar2 << (ulong)(uVar12 & 3)) + 0x2048);
          uVar9 = 0;
          if (uVar15 != 0) {
            uVar9 = uVar8 / uVar15;
          }
          uVar9 = ((uVar15 - 1) + uVar6) - (uVar8 - uVar9 * uVar15);
          uVar6 = uVar9 - uVar15;
          if (uVar9 < uVar15) {
            uVar6 = uVar9;
          }
          uVar6 = uVar6 + 1;
        }
        lVar14 = uVar6 * 4;
        lVar10 = *(long *)(lVar16 + uVar6 * 8);
        *(uint *)(lVar18 + lVar14) = *(uint *)(lVar18 + lVar14) | 1;
        if (lVar10 == 0) {
          local_9 = '\0';
          uVar7 = FUN_00005a48(lVar5 + (ulong)*(uint *)(lVar4 + uVar6 * 0x18),&local_9);
          if (local_9 != '\0') {
            uVar2 = *(uint *)(lVar18 + lVar14);
            *(undefined8 *)(lVar16 + uVar6 * 8) = uVar7;
            *(uint *)(lVar18 + lVar14) = uVar2 | 2;
          }
        }
      }
      uVar12 = uVar12 + 1;
      lVar11 = lVar11 + 0x18;
    } while (uVar1 != uVar12);
  }
  if (local_8 == *(long *)PTR_DAT_00029e38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0001249c(1);
}
