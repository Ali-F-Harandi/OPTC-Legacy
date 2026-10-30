
void FUN_000087f8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  if (DAT_000204b0 == Reset) {
    DAT_000204b0 = (code *)FUN_00009ec8(0,0,PTR_LAB_0001fea0);
  }
  (*DAT_000204b0)(param_1,param_2,param_3,param_4);
  return;
}
