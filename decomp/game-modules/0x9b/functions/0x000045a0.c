
undefined8 FUN_000045a0(long param_1,ulong param_2,long param_3,undefined1 param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_2 + param_3;
  if (param_2 < uVar2) {
    do {
      while (*(ulong *)(param_1 + 0x18) <= param_2) {
        param_2 = param_2 + 1;
        if (uVar2 <= param_2) {
          return 1;
        }
      }
      uVar1 = param_2 + 1;
      FUN_00004400(param_1,param_2,param_4);
      param_2 = uVar1;
    } while (uVar1 < uVar2);
  }
  return 1;
}
