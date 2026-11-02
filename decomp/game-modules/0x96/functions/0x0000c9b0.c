
void FUN_0000c9b0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
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
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38 [6];
  long local_8;
  
  local_b4 = 0x74846c;
  local_8 = *(long *)PTR_DAT_00029e38;
  lVar8 = 0;
  local_b8 = 0x54c4fc05;
  uVar2 = FUN_000117fc(&local_b8,8);
  local_70 = 0xbcb4fc34;
  local_80 = 0x1c54fc05;
  local_7c = 0x7cc45464;
  local_78 = 0x6c5c7405;
  local_74 = 0x445ccc7c;
  local_6c = 0x5c;
  uVar3 = FUN_000117fc(&local_80,0x18);
  local_68 = 0x74e4fc05;
  local_64 = 0x9c7464dc;
  local_60 = 0x6c8cfcdc;
  local_5c = 0x4ce4fcc4;
  local_58 = 0x445ccc64;
  local_54 = 0;
  uVar4 = FUN_000117fc(&local_68,0x18);
  local_b0 = 0x74e4fc05;
  local_ac = 0x9c7464dc;
  local_a8 = 0x6c8cfcdc;
  local_a4 = 0x546cfcc4;
  local_a0 = 0x4c84b4;
  uVar5 = FUN_000117fc(&local_b0,0x14);
  local_50 = 0x74e4fc05;
  local_4c = 0x9c7464dc;
  local_48 = 0x6c8cfcdc;
  local_44 = 0x643cfcc4;
  local_40 = 0x447cac6c;
  local_3c = 0;
  uVar6 = FUN_000117fc(&local_50,0x18);
  local_98 = 0x74e4fc05;
  local_94 = 0x9c7464dc;
  local_90 = 0x6c8cfcdc;
  local_8c = 0x5434fcc4;
  local_88 = 0xc454b4;
  uVar7 = FUN_000117fc(&local_98,0x14);
  local_38[0] = uVar2;
  local_38[5] = uVar7;
  local_38[1] = uVar3;
  local_38[2] = uVar4;
  local_38[3] = uVar5;
  local_38[4] = uVar6;
  do {
    iVar1 = FUN_00010b64(*(undefined8 *)((long)local_38 + lVar8),param_1);
    if (iVar1 == 0) {
      uVar9 = 1;
      goto LAB_0000cbd4;
    }
    lVar8 = lVar8 + 8;
  } while (lVar8 != 0x30);
  uVar9 = 0;
LAB_0000cbd4:
  FUN_00011844(uVar2);
  FUN_00011844(uVar3);
  FUN_00011844(uVar4);
  FUN_00011844(uVar5);
  FUN_00011844(uVar6);
  FUN_00011844(uVar7);
  if (local_8 == *(long *)PTR_DAT_00029e38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0001249c(uVar9);
}
