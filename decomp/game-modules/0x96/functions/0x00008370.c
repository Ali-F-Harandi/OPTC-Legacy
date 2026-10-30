
undefined8 FUN_00008370(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = FUN_0000e688();
  lVar2 = FUN_0000e6cc(0xb0,uVar1);
  lVar2 = *(long *)(lVar2 + 8);
  if (lVar2 != 0) {
    uVar1 = FUN_0000e688();
    lVar3 = FUN_0000e6cc(0xb2,uVar1);
    if (lVar3 != 0) {
      DAT_0002a630 = *(undefined8 *)(lVar3 + 8);
      DAT_0002a628 = lVar2;
      uVar1 = FUN_000088fc();
      return uVar1;
    }
  }
  return 1;
}
