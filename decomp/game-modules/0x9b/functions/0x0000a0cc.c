
long FUN_0000a0cc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_0000b630(param_1,0x1000,1);
    lVar2 = FUN_0000bf90(0xde,0,uVar1,3,0x22,0xffffffffffffffff,0);
    if (lVar2 != -1) {
      return lVar2;
    }
  }
  return 0;
}
