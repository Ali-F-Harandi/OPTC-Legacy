// M3d: gnpQ @ 0x3a030bc (Ghidra decompile, true address)
#

void m3d_3a030bc(uint *param_1,ulong param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar4 = param_2 & 3;
  if (3 < param_2) {
    param_2 = param_2 >> 2;
    uVar5 = *param_3;
    puVar3 = param_1;
    do {
      uVar5 = uVar5 ^ uVar5 << 0xb;
      param_2 = param_2 - 1;
      param_1 = puVar3 + 1;
      *puVar3 = uVar5;
      uVar1 = param_3[3];
      *(undefined8 *)param_3 = *(undefined8 *)(param_3 + 1);
      param_3[2] = uVar1;
      param_3[3] = uVar5 >> 8 ^ uVar1 >> 0x13 ^ uVar5 ^ uVar1;
      uVar5 = (uint)*(undefined8 *)(param_3 + 1);
      puVar3 = param_1;
    } while (param_2 != 0);
  }
  if (uVar4 != 0) {
    uVar1 = *param_3;
    uVar2 = param_3[3];
    uVar5 = uVar1 ^ uVar1 << 0xb;
    *(undefined8 *)param_3 = *(undefined8 *)(param_3 + 1);
    param_3[2] = uVar2;
    param_3[3] = uVar5 >> 8 ^ uVar2 >> 0x13 ^ uVar5 ^ uVar2;
    *(char *)param_1 = (char)uVar1 + (char)(uVar5 / 0xff);
    if (uVar4 != 1) {
      uVar1 = *param_3;
      uVar2 = param_3[3];
      uVar5 = uVar1 ^ uVar1 << 0xb;
      *(undefined8 *)param_3 = *(undefined8 *)(param_3 + 1);
      param_3[2] = uVar2;
      param_3[3] = uVar5 >> 8 ^ uVar2 >> 0x13 ^ uVar5 ^ uVar2;
      *(char *)((long)param_1 + 1) = (char)uVar1 + (char)(uVar5 / 0xff);
      if (uVar4 != 2) {
        uVar1 = *param_3;
        uVar2 = param_3[3];
        uVar5 = uVar1 ^ uVar1 << 0xb;
        *(undefined8 *)param_3 = *(undefined8 *)(param_3 + 1);
        param_3[2] = uVar2;
        param_3[3] = uVar5 >> 8 ^ uVar2 >> 0x13 ^ uVar5 ^ uVar2;
        *(char *)((long)param_1 + 2) = (char)uVar1 + (char)(uVar5 / 0xff);
      }
    }
  }
  return;
}


