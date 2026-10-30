
long FUN_00006430(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  cVar1 = FUN_0000cc48(param_2);
  if (cVar1 != '\0') {
    iVar2 = FUN_00005c60(param_1,param_2);
    lVar4 = (long)iVar2;
    if (lVar4 != 0) {
      lVar3 = FUN_00006368(1,param_1,lVar4);
      if (lVar3 == 0) {
        lVar3 = FUN_00006368(0,param_1,lVar4);
      }
      if (param_3 != 0) {
        *(bool *)param_3 = lVar3 != 0;
      }
      return lVar3;
    }
  }
  return 0;
}
