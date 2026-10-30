
void FUN_00004a40(undefined8 param_1,ulong param_2,int param_3,long param_4,undefined8 param_5,
                 undefined8 param_6,undefined4 param_7)

{
  char cVar1;
  undefined1 uVar2;
  long local_530;
  undefined8 local_528;
  undefined1 auStack_520 [1304];
  long local_8;
  
  uVar2 = 1;
  local_8 = *(long *)PTR_DAT_0001fe30;
  if (param_3 == 0) goto LAB_00004a7c;
  local_530 = 0;
  local_528 = 0;
  cVar1 = FUN_000072b0(DAT_00020458,param_4 + (param_2 & 0xffffffff),param_3,&local_530,&local_528);
  if (cVar1 == '\0') {
LAB_00004af4:
    uVar2 = 0;
  }
  else {
    cVar1 = FUN_00004c6c(local_530,local_528,auStack_520,param_5,param_6);
    if (cVar1 == '\0') goto LAB_00004af4;
    uVar2 = FUN_00005078(param_1,auStack_520,param_7);
  }
  if (local_530 != 0) {
    FUN_0000a128(local_530,local_528);
  }
LAB_00004a7c:
  if (local_8 == *(long *)PTR_DAT_0001fe30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0000bf54(uVar2);
}
