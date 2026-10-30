
void FUN_0000c8c8(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_18 = 0x4cdcfc05;
  local_14 = 0x4454fc64;
  local_8 = *(long *)PTR_DAT_00029e38;
  local_10 = 0x4c64f4;
  uVar3 = FUN_000117fc(&local_18,0xc);
  local_20 = 0xdccccc05;
  local_1c = 0xec5c;
  uVar4 = FUN_000117fc(&local_20,8);
  iVar2 = FUN_00010b64(uVar3,param_1);
  if (iVar2 == 0) {
    bVar1 = true;
  }
  else {
    iVar2 = FUN_00010b64(uVar4,param_1);
    bVar1 = iVar2 == 0;
  }
  FUN_00011844(uVar3);
  FUN_00011844(uVar4);
  if (local_8 == *(long *)PTR_DAT_00029e38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0001249c(bVar1);
}
