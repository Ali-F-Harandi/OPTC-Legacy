
void FUN_00005fa0(char param_1,undefined8 param_2,ulong *param_3,ulong *param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  char local_9;
  long local_8;
  
  local_9 = '\x01';
  uVar3 = 7;
  if (param_1 == '\0') {
    uVar3 = 0x17;
  }
  local_8 = *(long *)PTR_DAT_0001fe30;
  lVar1 = FUN_0000542c(param_2,uVar3,&local_9,0);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar1 + 8);
  }
  if (local_9 == '\0') {
    uVar4 = 0;
    uVar2 = uVar4;
  }
  else {
    uVar4 = 0;
    uVar2 = FUN_00005bc8(param_2,uVar3);
    if (uVar2 != 0) {
      uVar3 = 8;
      if (param_1 == '\0') {
        uVar3 = 2;
      }
      lVar1 = FUN_0000542c(param_2,uVar3,0,0);
      if (lVar1 != 0) {
        uVar4 = (*(ulong *)(lVar1 + 8) & 0xffffffff) / 0x18;
      }
    }
  }
  if (param_3 != (ulong *)0x0) {
    *param_3 = uVar2;
  }
  if (param_4 != (ulong *)0x0) {
    *param_4 = uVar4;
  }
  if (local_8 == *(long *)PTR_DAT_0001fe30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0000bf54(1);
}
