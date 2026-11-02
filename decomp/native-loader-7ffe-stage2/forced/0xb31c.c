
char FUN_0000b31c(undefined8 param_1,long param_2,long *param_3,long *param_4,undefined4 *param_5,
                 undefined4 *param_6)

{
  long local_28;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  long local_10;
  char local_1;
  
  local_1 = '\x01';
  local_18 = 0;
  local_1c = 0;
  local_10 = 0;
  local_14 = 0xffffffff;
  local_14 = FUN_0000fbc4(param_1,0,0);
  if (local_14 < 0) {
    local_1 = '\0';
    local_18 = 0x44;
  }
  local_28 = 0;
  if (local_1 != '\0') {
    local_1 = FUN_0000b704(local_14,&local_28,&local_18,&local_1c);
  }
  if (local_1 != '\0') {
    local_28 = local_28 - param_2;
    local_10 = FUN_00009944(local_28);
    if (local_10 == 0) {
      local_1 = '\0';
      local_18 = 0x57;
      local_1c = (undefined4)local_28;
    }
  }
  if (local_1 != '\0') {
    local_1 = FUN_0000b108(local_14,param_2,local_10,local_28,&local_18,&local_1c);
  }
  if (local_1 != '\0') {
    if (param_3 != (long *)0x0) {
      *param_3 = local_10;
    }
    if (param_4 != (long *)0x0) {
      *param_4 = local_28;
    }
  }
  if (-1 < local_14) {
    FUN_0000fb68(0x39,(long)local_14,0,0,0,0,0);
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = local_18;
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = local_1c;
  }
  return local_1;
}


