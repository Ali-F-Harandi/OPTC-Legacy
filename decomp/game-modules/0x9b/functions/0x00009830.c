
undefined4 FUN_00009830(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  if (DAT_000205e0 == Reset) {
    DAT_000205e0 = (code *)FUN_00009ec8(0,0,PTR_LAB_0001fef8);
  }
  FUN_0000b718();
  FUN_00009cec();
  uVar1 = (*DAT_000205e0)(param_1,param_2,param_3);
  FUN_00009d54();
  return uVar1;
}
