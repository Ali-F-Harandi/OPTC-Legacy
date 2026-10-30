
undefined8 FUN_0000e7f4(undefined8 param_1,undefined8 param_2,char param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_0000e6cc();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 8);
    if (param_3 == '\0') {
      if ((*(uint *)(lVar1 + 4) & 0x101) == 0) {
        *(uint *)(lVar1 + 4) = *(uint *)(lVar1 + 4) | 1;
        FUN_000108e0(lVar2,0);
        *(uint *)(lVar1 + 4) = *(uint *)(lVar1 + 4) | 2;
        return 1;
      }
    }
    else {
      if (((*(uint *)(lVar1 + 4) >> 8 & 1) == 0) && (lVar2 != 0)) {
        FUN_0000eff8(lVar2,*(undefined4 *)(lVar1 + 0x10));
      }
      FUN_000108e0(lVar1,0,0x18);
    }
  }
  return 1;
}
