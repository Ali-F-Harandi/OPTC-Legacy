
long FUN_000061d8(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = *param_1;
  uVar6 = param_1[1];
  if (lVar5 == 0) {
    lVar5 = thunk_FUN_00001400(param_2);
    return lVar5;
  }
  uVar4 = 0;
  lVar2 = FUN_00008214(param_2);
  while( true ) {
    lVar3 = lVar5 + uVar4;
    iVar1 = FUN_00008244(lVar3,param_2,lVar2);
    if ((iVar1 == 0) && (*(char *)(lVar3 + lVar2) == '=')) break;
    lVar3 = FUN_00008214(lVar3);
    uVar4 = uVar4 + lVar3 + 1;
    if (uVar6 <= uVar4) {
      return 0;
    }
  }
  return lVar3 + lVar2 + 1;
}
