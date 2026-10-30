
undefined1 FUN_000079e4(undefined8 param_1,long param_2,int *param_3)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  int *piVar9;
  ulong uVar10;
  
  iVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  iVar6 = *param_3;
  if (iVar3 != 0) {
    piVar9 = (int *)((long)param_3 + (ulong)uVar4);
    uVar10 = 0;
    do {
      iVar7 = *piVar9;
      lVar2 = uVar5 + uVar10;
      piVar1 = piVar9 + 1;
      uVar10 = (ulong)(uint)((int)uVar10 + piVar9[2]);
      piVar9 = piVar9 + 4;
      cVar8 = FUN_00007ab8(param_1,param_2 + (ulong)(uint)(iVar6 + iVar7),*piVar1,
                           (long)param_3 + lVar2);
      if (cVar8 == '\0') {
        return 0;
      }
    } while (piVar9 != (int *)((long)param_3 + (ulong)uVar4 + 0x10 + (ulong)(iVar3 - 1) * 0x10));
  }
  return 1;
}
