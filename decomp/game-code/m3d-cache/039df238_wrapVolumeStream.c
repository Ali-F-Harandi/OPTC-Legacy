// M3d: wrapVolumeStream @ 0x39df238 (Ghidra decompile, true address)
#

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * m3d_39df238(long param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined1 auStack_a0 [8];
  long lStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  long *plStack_68;
  long lStack_60;
  long lStack_58;
  
  lVar4 = lRam00000000041b6238;
  lVar5 = tpidr_el0;
  lStack_58 = *(long *)(lVar5 + 0x28);
  lStack_60 = lRam00000000041b6238;
  func_0x03f2c520(*(long *)(lRam00000000041b6238 + 0x50) + 8);
  if (*(int *)(lVar4 + 0x20) != 0) {
    plVar3 = *(long **)(lVar4 + 0x18);
    lVar6 = plVar3[2];
    lVar8 = plVar3[3];
    plVar10 = (long *)plVar3[1];
    if (lVar8 != 0) {
      *(long *)(lVar8 + 0x10) = lVar6;
    }
    if (lVar6 == 0) {
      plVar7 = (long *)(lVar4 + 0x10);
      if ((long *)*plVar7 == plVar3) goto code_r0x039df2d4;
    }
    else {
      plVar9 = *(long **)(lVar4 + 0x10);
      plVar7 = (long *)(lVar6 + 0x18);
      *plVar7 = lVar8;
      if (plVar9 == plVar3) {
        *(long *)(lVar4 + 0x10) = lVar6;
code_r0x039df2d4:
        *plVar7 = 0;
      }
    }
    lVar6 = plVar3[3];
    *(long *)(lVar4 + 0x18) = lVar6;
    if (lVar6 != 0) {
      *(undefined8 *)(lVar6 + 0x10) = 0;
    }
    (**(code **)(*plVar3 + 8))();
    iVar1 = *(int *)(lVar4 + 0x20) + -1;
    *(int *)(lVar4 + 0x20) = iVar1;
    if (iVar1 == 0) {
      *(undefined8 *)(lVar4 + 0x10) = 0;
      *(undefined8 *)(lVar4 + 0x18) = 0;
    }
    if (plVar10 != (long *)0x0) goto code_r0x039df344;
  }
  plVar10 = (long *)func_0x03f0b2e0(0x38);
  lVar6 = lRam00000000041b6240 + 0x10;
  plVar10[1] = ram0x0145fbc0;
  *plVar10 = lVar6;
  *(undefined4 *)(plVar10 + 2) = 1;
code_r0x039df344:
  plVar10[3] = param_1;
  *(uint *)(plVar10 + 4) = param_2;
  *(uint *)((long)plVar10 + 0x24) = param_3;
  *(undefined4 *)(plVar10 + 5) = 0;
  *(uint *)((long)plVar10 + 0x2c) = param_4;
  *(undefined1 *)(plVar10 + 6) = 0;
  plVar3 = (long *)func_0x03f0b2e0(0x20);
  lVar6 = lRam000000000419a138;
  lVar8 = *(long *)(lVar4 + 0x30);
  plVar3[2] = 0;
  plVar3[3] = 0;
  *plVar3 = lVar6 + 0x10;
  plVar3[1] = (long)plVar10;
  if (lVar8 == 0) {
    *(long **)(lVar4 + 0x38) = plVar3;
    plVar7 = (long *)(lVar4 + 0x30);
  }
  else {
    plVar7 = (long *)(lVar4 + 0x38);
    lVar6 = *plVar7;
    *(long **)(lVar6 + 0x10) = plVar3;
    plVar3[3] = lVar6;
  }
  iVar1 = *(int *)(lVar4 + 0x40);
  *plVar7 = (long)plVar3;
  *(int *)(lVar4 + 0x40) = iVar1 + 1;
  func_0x03f2c530(*(long *)(lVar4 + 0x50) + 8);
  if (*(long *)(lVar5 + 0x28) != lStack_58) {
    lVar4 = func_0x03f0b330();
    uStack_88 = 0x39df40c;
    lVar5 = tpidr_el0;
    lStack_98 = *(long *)(lVar5 + 0x28);
    puStack_90 = &stack0xffffffffffffffb0;
    uStack_80 = (ulong)param_2;
    uStack_78 = (ulong)param_3;
    uStack_70 = (ulong)param_4;
    plStack_68 = plVar10;
    if (*(long *)(lVar4 + 0x10) == 0) {
      lVar6 = func_0x03f2cc80(lVar4 + 0x58,0x40000000);
      if (lVar6 == 0) {
        plVar3 = (long *)0xa0000001;
      }
      else {
        plVar10 = (long *)func_0x03f0b2e0(0x50);
        lVar8 = _s__01460350;
        plVar10[6] = s__01460358._0_8_;
        plVar10[5] = lVar8;
        lVar2 = lRam00000000041b6248;
        *(undefined4 *)(plVar10 + 2) = 0;
        *(undefined4 *)(plVar10 + 7) = 0;
        *plVar10 = lVar2 + 0x10;
        lVar8 = lRam000000000419a598;
        plVar10[3] = lVar2 + 200;
        plVar10[4] = lVar6;
        plVar10[1] = -0x8000000000000000;
        plVar10[8] = lVar8 + 0x10;
        plVar7 = (long *)func_0x03f0b2e0(0x30);
        *plVar7 = lRam000000000419a5a0 + 0x10;
        func_0x03f2dd80(auStack_a0);
        func_0x03f2dd90(plVar7 + 1,auStack_a0);
        func_0x03f2dda0(auStack_a0);
        plVar3 = (long *)0x0;
        plVar10[9] = (long)plVar7;
        *(long **)(lVar4 + 0x10) = plVar10;
      }
    }
    else {
      plVar3 = (long *)0x0;
    }
    if (*(long *)(lVar5 + 0x28) != lStack_98) {
      lVar5 = func_0x03f0b330(plVar3);
      if (*(long **)(lVar5 + 0x10) != (long *)0x0) {
        (**(code **)(**(long **)(lVar5 + 0x10) + 8))();
        *(undefined8 *)(lVar5 + 0x10) = 0;
      }
      return (long *)0x0;
    }
    return plVar3;
  }
  return plVar10;
}


