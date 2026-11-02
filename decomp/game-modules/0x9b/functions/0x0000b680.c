
ulong FUN_0000b680(ulong param_1,long param_2,char param_3)

{
  ulong uVar1;
  
  if ((param_1 & param_2 - 1U) != 0) {
    uVar1 = -param_2;
    if (param_3 == '\0') {
      param_2 = 0;
    }
    param_1 = param_2 + (param_1 & uVar1);
  }
  return param_1;
}
