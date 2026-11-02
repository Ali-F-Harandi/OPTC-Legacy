
void FUN_000093e0(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  uint uVar6;
  undefined1 auStack_c8 [64];
  undefined1 auStack_88 [48];
  int local_58;
  long local_8;
  
  local_8 = *(long *)PTR_DAT_00029e38;
  iVar2 = FUN_000124d8(0x4f,0xffffffffffffff9c,param_1,auStack_88,0,0,0);
  if (iVar2 < 0) {
    uVar3 = FUN_00010ad4(param_1);
    uVar4 = FUN_0000aa0c();
    cVar1 = FUN_00012354(0,0,uVar4,1,0xd2,1,5,uVar3,param_1,0);
    DAT_0002a660 = 0;
    DAT_0002a664 = 0;
    if (cVar1 != '\0') goto LAB_00009448;
LAB_00009594:
    cVar1 = '\0';
  }
  else {
LAB_00009448:
    DAT_0002a664 = 0;
    DAT_0002a660 = 0;
    iVar2 = FUN_00009e94(param_1,auStack_c8);
    if (iVar2 == 0) {
      lVar5 = FUN_00009f24(auStack_c8,param_2);
      if (lVar5 == 0) {
        cVar1 = '\x01';
        FUN_00009990(auStack_c8);
        goto LAB_00009490;
      }
      FUN_00009990(auStack_c8);
    }
    else {
      FUN_000124d8(0x4f,0xffffffffffffff9c,param_1,auStack_88,0,0,0);
      uVar6 = DAT_0002a664 & 0xffff;
      uVar3 = FUN_0000aa0c();
      cVar1 = FUN_00012354(0,0,uVar3,1,0xe5,6,6,uVar6 | local_58 << 0x10,param_1,0);
      if (cVar1 == '\0') goto LAB_00009594;
      lVar5 = FUN_00009f24(auStack_c8,param_2);
      if (lVar5 == 0) goto LAB_00009490;
    }
    cVar1 = '\x01';
    *param_3 = 1;
  }
LAB_00009490:
  if (local_8 != *(long *)PTR_DAT_00029e38) {
                    /* WARNING: Subroutine does not return */
    FUN_0001249c(cVar1);
  }
  return;
}
