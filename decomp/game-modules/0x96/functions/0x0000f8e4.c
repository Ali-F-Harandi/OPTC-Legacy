
void FUN_0000f8e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  puVar1 = PTR_DAT_00029e38;
  local_18 = 0x6c5c7486;
  local_8 = *(long *)PTR_DAT_00029e38;
  local_14 = 0xbc547ee4;
  local_10 = 0x7c76c49c;
  local_c = 0x5474f4;
  uVar3 = FUN_000117fc(&local_18,0x10);
  uVar2 = FUN_0000f19c(param_1,uVar3,param_2);
  FUN_00011844(uVar3);
  if (local_8 == *(long *)puVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0001249c(uVar2);
}
