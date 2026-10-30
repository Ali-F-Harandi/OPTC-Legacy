
undefined1 FUN_00006500(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (DAT_00023570 == '\0') {
    DAT_00023570 = '\x01';
    FUN_00008144(&DAT_00023578,param_1,0x10);
  }
  else {
    iVar2 = FUN_000064b0(param_1,&DAT_00023578);
    if (iVar2 == 0) {
      uVar3 = FUN_00006838();
      cVar1 = FUN_00009700(0,0,uVar3,0x10,0x65,1,1,0,0,0);
    }
    else {
      if (-1 < iVar2) goto LAB_00006538;
      uVar3 = FUN_00006838();
      cVar1 = FUN_00009700(0,0,uVar3,0x10,0x66,1,2,0,0,0);
    }
    if (cVar1 == '\0') {
      return 0;
    }
  }
LAB_00006538:
  FUN_00008144(&DAT_00023578,param_1,0x10);
  return 1;
}
