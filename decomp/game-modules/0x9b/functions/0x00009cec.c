
void FUN_00009cec(undefined8 param_1)

{
  if (DAT_00020638 != Reset) {
    (*DAT_00020638)(param_1);
    return;
  }
  DAT_00020638 = (code *)FUN_00009ec8(0,0,PTR_LAB_0001fee8);
  (*DAT_00020638)(param_1);
  return;
}
