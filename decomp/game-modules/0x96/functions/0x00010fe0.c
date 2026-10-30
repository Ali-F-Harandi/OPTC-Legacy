
void FUN_00010fe0(char *param_1)

{
  long lVar1;
  
  if (param_1 != (char *)0x0) {
    if (*param_1 == '\0') {
      lVar1 = 0;
    }
    else {
      lVar1 = 0;
      do {
        lVar1 = lVar1 + 1;
      } while (param_1[lVar1] != '\0');
    }
    FUN_00010f38(param_1 + lVar1);
    return;
  }
  FUN_00010f38(0);
  return;
}
