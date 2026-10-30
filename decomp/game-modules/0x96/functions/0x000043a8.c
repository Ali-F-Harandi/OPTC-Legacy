
void FUN_000043a8(long param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  char cVar3;
  int iVar4;
  ulong *puVar5;
  
  iVar4 = (int)*(undefined8 *)(param_1 + 0x60);
  if (0 < iVar4) {
    puVar2 = (ulong *)(*(long *)(param_1 + 0x58) + (ulong)(iVar4 - 1) * 0x10 + 0x18);
    puVar5 = (ulong *)(*(long *)(param_1 + 0x58) + 8);
    do {
      while( true ) {
        puVar1 = puVar5 + 2;
        if ((int)puVar5[-1] != 0xc) break;
        (*(code *)(*(long *)(param_1 + 0x20) + (*puVar5 & 0xffffffff)))();
        puVar5 = puVar1;
        if (puVar1 == puVar2) goto LAB_00004410;
      }
      puVar5 = puVar1;
    } while (puVar1 != puVar2);
  }
LAB_00004410:
  cVar3 = FUN_000042e4(param_1,0x19,0x1b);
  if (cVar3 == '\0') {
    return;
  }
  FUN_000042e4(param_1,0x20,0x21);
  return;
}
