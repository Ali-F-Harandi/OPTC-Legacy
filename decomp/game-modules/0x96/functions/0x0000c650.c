
void FUN_0000c650(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48 [8];
  long local_8;
  
  local_8 = *(long *)PTR_DAT_00029e38;
  if (param_1 != 0) {
    local_a0 = 0x647494dc;
    local_9c = 0x84d4;
    uVar2 = FUN_000117fc(&local_a0,8);
    local_98 = 0x54c494dc;
    local_94 = 0x5c7c6c;
    lVar10 = 0;
    uVar3 = FUN_000117fc(&local_98,8);
    local_90 = 0x1c5494dc;
    local_8c = 0x94;
    uVar4 = FUN_000117fc(&local_90,8);
    local_88 = 0x84d494dc;
    local_84 = 0xc45c84;
    uVar5 = FUN_000117fc(&local_88,8);
    local_80 = 0xc4e494dc;
    local_7c = 0x64dc;
    uVar6 = FUN_000117fc(&local_80,8);
    local_78 = 0x4c3c94dc;
    local_74 = 0x8c34;
    uVar7 = FUN_000117fc(&local_78,8);
    local_70 = 0x9cf494dc;
    local_6c = 0xdc5ccc5c;
    local_68 = 0x64f4cc5c;
    local_64 = 0x5cd4bc;
    uVar8 = FUN_000117fc(&local_70,0x10);
    local_60 = 0x3cf494dc;
    local_5c = 0x74a43c8c;
    local_58 = 0x9cbcfcdc;
    local_54 = 0xbcf4d48c;
    local_50 = 0x24ccac3c;
    local_4c = 0;
    uVar9 = FUN_000117fc(&local_60,0x18);
    local_48[2] = uVar4;
    local_48[7] = uVar9;
    local_48[0] = uVar2;
    local_48[1] = uVar3;
    local_48[3] = uVar5;
    local_48[4] = uVar6;
    local_48[5] = uVar7;
    local_48[6] = uVar8;
    do {
      iVar1 = FUN_00010b64(*(undefined8 *)((long)local_48 + lVar10),param_1);
      if (iVar1 == 0) {
        param_1 = 1;
        goto LAB_0000c840;
      }
      lVar10 = lVar10 + 8;
    } while (lVar10 != 0x40);
    param_1 = 0;
LAB_0000c840:
    FUN_00011844(uVar2);
    FUN_00011844(uVar3);
    FUN_00011844(uVar4);
    FUN_00011844(uVar5);
    FUN_00011844(uVar6);
    FUN_00011844(uVar7);
    FUN_00011844(uVar8);
    FUN_00011844(uVar9);
  }
  if (local_8 == *(long *)PTR_DAT_00029e38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0001249c(param_1 & 0xffffffff);
}
