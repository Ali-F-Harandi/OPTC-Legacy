
void FUN_0000610c(undefined8 param_1,undefined1 *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  long local_20 [4];
  
  local_20[3] = *(long *)PTR_DAT_00029e38;
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
  }
  iVar3 = FUN_0000e600(5,0,0,0);
  if ((iVar3 < 0) || (cVar2 = FUN_00005e9c(), cVar2 == '\0')) {
    uVar8 = 0;
  }
  else {
    local_3c = 0x6ca454e4;
    local_40 = 0xdcb4ac64;
    lVar7 = 0;
    local_38 = 0x8c;
    lVar4 = FUN_000117fc(&local_40,0xc);
    local_48 = 0x74b4ac64;
    local_44 = 0x94f4;
    uVar5 = FUN_000117fc(&local_48,8);
    local_30 = 0x64b4ac64;
    local_2c = 0x7cd47c6c;
    local_28 = 0x945cf4;
    uVar6 = FUN_000117fc(&local_30,0xc);
    local_20[0] = lVar4;
    local_20[2] = uVar6;
    local_20[1] = uVar5;
    do {
      iVar3 = FUN_00010b64(param_1,*(undefined8 *)((long)local_20 + lVar7));
      if (iVar3 == 0) {
        FUN_00011844(lVar4);
        FUN_00011844(uVar5);
        FUN_00011844(uVar6);
        thunk_FUN_000027d0();
        uVar8 = thunk_FUN_000027d0(0,param_1);
        lVar7 = thunk_FUN_000027d0();
        bVar1 = lVar7 == 0;
        if (lVar7 != 0) {
          uVar8 = 0;
        }
        goto joined_r0x000062c4;
      }
      lVar7 = lVar7 + 8;
    } while (lVar7 != 0x18);
    uVar8 = 0;
    FUN_00011844(lVar4);
    FUN_00011844(uVar5);
    FUN_00011844(uVar6);
    bVar1 = false;
joined_r0x000062c4:
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = bVar1;
    }
  }
  if (local_20[3] == *(long *)PTR_DAT_00029e38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0001249c(uVar8);
}
