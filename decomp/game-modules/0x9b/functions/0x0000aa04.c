
undefined4 * FUN_0000aa04(undefined4 *param_1,undefined1 param_2,ulong param_3)

{
  undefined4 *local_30;
  ulong local_28;
  undefined4 *local_20;
  ulong local_18;
  
  local_30 = param_1;
  for (local_28 = 0; local_28 != param_3 >> 2; local_28 = local_28 + 1) {
    *local_30 = CONCAT13(param_2,CONCAT12(param_2,CONCAT11(param_2,param_2)));
    local_30 = local_30 + 1;
  }
  local_20 = local_30;
  for (local_18 = 0; local_18 != (param_3 & 3); local_18 = local_18 + 1) {
    *(undefined1 *)local_20 = param_2;
    local_20 = (undefined4 *)((long)local_20 + 1);
  }
  return param_1;
}
