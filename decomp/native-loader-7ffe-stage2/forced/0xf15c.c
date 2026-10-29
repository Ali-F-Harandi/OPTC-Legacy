
bool FUN_0000f15c(long *param_1,long param_2,undefined4 param_3)

{
  if (param_2 != 0) {
    *param_1 = param_2;
    *(undefined4 *)(param_1 + 1) = param_3;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return param_2 != 0;
}


