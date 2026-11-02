// M3d: gnpF @ 0x39ff9f0 (Ghidra decompile, true address)
#

undefined4 m3d_39ff9f0(undefined8 param_1)

{
  long *plVar1;
  undefined4 uVar2;
  
  plVar1 = plRam00000000041b64a8;
  if (*plRam00000000041b64a8 == 0) {
    uVar2 = 0xc0000002;
  }
  else {
    func_0x03f2c520(*(long *)(*plRam00000000041b64a8 + 0x80) + 8);
    uVar2 = func_0x03fa3e50(*plVar1,param_1);
    func_0x03f2c530(*(long *)(*plVar1 + 0x80) + 8);
  }
  return uVar2;
}


