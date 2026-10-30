
undefined1 FUN_000033a4(undefined8 *param_1)

{
  char cVar1;
  
  if (DAT_00020330 == '\0') {
    DAT_00020330 = '\x01';
    cVar1 = FUN_00003414(&DAT_00020338);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = &DAT_00020338;
  }
  return 1;
}
