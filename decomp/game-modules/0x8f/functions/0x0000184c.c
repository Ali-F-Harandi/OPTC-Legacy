
bool FUN_0000184c(byte param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if ((0x19 < (byte)((param_1 & 0xdf) + 0xbf)) && (9 < (byte)(param_1 - 0x30))) {
    bVar1 = param_1 == 0x24 || param_1 == 0x5f;
  }
  return bVar1;
}
