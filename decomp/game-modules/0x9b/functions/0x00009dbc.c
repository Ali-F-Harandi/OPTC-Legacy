
undefined4 FUN_00009dbc(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (DAT_00020648 == Reset) {
    DAT_00020648 = (code *)FUN_00009ec8(0,0,PTR_LAB_0001ff28);
  }
  FUN_0000b718();
  FUN_00009cec();
  uVar1 = (*DAT_00020648)(param_1,param_2);
  FUN_00009d54();
  return uVar1;
}
