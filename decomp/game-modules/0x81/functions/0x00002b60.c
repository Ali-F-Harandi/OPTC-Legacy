
undefined4 FUN_00002b60(void)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_00002940();
  if (lVar2 != 0x7fffffffffffffff) {
    uVar1 = (undefined4)lVar2;
    if (lVar2 == -0x8000000000000000) {
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0xffffffff;
}
