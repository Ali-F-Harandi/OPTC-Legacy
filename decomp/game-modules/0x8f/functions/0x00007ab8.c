
void FUN_00007ab8(undefined8 param_1,long param_2,long *param_3,long *param_4,undefined4 *param_5,
                 undefined4 *param_6)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined4 local_18;
  undefined4 local_14;
  long local_10;
  long local_8;
  
  local_8 = *(long *)PTR_DAT_0001cfe0;
  local_18 = 0;
  local_14 = 0;
  iVar2 = FUN_00009c54(param_1,0,0);
  if (iVar2 < 0) {
    local_10 = 0;
    local_18 = 0x86;
    cVar1 = '\0';
    goto LAB_00007bbc;
  }
  local_10 = 0;
  cVar1 = FUN_00007e20(iVar2,&local_10,&local_18,&local_14);
  if (local_10 == 0) {
    if (cVar1 != '\0') {
      lVar3 = 0;
joined_r0x00007c2c:
      if (param_3 != (long *)0x0) {
        *param_3 = lVar3;
      }
      cVar1 = '\x01';
      if (param_4 != (long *)0x0) {
        *param_4 = local_10;
      }
    }
LAB_00007b9c:
    FUN_00009be8(0x39,(long)iVar2,0,0,0,0,0);
  }
  else {
    if (cVar1 != '\0') {
      local_10 = local_10 - param_2;
      lVar3 = FUN_00006d94();
      if (lVar3 != 0) {
        cVar1 = FUN_00007784(iVar2,param_2,lVar3,local_10,&local_18,&local_14);
        if (cVar1 != '\0') goto joined_r0x00007c2c;
        goto LAB_00007b9c;
      }
      local_14 = (undefined4)local_10;
      local_18 = 0x91;
    }
    cVar1 = '\0';
    FUN_00009be8(0x39,(long)iVar2,0,0,0,0,0);
  }
LAB_00007bbc:
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = local_18;
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = local_14;
  }
  if (local_8 != *(long *)PTR_DAT_0001cfe0) {
                    /* WARNING: Subroutine does not return */
    FUN_00009bac(cVar1);
  }
  return;
}
