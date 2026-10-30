// M3d: gnpA @ 0x39ff304 (Ghidra decompile, true address)
#

void m3d_39ff304(void)

{
  long *plVar1;
  
  plVar1 = plRam00000000041b64a8;
  if ((long *)*plRam00000000041b64a8 != (long *)0x0) {
    (**(code **)(*(long *)*plRam00000000041b64a8 + 8))();
    *plVar1 = 0;
  }
  plVar1 = plRam00000000041b64b0;
  if ((long *)*plRam00000000041b64b0 != (long *)0x0) {
    (**(code **)(*(long *)*plRam00000000041b64b0 + 8))();
    *plVar1 = 0;
  }
  return;
}


