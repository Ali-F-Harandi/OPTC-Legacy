
void FUN_0000cc48(long param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38 [4];
  undefined1 local_18;
  undefined1 local_17;
  char local_16;
  long local_8;
  
  local_8 = *(long *)PTR_DAT_00029e38;
  if (param_1 == 0) {
LAB_0000cdfc:
    bVar1 = false;
  }
  else {
    cVar2 = FUN_0000c650();
    if (cVar2 == '\0') {
      uVar3 = FUN_0000c8c8(param_1);
      if ((uVar3 & 0xff) == 0) {
        local_40 = 0xec4c64f4;
        local_48 = 0x44e4d405;
        lVar9 = 0;
        local_44 = 0x4454fcf4;
        local_3c = 5;
        uVar5 = FUN_000117fc(&local_48,0x10);
        local_78 = 0x44e4d405;
        local_74 = 0x74c4fcf4;
        local_70 = 0xf4fcdc;
        uVar6 = FUN_000117fc(&local_78,0xc);
        local_64 = 0xdc4c5c05;
        local_68 = 0xdc4cecdc;
        local_60 = 0x546c;
        uVar7 = FUN_000117fc(&local_68,0xc);
        local_58 = 0xdc4cecdc;
        local_54 = 0xc47ccc05;
        local_50 = uVar3 & 0xff;
        uVar8 = FUN_000117fc(&local_58,0xc);
        local_38[0] = uVar5;
        local_38[3] = uVar8;
        local_38[1] = uVar6;
        local_38[2] = uVar7;
        do {
          iVar4 = FUN_00010b64(*(undefined8 *)((long)local_38 + lVar9),param_1);
          if (iVar4 == 0) {
            FUN_00011844(uVar5);
            FUN_00011844(uVar6);
            FUN_00011844(uVar7);
            FUN_00011844(uVar8);
            goto LAB_0000cc84;
          }
          lVar9 = lVar9 + 8;
        } while (lVar9 != 0x20);
        FUN_00011844(uVar5);
        FUN_00011844(uVar6);
        FUN_00011844(uVar7);
        FUN_00011844(uVar8);
        cVar2 = FUN_0000c9b0(param_1);
        if (cVar2 == '\0') {
          local_18 = 0x5f;
          local_17 = 0x5f;
          local_16 = cVar2;
          uVar5 = FUN_00010ad4(&local_18);
          iVar4 = FUN_00010b04(param_1,&local_18,uVar5);
          bVar1 = iVar4 == 0;
          goto LAB_0000cc88;
        }
        goto LAB_0000cdfc;
      }
    }
LAB_0000cc84:
    bVar1 = true;
  }
LAB_0000cc88:
  if (local_8 == *(long *)PTR_DAT_00029e38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0001249c(bVar1);
}
