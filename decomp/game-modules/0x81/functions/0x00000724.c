
void FUN_00000724(void)

{
  undefined8 uVar1;
  char *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
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
  
  local_8 = *(long *)PTR_DAT_00013ff0;
  local_80 = 0xd47e7c6c;
  local_7c = 0xc48cac54;
  local_78 = 0x54c4448e;
  local_74 = 0x7474ac64;
  local_70 = 0x8ccc5c8e;
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
  local_6c = 0;
  uVar1 = FUN_00002dc8(&local_80,0x18);
  FUN_00001b58(uVar1,&local_68);
  FUN_00002e10(uVar1);
  local_88 = (char *)0x0;
  uVar1 = FUN_00002b60(&local_68,&local_88,10);
  DAT_00014010 = (undefined4)uVar1;
  if (*local_88 != '\0') {
    DAT_00014010 = 0;
    uVar1 = 0;
  }
  if (local_8 == *(long *)PTR_DAT_00013ff0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00003310(uVar1);
}
