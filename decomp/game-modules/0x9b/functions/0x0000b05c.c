
char * FUN_0000b05c(char *param_1,char *param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  
  if (param_1 != (char *)0x0) {
    if (param_2 == (char *)0x0) {
      lVar3 = 0;
      cVar2 = *param_1;
      while (cVar2 != '\0') {
        lVar3 = lVar3 + 1;
        cVar2 = param_1[lVar3];
      }
      return param_1 + lVar3;
    }
    if (*param_2 == '\0') {
      lVar3 = 1;
    }
    else {
      lVar1 = 0;
      do {
        lVar3 = lVar1;
        lVar1 = lVar3 + 1;
      } while (param_2[lVar1] != '\0');
      lVar3 = lVar3 + 2;
    }
    lVar3 = FUN_0000ab28(param_1,param_2,lVar3);
    param_1 = (char *)(lVar3 + -1);
  }
  return param_1;
}
