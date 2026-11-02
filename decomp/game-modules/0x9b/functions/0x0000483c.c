
undefined8 FUN_0000483c(undefined8 param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  ulong uVar5;
  
  if (param_3 != 0) {
    uVar5 = 0;
    uVar1 = 0;
    bVar4 = false;
    uVar3 = 0;
LAB_0000488c:
    do {
      if (*(int *)(param_2 + uVar5) == 0) {
        uVar3 = uVar3 + 4;
        if (!bVar4) {
          uVar1 = uVar5;
        }
        bVar4 = true;
      }
      else {
        if (uVar3 < 0x10) {
          uVar5 = uVar5 + 4;
          uVar1 = 0;
          bVar4 = false;
          uVar2 = 0;
          uVar3 = uVar1;
          if (param_3 <= uVar5) break;
          goto LAB_0000488c;
        }
        FUN_000046bc(param_1,uVar1);
        uVar1 = 0;
        bVar4 = false;
        uVar3 = uVar1;
      }
      uVar5 = uVar5 + 4;
      uVar2 = uVar1;
    } while (uVar5 < param_3);
    if (0xf < uVar3) {
      FUN_000046bc(param_1,uVar2);
      return 1;
    }
  }
  return 1;
}
