
void FUN_00005164(void)

{
  if (DAT_000204a0 != Reset) {
    (*DAT_000204a0)();
    return;
  }
  DAT_000204a0 = (code *)FUN_00009ec8(0,0,PTR_LAB_0001fe58);
  (*DAT_000204a0)();
  return;
}
