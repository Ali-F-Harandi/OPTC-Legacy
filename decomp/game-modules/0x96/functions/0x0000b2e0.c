
ulong FUN_0000b2e0(ulong param_1,int *param_2)

{
  short *psVar1;
  int *piVar2;
  int *piVar3;
  
  if (param_1 != 0) {
    psVar1 = (short *)(param_1 + 0x38);
    if (*psVar1 == 0) {
      return 0;
    }
    param_1 = 0;
    piVar3 = param_2;
    do {
      while (*piVar3 == 1) {
        piVar2 = piVar3 + 0xe;
        if (param_1 < (ulong)(*(long *)(piVar3 + 10) + *(long *)(piVar3 + 4))) {
          param_1 = *(long *)(piVar3 + 10) + *(long *)(piVar3 + 4);
        }
        piVar3 = piVar2;
        if (piVar2 == param_2 + ((ulong)(ushort)(*psVar1 - 1) + 1) * 0xe) {
          return param_1;
        }
      }
      piVar3 = piVar3 + 0xe;
    } while (piVar3 != param_2 + ((ulong)(ushort)(*psVar1 - 1) + 1) * 0xe);
  }
  return param_1;
}
