
undefined4 FUN_0000df88(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  if (DAT_0002a788 == Reset) {
    DAT_0002a788 = (code *)FUN_0000e694(0,0,PTR_LAB_00029eb8);
  }
  FUN_00011fc4();
  FUN_0000e4c0();
  uVar1 = (*DAT_0002a788)(param_1,param_2);
  FUN_0000e528();
  return uVar1;
}
