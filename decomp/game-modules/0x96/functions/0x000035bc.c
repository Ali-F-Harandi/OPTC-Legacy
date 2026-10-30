
long FUN_000035bc(uint param_1,uint *param_2)

{
  long lVar1;
  
  if (param_2 != (uint *)0x0) {
    lVar1 = 0;
    if (param_1 < *param_2) {
      lVar1 = (long)param_2 + (ulong)param_2[(ulong)param_1 + 1];
    }
    return lVar1;
  }
  return 0;
}
