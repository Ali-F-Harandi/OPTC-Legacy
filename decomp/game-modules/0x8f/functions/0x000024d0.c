
void FUN_000024d0(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_88;
  undefined4 local_84;
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
  uint local_10;
  long local_8;
  
  local_8 = *(long *)PTR_DAT_0001cfe0;
  if (DAT_0002017c == '\0') {
    uVar1 = 1;
    DAT_0002017c = '\x01';
    iVar2 = FUN_00006ad8(5,0,0,0);
    if (iVar2 < 0) {
      iVar2 = FUN_00006ad8(4,4,0,0);
      uVar1 = 0;
      if (-1 < iVar2) {
        local_74 = 0x9c8c8694;
        local_88 = 0x4c5ccc7c;
        local_84 = 0x764c5cb4;
        local_80 = 0x76542c64;
        local_7c = 0x348cecdc;
        local_78 = 0x347e9cb4;
        local_70 = 0xec;
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
        local_10 = uVar1;
        uVar3 = FUN_000091ec(&local_88,0x1c);
        FUN_00005b9c(uVar3,&local_68);
        FUN_00009234(uVar3);
        local_84 = 0x4c7e546c;
        local_88 = 0xdcdcac9c;
        local_80 = 0x84;
        uVar3 = FUN_000091ec(&local_88,0xc);
        iVar2 = FUN_000082a4(&local_68,uVar3);
        uVar1 = (uint)(iVar2 == 0);
        FUN_00009234(uVar3);
      }
    }
    DAT_0002017d = (byte)uVar1;
  }
  else {
    uVar1 = (uint)DAT_0002017d;
  }
  if (local_8 != *(long *)PTR_DAT_0001cfe0) {
                    /* WARNING: Subroutine does not return */
    FUN_00009bac(uVar1);
  }
  return;
}
