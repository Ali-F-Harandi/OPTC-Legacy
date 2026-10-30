
int FUN_00010b04(byte *param_1,byte *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_3 == 0) {
    return (int)param_3;
  }
  iVar1 = (uint)*param_1 - (uint)*param_2;
  if (iVar1 != 0) {
    return iVar1;
  }
  if ((*param_1 != 0) && (*param_2 != 0)) {
    lVar2 = 0;
    while (lVar2 = lVar2 + 1, lVar2 != param_3) {
      iVar1 = (uint)param_1[lVar2] - (uint)param_2[lVar2];
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_1[lVar2] == 0) {
        return 0;
      }
      if (param_2[lVar2] == 0) {
        return 0;
      }
    }
  }
  return 0;
}
