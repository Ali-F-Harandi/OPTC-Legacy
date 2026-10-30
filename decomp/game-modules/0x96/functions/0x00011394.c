
long FUN_00011394(byte *param_1)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = 0;
  bVar1 = *param_1;
  while ((bVar1 - 0x30 & 0xff) < 10) {
    param_1 = param_1 + 1;
    lVar2 = (long)(int)(bVar1 - 0x30) + lVar2 * 10;
    bVar1 = *param_1;
  }
  return lVar2;
}
