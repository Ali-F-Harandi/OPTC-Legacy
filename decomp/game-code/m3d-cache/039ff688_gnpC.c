// M3d: gnpC @ 0x39ff688 (Ghidra decompile, true address)
#

undefined8 m3d_39ff688(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  
  plVar2 = plRam00000000041b64a8;
  lVar6 = *plRam00000000041b64a8;
  if (lVar6 == 0) {
    uVar5 = 0xc0000002;
  }
  else {
    func_0x03f2c520(*(long *)(lVar6 + 0x58) + 8);
    *(undefined1 *)(lVar6 + 0x60) = 1;
    func_0x03f2c530(*(long *)(lVar6 + 0x58) + 8);
    plVar3 = (long *)func_0x03f0b2e0(0x10);
    plVar1 = plRam000000000419a810;
    plVar4 = (long *)*plRam000000000419a810;
    *plVar3 = *plVar2;
    plVar3[1] = param_1;
    if (plVar4 == (long *)0x0) {
      func_0x03f2f250();
      plVar4 = (long *)*plVar1;
    }
    (**(code **)(*plVar4 + 0x38))(plVar4,plVar3,uRam00000000041b64c8);
    uVar5 = 0;
  }
  return uVar5;
}


