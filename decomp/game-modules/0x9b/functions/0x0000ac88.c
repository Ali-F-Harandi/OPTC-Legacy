
int FUN_0000ac88(byte *param_1,byte *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_1 == (byte *)0x0) {
    if (param_2 == (byte *)0x0) {
      return (int)param_2;
    }
    uVar3 = 0;
  }
  else if (*param_1 == 0) {
    if (param_2 == (byte *)0x0) {
      return (int)param_2;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    do {
      uVar3 = uVar3 + 1;
    } while (param_1[uVar3] != 0);
    if (param_2 == (byte *)0x0) {
      uVar2 = 0;
      goto LAB_0000acc0;
    }
  }
  if (*param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    do {
      uVar2 = uVar2 + 1;
    } while (param_2[uVar2] != 0);
  }
LAB_0000acc0:
  if (uVar2 < uVar3) {
    uVar2 = uVar3;
  }
  if (uVar2 == 0) {
    return 0;
  }
  iVar1 = (uint)*param_1 - (uint)*param_2;
  if (iVar1 != 0) {
    return iVar1;
  }
  if ((*param_1 != 0) && (*param_2 != 0)) {
    uVar3 = 0;
    while (uVar3 = uVar3 + 1, uVar3 != uVar2) {
      iVar1 = (uint)param_1[uVar3] - (uint)param_2[uVar3];
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_1[uVar3] == 0) {
        return 0;
      }
      if (param_2[uVar3] == 0) {
        return 0;
      }
    }
  }
  return 0;
}
