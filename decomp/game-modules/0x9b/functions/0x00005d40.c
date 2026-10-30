
void FUN_00005d40(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char local_9;
  long local_8;
  
  local_9 = '\0';
  local_8 = *(long *)PTR_DAT_0001fe30;
  lVar1 = FUN_0000542c(param_1,5,&local_9,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 8);
  }
  if (local_9 == '\0') {
    uVar3 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00005bc8(param_1,uVar2);
    lVar1 = FUN_0000542c(param_1,10,0,0);
    if (lVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(lVar1 + 8);
    }
  }
  *(undefined8 *)(param_1 + 0xc0) = uVar3;
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  if (local_8 == *(long *)PTR_DAT_0001fe30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0000bf54(1);
}
