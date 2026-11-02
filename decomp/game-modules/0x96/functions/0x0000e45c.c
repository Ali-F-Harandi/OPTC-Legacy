
undefined4 FUN_0000e45c(void)

{
  undefined4 uVar1;
  
  if (DAT_0002a7e0 == Reset) {
    DAT_0002a7e0 = (code *)FUN_0000e694(0,0,PTR_LAB_00029ef8);
  }
  FUN_00011fc4();
  FUN_0000e4c0();
  uVar1 = (*DAT_0002a7e0)();
  FUN_0000e528();
  return uVar1;
}
