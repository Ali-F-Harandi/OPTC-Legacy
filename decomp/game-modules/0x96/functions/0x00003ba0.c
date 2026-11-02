
void FUN_00003ba0(undefined1 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 auStack_28 [16];
  undefined1 local_18;
  undefined1 local_17;
  long local_8;
  
  local_8 = *(long *)PTR_DAT_00029e38;
  if (DAT_0002a1e0 == '\0') {
    uVar2 = FUN_000029ec();
    cVar1 = FUN_00012354(0,0,uVar2,4,0x58,1,1,0,0,0);
    if (cVar1 == '\0') goto LAB_00003c18;
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = &DAT_0002a1f0;
  }
  uVar2 = DAT_0002a1e4;
  local_2c = 0x7eec;
  local_30 = 0x9c8c7ef6;
  uVar3 = FUN_000117fc(&local_30,8);
  uVar4 = FUN_0000d120();
  FUN_00011f30(uVar2,auStack_28);
  *param_1 = 0;
  local_18 = 0x2f;
  local_17 = 0;
  FUN_00010fe0(param_1,uVar4);
  FUN_00010fe0(param_1,uVar3);
  FUN_00010fe0(param_1,auStack_28);
  FUN_00010fe0(param_1,&local_18);
  FUN_00010fe0(param_1,puVar5);
  FUN_00011844(uVar3);
  cVar1 = '\x01';
LAB_00003c18:
  if (local_8 == *(long *)PTR_DAT_00029e38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0001249c(cVar1);
}
