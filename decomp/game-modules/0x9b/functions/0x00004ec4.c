
undefined4 FUN_00004ec4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  if (DAT_00020478 == Reset) {
    DAT_00020478 = (code *)FUN_00009ec8(0,0,PTR_LAB_0001fed0);
  }
  FUN_0000b718();
  FUN_000050fc();
  uVar1 = (*DAT_00020478)(param_1,param_2,param_3,param_4);
  FUN_00005164();
  return uVar1;
}
