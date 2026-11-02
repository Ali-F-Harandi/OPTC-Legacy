
undefined8
FUN_00004c6c(uint *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  
  FUN_0000aa04(param_3,0,0x518);
  if ((param_1 != (uint *)0x0) && (param_2 != 0)) {
    uVar1 = param_1[1];
    *(uint *)(param_3 + 0x114) = param_1[0xe];
    if (uVar1 != 0) {
      uVar2 = *param_1;
      *(ulong *)(param_3 + 0x38) = (ulong)uVar1;
      *(ulong *)(param_3 + 0x30) = (long)param_1 + (ulong)uVar2;
    }
    if (param_1[3] != 0) {
      uVar1 = param_1[2];
      *(ulong *)(param_3 + 0x60) = (ulong)param_1[3];
      *(ulong *)(param_3 + 0x58) = (long)param_1 + (ulong)uVar1;
    }
    if (param_1[5] != 0) {
      uVar1 = param_1[4];
      *(ulong *)(param_3 + 0xc0) = (ulong)param_1[5];
      *(ulong *)(param_3 + 0xb8) = (long)param_1 + (ulong)uVar1;
    }
    if (param_1[7] != 0) {
      uVar1 = param_1[6];
      *(ulong *)(param_3 + 0xb0) = (ulong)param_1[7];
      *(ulong *)(param_3 + 0xa8) = (long)param_1 + (ulong)uVar1;
    }
    if (param_1[9] != 0) {
      uVar1 = param_1[8];
      *(ulong *)(param_3 + 0x90) = (ulong)param_1[9];
      *(ulong *)(param_3 + 0x88) = (long)param_1 + (ulong)uVar1;
    }
    if (param_1[0xb] != 0) {
      uVar1 = param_1[10];
      *(ulong *)(param_3 + 0xa0) = (ulong)param_1[0xb];
      *(ulong *)(param_3 + 0x98) = (long)param_1 + (ulong)uVar1;
    }
    *(undefined8 *)(param_3 + 0x20) = param_4;
    *(undefined8 *)(param_3 + 0x10) = param_4;
    *(undefined8 *)(param_3 + 0x18) = param_5;
  }
  return 1;
}
