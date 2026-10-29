
long FUN_0000af9c(long *param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong local_10;
  
  lVar3 = *param_1;
  uVar4 = param_1[1];
  if (lVar3 != 0) {
    lVar5 = FUN_0000be74(param_2);
    local_10 = 0;
    do {
      lVar6 = lVar3 + local_10;
      iVar2 = FUN_0000bed0(lVar6,param_2,lVar5);
      bVar1 = false;
      if (iVar2 == 0) {
        bVar1 = *(char *)(lVar6 + lVar5) == '=';
      }
      if (bVar1) {
        return lVar6 + lVar5 + 1;
      }
      lVar6 = FUN_0000be74(lVar6);
      local_10 = local_10 + lVar6 + 1;
    } while (local_10 < uVar4);
  }
  return 0;
}


