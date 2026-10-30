
ulong FUN_0000c27c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = FUN_0000c2d8();
  if (uVar1 != 0) {
    uVar2 = *(ulong *)(uVar1 + 8);
    uVar1 = 0;
    if (-1 < (long)uVar2) {
      if (*(ulong *)(param_1 + 0x18) == 0) {
        return *(long *)(param_1 + 0x20) + uVar2;
      }
      uVar1 = uVar2;
      if (uVar2 < *(ulong *)(param_1 + 0x18)) {
        uVar1 = *(long *)(param_1 + 0x20) + uVar2;
      }
    }
  }
  return uVar1;
}
