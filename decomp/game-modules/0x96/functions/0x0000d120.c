
undefined8 FUN_0000d120(void)

{
  undefined8 uVar1;
  
  if (DAT_0002a678 == Reset) {
    DAT_0002a678 = (code *)FUN_0000e694(0,0,PTR_LAB_00029f88);
  }
  FUN_00011fc4();
  FUN_0000e4c0();
  uVar1 = (*DAT_0002a678)();
  FUN_0000e528();
  return uVar1;
}
