
void FUN_0000b6a8(byte *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    bVar1 = *param_1;
    while (bVar1 != 0) {
      param_1[lVar2] = ~(bVar1 << 5 | bVar1 >> 3) - ((byte)lVar2 & 3);
      lVar2 = lVar2 + 1;
      if (lVar2 == param_2) {
        return;
      }
      bVar1 = param_1[lVar2];
    }
  }
  return;
}
