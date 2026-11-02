
void FUN_0000a980(long param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      return;
    }
    iVar3 = thunk_FUN_000027d0(0);
    puVar1 = (undefined4 *)PTR_DAT_00029f18;
    piVar2 = (int *)PTR_DAT_00029fa8;
  }
  else {
    iVar3 = thunk_FUN_000027d0(*(long *)(param_1 + 0x10));
    puVar1 = (undefined4 *)PTR_DAT_00029f18;
    piVar2 = (int *)PTR_DAT_00029fa8;
  }
  PTR_DAT_00029f18 = (undefined *)puVar1;
  PTR_DAT_00029fa8 = (undefined *)piVar2;
  if (iVar3 < 0) {
    iVar3 = *piVar2;
    *puVar1 = 0x6f;
    if (iVar3 == 0) {
      *piVar2 = 0x6f;
      return;
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *puVar1 = 0x71;
  }
  return;
}
