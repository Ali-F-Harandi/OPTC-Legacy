
undefined8 FUN_0000aa14(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    iVar1 = *piVar4;
    lVar3 = 0;
    while( true ) {
      if (iVar1 == 2) {
        if (*(char *)(param_1 + 0x110) == '\0') {
          lVar3 = *(long *)(piVar4 + 4);
        }
        else {
          lVar3 = *(long *)(piVar4 + 2);
        }
        uVar2 = piVar4[10];
        *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x20) + lVar3;
        *(ulong *)(param_1 + 0x60) = (ulong)(uVar2 >> 4);
        return 1;
      }
      piVar4 = piVar4 + 0xe;
      lVar3 = lVar3 + 1;
      if (lVar3 == *(long *)(param_1 + 0x38)) break;
      iVar1 = *piVar4;
    }
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  return 1;
}
