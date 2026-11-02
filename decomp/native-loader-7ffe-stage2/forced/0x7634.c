
ulong FUN_00007634(long param_1,long param_2)

{
  int *piVar1;
  ushort local_a;
  ulong local_8;
  
  local_8 = 0;
  for (local_a = 0; local_a < *(ushort *)(param_1 + 0x38); local_a = local_a + 1) {
    piVar1 = (int *)(param_2 + (ulong)local_a * 0x38);
    if (((*piVar1 == 1) && (*(long *)(piVar1 + 8) != 0)) &&
       (local_8 <= (ulong)(*(long *)(piVar1 + 2) + *(long *)(piVar1 + 8)))) {
      local_8 = *(long *)(piVar1 + 2) + *(long *)(piVar1 + 8);
    }
  }
  return local_8;
}


