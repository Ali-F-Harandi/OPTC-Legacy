
long FUN_0000b410(long param_1,ulong param_2)

{
  int *piVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(char *)(param_1 + 0x110) != '\0') {
    piVar1 = *(int **)(param_1 + 0x30);
    if (*(long *)(param_1 + 0x38) == 0) {
      return 0;
    }
    lVar2 = 0;
    while (((lVar2 = lVar2 + 1, *piVar1 != 1 || (uVar3 = *(ulong *)(piVar1 + 4), param_2 < uVar3))
           || (uVar3 + *(long *)(piVar1 + 10) <= param_2))) {
      piVar1 = piVar1 + 0xe;
      if (lVar2 == *(long *)(param_1 + 0x38)) {
        return 0;
      }
    }
    param_2 = (param_2 + *(long *)(piVar1 + 2)) - uVar3;
  }
  return *(long *)(param_1 + 0x20) + param_2;
}
