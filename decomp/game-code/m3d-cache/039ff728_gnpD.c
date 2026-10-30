// M3d: gnpD @ 0x39ff728 (Ghidra decompile, true address)
#

undefined4 m3d_39ff728(void)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *plRam00000000041b64a8;
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x03f2c520(*(long *)(lVar2 + 0x70) + 8);
    uVar1 = *(undefined4 *)(lVar2 + 0x48);
    func_0x03f2c530(*(long *)(lVar2 + 0x70) + 8);
  }
  return uVar1;
}


