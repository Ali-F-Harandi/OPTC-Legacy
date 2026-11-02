
undefined1 * FUN_00010a04(undefined1 *param_1,undefined1 *param_2,ulong param_3)

{
  undefined1 *local_18;
  undefined1 *local_10;
  ulong local_8;
  
  local_18 = param_1;
  local_10 = param_2;
  for (local_8 = 0; local_8 < param_3; local_8 = local_8 + 1) {
    *local_18 = *local_10;
    local_18 = local_18 + 1;
    local_10 = local_10 + 1;
  }
  return param_1;
}
