
void FUN_00006098(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = *(long *)PTR_DAT_0001cfe0;
  if (param_1 != (undefined8 *)0x0) {
    local_14 = 0x54a4448c;
    local_20 = 0x6c5c7486;
    local_1c = 0xbc547ee4;
    local_18 = 0xbc76c49c;
    local_10 = 0x8484;
    local_30 = 0;
    local_28 = 0;
    uVar2 = FUN_000091ec(&local_20,0x14);
    uVar1 = FUN_00006838();
    FUN_00006990(0,0,uVar1,4,0x3d,uVar2,0,&local_30,&local_28,0);
    FUN_00009234(uVar2);
    *param_1 = local_30;
    param_1[1] = local_28;
  }
  if (local_8 != *(long *)PTR_DAT_0001cfe0) {
                    /* WARNING: Subroutine does not return */
    FUN_00009bac(param_1 != (undefined8 *)0x0);
  }
  return;
}
