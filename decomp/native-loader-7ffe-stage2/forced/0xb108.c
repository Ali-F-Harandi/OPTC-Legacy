
bool FUN_0000b108(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5,undefined4 *param_6)

{
  long lVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined1 local_1;
  
  local_8 = 0;
  local_c = 0;
  lVar1 = FUN_0000fb68(0x3e,(long)param_1,param_2,0,0,0,0);
  if (lVar1 < 0) {
    local_8 = 0x15;
    local_c = (int)param_4;
  }
  local_1 = lVar1 >= 0;
  if ((local_1) && (lVar1 = FUN_0000fb68(0x3f,(long)param_1,param_3,param_4,0,0,0), lVar1 < 0)) {
    local_1 = false;
    local_8 = 0x1a;
    local_c = (int)param_4;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = local_8;
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = local_c;
  }
  return local_1;
}


