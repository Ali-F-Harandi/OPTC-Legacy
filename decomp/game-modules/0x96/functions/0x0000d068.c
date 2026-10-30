
undefined8 FUN_0000d068(void)

{
  undefined8 uVar1;
  
  if (DAT_0002a668 == Reset) {
    DAT_0002a668 = (code *)FUN_0000e694(0,0,PTR_LAB_00029ea8);
  }
  FUN_00011fc4();
  FUN_0000e4c0();
  uVar1 = (*DAT_0002a668)();
  FUN_0000e528();
  return uVar1;
}
