
void FUN_0000e528(void)

{
  if (DAT_0002a7f0 != Reset) {
    (*DAT_0002a7f0)();
    return;
  }
  DAT_0002a7f0 = (code *)FUN_0000e694(0,0,PTR_LAB_00029f28);
  (*DAT_0002a7f0)();
  return;
}
