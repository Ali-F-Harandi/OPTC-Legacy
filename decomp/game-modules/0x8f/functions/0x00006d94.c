
long FUN_00006d94(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_00009174(param_1,0x1000,1);
    lVar2 = FUN_00009be8(0xde,0,uVar1,3,0x22,0xffffffffffffffff,0);
    if (lVar2 != -1) {
      return lVar2;
    }
  }
  return 0;
}
