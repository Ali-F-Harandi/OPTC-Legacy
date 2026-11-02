
void FUN_00003b50(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_410;
  undefined4 local_40c;
  undefined1 auStack_408 [1024];
  long local_8;
  
  local_8 = *(long *)PTR_DAT_0001fe30;
  lVar4 = *(long *)(param_3 + 8);
  if (lVar4 == 0) {
    if (*(long *)(param_3 + 0x10) == 0) {
      uVar2 = FUN_00003f28();
      cVar1 = FUN_0000baa8(0,0,uVar2,1,0x51,1,1,0,0,0);
      goto LAB_00003b98;
    }
    cVar1 = FUN_00009c88();
    if (cVar1 != '\0') {
      thunk_FUN_0000aa04(auStack_408,0,0x400);
      cVar1 = FUN_00003b10(auStack_408,0x400);
      if (cVar1 != '\0') {
        local_410 = 0xbe765cd6;
        local_40c = 100;
        uVar3 = FUN_0000b6a8(&local_410,8);
        cVar1 = FUN_00006e74(param_1,param_2,uVar3,auStack_408,*(undefined8 *)(param_3 + 0x10));
        FUN_0000b6f0(uVar3);
      }
      goto LAB_00003b98;
    }
    lVar4 = FUN_0000894c();
  }
  cVar1 = '\x01';
  FUN_0000b05c(param_1,lVar4);
LAB_00003b98:
  if (local_8 == *(long *)PTR_DAT_0001fe30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0000bf54(cVar1);
}
