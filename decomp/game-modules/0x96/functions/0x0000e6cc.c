
int * FUN_0000e6cc(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = param_2 + 0x600;
  do {
    if (*param_2 == param_1) {
      if (param_1 != 0) {
        if (*(long *)(param_2 + 2) == 0) {
          param_2 = (int *)0x0;
        }
        else if (param_2[4] == 0) {
          param_2 = (int *)0x0;
        }
      }
      return param_2;
    }
    param_2 = param_2 + 6;
  } while (param_2 != piVar1);
  return (int *)0x0;
}
