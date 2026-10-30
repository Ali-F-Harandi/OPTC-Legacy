
void FUN_00005c44(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  char local_19 [17];
  long local_8;
  
  local_19[0] = '\x01';
  local_8 = *(long *)PTR_DAT_0001fe30;
  lVar1 = FUN_0000542c(param_1,6,local_19,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 8);
  }
  uVar4 = 0;
  if (local_19[0] != '\0') {
    uVar4 = FUN_00005bc8(param_1,uVar2);
  }
  builtin_strncpy(local_19 + 1,".dynsym",8);
  lVar1 = FUN_00005330(param_1,local_19 + 1,0);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulong)*(uint *)(lVar1 + 0x20) / 0x18;
  }
  *(ulong *)(param_1 + 0xb0) = uVar3;
  *(undefined8 *)(param_1 + 0xa8) = uVar4;
  if (local_8 == *(long *)PTR_DAT_0001fe30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0000bf54(1);
}
