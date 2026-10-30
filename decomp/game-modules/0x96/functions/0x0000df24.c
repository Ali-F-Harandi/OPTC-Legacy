
undefined4 FUN_0000df24(void)

{
  undefined4 uVar1;
  
  if (DAT_0002a780 == Reset) {
    DAT_0002a780 = (code *)FUN_0000e694(0,0,PTR_LAB_00029e58);
  }
  FUN_00011fc4();
  FUN_0000e4c0();
  uVar1 = (*DAT_0002a780)();
  FUN_0000e528();
  return uVar1;
}
