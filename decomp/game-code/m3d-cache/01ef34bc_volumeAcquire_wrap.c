// M3d: volumeAcquire_wrap @ 0x1ef34bc (Ghidra decompile, true address)
#

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * m3d_1ef34bc(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  undefined1 auVar20 [16];
  
  lVar14 = lRam000000000419a128;
  lVar10 = tpidr_el0;
  lVar11 = *(long *)(lVar10 + 0x28);
  func_0x03f2c520(*(long *)(lRam000000000419a128 + 0x50) + 8);
  if (*(int *)(lVar14 + 0x20) == 0) {
code_r0x01ef35ec:
    plVar18 = (long *)func_0x03f0b2e0(0x50);
    lVar12 = lRam000000000419a130;
    uVar8 = ram0x0145f560;
    *(undefined4 *)(plVar18 + 1) = 0;
    *(undefined4 *)(plVar18 + 9) = 0;
    *plVar18 = lVar12 + 0x10;
    *(undefined8 *)((long)plVar18 + 0xc) = uVar8;
    plVar18[7] = 0;
    plVar18[8] = 0;
    plVar18[4] = 0;
    plVar18[3] = 0;
    plVar18[6] = 0;
    plVar18[5] = 0;
    lVar7 = func_0x03f0f980(0x400);
    lVar12 = 0;
    plVar18[8] = lVar7;
    do {
      uVar9 = func_0x03f0b2e0(0x14);
      *(undefined8 *)(lVar7 + lVar12) = uVar9;
      lVar7 = plVar18[8];
      puVar1 = (undefined8 *)(lVar7 + lVar12);
      lVar12 = lVar12 + 8;
      *(undefined4 *)*puVar1 = 0xffffffff;
    } while (lVar12 != 0x400);
    *(undefined8 *)((long)plVar18 + 0xc) = uVar8;
    *(undefined4 *)(plVar18 + 9) = 0;
    plVar18[7] = 0;
    plVar18[4] = 0;
    plVar18[3] = 0;
    plVar18[6] = 0;
    plVar18[5] = 0;
  }
  else {
    plVar6 = *(long **)(lVar14 + 0x18);
    lVar12 = plVar6[2];
    lVar7 = plVar6[3];
    plVar18 = (long *)plVar6[1];
    if (lVar7 != 0) {
      *(long *)(lVar7 + 0x10) = lVar12;
    }
    if (lVar12 == 0) {
      plVar13 = (long *)(lVar14 + 0x10);
      if ((long *)*plVar13 == plVar6) goto code_r0x01ef3548;
    }
    else {
      plVar17 = *(long **)(lVar14 + 0x10);
      plVar13 = (long *)(lVar12 + 0x18);
      *plVar13 = lVar7;
      if (plVar17 == plVar6) {
        *(long *)(lVar14 + 0x10) = lVar12;
code_r0x01ef3548:
        *plVar13 = 0;
      }
    }
    lVar12 = plVar6[3];
    *(long *)(lVar14 + 0x18) = lVar12;
    if (lVar12 != 0) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
    }
    (**(code **)(*plVar6 + 8))();
    iVar16 = *(int *)(lVar14 + 0x20) + -1;
    *(int *)(lVar14 + 0x20) = iVar16;
    if (iVar16 == 0) {
      *(undefined8 *)(lVar14 + 0x10) = 0;
      *(undefined8 *)(lVar14 + 0x18) = 0;
    }
    if (plVar18 == (long *)0x0) goto code_r0x01ef35ec;
    *(undefined4 *)(plVar18 + 9) = 0;
    uVar8 = ram0x0145f560;
    plVar18[7] = 0;
    *(undefined8 *)((long)plVar18 + 0xc) = uVar8;
    plVar18[4] = 0;
    plVar18[3] = 0;
    plVar18[6] = 0;
    plVar18[5] = 0;
    if (plVar18[8] == 0) {
      lVar7 = func_0x03f0f980(0x400);
      lVar12 = 0;
      plVar18[8] = lVar7;
      do {
        uVar8 = func_0x03f0b2e0(0x14);
        *(undefined8 *)(lVar7 + lVar12) = uVar8;
        lVar7 = plVar18[8];
        puVar1 = (undefined8 *)(lVar7 + lVar12);
        lVar12 = lVar12 + 8;
        *(undefined4 *)*puVar1 = 0xffffffff;
      } while (lVar12 != 0x400);
    }
  }
  plVar6 = (long *)func_0x03f0b2e0(0x20);
  lVar12 = lRam000000000419a138;
  lVar7 = *(long *)(lVar14 + 0x30);
  plVar6[2] = 0;
  plVar6[3] = 0;
  *plVar6 = lVar12 + 0x10;
  plVar6[1] = (long)plVar18;
  if (lVar7 == 0) {
    *(long **)(lVar14 + 0x38) = plVar6;
    plVar13 = (long *)(lVar14 + 0x30);
  }
  else {
    plVar13 = (long *)(lVar14 + 0x38);
    lVar12 = *plVar13;
    *(long **)(lVar12 + 0x10) = plVar6;
    plVar6[3] = lVar12;
  }
  iVar16 = *(int *)(lVar14 + 0x40);
  *plVar13 = (long)plVar6;
  *(int *)(lVar14 + 0x40) = iVar16 + 1;
  func_0x03f2c530(*(long *)(lVar14 + 0x50) + 8);
  if (*(long *)(lVar10 + 0x28) == lVar11) {
    return plVar18;
  }
  auVar20 = func_0x03f0b330();
  lVar14 = auVar20._8_8_;
  lVar10 = auVar20._0_8_;
  uVar19 = param_3 & 0xffffffff;
  uVar5 = func_0x03f2c550(lVar14,lVar10 + 0x18);
  if ((int)uVar5 < 0) {
    return (long *)(ulong)(uVar5 | 0x80018000);
  }
  uVar5 = *(uint *)(lVar14 + 0x4b0);
  *(undefined8 *)(lVar10 + 0x28) = param_4;
  if ((uint)param_3 < uVar5) {
    lVar14 = *(long *)(lVar14 + 0x4a0);
    if ((int)(uint)param_3 < 1) {
      lVar14 = *(long *)(lVar14 + 8);
      uVar2 = *(uint *)(lVar14 + 0x25c);
      uVar5 = *(uint *)(lVar14 + 0x260);
      iVar16 = *(int *)(lVar14 + 0x26c);
    }
    else {
      uVar15 = param_3 & 0xffffffff;
      lVar11 = lVar14;
      do {
        lVar11 = *(long *)(lVar11 + 0x10);
        uVar5 = (int)uVar15 - 1;
        uVar15 = (ulong)uVar5;
      } while (uVar5 != 0);
      param_3 = param_3 & 0xffffffff;
      uVar2 = *(uint *)(*(long *)(lVar11 + 8) + 0x25c);
      lVar11 = lVar14;
      do {
        lVar11 = *(long *)(lVar11 + 0x10);
        uVar5 = (int)param_3 - 1;
        param_3 = (ulong)uVar5;
      } while (uVar5 != 0);
      uVar5 = *(uint *)(*(long *)(lVar11 + 8) + 0x260);
      lVar11 = lVar14;
      uVar15 = uVar19;
      do {
        lVar11 = *(long *)(lVar11 + 0x10);
        uVar4 = (int)uVar15 - 1;
        uVar15 = (ulong)uVar4;
      } while (uVar4 != 0);
      iVar16 = *(int *)(*(long *)(lVar11 + 8) + 0x26c);
      do {
        lVar14 = *(long *)(lVar14 + 0x10);
        uVar4 = (int)uVar19 - 1;
        uVar19 = (ulong)uVar4;
      } while (uVar4 != 0);
      lVar14 = *(long *)(lVar14 + 8);
    }
    iVar3 = *(int *)(lVar14 + 0x270);
    *(undefined4 *)(lVar10 + 0x48) = 0;
    *(ulong *)(lVar10 + 0x30) = (ulong)(uint)(iVar16 - iVar3);
    if ((uVar2 >> 0x1d & 1) != 0) {
      plVar6 = (long *)func_0x03f0b2e0(0x20);
      lVar14 = lRam000000000419a140;
      lVar11 = *(long *)(lVar10 + 0x18);
      *(long **)(lVar10 + 0x20) = plVar6;
      plVar6[2] = 0;
      plVar6[3] = lVar11;
      *plVar6 = lVar14 + 0x10;
      plVar6[1] = 0;
      return (long *)0x0;
    }
    if ((uVar5 & 1) == 0) {
      if ((uVar5 >> 2 & 1) == 0) {
        if ((uVar5 >> 1 & 1) == 0) goto code_r0x01ef3820;
        plVar6 = (long *)func_0x03f0b2e0(0x168);
        func_0x03f2c560(plVar6,*(undefined8 *)(lVar10 + 0x18),param_4);
      }
      else {
        plVar6 = (long *)func_0x03f0b2e0(0x58);
        plVar6[9] = 0;
        plVar6[10] = 0;
        plVar6[2] = 0;
        plVar6[1] = 0;
        lVar14 = lRam000000000419a150;
        uVar8 = *(undefined8 *)(lVar10 + 0x18);
        plVar6[4] = 0;
        plVar6[3] = 0;
        plVar6[6] = 0;
        plVar6[5] = 0;
        *(undefined8 *)((long)plVar6 + 0x39) = 0;
        *(undefined8 *)((long)plVar6 + 0x31) = 0;
        *plVar6 = lVar14 + 0x10;
        func_0x03f2c570(plVar6,uVar8,param_4);
      }
    }
    else {
      plVar6 = (long *)func_0x03f0b2e0(0x58);
      plVar6[9] = 0;
      plVar6[10] = 0;
      plVar6[2] = 0;
      plVar6[1] = 0;
      lVar14 = lRam000000000419a148;
      uVar8 = *(undefined8 *)(lVar10 + 0x18);
      plVar6[4] = 0;
      plVar6[3] = 0;
      plVar6[6] = 0;
      plVar6[5] = 0;
      *(undefined8 *)((long)plVar6 + 0x39) = 0;
      *(undefined8 *)((long)plVar6 + 0x31) = 0;
      *plVar6 = lVar14 + 0x10;
      func_0x03f2c570(plVar6,uVar8,param_4);
    }
    plVar18 = (long *)0x0;
    *(long **)(lVar10 + 0x20) = plVar6;
  }
  else {
    *(undefined8 *)(lVar10 + 0x30) = 0;
    *(undefined4 *)(lVar10 + 0x48) = 0;
code_r0x01ef3820:
    func_0x03f2c2c0(lVar10 + 0x18);
    plVar18 = (long *)0x80008002;
  }
  return plVar18;
}


