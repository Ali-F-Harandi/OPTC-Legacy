
undefined1 FUN_00002428(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = thunk_FUN_00001400(3,0,0,0,0);
  if (iVar2 < 0) {
    uVar3 = FUN_0000159c();
    cVar1 = FUN_00009700(0,0,uVar3,0x20,0x49,1,1,iVar2,0,0);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  DAT_00020178 = iVar2;
  thunk_FUN_00001400(4,1,0,0,0);
  return 1;
}
