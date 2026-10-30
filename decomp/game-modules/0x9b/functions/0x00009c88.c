
undefined4 FUN_00009c88(void)

{
  undefined4 uVar1;
  
  if (DAT_00020630 == Reset) {
    DAT_00020630 = (code *)FUN_00009ec8(0,0,PTR_LAB_0001ff18);
  }
  FUN_0000b718();
  FUN_00009cec();
  uVar1 = (*DAT_00020630)();
  FUN_00009d54();
  return uVar1;
}
