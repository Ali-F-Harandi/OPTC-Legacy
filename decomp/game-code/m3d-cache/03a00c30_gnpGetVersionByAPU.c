// M3d: gnpGetVersionByAPU @ 0x3a00c30 (Ghidra decompile, true address)
#

undefined8 m3d_3a00c30(undefined8 param_1,ulong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = plRam00000000041b64a8;
  uVar1 = 0xc000000a;
  *param_2 = 0;
  lVar4 = *plVar5;
  if (lVar4 == 0) {
    uVar1 = 0xc0000002;
  }
  else {
    plVar5 = (long *)(lVar4 + 8);
    lVar4 = *(long *)(lVar4 + 0x10);
    if (plVar5 != (long *)((long *)*plVar5)[1] || lVar4 != *(long *)*plVar5) {
      uVar1 = func_0x03f0b2d0(param_1);
      do {
        uVar2 = func_0x03f27550(**(long **)(lVar4 + 0x18) + 0x408,param_1,uVar1);
        if ((int)uVar2 == 0) {
          uVar3 = *(ulong *)(**(long **)(lVar4 + 0x18) + 0x28);
          uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
          uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
          *param_2 = uVar3 >> 0x20 | uVar3 << 0x20;
          return uVar2;
        }
        lVar4 = *(long *)(lVar4 + 0x20);
      } while ((plVar5 != (long *)((long *)*plVar5)[1]) || (lVar4 != *(long *)*plVar5));
      uVar1 = 0xc000000a;
    }
  }
  return uVar1;
}


