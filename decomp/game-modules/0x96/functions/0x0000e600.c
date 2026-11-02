
void FUN_0000e600(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  if (DAT_0002a800 == Reset) {
    DAT_0002a800 = (code *)FUN_0000e694(0,0,PTR_LAB_00029ea0);
  }
  (*DAT_0002a800)(param_1,param_2,param_3,param_4);
  return;
}
