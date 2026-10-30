
ulong FUN_00010a7c(byte *param_1,byte *param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_3 == 0) {
    return 0;
  }
  uVar1 = (uint)*param_1 - (uint)*param_2;
  uVar2 = (ulong)uVar1;
  if (uVar1 == 0) {
    while( true ) {
      uVar2 = (ulong)((int)uVar2 + 1);
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      if (param_3 <= uVar2) break;
      if ((uint)*param_1 - (uint)*param_2 != 0) {
        return (ulong)((uint)*param_1 - (uint)*param_2);
      }
    }
  }
  return (ulong)uVar1;
}
