
undefined1 FUN_00005d80(long param_1,ulong param_2,long param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_1 == 0) || (param_3 == 0)) {
    return 0;
  }
  uVar1 = 1;
  iVar2 = thunk_FUN_00001400();
  if (iVar2 < 0) {
    uVar3 = FUN_00006838();
    uVar1 = FUN_00009700(0,0,uVar3,3,0x25,1,1,iVar2,param_3,0);
  }
  if ((ulong)(long)iVar2 < param_2) {
    return uVar1;
  }
  uVar3 = FUN_00006838(uVar1);
  uVar1 = FUN_00009700(0,0,uVar3,3,0x26,1,2,param_2 & 0xffffffff,param_3,0);
  return uVar1;
}
