// M3d: gnpL @ 0x3a01290 (Ghidra decompile, true address)
#

undefined8 m3d_3a01290(void)

{
  code *pcVar1;
  long unaff_x20;
  long unaff_x29;
  undefined8 in_stack_00000430;
  
  func_0x03f0b310(in_stack_00000430);
  func_0x03fa2510(unaff_x29 + -0x100);
  if (*(long *)(unaff_x20 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
    func_0x03f072dc();
  }
  func_0x03f0b330();
  if (*plRam00000000041b64a8 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)UndefinedInstructionException(0,0x3fa3f50);
    (*pcVar1)();
  }
  return 0xc0000002;
}


