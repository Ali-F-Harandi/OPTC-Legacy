
undefined4 FUN_000070b4(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0xc0) {
    return 0xc;
  }
  if (param_1 != 0x100) {
    uVar1 = 10;
    if (param_1 != 0x80) {
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0xe;
}
