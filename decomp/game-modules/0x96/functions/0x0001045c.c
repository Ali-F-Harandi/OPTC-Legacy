
long FUN_0001045c(long *param_1,long param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  if (*param_1 == 0) {
    lVar3 = 0;
  }
  else {
    if ((ulong)param_1[1] <= (ulong)(long)(int)param_1[2]) {
      return 0;
    }
    lVar3 = *param_1 + (long)(int)param_1[2];
    lVar2 = FUN_00010d78(lVar3,*(undefined1 *)((long)param_1 + 0x14));
    if (lVar2 == 0) {
      uVar4 = FUN_00010ad4(lVar3);
    }
    else {
      uVar4 = lVar2 - lVar3;
    }
    if (param_2 != 0) {
      iVar1 = (int)param_3;
      if (uVar4 < param_3) {
        iVar1 = (int)uVar4;
      }
      FUN_00010fa4(param_2,lVar3,(long)iVar1);
      *(undefined1 *)(param_2 + iVar1) = 0;
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + 1 + (int)uVar4;
  }
  return lVar3;
}
