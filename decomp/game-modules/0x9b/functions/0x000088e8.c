
undefined8 FUN_000088e8(void)

{
  undefined8 uVar1;
  
  if (DAT_000204c0 == Reset) {
    DAT_000204c0 = (code *)FUN_00009ec8(0,0,PTR_LAB_0001ff58);
  }
  FUN_0000b718();
  FUN_00009cec();
  uVar1 = (*DAT_000204c0)();
  FUN_00009d54();
  return uVar1;
}
