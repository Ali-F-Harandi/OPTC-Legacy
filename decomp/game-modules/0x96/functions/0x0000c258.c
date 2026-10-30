
ulong FUN_0000c258(long param_1,ulong param_2)

{
  if ((*(ulong *)(param_1 + 0x18) != 0) && (*(ulong *)(param_1 + 0x18) <= param_2)) {
    return param_2;
  }
  return *(long *)(param_1 + 0x20) + param_2;
}
