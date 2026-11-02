
long FUN_00008c64(long param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = *param_2;
  pcVar2 = param_2;
  while (cVar1 != '\0') {
    if ((cVar1 == '\t') || (cVar1 == ' ')) goto LAB_00008c9c;
    pcVar2 = pcVar2 + 1;
    cVar1 = *pcVar2;
  }
  pcVar2 = (char *)0x0;
LAB_00008c9c:
  FUN_000086e4(param_1,param_2,(long)pcVar2 - (long)param_2);
  *(undefined1 *)(param_1 + ((long)pcVar2 - (long)param_2)) = 0;
  return param_1;
}
