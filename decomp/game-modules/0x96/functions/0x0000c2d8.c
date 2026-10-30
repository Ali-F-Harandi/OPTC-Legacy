
long FUN_0000c2d8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 0xa8);
    if (lVar2 == 0) {
      lVar1 = 0;
    }
    else {
      lVar3 = *(long *)(param_1 + 0xb8);
      uVar4 = *(undefined8 *)(param_1 + 0xc0);
      if (lVar3 == 0) {
        lVar1 = 0;
      }
      else {
        lVar1 = FUN_0000c3a8(param_2,*(undefined8 *)(param_1 + 0x68),lVar2,lVar3,uVar4);
        if (lVar1 == 0) {
          lVar1 = FUN_0000c4d0(param_2,*(undefined8 *)(param_1 + 0x78),lVar2,lVar3,uVar4);
          return lVar1;
        }
      }
    }
  }
  return lVar1;
}
