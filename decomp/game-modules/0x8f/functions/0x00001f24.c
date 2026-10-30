
void FUN_00001f24(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = *(long *)PTR_DAT_0001cfe0;
  local_74 = 0xdc7e4c7c;
  local_80 = 0x647e7c6c;
  local_7c = 0x3ccc7c6c;
  local_78 = 0xcc7e54e4;
  local_70 = 0xacec;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  local_10 = 0;
  uVar3 = FUN_000091ec(&local_80,0x14);
  FUN_00005b9c(uVar3,&local_68);
  FUN_00009234(uVar3);
  puVar4 = (undefined1 *)FUN_000084b8(&local_68,0x2c);
  if (puVar4 != (undefined1 *)0x0) {
    *puVar4 = 0;
  }
  local_80 = 0xbc8464f4;
  local_7c = 0xa4e4f4;
  uVar3 = FUN_000091ec(&local_80,8);
  iVar1 = FUN_000082a4(&local_68,uVar3);
  if (iVar1 == 0) {
LAB_00002058:
    FUN_00009234(uVar3);
    iVar1 = 5;
  }
  else {
    FUN_00009234(uVar3);
    local_80 = 0xbc8464f4;
    local_7c = 0x7ea4e4f4;
    local_78 = 0xe43e4c;
    uVar3 = FUN_000091ec(&local_80,0xc);
    iVar1 = FUN_000082a4(&local_68,uVar3);
    if (iVar1 == 0) goto LAB_00002058;
    FUN_00009234(uVar3);
    local_7c = 0x263c8e5e;
    local_80 = 0x368464f4;
    local_78 = 0xf4;
    uVar3 = FUN_000091ec(&local_80,0xc);
    iVar1 = FUN_000082a4(&local_68,uVar3);
    if (iVar1 == 0) goto LAB_00002058;
    FUN_00009234(uVar3);
    local_80 = 0x3e363c;
    uVar3 = FUN_000091ec(&local_80,4);
    iVar2 = FUN_000082a4(&local_68,uVar3);
    FUN_00009234(uVar3);
    iVar1 = 1;
    if (iVar2 == 0) {
LAB_000021ac:
      if (iVar1 - 1U < 2) {
        iVar1 = 2;
      }
    }
    else {
      local_80 = 0xec3e363c;
      local_7c = 0x564e;
      uVar3 = FUN_000091ec(&local_80,8);
      iVar1 = FUN_000082a4(&local_68,uVar3);
      if (iVar1 == 0) {
        FUN_00009234(uVar3);
        iVar1 = 2;
        goto LAB_000021ac;
      }
      FUN_00009234(uVar3);
      local_7c = 0;
      local_80 = 0x4c6cac94;
      uVar3 = FUN_000091ec(&local_80,8);
      iVar1 = FUN_000082a4(&local_68,uVar3);
      if (iVar1 == 0) {
        FUN_00009234(uVar3);
        iVar1 = 6;
        goto LAB_000021ac;
      }
      FUN_00009234(uVar3);
      local_7c = 0x564e;
      local_80 = 0x4c6cac94;
      uVar3 = FUN_000091ec(&local_80,8);
      iVar1 = FUN_000082a4(&local_68,uVar3);
      if (iVar1 != 0) {
        FUN_00009234(uVar3);
        uVar3 = 0;
        DAT_00020170 = 0;
        goto LAB_00002070;
      }
      FUN_00009234(uVar3);
      iVar1 = 7;
    }
  }
  uVar3 = 1;
  DAT_00020170 = iVar1;
LAB_00002070:
  if (local_8 != *(long *)PTR_DAT_0001cfe0) {
                    /* WARNING: Subroutine does not return */
    FUN_00009bac(uVar3);
  }
  return;
}
