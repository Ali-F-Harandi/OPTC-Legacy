
ulong FUN_00008450(char *param_1,char *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 == (char *)0x0) {
    uVar1 = 0;
  }
  else if (*param_1 == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    do {
      uVar1 = uVar1 + 1;
    } while (param_1[uVar1] != '\0');
  }
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    do {
      uVar2 = uVar2 + 1;
    } while (param_2[uVar2] != '\0');
    if (uVar1 < uVar2) {
      return (ulong)(uint)((int)uVar1 - (int)uVar2);
    }
  }
  uVar1 = FUN_000082a4(param_1 + (uVar1 - uVar2));
  return uVar1;
}
