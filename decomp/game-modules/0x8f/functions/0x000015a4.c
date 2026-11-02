
undefined8 FUN_000015a4(undefined8 param_1)

{
  if (DAT_0001f430 < 0x10) {
    FUN_00008144(&DAT_0001f438 + (long)DAT_0001f430 * 0x50,param_1,0x50);
    DAT_0001f430 = DAT_0001f430 + 1;
  }
  return 1;
}
