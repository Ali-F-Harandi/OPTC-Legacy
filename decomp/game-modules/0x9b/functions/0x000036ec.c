
undefined8 FUN_000036ec(byte *param_1,byte *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  while( true ) {
    bVar1 = *param_1;
    if (*param_2 != bVar1) {
      if (*param_2 < bVar1) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0xffffffff;
      }
      return uVar2;
    }
    if (bVar1 == 0) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return 0;
}
