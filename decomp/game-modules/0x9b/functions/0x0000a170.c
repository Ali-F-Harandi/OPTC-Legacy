
undefined8
FUN_0000a170(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined4 *param_5,undefined4 *param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  lVar1 = FUN_0000bf90(0x3e,(long)param_1,param_2,0,0,0,0);
  uVar4 = (undefined4)param_4;
  if (lVar1 < 0) {
    uVar3 = 0x15;
    uVar2 = 0;
  }
  else {
    lVar1 = FUN_0000bf90(0x3f,(long)param_1,param_3,param_4,0,0,0);
    if (lVar1 < 0) {
      uVar3 = 0x1a;
      uVar2 = 0;
    }
    else {
      uVar4 = 0;
      uVar2 = 1;
      uVar3 = 0;
    }
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = uVar3;
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = uVar4;
  }
  return uVar2;
}
