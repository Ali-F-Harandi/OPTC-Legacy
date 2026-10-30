
void FUN_00009d54(void)

{
  if (DAT_00020640 != Reset) {
    (*DAT_00020640)();
    return;
  }
  DAT_00020640 = (code *)FUN_00009ec8(0,0,PTR_LAB_0001ff40);
  (*DAT_00020640)();
  return;
}
