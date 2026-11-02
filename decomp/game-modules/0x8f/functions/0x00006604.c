
undefined1 FUN_00006604(long *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = thunk_FUN_00001400(4,param_1);
  if (iVar3 != 0) {
    uVar4 = FUN_00006838();
    cVar1 = FUN_00009700(0,0,uVar4,0x10,0x81,1,3,0,0,0);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  if ((*param_1 == 0) && (param_1[1] == 0)) {
    uVar4 = FUN_00006838();
    uVar2 = FUN_00009700(0,0,uVar4,0x10,0x85,1,4,0,0,0);
    return uVar2;
  }
  return 1;
}
