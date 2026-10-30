
long FUN_00008a74(byte *param_1)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = 0;
  do {
    bVar1 = *param_1;
    uVar3 = bVar1 - 0x30;
    lVar2 = (long)(int)uVar3;
    if (9 < (uVar3 & 0xff)) {
      uVar3 = (uint)bVar1;
      lVar2 = (long)(int)(uVar3 - 0x37);
      if ((bVar1 - 0x61 & 0xff) < 6) {
        lVar2 = (long)(int)(uVar3 - 0x57);
      }
      else if (5 < (uVar3 - 0x41 & 0xff)) {
        return lVar4;
      }
    }
    lVar4 = lVar2 + lVar4 * 0x10;
    param_1 = param_1 + 1;
  } while( true );
}
