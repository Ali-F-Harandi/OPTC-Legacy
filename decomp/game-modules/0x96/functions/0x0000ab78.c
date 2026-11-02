
uint * FUN_0000ab78(long *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *param_1;
  if (lVar5 == 0) {
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 0;
      return (uint *)0x0;
    }
    puVar4 = (uint *)0x0;
  }
  else {
    lVar6 = param_1[9];
    lVar3 = 0;
    lVar7 = *(long *)((uint *)param_1[8] + param_1[10] * 0x10 + 6);
    puVar4 = (uint *)param_1[8];
    if (lVar6 != 0) {
      do {
        lVar3 = lVar3 + 1;
        iVar2 = FUN_00010b64(param_2,lVar5 + (ulong)*puVar4 + lVar7);
        if (iVar2 == 0) {
          uVar1 = 1;
          goto joined_r0x0000abf0;
        }
        puVar4 = puVar4 + 0x10;
      } while (lVar3 != lVar6);
    }
    puVar4 = (uint *)0x0;
    uVar1 = 0;
joined_r0x0000abf0:
    if (param_3 == (undefined1 *)0x0) {
      return puVar4;
    }
    *param_3 = uVar1;
  }
  return puVar4;
}
