// M3d: gnpP @ 0x3a01820 (Ghidra decompile, true address)
#

undefined8 m3d_3a01820(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  func_0x03f072dc();
  auVar6 = func_0x03f0b330();
  plVar1 = plRam00000000041b64a8;
  uVar2 = 0xc000000a;
  if (*plRam00000000041b64a8 == 0) {
    uVar2 = 0xc0000002;
  }
  else {
    *auVar6._8_8_ = 0;
    plVar4 = (long *)(*plVar1 + 8);
    lVar5 = *(long *)(*plVar1 + 0x10);
    if (plVar4 != (long *)((long *)*plVar4)[1] || lVar5 != *(long *)*plVar4) {
      uVar2 = func_0x03f0b2d0(auVar6._0_8_);
      do {
        uVar3 = func_0x03f27550(**(long **)(lVar5 + 0x18) + 0x408,auVar6._0_8_,uVar2);
        if ((int)uVar3 == 0) {
          *auVar6._8_8_ = **(undefined8 **)(lVar5 + 0x18);
          return uVar3;
        }
        lVar5 = *(long *)(lVar5 + 0x20);
      } while ((plVar4 != (long *)((long *)*plVar4)[1]) || (lVar5 != *(long *)*plVar4));
      uVar2 = 0xc000000a;
    }
  }
  return uVar2;
}


