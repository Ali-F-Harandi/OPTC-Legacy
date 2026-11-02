
undefined4 FUN_00009e28(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  if (DAT_00020650 == Reset) {
    DAT_00020650 = (code *)FUN_00009ec8(0,0,PTR_LAB_0001ffc0);
  }
  FUN_0000b718();
  FUN_00009cec();
  uVar1 = (*DAT_00020650)(param_1,param_2,param_3);
  FUN_00009d54();
  return uVar1;
}
