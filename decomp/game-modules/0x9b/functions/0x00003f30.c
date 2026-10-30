
long FUN_00003f30(int *param_1,int param_2,ulong param_3)

{
  int *piVar1;
  ulong uVar2;
  
  if (0 < param_2) {
    piVar1 = param_1 + ((ulong)(param_2 - 1) + 1) * 0xe;
    do {
      if (((*param_1 == 1) && (uVar2 = *(ulong *)(param_1 + 4), uVar2 <= param_3)) &&
         (param_3 < uVar2 + *(long *)(param_1 + 10))) {
        return (param_3 + *(long *)(param_1 + 2)) - uVar2;
      }
      param_1 = param_1 + 0xe;
    } while (param_1 != piVar1);
  }
  return 0;
}
