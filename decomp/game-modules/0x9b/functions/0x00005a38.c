
long FUN_00005a38(long param_1)

{
  int *piVar1;
  
  if (*(short *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(param_1 + *(long *)(param_1 + 0x20));
    do {
      if ((*piVar1 == 1) && (*(long *)(piVar1 + 2) == 0)) {
        return param_1 - *(long *)(piVar1 + 4);
      }
      piVar1 = piVar1 + 0xe;
    } while (piVar1 != (int *)(param_1 +
                              *(long *)(param_1 + 0x20) + 0x38 +
                              (ulong)(ushort)(*(short *)(param_1 + 0x38) - 1) * 0x38));
  }
  return 0;
}
