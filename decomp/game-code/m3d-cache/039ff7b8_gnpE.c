// M3d: gnpE @ 0x39ff7b8 (Ghidra decompile, true address)
#

undefined8 m3d_39ff7b8(void)

{
  code *pcVar1;
  
  if (*plRam00000000041b64a8 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)UndefinedInstructionException(0,0x3fa3e40);
    (*pcVar1)();
  }
  return 0xc0000002;
}


