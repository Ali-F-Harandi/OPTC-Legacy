
void FUN_0000edd8(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  ulong local_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined1 auStack_408 [1024];
  long local_8;
  
  local_508 = 0;
  uStack_500 = 0;
  local_8 = *(long *)PTR_DAT_00029e38;
  local_4f8 = 0;
  uStack_4f0 = 0;
  local_4e8 = 0;
  uStack_4e0 = 0;
  local_4d8 = 0;
  uStack_4d0 = 0;
  local_4c8 = 0;
  uStack_4c0 = 0;
  local_4b8 = 0;
  uStack_4b0 = 0;
  local_4a8 = 0;
  local_4a0 = 0;
  local_498 = 0;
  uStack_490 = 0;
  piVar3 = (int *)thunk_FUN_000027d0();
  *piVar3 = 0;
  iVar1 = FUN_000124d8(0x4f,0xffffffffffffff9c,param_1,&local_508,0,0,0);
  if (iVar1 == 0) {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = local_4a0;
    }
LAB_0000ee68:
    uVar4 = 1;
  }
  else {
    if ((*piVar3 == 0xd) && (iVar1 < 0)) {
      thunk_FUN_000108e0(auStack_408,0,0x400);
      FUN_00010f38(auStack_408,param_1);
      lVar5 = FUN_00010ad4(auStack_408);
      if ((lVar5 != 0) && (auStack_408[lVar5 + -1] == '/')) {
        auStack_408[lVar5 + -1] = 0;
      }
      puVar6 = (undefined1 *)FUN_00010ddc(auStack_408,0x2f);
      if (puVar6 != (undefined1 *)0x0) {
        *puVar6 = 0;
      }
      local_488 = 0;
      uStack_480 = 0;
      local_478 = 0;
      local_470 = 0;
      local_468 = 0;
      uStack_460 = 0;
      local_458 = 0;
      uStack_450 = 0;
      local_448 = 0;
      uStack_440 = 0;
      local_438 = 0;
      uStack_430 = 0;
      local_428 = 0;
      uStack_420 = 0;
      local_418 = 0;
      uStack_410 = 0;
      iVar1 = FUN_000124d8(0x4f,0xffffffffffffff9c,auStack_408,&local_488,0,0,0);
      if (iVar1 == 0) {
        if ((local_478 & 1) == 0) {
          iVar1 = (int)local_470;
          iVar2 = thunk_FUN_000027d0();
          if ((iVar1 != iVar2) || (((uint)local_478 >> 6 & 1) == 0)) {
            iVar1 = local_470._4_4_;
            iVar2 = thunk_FUN_000027d0();
            if (iVar1 != iVar2) goto LAB_0000ef54;
            if (((uint)local_478 >> 3 & 1) == 0) {
              uVar4 = 0;
              goto LAB_0000ee6c;
            }
          }
        }
        goto LAB_0000ee68;
      }
    }
LAB_0000ef54:
    uVar4 = 0;
  }
LAB_0000ee6c:
  if (local_8 != *(long *)PTR_DAT_00029e38) {
                    /* WARNING: Subroutine does not return */
    FUN_0001249c(uVar4);
  }
  return;
}
