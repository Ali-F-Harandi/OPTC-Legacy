
void FUN_000050fc(undefined8 param_1)

{
  if (DAT_00020498 != Reset) {
    (*DAT_00020498)(param_1);
    return;
  }
  DAT_00020498 = (code *)FUN_00009ec8(0,0,PTR_LAB_0001fff0);
  (*DAT_00020498)(param_1);
  return;
}
