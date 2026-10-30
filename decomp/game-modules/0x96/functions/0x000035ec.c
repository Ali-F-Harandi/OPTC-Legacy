
void FUN_000035ec(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 auStack_88 [128];
  long local_8;
  
  local_8 = *(long *)PTR_DAT_00029e38;
  if (DAT_0002a1d0 == '\0') {
    local_a8 = 0x4c245c86;
    DAT_0002a1d0 = '\x01';
    local_a4 = 0x6e84cc5c;
    local_a0 = 0x6edcac9c;
    local_9c = 0xa4dcac9c;
    local_98 = 0x9ccc4c84;
    local_94 = 0x4c7eac8c;
    local_90 = 0x84;
    uVar2 = FUN_000117fc(&local_a8,0x1c);
    iVar1 = FUN_000124d8(0x4f,0xffffffffffffff9c,uVar2,auStack_88,0,0,0);
    FUN_00011844(uVar2);
    DAT_0002a1d1 = iVar1 == 0;
  }
  if (local_8 != *(long *)PTR_DAT_00029e38) {
                    /* WARNING: Subroutine does not return */
    FUN_0001249c(DAT_0002a1d1);
  }
  return;
}
