
/* WARNING: Type propagation algorithm not settling */

void FUN_00008e24(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_e4 [4];
  long local_e0;
  long local_d8 [2];
  undefined1 auStack_c8 [64];
  undefined1 auStack_88 [48];
  int local_58;
  long local_8;
  
  local_8 = *(long *)PTR_DAT_00029e38;
  iVar3 = FUN_000124d8(0x4f,0xffffffffffffff9c,param_1,auStack_88,0,0,0);
  if (iVar3 == 0) {
LAB_00008e90:
    DAT_0002a664 = 0;
    bVar1 = true;
    DAT_0002a660 = DAT_0002a664;
    iVar3 = FUN_00009e94(param_1,auStack_c8);
    if (iVar3 != 0) {
      FUN_000124d8(0x4f,0xffffffffffffff9c,param_1,auStack_88,0,0,0);
      uVar7 = local_58 << 0x10;
      uVar8 = DAT_0002a664 & 0xffff;
      uVar5 = FUN_0000aa0c();
      cVar2 = FUN_00012354(0,0,uVar5,1,0x43,6,0xd,uVar8 | uVar7,param_1,0);
      if (cVar2 == '\0') goto LAB_00008f9c;
      bVar1 = false;
    }
    lVar6 = FUN_00009f24(auStack_c8,param_2);
    if (lVar6 == 0) {
      FUN_000124d8(0x4f,0xffffffffffffff9c,param_1,auStack_88,0,0,0);
      uVar7 = local_58 << 0x10;
      uVar8 = DAT_0002a664 & 0xffff;
      uVar5 = FUN_0000aa0c();
      cVar2 = FUN_00012354(0,0,uVar5,1,0x53,6,0xe,uVar8 | uVar7,param_2,0);
      local_e0 = 0;
      if (cVar2 == '\0') {
        cVar2 = '\0';
        local_d8[0] = local_e0;
        goto LAB_00008f08;
      }
    }
    local_d8[0] = 0;
    local_d8[1] = 0;
    local_e0 = local_d8[0];
    iVar3 = FUN_0000a024(auStack_c8,lVar6,auStack_e4,&local_e0,local_d8,local_d8 + 1,0,0);
    if (iVar3 != 0) {
      FUN_000124d8(0x4f,0xffffffffffffff9c,param_1,auStack_88,0,0,0);
      uVar7 = DAT_0002a664 & 0xffff;
      uVar5 = FUN_0000aa0c();
      cVar2 = FUN_00012354(0,0,uVar5,1,0x65,6,0xf,uVar7 | local_58 << 0x10,param_2,0);
      if (cVar2 == '\0') goto LAB_00008f08;
    }
    cVar2 = '\x01';
    if ((local_e0 != 0) && (local_e0 == local_d8[0])) {
      *param_3 = 0;
    }
  }
  else {
    uVar5 = FUN_00010ad4(param_1);
    uVar4 = FUN_0000aa0c();
    cVar2 = FUN_00012354(0,0,uVar4,1,0x30,1,0xc,uVar5,param_1,0);
    DAT_0002a660 = 0;
    DAT_0002a664 = 0;
    if (cVar2 != '\0') goto LAB_00008e90;
LAB_00008f9c:
    local_e0 = 0;
    bVar1 = false;
    local_d8[0] = 0;
    cVar2 = '\0';
  }
LAB_00008f08:
  if (bVar1) {
    FUN_00009990(auStack_c8);
  }
  if (local_8 != *(long *)PTR_DAT_00029e38) {
                    /* WARNING: Subroutine does not return */
    FUN_0001249c(cVar2);
  }
  return;
}
