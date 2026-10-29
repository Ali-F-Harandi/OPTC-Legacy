
uint FUN_0000f1b4(undefined8 *param_1)

{
  uint local_4;
  
  local_4 = FUN_0000ef94(*param_1);
  if (*(int *)(param_1 + 2) != 0) {
    local_4 = local_4 >> (ulong)(*(uint *)(param_1 + 2) & 0x1f);
  }
  return local_4;
}


