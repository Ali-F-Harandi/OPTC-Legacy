// M3d: gnpO @ 0x3a01730 (Ghidra decompile, true address)
#

ulong m3d_3a01730(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long in_x9;
  long *plVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_46c [4];
  undefined1 auStack_468 [8];
  undefined1 auStack_460 [1024];
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if (param_1 == in_x9) {
    func_0x03f072dc();
  }
  uVar3 = func_0x03f0b330();
  plVar1 = plRam00000000041b64a8;
  lVar6 = tpidr_el0;
  lStack_38 = *(long *)(lVar6 + 0x28);
  if (*plRam00000000041b64a8 == 0) {
    uVar4 = 0;
  }
  else {
    uStack_40 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    func_0x03fa2550(auStack_460,uVar3);
    uVar2 = func_0x03fa3ec0(*plVar1,auStack_460,auStack_468,auStack_46c);
    uVar4 = (ulong)(~uVar2 >> 0x1f);
    if ((uStack_50 & 1) != 0) {
      func_0x03f0b310(uStack_40);
    }
  }
  if (*(long *)(lVar6 + 0x28) != lStack_38) {
    auVar7 = func_0x03f0b330(uVar4);
    plVar1 = plRam00000000041b64a8;
    uVar4 = 0xc000000a;
    if (*plRam00000000041b64a8 == 0) {
      uVar4 = 0xc0000002;
    }
    else {
      *auVar7._8_8_ = 0;
      plVar5 = (long *)(*plVar1 + 8);
      lVar6 = *(long *)(*plVar1 + 0x10);
      if (plVar5 != (long *)((long *)*plVar5)[1] || lVar6 != *(long *)*plVar5) {
        uVar3 = func_0x03f0b2d0(auVar7._0_8_);
        do {
          uVar4 = func_0x03f27550(**(long **)(lVar6 + 0x18) + 0x408,auVar7._0_8_,uVar3);
          if ((int)uVar4 == 0) {
            *auVar7._8_8_ = **(undefined8 **)(lVar6 + 0x18);
            return uVar4;
          }
          lVar6 = *(long *)(lVar6 + 0x20);
        } while ((plVar5 != (long *)((long *)*plVar5)[1]) || (lVar6 != *(long *)*plVar5));
        uVar4 = 0xc000000a;
      }
    }
    return uVar4;
  }
  return uVar4;
}


