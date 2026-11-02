
void FUN_000095a0(undefined8 param_1,undefined8 param_2,ulong *param_3,ulong *param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  ulong local_d0;
  undefined1 auStack_c8 [64];
  undefined1 auStack_88 [48];
  int local_58;
  long local_8;
  
  local_8 = *(long *)PTR_DAT_00029e38;
  iVar3 = FUN_000124d8(0x4f,0xffffffffffffff9c,param_1,auStack_88,0,0,0);
  if (iVar3 == 0) {
LAB_00009614:
    DAT_0002a664 = 0;
    bVar1 = true;
    DAT_0002a660 = DAT_0002a664;
    iVar3 = FUN_00009e94(param_1,auStack_c8);
    if (iVar3 != 0) {
      FUN_000124d8(0x4f,0xffffffffffffff9c,param_1,auStack_88,0,0,0);
      uVar8 = local_58 << 0x10;
      uVar7 = DAT_0002a664 & 0xffff;
      uVar5 = FUN_0000aa0c();
      cVar2 = FUN_00012354(0,0,uVar5,1,0x11e,6,8,uVar7 | uVar8,param_1,0);
      if (cVar2 == '\0') goto LAB_000097a8;
      bVar1 = false;
    }
    lVar6 = FUN_00009f24(auStack_c8,param_2);
    if (lVar6 == 0) {
      FUN_000124d8(0x4f,0xffffffffffffff9c,param_1,auStack_88,0,0,0);
      uVar8 = local_58 << 0x10;
      uVar7 = DAT_0002a664 & 0xffff;
      uVar5 = FUN_0000aa0c();
      cVar2 = FUN_00012354(0,0,uVar5,1,0x12e,6,9,uVar7 | uVar8,param_2,0);
      if (cVar2 == '\0') {
        cVar2 = '\0';
        goto LAB_00009698;
      }
    }
    local_d0 = local_d0 & 0xffffffff00000000;
    iVar3 = FUN_0000a6f8(auStack_c8,lVar6,&local_d0);
    if (iVar3 != 0) {
      FUN_000124d8(0x4f,0xffffffffffffff9c,param_1,auStack_88,0,0,0);
      uVar8 = local_58 << 0x10;
      uVar7 = DAT_0002a664 & 0xffff;
      uVar5 = FUN_0000aa0c();
      cVar2 = FUN_00012354(0,0,uVar5,1,0x13f,6,10,uVar7 | uVar8,param_1,0);
      if (cVar2 == '\0') goto LAB_00009698;
    }
    if (param_3 != (ulong *)0x0) {
      *param_3 = local_d0 & 0xffffffff;
    }
    local_d0 = 0;
    cVar2 = '\x01';
    iVar3 = FUN_0000a7c0(auStack_c8,lVar6,&local_d0);
    if (iVar3 != 0) {
      FUN_000124d8(0x4f,0xffffffffffffff9c,param_1,auStack_88,0,0,0);
      uVar8 = DAT_0002a664 & 0xffff;
      uVar5 = FUN_0000aa0c();
      cVar2 = FUN_00012354(0,0,uVar5,1,0x14f,6,0xb,uVar8 | local_58 << 0x10,param_1,0);
      if (cVar2 == '\0') goto LAB_00009698;
    }
    if (param_4 != (ulong *)0x0) {
      *param_4 = local_d0;
    }
  }
  else {
    uVar5 = FUN_00010ad4(param_1);
    uVar4 = FUN_0000aa0c();
    cVar2 = FUN_00012354(0,0,uVar4,1,0x10b,1,7,uVar5,param_1,0);
    DAT_0002a660 = 0;
    DAT_0002a664 = 0;
    if (cVar2 != '\0') goto LAB_00009614;
LAB_000097a8:
    bVar1 = false;
    cVar2 = '\0';
  }
LAB_00009698:
  if (bVar1) {
    FUN_00009990(auStack_c8);
  }
  if (local_8 != *(long *)PTR_DAT_00029e38) {
                    /* WARNING: Subroutine does not return */
    FUN_0001249c(cVar2);
  }
  return;
}
