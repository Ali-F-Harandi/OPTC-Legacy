// M3d: FileSystem_getter @ 0x39f3884 (Ghidra decompile, true address)
#

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * m3d_39f3884(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  
  lVar2 = tpidr_el0;
  lVar8 = *(long *)(lVar2 + 0x28);
  func_0x03f2c520(lRam0000000004463c10 + 8);
  plVar7 = plRam0000000004463bd8;
  if (iRam0000000004463be0 != 0) {
    plVar6 = (long *)plRam0000000004463bd8[2];
    lVar1 = plRam0000000004463bd8[3];
    plVar11 = (long *)plRam0000000004463bd8[1];
    if (lVar1 != 0) {
      *(long **)(lVar1 + 0x10) = plVar6;
    }
    plVar3 = plRam0000000004463bd0;
    if (plVar6 == (long *)0x0) {
      plVar10 = (long *)0x4463bd0;
      plVar6 = plRam0000000004463bd0;
      plVar5 = plRam0000000004463bd0;
    }
    else {
      plVar10 = plVar6 + 3;
      *plVar10 = lVar1;
      plVar5 = plRam0000000004463bd0;
    }
    plRam0000000004463bd0 = plVar6;
    if (plVar3 == plRam0000000004463bd8) {
      *plVar10 = 0;
      plVar5 = plRam0000000004463bd0;
    }
    plRam0000000004463bd0 = plVar5;
    plRam0000000004463bd8 = (long *)plRam0000000004463bd8[3];
    if (plRam0000000004463bd8 != (long *)0x0) {
      plRam0000000004463bd8[2] = 0;
    }
    (**(code **)(*plVar7 + 8))();
    iRam0000000004463be0 = iRam0000000004463be0 + -1;
    if (iRam0000000004463be0 == 0) {
      plRam0000000004463bd0 = (long *)0x0;
      plRam0000000004463bd8 = (long *)0x0;
    }
    if (plVar11 != (long *)0x0) goto code_r0x039f39a4;
  }
  plVar11 = (long *)func_0x03f0b2e0(0x420);
  *(undefined4 *)(plVar11 + 2) = 0;
  plVar11[1] = _s__0145f550;
  func_0x03f0c950((long)plVar11 + 0x14,0,0x3ff);
  lVar1 = lRam00000000041b6390;
  *(undefined4 *)((long)plVar11 + 0x414) = 0x10000000;
  plVar11[0x83] = 0;
  *plVar11 = lVar1 + 0x10;
code_r0x039f39a4:
  plVar6 = (long *)func_0x03f0b2e0(0x20);
  lVar4 = lRam0000000004463bf0;
  lVar1 = lRam000000000419a138;
  plVar6[2] = 0;
  plVar6[3] = 0;
  *plVar6 = lVar1 + 0x10;
  plVar6[1] = (long)plVar11;
  plVar7 = plRam0000000004463bf8;
  if (lVar4 == 0) {
    puVar9 = (undefined8 *)0x4463bf0;
    plRam0000000004463bf8 = plVar6;
  }
  else {
    puVar9 = (undefined8 *)0x4463bf8;
    plRam0000000004463bf8[2] = (long)plVar6;
    plVar6[3] = (long)plVar7;
  }
  *puVar9 = plVar6;
  iRam0000000004463c00 = iRam0000000004463c00 + 1;
  func_0x03f2c530(lRam0000000004463c10 + 8);
  if (*(long *)(lVar2 + 0x28) != lVar8) {
    plVar7 = (long *)func_0x03f0b330();
    plVar7 = (long *)func_0x03f2c530(*(long *)(*plVar7 + 0x50) + 8);
    return plVar7;
  }
  return plVar11;
}


