
bool FUN_00008ce4(char *param_1,ulong param_2)

{
  bool local_1;
  
  if (param_1 == (char *)0x0) {
    local_1 = false;
  }
  else if (param_2 < 0x34) {
    local_1 = false;
  }
  else {
    local_1 = *param_1 == '\x7f';
    if ((local_1) && (param_1[1] != 'E')) {
      local_1 = false;
    }
    if ((local_1 != false) && (param_1[2] != 'L')) {
      local_1 = false;
    }
    if ((local_1 != false) && (param_1[3] != 'F')) {
      local_1 = false;
    }
  }
  return local_1;
}


