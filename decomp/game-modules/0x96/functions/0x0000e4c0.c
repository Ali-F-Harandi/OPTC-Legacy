
void FUN_0000e4c0(undefined8 param_1)

{
  if (DAT_0002a7e8 != Reset) {
    (*DAT_0002a7e8)(param_1);
    return;
  }
  DAT_0002a7e8 = (code *)FUN_0000e694(0,0,PTR_LAB_00029ed0);
  (*DAT_0002a7e8)(param_1);
  return;
}
