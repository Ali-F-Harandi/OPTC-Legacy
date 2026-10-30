
void FUN_000075f0(undefined8 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  puVar1 = PTR_DAT_0001cfe0;
  local_c = 0x5474f4;
  local_8 = *(long *)PTR_DAT_0001cfe0;
  local_18 = 0x6c5c7486;
  local_14 = 0xbc547ee4;
  local_10 = 0x7c76c49c;
  uVar3 = FUN_000091ec(&local_18,0x10);
  uVar2 = FUN_0000749c(param_1,uVar3);
  FUN_00009234(uVar3);
  if (local_8 == *(long *)puVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00009bac(uVar2);
}
