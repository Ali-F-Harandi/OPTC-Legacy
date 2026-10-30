
undefined1 FUN_000022d4(long param_1,char param_2,int param_3)

{
  int *piVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  
  lVar10 = *(long *)(param_1 + 0x10);
  piVar9 = *(int **)(param_1 + 0x30);
  iVar6 = (int)*(undefined8 *)(param_1 + 0x38);
  if (iVar6 != 0) {
    piVar1 = piVar9 + ((ulong)(iVar6 - 1) + 1) * 0xe;
    do {
      if (*piVar9 == 1) {
        lVar12 = *(long *)(piVar9 + 10);
        lVar2 = lVar10 + *(long *)(piVar9 + 4);
        lVar8 = FUN_0000b680(lVar2,(long)param_3,0);
        uVar4 = piVar9[1];
        uVar11 = 0;
        if ((uVar4 & 1) != 0) {
          uVar11 = 4;
        }
        uVar11 = uVar11 | uVar4 & 2;
        uVar3 = uVar11 | 1;
        if ((uVar4 & 4) == 0) {
          uVar3 = uVar11;
        }
        if ((uVar3 >> 1 & 1) == 0) {
          uVar11 = uVar3 | 2;
          if (param_2 == '\0') {
            uVar11 = uVar3;
          }
          iVar6 = FUN_0000bf90(0xe2,lVar8,(lVar2 + lVar12) - lVar8,uVar11,0,0,0);
          if (iVar6 != 0) {
            uVar7 = FUN_000022cc();
            cVar5 = FUN_0000baa8(0,0,uVar7,1,0x5c,1,1,piVar9[1],piVar9,0x38);
            if (cVar5 == '\0') {
              return 0;
            }
          }
        }
      }
      piVar9 = piVar9 + 0xe;
    } while (piVar9 != piVar1);
  }
  return 1;
}
