
bool FUN_0000b704(int param_1,long *param_2,undefined4 *param_3,undefined4 *param_4)

{
  long lVar1;
  undefined8 local_18;
  undefined4 local_c;
  undefined4 local_8;
  undefined1 local_1;
  
  local_8 = 0;
  local_18 = 0;
  lVar1 = FUN_0000fb68(0x3e,(long)param_1,0,2,0,0,0);
  if (lVar1 < 0) {
    local_8 = 0x13;
  }
  local_1 = lVar1 >= 0;
  if (local_1) {
    local_18 = lVar1;
  }
  local_c = 0;
  if ((local_1) && (lVar1 = FUN_0000fb68(0x3e,(long)param_1,0,0,0,0,0), lVar1 < 0)) {
    local_1 = false;
    local_8 = 0x1a;
    local_c = (undefined4)local_18;
  }
  if ((local_1 != false) && (param_2 != (long *)0x0)) {
    *param_2 = local_18;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_8;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_c;
  }
  return local_1;
}


