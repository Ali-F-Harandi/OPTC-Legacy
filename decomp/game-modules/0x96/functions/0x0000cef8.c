
long FUN_0000cef8(ulong param_1,long param_2,ulong param_3)

{
  param_2 = param_2 + (param_1 & 0xffffffff);
  if (param_3 <= (param_1 & 0xffffffff)) {
    param_2 = 0;
  }
  return param_2;
}
