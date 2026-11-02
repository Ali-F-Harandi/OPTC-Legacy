// M3d: gnpR @ 0x3a0332c (Ghidra decompile, true address)
#

void m3d_3a0332c(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  
  uVar9 = param_1 + 3U & 0xfffffffffffffffc;
  puVar4 = (uint *)func_0x03f0cba0(uVar9);
  if ((puVar4 != (uint *)0x0) && (uVar9 != 0)) {
    uVar9 = param_1 + 3U >> 2;
    uVar7 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar1 = param_2[3];
    do {
      uVar8 = uVar1;
      uVar5 = uVar3;
      uVar6 = uVar2;
      uVar7 = uVar7 ^ uVar7 << 0xb;
      uVar9 = uVar9 - 1;
      *puVar4 = uVar7;
      uVar1 = uVar7 >> 8 ^ uVar8 >> 0x13 ^ uVar7 ^ uVar8;
      puVar4 = puVar4 + 1;
      uVar7 = uVar6;
      uVar2 = uVar5;
      uVar3 = uVar8;
    } while (uVar9 != 0);
    *param_2 = uVar6;
    param_2[1] = uVar5;
    param_2[2] = uVar8;
    param_2[3] = uVar1;
  }
  return;
}


