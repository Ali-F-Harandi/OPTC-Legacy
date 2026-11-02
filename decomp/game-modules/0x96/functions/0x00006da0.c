
void FUN_00006da0(char param_1,long param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  long local_10;
  long local_8;
  
  local_8 = *(long *)PTR_DAT_00029e38;
  if (param_1 == '\0') {
    uVar3 = *(undefined8 *)(param_2 + 0x98);
    iVar2 = *(int *)(param_2 + 0xa0);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x88);
    iVar2 = *(int *)(param_2 + 0x90);
  }
  if (iVar2 < 0x640) {
    FUN_000108e0(&local_30,0,0x28);
    local_30 = *(undefined8 *)(param_2 + 0x20);
    local_14 = (undefined4)*(undefined8 *)(param_2 + 0xb0);
    local_1c = 0;
    local_28 = uVar3;
    local_20 = iVar2;
    local_18 = iVar2;
    local_10 = param_2;
    uVar1 = FUN_00006bc8(&local_30);
  }
  else {
    uVar1 = FUN_0000665c(param_2,uVar3,iVar2);
  }
  if (local_8 == *(long *)PTR_DAT_00029e38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0001249c(uVar1);
}
