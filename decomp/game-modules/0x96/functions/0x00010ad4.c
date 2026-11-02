
char * FUN_00010ad4(char *param_1)

{
  char *pcVar1;
  
  pcVar1 = param_1;
  if (param_1 != (char *)0x0) {
    if (*param_1 == '\0') {
      pcVar1 = (char *)0x0;
    }
    else {
      pcVar1 = (char *)0x0;
      do {
        pcVar1 = pcVar1 + 1;
      } while (param_1[(long)pcVar1] != '\0');
    }
  }
  return pcVar1;
}
