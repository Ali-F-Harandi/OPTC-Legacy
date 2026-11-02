// M3d: gnpH @ 0x39ffef4 (Ghidra decompile, true address)
#

undefined8 m3d_39ffef4(undefined8 param_1,undefined8 param_2,long param_3,uint param_4)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  plVar3 = plRam00000000041b64a8;
  if (*plRam00000000041b64a8 == 0) {
    uVar6 = 0xc0000002;
  }
  else {
    if ((param_4 >> 1 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)UndefinedInstructionException(0,0x3fa3de0);
      (*pcVar2)();
    }
    plVar4 = (long *)func_0x03f0b2e0(0x818);
    lVar1 = lRam00000000041b64d0;
    plVar4[0x102] = param_3;
    *plVar4 = lVar1 + 0x10;
    plVar4[1] = 0;
    func_0x03f0c950(plVar4 + 2,0,0x3fe);
    lVar5 = func_0x03f0b2d0(param_1);
    lVar1 = 0x3fe;
    if (lVar5 + 1U < 0x3fe) {
      lVar1 = lVar5 + 1;
    }
    func_0x03f30520(plVar4 + 2,param_1,lVar1,0x3ff);
    func_0x03f0c950((long)plVar4 + 0x40f,0,0x3fe);
    lVar5 = func_0x03f0b2d0(param_2);
    lVar1 = 0x3fe;
    if (lVar5 + 1U < 0x3fe) {
      lVar1 = lVar5 + 1;
    }
    func_0x03f30520((long)plVar4 + 0x40f,param_2,lVar1,0x3ff);
    func_0x03fa3e00(*plVar3,plVar4);
    uVar6 = 0;
  }
  return uVar6;
}


