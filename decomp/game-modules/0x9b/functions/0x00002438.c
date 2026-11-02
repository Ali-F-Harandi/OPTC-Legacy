
void FUN_00002438(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 local_e78 [2];
  undefined1 auStack_e68 [32];
  undefined1 auStack_e48 [32];
  undefined8 local_e28;
  undefined1 auStack_930 [1320];
  undefined1 local_408 [1024];
  long local_8;
  
  local_8 = *(long *)PTR_DAT_0001fe30;
  local_e78[0] = param_1;
  cVar1 = FUN_00003970();
  local_408[0] = 0;
  if (cVar1 == '\0') {
LAB_000024a8:
    FUN_00004dec(auStack_e68);
    thunk_FUN_0000aa04(auStack_e48,0,0x518);
LAB_000024c0:
    iVar2 = FUN_000087f8(0xf,0,0,0);
    if (-1 < iVar2) {
      thunk_FUN_000021f0(0x27);
    }
  }
  else {
    cVar1 = FUN_00009830(local_e78[0],local_408,0x400);
    if ((cVar1 == '\0') || (cVar1 = FUN_00004d80(local_408,auStack_e68), cVar1 == '\0'))
    goto LAB_000024a8;
    cVar1 = FUN_00004f58(auStack_930,param_2,param_3,param_4,0,auStack_e68);
    FUN_00004dec(auStack_e68);
    thunk_FUN_0000aa04(auStack_e48,0,0x518);
    if (cVar1 == '\0') goto LAB_000024c0;
    iVar2 = 0x1000;
    cVar1 = FUN_00006170(local_e78[0],0,auStack_e48,0);
    iVar3 = FUN_000087f8(0xf,0,0,0);
    if ((-1 < iVar3) && (iVar2 = thunk_FUN_000021f0(0x27), iVar2 == -1)) {
      iVar2 = 0x1000;
    }
    if ((((cVar1 != '\0') && (cVar1 = FUN_000022d4(auStack_e48,1,iVar2), cVar1 != '\0')) &&
        (cVar1 = FUN_00002680(auStack_e48,param_8,param_9), cVar1 != '\0')) &&
       ((cVar1 = FUN_00004b54(0,auStack_930,param_5,param_6,param_7,local_e78,0,0x10b),
        cVar1 != '\0' && (cVar1 = FUN_000031b4(local_e28), cVar1 != '\0')))) {
      cVar1 = FUN_00002838(auStack_e48,iVar2);
      if (cVar1 != '\0') {
        cVar1 = FUN_000022d4(auStack_e48,0,iVar2);
      }
      goto LAB_000024e4;
    }
  }
  cVar1 = '\0';
LAB_000024e4:
  FUN_000039fc();
  if (local_8 != *(long *)PTR_DAT_0001fe30) {
                    /* WARNING: Subroutine does not return */
    FUN_0000bf54(cVar1);
  }
  return;
}
