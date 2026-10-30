
char * FUN_00002238(char *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  
  if (param_1 == (char *)0x0) {
    return (char *)0x0;
  }
  if (*param_1 == '\0') {
LAB_000022a4:
    pcVar3 = (char *)0x0;
  }
  else {
    lVar4 = 0;
    do {
      lVar4 = lVar4 + 1;
    } while (param_1[lVar4] != '\0');
    pcVar3 = (char *)0x0;
    if (((int)lVar4 != 0) && (iVar2 = (int)lVar4 + -1, -1 < iVar2)) {
      lVar4 = (long)iVar2;
      cVar1 = param_1[lVar4];
      while (pcVar3 = param_1 + lVar4, cVar1 != param_2) {
        iVar2 = iVar2 + -1;
        lVar4 = (long)iVar2;
        if (iVar2 == -1) goto LAB_000022a4;
        cVar1 = param_1[lVar4];
      }
    }
  }
  return pcVar3;
}
