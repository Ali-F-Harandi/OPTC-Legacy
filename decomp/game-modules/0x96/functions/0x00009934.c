
ulong FUN_00009934(int *param_1,long *param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_DAT_00029fa8;
  uVar2 = param_3 - 10000;
  if (((-1 < (long)uVar2) && ((long)uVar2 < (long)*param_1)) &&
     (*(long *)(*param_2 + uVar2 * 0x10) != 0)) {
    return uVar2 & 0xffffffff;
  }
  iVar1 = *(int *)PTR_DAT_00029fa8;
  *(undefined4 *)PTR_DAT_00029f18 = 0x51;
  if (iVar1 == 0) {
    *(undefined4 *)puVar3 = 0x51;
  }
  return 0xffffffff;
}
