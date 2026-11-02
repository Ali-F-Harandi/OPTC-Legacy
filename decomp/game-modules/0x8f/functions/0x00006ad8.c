
void FUN_00006ad8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  if (DAT_00023590 == Reset) {
    DAT_00023590 = (code *)FUN_00006b90(0,0,PTR_LAB_0001cfe8);
  }
  (*DAT_00023590)(param_1,param_2,param_3,param_4);
  return;
}
