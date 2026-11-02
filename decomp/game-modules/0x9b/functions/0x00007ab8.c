
void FUN_00007ab8(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,uint param_5
                 )

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_28;
  uint local_20;
  undefined8 local_18;
  uint local_10;
  long local_8;
  
  local_8 = *(long *)PTR_DAT_0001fe30;
  if (param_3 == param_5) {
    uVar1 = 1;
    FUN_0000ab28(param_2,param_4,param_3);
  }
  else {
    uVar1 = 1;
    local_28 = param_4;
    local_20 = param_5;
    local_18 = param_2;
    local_10 = param_3;
    iVar2 = FUN_00007ba0(param_1,&local_28,&local_18);
    if (iVar2 == 0) {
      uVar3 = FUN_00007ab0();
      uVar1 = FUN_0000baa8(0,0,uVar3,2,0x37,1,1,param_5 & 0xffff | param_3 << 0x10,0,0);
    }
  }
  if (local_8 == *(long *)PTR_DAT_0001fe30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0000bf54(uVar1);
}
