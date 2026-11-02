
undefined8 FUN_0000894c(void)

{
  undefined8 uVar1;
  
  if (DAT_000204c8 == Reset) {
    DAT_000204c8 = (code *)FUN_00009ec8(0,0,PTR_LAB_0001ff80);
  }
  FUN_0000b718();
  FUN_00009cec();
  uVar1 = (*DAT_000204c8)();
  FUN_00009d54();
  return uVar1;
}
