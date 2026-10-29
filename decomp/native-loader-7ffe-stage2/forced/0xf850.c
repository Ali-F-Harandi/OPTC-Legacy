
int * FUN_0000f850(int param_1,long param_2)

{
  int *piVar1;
  int local_4;
  
  local_4 = 0;
  while( true ) {
    if (0xff < local_4) {
      return (int *)0x0;
    }
    piVar1 = (int *)(param_2 + (long)local_4 * 0x18);
    if (*piVar1 == param_1) break;
    local_4 = local_4 + 1;
  }
  if (param_1 == 0) {
    return piVar1;
  }
  if (*(long *)(piVar1 + 2) == 0) {
    return (int *)0x0;
  }
  if (piVar1[4] != 0) {
    return piVar1;
  }
  return (int *)0x0;
}


