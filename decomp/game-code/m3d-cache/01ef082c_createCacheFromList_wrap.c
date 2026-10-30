// M3d: createCacheFromList_wrap @ 0x1ef082c (Ghidra decompile, true address)
#

void m3d_1ef082c(long param_1,long param_2,int param_3,long *param_4,long param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong auStack_60 [4];
  
  lVar2 = tpidr_el0;
  auStack_60[3] = *(long *)(lVar2 + 0x28);
  if (((param_2 != 0) && (param_3 != 0)) && (param_4 != (long *)0x0)) {
    func_0x03f2c1e0(param_1 + 8);
    lVar4 = *param_4;
    if (lVar4 != 0) {
      plVar3 = param_4 + 1;
      do {
        auStack_60[0] = 0;
        auStack_60[1] = 0;
        auStack_60[2] = 0;
        if (param_5 != 0) {
          func_0x03f0c1a0(auStack_60,param_5);
          lVar4 = plVar3[-1];
        }
        func_0x03f0c1a0(auStack_60,lVar4);
        lVar4 = func_0x03f2c230(param_1,param_2,param_3,auStack_60);
        if (lVar4 != 0) {
          func_0x03f2a350(param_1 + 8);
        }
        if ((auStack_60[0] & 1) != 0) {
          func_0x03f0b310(auStack_60[2]);
        }
        lVar4 = *plVar3;
        plVar3 = plVar3 + 1;
      } while (lVar4 != 0);
    }
  }
  if (*(long *)(lVar2 + 0x28) == auStack_60[3]) {
    return;
  }
  plVar3 = (long *)func_0x03f0b330();
  *plVar3 = lRam000000000419a108 + 0x10;
  func_0x03f2c1e0(plVar3 + 1);
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0,0x3f2c1d0);
  (*pcVar1)();
}


