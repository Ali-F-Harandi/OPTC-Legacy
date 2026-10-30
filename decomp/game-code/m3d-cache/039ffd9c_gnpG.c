// M3d: gnpG @ 0x39ffd9c (Ghidra decompile, true address)
#

bool m3d_39ffd9c(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = *plRam00000000041b64a8;
  if (lVar3 != 0) {
    plVar4 = (long *)(lVar3 + 8);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (plVar4 != (long *)((long *)*plVar4)[1] || lVar3 != *(long *)*plVar4) {
      uVar2 = func_0x03f0b2d0();
      do {
        iVar1 = func_0x03f27550(**(long **)(lVar3 + 0x18) + 0x408,param_1,uVar2);
        if (iVar1 == 0) {
          return iVar1 == 0;
        }
        lVar3 = *(long *)(lVar3 + 0x20);
      } while ((plVar4 != (long *)((long *)*plVar4)[1]) || (lVar3 != *(long *)*plVar4));
      return iVar1 == 0;
    }
  }
  return false;
}


