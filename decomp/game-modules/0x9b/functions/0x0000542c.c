
long FUN_0000542c(long param_1,long param_2,undefined1 *param_3,int *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  
  iVar6 = (int)param_4;
  if (param_4 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    iVar6 = *param_4;
    uVar4 = (ulong)iVar6;
  }
  lVar3 = *(long *)(param_1 + 0x58);
  if (uVar4 < *(ulong *)(param_1 + 0x60)) {
    lVar2 = lVar3 + uVar4 * 0x10;
    lVar5 = *(long *)(lVar3 + uVar4 * 0x10);
    while (lVar5 != 0) {
      if (lVar5 == param_2) {
        iVar6 = iVar6 + 1;
        lVar5 = 1;
        break;
      }
      uVar4 = uVar4 + 1;
      if (*(ulong *)(param_1 + 0x60) <= uVar4) goto LAB_00005484;
      plVar1 = (long *)(lVar2 + 0x10);
      lVar2 = lVar2 + 0x10;
      lVar5 = *plVar1;
    }
  }
  else {
LAB_00005484:
    lVar5 = 0;
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = (char)lVar5;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = iVar6;
  }
  lVar3 = lVar3 + uVar4 * 0x10;
  if ((int)lVar5 == 0) {
    lVar3 = 0;
  }
  return lVar3;
}
