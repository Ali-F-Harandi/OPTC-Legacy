
undefined8 FUN_00004728(long *param_1,ulong *param_2,long *param_3,byte param_4)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar3 = param_1[4];
  uVar5 = param_1[3];
  if (uVar5 <= uVar3) {
    return 0;
  }
  if (param_2 == (ulong *)0x0) {
    if (param_3 != (long *)0x0) goto LAB_0000474c;
  }
  else {
    *param_2 = 0;
    if (param_3 != (long *)0x0) {
LAB_0000474c:
      *param_3 = 0;
    }
    uVar3 = param_1[4];
    uVar5 = param_1[3];
    if (uVar5 <= uVar3) goto LAB_00004800;
  }
  uVar6 = 0;
  bVar2 = false;
  do {
    uVar4 = (uint)uVar3 & 7;
    lVar1 = (long)(uVar3 << 0x1d) >> 0x20;
    if (bVar2) {
      if (uVar3 < uVar5) {
        uVar4 = (int)(uint)*(byte *)(*param_1 + lVar1) >> uVar4 & 1;
      }
      else {
        uVar4 = 0;
      }
      if (param_4 != uVar4) {
        if (uVar3 != 0) {
          uVar5 = uVar3;
        }
        goto LAB_000047d8;
      }
    }
    else {
      if (uVar3 < uVar5) {
        uVar4 = (int)(uint)*(byte *)(*param_1 + lVar1) >> uVar4 & 1;
      }
      else {
        uVar4 = 0;
      }
      if (param_4 == uVar4) {
        uVar6 = uVar3;
      }
      bVar2 = param_4 == uVar4;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < uVar5);
  if (bVar2) {
LAB_000047d8:
    param_1[4] = uVar5;
    if (param_2 != (ulong *)0x0) {
      *param_2 = uVar6;
    }
    if (param_3 != (long *)0x0) {
      *param_3 = uVar5 - uVar6;
    }
    return 1;
  }
LAB_00004800:
  param_1[4] = uVar5;
  return 0;
}
