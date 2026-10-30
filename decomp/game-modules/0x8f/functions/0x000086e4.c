
void FUN_000086e4(char *param_1,char *param_2,long param_3)

{
  long lVar1;
  
  if ((param_3 != 0) && (*param_1 = *param_2, *param_2 != '\0')) {
    lVar1 = 0;
    do {
      lVar1 = lVar1 + 1;
      if (lVar1 == param_3) {
        return;
      }
      param_1[lVar1] = param_2[lVar1];
    } while (param_2[lVar1] != '\0');
  }
  return;
}
