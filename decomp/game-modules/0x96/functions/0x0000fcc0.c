
void FUN_0000fcc0(undefined8 param_1,long param_2,long *param_3,long *param_4,undefined4 *param_5,
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
    local_18 = 0x86;
    cVar1 = '\0';
    goto LAB_0000fdc4;
  }
  local_10 = 0;
  cVar1 = FUN_000106e0(iVar2,&local_10,&local_18,&local_14);
  if (local_10 == 0) {
    if (cVar1 != '\0') {
      lVar3 = 0;
joined_r0x0000fe34:
      if (param_3 != (long *)0x0) {
        *param_3 = lVar3;
      }
      cVar1 = '\x01';
      if (param_4 != (long *)0x0) {
        *param_4 = local_10;
      }
    }
LAB_0000fda4:
    FUN_000124d8(0x39,(long)iVar2,0,0,0,0,0);
  }
  else {
    if (cVar1 != '\0') {
      local_10 = local_10 - param_2;
      lVar3 = FUN_0000ef9c();
      if (lVar3 != 0) {
        cVar1 = FUN_0000f98c(iVar2,param_2,lVar3,local_10,&local_18,&local_14);
        if (cVar1 != '\0') goto joined_r0x0000fe34;
        goto LAB_0000fda4;
      }
      local_14 = (undefined4)local_10;
      local_18 = 0x91;
    }
    cVar1 = '\0';
    FUN_000124d8(0x39,(long)iVar2,0,0,0,0,0);
  }
LAB_0000fdc4:
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = local_18;
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = local_14;
  }
  if (local_8 != *(long *)PTR_DAT_00029e38) {
                    /* WARNING: Subroutine does not return */
    FUN_0001249c(cVar1);
  }
  return;
}
