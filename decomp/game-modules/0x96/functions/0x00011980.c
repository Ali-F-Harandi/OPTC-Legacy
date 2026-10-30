
void FUN_00011980(int param_1,int *param_2,long param_3,ushort *param_4,byte *param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  int *piVar13;
  undefined4 local_118 [2];
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  int local_c8 [2];
  undefined8 local_c0 [22];
  undefined8 local_10;
  long local_8;
  
  local_8 = *(long *)PTR_DAT_00029e38;
  local_110 = 0x74948454;
  local_10c = 0x7c3c84;
  uVar3 = FUN_000117fc(&local_110,8);
  local_118[0] = 0x3e363c;
  uVar4 = FUN_000117fc(local_118,4);
  local_104 = 0x564e;
  local_108 = 0xec3e363c;
  uVar5 = FUN_000117fc(&local_108,8);
  local_100 = 0xbc8464f4;
  local_fc = 0xa4e4f4;
  uVar6 = FUN_000117fc(&local_100,8);
  local_e8 = 0xbc8464f4;
  local_e4 = 0x7ea4e4f4;
  local_e0 = 0xe43e4c;
  uVar7 = FUN_000117fc(&local_e8,0xc);
  local_d4 = 0x263c8e5e;
  local_d8 = 0x368464f4;
  local_d0 = 0xf4;
  uVar8 = FUN_000117fc(&local_d8,0xc);
  local_f8 = 0x4c6cac94;
  local_f4 = 0;
  uVar9 = FUN_000117fc(&local_f8,8);
  local_ec = 0x564e;
  local_f0 = 0x4c6cac94;
  uVar10 = FUN_000117fc(&local_f0,8);
  local_c0[1] = 0;
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_c0[0xe] = 5;
  local_c0[8] = 3;
  local_c0[0x11] = 6;
  local_c0[2] = 1;
  local_c0[4] = 0x10003;
  local_c0[5] = 2;
  local_c0[7] = 0x2003e;
  local_c0[10] = 0x10028;
  local_c0[0xb] = 4;
  local_c0[0xd] = 0x10028;
  local_c0[0x10] = 0x200b7;
  local_c0[0x13] = 0x10008;
  local_c0[0x14] = 7;
  local_10 = 0x20008;
  local_c0[0] = uVar3;
  local_c0[3] = uVar4;
  local_c0[6] = uVar5;
  local_c0[9] = uVar6;
  local_c0[0xc] = uVar7;
  local_c0[0xf] = uVar8;
  local_c0[0x12] = uVar9;
  local_c0[0x15] = uVar10;
  if (param_1 == 1) {
    if (param_2 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *param_2;
    }
    if (iVar2 == 0) {
      lVar11 = 0;
    }
    else if (iVar2 == 1) {
      lVar11 = 1;
    }
    else if (iVar2 == 2) {
      lVar11 = 2;
    }
    else if (iVar2 == 3) {
      lVar11 = 3;
    }
    else if (iVar2 == 4) {
      lVar11 = 4;
    }
    else if (iVar2 == 5) {
      lVar11 = 5;
    }
    else if (iVar2 == 6) {
      lVar11 = 6;
    }
    else {
      uVar12 = 0;
      lVar11 = 7;
      if (iVar2 != 7) goto LAB_00011c04;
    }
    uVar12 = 1;
    if (param_3 != 0) {
      FUN_00010f38(param_3,local_c0[lVar11 * 3]);
    }
    goto LAB_00011c04;
  }
  if (param_1 == 2) {
    if (param_4 != (ushort *)0x0) {
      param_4 = (ushort *)(ulong)*param_4;
    }
    if (param_5 != (byte *)0x0) {
      param_5 = (byte *)(ulong)*param_5;
    }
    iVar2 = (int)param_4;
    iVar1 = (int)param_5;
    if ((iVar2 == 0) && (iVar1 == 0)) {
      lVar11 = 0;
    }
    else if ((iVar2 == 3) && (iVar1 == 1)) {
      lVar11 = 1;
    }
    else if ((iVar2 == 0x3e) && (iVar1 == 2)) {
      lVar11 = 2;
    }
    else if ((iVar2 == 0x28) && (iVar1 == 1)) {
      lVar11 = 3;
    }
    else if ((iVar2 == 0x28) && (iVar1 == 1)) {
      lVar11 = 4;
    }
    else if ((iVar2 == 0xb7) && (iVar1 == 2)) {
      lVar11 = 5;
    }
    else if ((iVar2 == 8) && (iVar1 == 1)) {
      lVar11 = 6;
    }
    else {
      if (iVar2 != 8) goto LAB_00011ca8;
      iVar2 = 0;
      uVar12 = 0;
      if (iVar1 != 2) goto LAB_00011cb0;
      lVar11 = 7;
    }
    uVar12 = 1;
    iVar2 = local_c8[lVar11 * 6];
  }
  else {
    if (param_1 != 0) {
      uVar12 = 0;
      goto LAB_00011c04;
    }
    iVar2 = 0;
    piVar13 = local_c8;
    do {
      iVar1 = FUN_00010b64(param_3,*(undefined8 *)(piVar13 + 2));
      if (iVar1 == 0) {
        uVar12 = 1;
        iVar2 = local_c8[(long)iVar2 * 6];
        goto LAB_00011cb0;
      }
      iVar2 = iVar2 + 1;
      piVar13 = piVar13 + 6;
    } while (iVar2 != 8);
LAB_00011ca8:
    iVar2 = 0;
    uVar12 = 0;
  }
LAB_00011cb0:
  if (param_2 != (int *)0x0) {
    *param_2 = iVar2;
  }
LAB_00011c04:
  FUN_00011844(uVar3);
  FUN_00011844(uVar4);
  FUN_00011844(uVar5);
  FUN_00011844(uVar6);
  FUN_00011844(uVar7);
  FUN_00011844(uVar8);
  FUN_00011844(uVar9);
  FUN_00011844(uVar10);
  if (local_8 == *(long *)PTR_DAT_00029e38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0001249c(uVar12);
}
