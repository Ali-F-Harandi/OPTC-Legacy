
byte * FUN_00008594(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = (int)param_2;
  iVar4 = iVar6;
  if (param_1 == (byte *)0x0) {
    if (param_2 == (byte *)0x0) goto LAB_000085dc;
    uVar2 = 0;
LAB_000085b4:
    uVar5 = (ulong)*param_2;
    if (*param_2 != 0) {
      uVar5 = 0;
      do {
        uVar5 = uVar5 + 1;
      } while (param_2[uVar5] != 0);
    }
  }
  else {
    uVar2 = (ulong)*param_1;
    if (*param_1 == 0) {
      if (param_2 == (byte *)0x0) goto LAB_000085dc;
      goto LAB_000085b4;
    }
    uVar2 = 0;
    do {
      uVar2 = uVar2 + 1;
    } while (param_1[uVar2] != 0);
    if (param_2 != (byte *)0x0) goto LAB_000085b4;
    uVar5 = 0;
  }
  iVar4 = (int)uVar5;
  if ((int)uVar2 < iVar4) {
    return (byte *)0x0;
  }
  iVar6 = (int)uVar2 - iVar4;
  if (iVar6 < 0) {
    return (byte *)0x0;
  }
LAB_000085dc:
  iVar7 = 0;
  do {
    pbVar1 = param_1 + iVar7;
    if ((long)iVar4 == 0) {
      return pbVar1;
    }
    if (*param_2 == param_1[iVar7]) {
      if (*param_2 == 0) {
        return pbVar1;
      }
      lVar3 = 0;
      while( true ) {
        lVar3 = lVar3 + 1;
        if (iVar4 == lVar3) {
          return pbVar1;
        }
        if (param_2[lVar3] != pbVar1[lVar3]) break;
        if (param_2[lVar3] == 0) {
          return pbVar1;
        }
      }
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 <= iVar6);
  return (byte *)0x0;
}
