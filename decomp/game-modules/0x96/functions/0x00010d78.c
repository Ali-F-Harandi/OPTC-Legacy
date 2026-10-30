
char * FUN_00010d78(char *param_1,char param_2)

{
  char *pcVar1;
  long lVar2;
  char *pcVar3;
  
  if (param_1 != (char *)0x0) {
    if (*param_1 != '\0') {
      lVar2 = 0;
      do {
        lVar2 = lVar2 + 1;
      } while (param_1[lVar2] != '\0');
      if (0 < (int)lVar2) {
        if (param_2 == *param_1) {
          return param_1;
        }
        pcVar1 = param_1 + 1;
        while (pcVar3 = pcVar1, pcVar3 != param_1 + (ulong)((int)lVar2 - 1) + 1) {
          pcVar1 = pcVar3 + 1;
          if (*pcVar3 == param_2) {
            return pcVar3;
          }
        }
      }
    }
    param_1 = (char *)0x0;
  }
  return param_1;
}
