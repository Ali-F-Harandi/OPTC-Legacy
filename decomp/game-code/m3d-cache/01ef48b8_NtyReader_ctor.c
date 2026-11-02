// M3d: NtyReader_ctor @ 0x1ef48b8 (Ghidra decompile, true address)
#

void m3d_1ef48b8(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_1[5] = 0;
  lVar1 = lRam000000000419a180;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 0x96) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[0x95] = 0;
  param_1[0x94] = 0;
  *param_1 = lVar1 + 0x10;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  puVar2 = (undefined8 *)func_0x03f0b2e0(0x10);
  lVar1 = lRam000000000419a188;
  *puVar2 = 0;
  puVar2[1] = param_1 + 0x93;
  param_1[0x93] = (long)puVar2;
  param_1[0x9b] = 0;
  param_1[0x97] = lVar1 + 0x10;
  param_1[0x99] = 0;
  param_1[0x98] = 0;
  param_1[0x9d] = 0;
  param_1[0x9c] = 0;
  puVar2 = (undefined8 *)func_0x03f0b2e0(0x10);
  param_1[0x9e] = (long)puVar2;
  *puVar2 = 0;
  puVar2[1] = param_1 + 0x97;
  func_0x03f0c950(param_1 + 0xb,0,0x3fe);
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return;
}


