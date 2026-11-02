
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00004920(int *param_1,ulong param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar17;
  undefined8 uVar16;
  int iVar18;
  int iVar20;
  undefined8 uVar19;
  
  iVar2 = (int)param_2;
  uVar5 = (uint)(param_2 >> 2);
  if (0 < (int)uVar5) {
    uVar1 = (uVar5 - 4 >> 2) + 1;
    uVar4 = uVar1 * 4;
    if (uVar5 - 1 < 3) {
      uVar4 = 0;
    }
    else {
      iVar7 = 0;
      iVar8 = 0;
      iVar9 = 0;
      iVar10 = 0;
      uVar3 = 0;
      piVar6 = param_1;
      uVar16 = _DAT_00004a20;
      uVar19 = uRam0000000000004a28;
      do {
        uVar3 = uVar3 + 1;
        iVar11 = (int)*(undefined8 *)piVar6 + (int)_DAT_00004a30;
        iVar12 = (int)((ulong)*(undefined8 *)piVar6 >> 0x20) + (int)((ulong)_DAT_00004a30 >> 0x20);
        iVar13 = (int)*(undefined8 *)(piVar6 + 2) + (int)uRam0000000000004a38;
        iVar14 = (int)((ulong)*(undefined8 *)(piVar6 + 2) >> 0x20) +
                 (int)((ulong)uRam0000000000004a38 >> 0x20);
        iVar15 = (int)uVar16;
        iVar17 = (int)((ulong)uVar16 >> 0x20);
        iVar18 = (int)uVar19;
        iVar20 = (int)((ulong)uVar19 >> 0x20);
        uVar16 = CONCAT44(iVar17 + 4,iVar15 + 4);
        uVar19 = CONCAT44(iVar20 + 4,iVar18 + 4);
        iVar7 = iVar7 + iVar11 + iVar15 * iVar11;
        iVar8 = iVar8 + iVar12 + iVar17 * iVar12;
        iVar9 = iVar9 + iVar13 + iVar18 * iVar13;
        iVar10 = iVar10 + iVar14 + iVar20 * iVar14;
        piVar6 = piVar6 + 4;
      } while (uVar3 < uVar1);
      param_1 = param_1 + uVar4;
      iVar2 = iVar7 + iVar8 + iVar9 + iVar10 + iVar2;
      if (uVar4 == uVar5) goto LAB_00004a00;
    }
    iVar2 = iVar2 + (uVar4 + 1) * (*param_1 + -0x45eb976f);
    if (((int)(uVar4 + 1) < (int)uVar5) &&
       (iVar2 = iVar2 + (uVar4 + 2) * (param_1[1] + -0x45eb976f), (int)(uVar4 + 2) < (int)uVar5)) {
      iVar2 = iVar2 + (uVar4 + 3) * (param_1[2] + -0x45eb976f);
    }
  }
LAB_00004a00:
  *param_3 = iVar2;
  return 1;
}
