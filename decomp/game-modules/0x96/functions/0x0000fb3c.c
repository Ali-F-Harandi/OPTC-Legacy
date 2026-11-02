
void FUN_0000fb3c(undefined8 param_1,long param_2,long *param_3,long *param_4,undefined4 *param_5,
                 undefined4 *param_6)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined4 local_18;
  undefined4 local_14;
  long local_10;
  long local_8;
  
  local_8 = *(long *)PTR_DAT_00029e38;
  local_18 = 0;
  local_14 = 0;
  iVar2 = FUN_00012544(param_1,0,0);
  if (iVar2 < 0) {
    local_10 = 0;
    local_18 = 0x44;
    cVar1 = '\0';
  }
  else {
    local_10 = 0;
    cVar1 = FUN_00010538(iVar2,&local_10,&local_18,&local_14);
    if (cVar1 != '\0') {
      local_10 = local_10 - param_2;
      lVar3 = FUN_0000ef9c();
      if (lVar3 == 0) {
        cVar1 = '\0';
        local_14 = (undefined4)local_10;
        local_18 = 0x57;
      }
      else {
        cVar1 = FUN_0000f98c(iVar2,param_2,lVar3,local_10,&local_18,&local_14);
        if (cVar1 != '\0') {
          if (param_3 != (long *)0x0) {
            *param_3 = lVar3;
          }
          if (param_4 != (long *)0x0) {
            *param_4 = local_10;
          }
        }
      }
    }
    FUN_000124d8(0x39,(long)iVar2,0,0,0,0,0);
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = local_18;
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = local_14;
  }
  if (local_8 == *(long *)PTR_DAT_00029e38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0001249c(cVar1);
}
