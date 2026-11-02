
void FUN_000054f4(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined1 local_18;
  undefined1 local_17;
  long local_8;
  
  local_8 = *(long *)PTR_DAT_0001cfe0;
  FUN_00008020(param_3,0,param_4);
  if (DAT_00023550 == '\0') {
    DAT_00023550 = FUN_00006098(&DAT_00023558);
  }
  lVar1 = FUN_000061d8(&DAT_00023558,param_1);
  if (lVar1 == 0) {
    FUN_000086e4(param_3,param_2,param_4 + -1);
  }
  else {
    FUN_000086e4(param_3,lVar1,param_4 + -1);
  }
  if (param_5 != 0) {
    lVar2 = FUN_00008214(param_3);
    if (*(char *)(param_3 + lVar2 + -1) != '/') {
      local_17 = 0;
      local_18 = 0x2f;
      FUN_00008720(param_3,&local_18);
    }
    FUN_00008720(param_3,param_5);
  }
  if (local_8 == *(long *)PTR_DAT_0001cfe0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00009bac(lVar1 != 0);
}
