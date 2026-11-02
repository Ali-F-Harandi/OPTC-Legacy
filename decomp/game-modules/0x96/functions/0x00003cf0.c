
void FUN_00003cf0(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_430;
  undefined4 local_42c;
  undefined1 auStack_428 [16];
  undefined1 local_418;
  undefined1 local_417;
  undefined1 local_408 [1024];
  long local_8;
  
  local_8 = *(long *)PTR_DAT_00029e38;
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    if (DAT_0002a1e0 == '\0') {
      uVar3 = FUN_000029ec();
      FUN_00012354(0,0,uVar3,4,0x58,1,1,0,0,0);
    }
    uVar3 = DAT_0002a1e4;
    local_42c = 0x7eec;
    local_430 = 0x9c8c7ef6;
    uVar4 = FUN_000117fc(&local_430,8);
    uVar5 = FUN_0000d120();
    FUN_00011f30(uVar3,auStack_428);
    local_418 = 0x2f;
    local_417 = 0;
    local_408[0] = 0;
    FUN_00010fe0(local_408,uVar5);
    FUN_00010fe0(local_408,uVar4);
    FUN_00010fe0(local_408,auStack_428);
    FUN_00010fe0(local_408,&local_418);
    FUN_00011844(uVar4);
    uVar4 = FUN_00010ad4(local_408);
    iVar2 = FUN_00010b04(param_1,local_408,uVar4);
    bVar1 = iVar2 == 0;
  }
  if (local_8 == *(long *)PTR_DAT_00029e38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0001249c(bVar1);
}
