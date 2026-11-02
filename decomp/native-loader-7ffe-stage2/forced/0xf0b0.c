
void FUN_0000f0b0(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  undefined1 *puVar1;
  int local_c;
  undefined1 *local_8;
  
  local_8 = param_1;
  for (local_c = 0; local_c < param_3; local_c = local_c + 1) {
    *local_8 = *param_2;
    local_8[1] = param_2[1];
    puVar1 = local_8 + 3;
    local_8[2] = param_2[2];
    local_8 = local_8 + 4;
    *puVar1 = param_2[3];
  }
  return;
}


