
char FUN_00006ae8(long param_1,ulong param_2)

{
  char cVar1;
  
  if ((param_1 != 0) && (0x33 < param_2)) {
    cVar1 = FUN_000069f0();
    if (cVar1 != '\0') {
      cVar1 = *(char *)(param_1 + 4) == '\x02';
    }
    return cVar1;
  }
  return '\0';
}
