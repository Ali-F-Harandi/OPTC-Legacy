// M3d: keyExpansion_39d39f4 @ 0x39d39f4 (Ghidra decompile, true address)
#

undefined8 m3d_39d39f4(undefined8 param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  code *pcVar2;
  
  uVar1 = param_3 - 4U >> 2;
  if (((uVar1 | param_3 << 0x1e) < 8) && ((0xabU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)UndefinedInstructionException(0,0x3fa2710);
    (*pcVar2)();
  }
  return 0x80000004;
}


