// M3d: gnpM @ 0x3a01430 (Ghidra decompile, true address)
#

undefined8 m3d_3a01430(long param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long unaff_x29;
  
  if (param_1 == *(long *)(unaff_x29 + -8)) {
    func_0x03f072dc();
  }
  uVar3 = func_0x03f0b330();
  uVar4 = 0xc000000a;
  lVar5 = *plRam00000000041b64a8;
  if (lVar5 == 0) {
    uVar4 = 0xc0000002;
  }
  else {
    plVar6 = (long *)(lVar5 + 8);
    lVar5 = *(long *)(lVar5 + 0x10);
    if (plVar6 != (long *)((long *)*plVar6)[1] || lVar5 != *(long *)*plVar6) {
      uVar4 = func_0x03f0b2d0(uVar3);
      do {
        iVar2 = func_0x03f27550(**(long **)(lVar5 + 0x18) + 0x408,uVar3,uVar4);
        if (iVar2 == 0) {
          if (*(char *)(**(long **)(lVar5 + 0x18) + 0x18) == '\0') {
            return 0xc0000010;
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)UndefinedInstructionException(0,0x3fa3e60);
          (*pcVar1)();
        }
        lVar5 = *(long *)(lVar5 + 0x20);
      } while ((plVar6 != (long *)((long *)*plVar6)[1]) || (lVar5 != *(long *)*plVar6));
      uVar4 = 0xc000000a;
    }
  }
  return uVar4;
}


