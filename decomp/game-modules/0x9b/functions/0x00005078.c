
undefined4 FUN_00005078(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (DAT_00020490 == Reset) {
    DAT_00020490 = (code *)FUN_00009ec8(0,0,PTR_LAB_0001fec0);
  }
  FUN_0000b718();
  FUN_000050fc();
  uVar1 = (*DAT_00020490)(param_1,param_2,param_3);
  FUN_00005164();
  return uVar1;
}
