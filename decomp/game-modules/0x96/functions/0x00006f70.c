
long FUN_00006f70(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = param_2[2];
  uVar2 = (ulong)param_2[1] >> 0x20;
  uVar4 = param_2[1] & 0xffffffff;
  plVar1 = (long *)(param_3 + uVar2 * 8);
  if (uVar2 == 0) {
    plVar1 = (long *)0x0;
  }
  if (uVar4 == 0x400) {
    return *plVar1;
  }
  if (uVar4 < 0x401) {
    if (uVar4 == 0x101) goto LAB_00006fb8;
    if (uVar4 == 0x104) {
      return (*plVar1 - *param_2) + lVar3;
    }
  }
  else {
    if ((uVar4 == 0x402) || (uVar4 < 0x402)) {
LAB_00006fb8:
      return *plVar1 + lVar3;
    }
    if (uVar4 == 0x403) {
      return param_1 + lVar3;
    }
  }
  return 0;
}
