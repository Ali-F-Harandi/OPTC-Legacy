
void FUN_00009c98(ulong param_1)

{
  undefined *puVar1;
  ulong local_28 [5];
  
  puVar1 = PTR_DAT_0001cfe0;
  local_28[0] = param_1 & 0xffffffff;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  local_28[4] = *(ulong *)PTR_DAT_0001cfe0;
  FUN_00009be8(0x65,local_28,local_28 + 2,0,0,0,0);
  if (local_28[4] == *(long *)puVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00009bac(local_28[2] & 0xffffffff);
}
