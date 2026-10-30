
ulong FUN_0001175c(ulong param_1,int param_2,char param_3)

{
  uint uVar1;
  
  if ((param_2 - 1U & (uint)param_1) != 0) {
    uVar1 = -param_2;
    if (param_3 == '\0') {
      param_2 = 0;
    }
    param_1 = (ulong)(param_2 + (uVar1 & (uint)param_1));
  }
  return param_1;
}
