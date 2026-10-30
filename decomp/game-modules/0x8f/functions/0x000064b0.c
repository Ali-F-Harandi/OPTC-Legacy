
int FUN_000064b0(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  lVar2 = *param_2;
  if ((lVar3 == lVar2) || ((iVar1 = 1, lVar3 <= lVar2 && (iVar1 = -1, lVar2 <= lVar3)))) {
    lVar3 = param_1[1];
    lVar2 = param_2[1];
    if (lVar3 == lVar2) {
      return 0;
    }
    iVar1 = 1;
    if (lVar3 <= lVar2) {
      return -(uint)(lVar3 < lVar2);
    }
  }
  return iVar1;
}
