
undefined4 FUN_00008bb4(void)

{
  undefined4 uVar1;
  
  if (DAT_000204f8 == Reset) {
    DAT_000204f8 = (code *)FUN_00009ec8(0,0,PTR_LAB_0001fec8);
  }
  FUN_0000b718();
  FUN_00009cec();
  uVar1 = (*DAT_000204f8)();
  FUN_00009d54();
  return uVar1;
}
