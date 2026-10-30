
void FUN_00005dfc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char local_19 [17];
  long local_8;
  
  local_19[0] = '\0';
  local_8 = *(long *)PTR_DAT_0001fe30;
  lVar1 = FUN_0000542c(param_1,4,local_19,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 8);
  }
  if (local_19[0] == '\0') {
    uVar3 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00005bc8(param_1,uVar2);
    builtin_strncpy(local_19 + 1,".hash",6);
    lVar1 = FUN_00005330(param_1,local_19 + 1,0);
    if (lVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(lVar1 + 0x20);
    }
  }
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  local_19[0] = '\0';
  lVar1 = FUN_0000542c(param_1,0x6ffffef5,local_19,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 8);
  }
  if (local_19[0] == '\0') {
    uVar3 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00005bc8(param_1,uVar2);
    builtin_strncpy(local_19 + 1,".gnu.hash",10);
    lVar1 = FUN_00005330(param_1,local_19 + 1,0);
    if (lVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(lVar1 + 0x20);
    }
  }
  *(undefined8 *)(param_1 + 0x80) = uVar3;
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  if (local_8 == *(long *)PTR_DAT_0001fe30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0000bf54(1);
}
