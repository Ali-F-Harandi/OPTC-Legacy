
void FUN_00005b9c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = *(long *)PTR_DAT_0001cfe0;
  if (DAT_00023568 == Reset) {
    local_20 = 0xccdcac9c;
    local_1c = 0x745c8e;
    uVar3 = FUN_000091ec(&local_20,8);
    lVar4 = thunk_FUN_00001400(uVar3,4);
    if (lVar4 == 0) {
      uVar2 = FUN_00005d78();
      uVar6 = thunk_FUN_00001400();
      cVar1 = FUN_00009700(0,0,uVar2,5,0x36,1,1,0,uVar6,0);
      FUN_00009234(uVar3);
      if (cVar1 != '\0') goto LAB_00005c58;
    }
    else {
      FUN_00009234(uVar3);
LAB_00005c58:
      local_10 = 0xbcb4fc34;
      local_20 = 0x1c54fc05;
      local_1c = 0x7cc45464;
      local_18 = 0x6c5c7405;
      local_14 = 0x445ccc7c;
      local_c = 0x5c;
      uVar3 = FUN_000091ec(&local_20,0x18);
      pcVar5 = (code *)thunk_FUN_00001400(lVar4,uVar3);
      if (pcVar5 == Reset) {
        uVar2 = FUN_00005d78();
        uVar6 = thunk_FUN_00001400();
        FUN_00009700(0,0,uVar2,5,0x44,1,2,0,uVar6,0);
        FUN_00009234(uVar3);
      }
      else {
        FUN_00009234(uVar3);
        DAT_00023568 = pcVar5;
      }
    }
    uVar3 = 0;
    if (DAT_00023568 == Reset) goto LAB_00005be4;
  }
  uVar3 = (*DAT_00023568)(param_1,param_2);
LAB_00005be4:
  if (local_8 != *(long *)PTR_DAT_0001cfe0) {
                    /* WARNING: Subroutine does not return */
    FUN_00009bac(uVar3);
  }
  return;
}
