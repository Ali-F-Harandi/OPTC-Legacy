
char * FUN_00008c24(char *param_1)

{
  bool bVar1;
  char cVar2;
  
  cVar2 = *param_1;
  if (cVar2 != '\0') {
    bVar1 = false;
    do {
      while ((cVar2 != '\t' && (cVar2 != ' '))) {
        if (bVar1) {
          return param_1;
        }
        param_1 = param_1 + 1;
        cVar2 = *param_1;
        if (cVar2 == '\0') {
          return (char *)0x0;
        }
      }
      param_1 = param_1 + 1;
      cVar2 = *param_1;
      bVar1 = true;
    } while (cVar2 != '\0');
  }
  return (char *)0x0;
}
