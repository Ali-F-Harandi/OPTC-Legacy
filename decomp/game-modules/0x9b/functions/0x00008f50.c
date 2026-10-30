
undefined4 FUN_00008f50(undefined8 param_1)

{
  undefined4 uVar1;
  
  if (DAT_00020540 == Reset) {
    DAT_00020540 = (code *)FUN_00009ec8(0,0,PTR_LAB_0001ff30);
  }
  FUN_0000b718();
  FUN_00009cec();
  uVar1 = (*DAT_00020540)(param_1);
  FUN_00009d54();
  return uVar1;
}
