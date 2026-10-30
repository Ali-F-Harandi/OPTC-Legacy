
char * FUN_00011018(char *param_1,char *param_2,long param_3)

{
  char *pcVar1;
  long lVar2;
  
  if (param_1 == (char *)0x0) {
    lVar2 = 0;
  }
  else if (*param_1 == '\0') {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    do {
      lVar2 = lVar2 + 1;
    } while (param_1[lVar2] != '\0');
  }
  pcVar1 = param_1 + lVar2;
  if ((param_3 != 0) && (param_1[lVar2] = *param_2, *param_2 != '\0')) {
    lVar2 = 0;
    do {
      lVar2 = lVar2 + 1;
      if (lVar2 == param_3) break;
      pcVar1[lVar2] = param_2[lVar2];
    } while (param_2[lVar2] != '\0');
  }
  pcVar1[param_3] = '\0';
  return pcVar1;
}
