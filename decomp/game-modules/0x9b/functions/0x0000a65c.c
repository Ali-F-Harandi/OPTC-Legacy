
undefined8 FUN_0000a65c(int param_1,long *param_2,undefined4 *param_3,undefined4 *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  lVar1 = FUN_0000bf90(0x3e,(long)param_1,0,2,0,0,0);
  if (lVar1 < 0) {
    uVar4 = 0;
    uVar5 = 0x13;
    uVar3 = 0;
  }
  else {
    lVar2 = FUN_0000bf90(0x3e,(long)param_1,0,0,0,0,0);
    if (lVar2 < 0) {
      uVar4 = (undefined4)lVar1;
      uVar5 = 0x1a;
      uVar3 = 0;
    }
    else if (param_2 == (long *)0x0) {
      uVar4 = 0;
      uVar3 = 1;
      uVar5 = 0;
    }
    else {
      uVar4 = 0;
      *param_2 = lVar1;
      uVar3 = 1;
      uVar5 = 0;
    }
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uVar5;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uVar4;
  }
  return uVar3;
}
