
void FUN_0000e590(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (DAT_0002a7f8 == Reset) {
    DAT_0002a7f8 = (code *)FUN_0000e694(0,0,PTR_LAB_00029df8);
  }
  (*DAT_0002a7f8)(param_1,param_2,param_3,param_4);
  return;
}
