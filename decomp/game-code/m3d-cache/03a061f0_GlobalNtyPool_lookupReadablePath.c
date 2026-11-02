// M3d: GlobalNtyPool_lookupReadablePath @ 0x3a061f0 (Ghidra decompile, true address)
#

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 m3d_3a061f0(undefined8 param_1,undefined1 *param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined1 auVar17 [16];
  long lStack_920;
  undefined1 *puStack_918;
  undefined1 auStack_910 [32];
  int iStack_8f0;
  uint uStack_8ec;
  undefined4 uStack_8e8;
  char cStack_8e4;
  long lStack_8e0;
  long lStack_8d8;
  undefined1 auStack_858 [1025];
  undefined1 auStack_457 [1023];
  long lStack_58;
  
  lVar1 = tpidr_el0;
  lStack_58 = *(long *)(lVar1 + 0x28);
  uVar5 = func_0x03f0b2d0(param_2);
  if (0 < (int)uVar5) {
    uVar5 = uVar5 & 0x7fffffff;
    do {
      bVar4 = uVar5 != 0;
      uVar5 = uVar5 - 1;
    } while (bVar4 && uVar5 != 0);
  }
  func_0x03f0c950(auStack_457,0,0x3fe);
  lVar6 = func_0x03f131a0(param_2,0x2f);
  if (lVar6 == 0) {
    m3d_3a05e1c(auStack_457);
  }
  else {
    func_0x03f0c950((ulong)auStack_858 | 1,0,0x3fd);
    auStack_858[0] = *param_2;
    lVar6 = 1;
    while (lVar7 = func_0x03f131a0(param_2,0x2f), lVar7 != 0) {
      param_2 = (undefined1 *)(lVar7 + 1);
      auStack_858[lVar6] = *param_2;
      lVar6 = lVar6 + 1;
    }
    m3d_3a05e1c(auStack_457);
  }
  func_0x03fa3430(param_3,auStack_457,1);
  if (*(long *)(lVar1 + 0x28) == lStack_58) {
    return 0;
  }
  auVar17 = func_0x03f0b330();
  lVar11 = auVar17._8_8_;
  lVar8 = auVar17._0_8_;
  lVar6 = tpidr_el0;
  lStack_8d8 = *(long *)(lVar6 + 0x28);
  func_0x03f2c520(*(long *)(lVar8 + 0x68) + 8);
  func_0x03f2c520(*(long *)(lVar11 + 0x250) + 8);
  lVar7 = lRam00000000041b64f8;
  uVar10 = ram0x0145f918;
  plVar12 = *(long **)(lVar11 + 0x10);
  lVar1 = lRam00000000041b64f8 + 0x10;
  *(long **)(lVar11 + 600) = plVar12;
  do {
    if ((plVar12 == (long *)(lVar11 + 0x18)) || (lVar16 = plVar12[0xc], lVar16 == 0)) break;
    uStack_8ec = 0;
    uStack_8e8 = 0x20;
    lVar15 = *(long *)(lVar16 + 0x20);
    iStack_8f0 = 0x20;
    cStack_8e4 = '\0';
    auStack_910[0] = 0;
    lStack_920 = lVar1;
    puStack_918 = auStack_910;
    if (lVar15 == 0) {
      iStack_8f0 = (int)uVar10;
      uStack_8ec = (uint)((ulong)uVar10 >> 0x20);
      auStack_910[0] = 0;
    }
    else {
      uVar3 = *(uint *)(lVar16 + 0x4c);
      if (0 < (int)uVar3) {
        puVar9 = auStack_910;
        if (0x1e < uVar3) {
          iStack_8f0 = (uVar3 & 0x7fffffe0) + 0x20;
          iVar2 = iStack_8f0;
          if (iStack_8f0 < 0) {
            iVar2 = -1;
          }
          puVar9 = (undefined1 *)func_0x03f0f980((long)iVar2);
          cStack_8e4 = '\x01';
        }
        puStack_918 = puVar9;
        func_0x03f0b910(puVar9,lVar15,(ulong)uVar3);
        puVar9[uVar3] = 0;
        uStack_8ec = uVar3;
      }
    }
    lStack_8e0 = lVar16;
    func_0x03fa40e0(lVar8 + 8,&lStack_920,&lStack_920);
    lStack_920 = lVar7 + 0x10;
    if ((cStack_8e4 != '\0') && (puStack_918 != (undefined1 *)0x0)) {
      func_0x03f0ca10();
    }
    plVar14 = (long *)(*(long **)(lVar11 + 600))[1];
    plVar13 = *(long **)(lVar11 + 600);
    if (plVar14 == (long *)0x0) {
      do {
        plVar12 = (long *)plVar13[2];
        bVar4 = (long *)*plVar12 != plVar13;
        plVar13 = plVar12;
      } while (bVar4);
    }
    else {
      do {
        plVar12 = plVar14;
        plVar14 = (long *)*plVar12;
      } while ((long *)*plVar12 != (long *)0x0);
    }
    *(long **)(lVar11 + 600) = plVar12;
  } while (plVar12 != (long *)(lVar11 + 0x18));
  func_0x03f2c530(*(long *)(lVar11 + 0x250) + 8);
  func_0x03f2c530(*(long *)(lVar8 + 0x68) + 8);
  if (*(long *)(lVar6 + 0x28) != lStack_8d8) {
    plVar12 = (long *)func_0x03f0b330();
    uVar10 = func_0x03f2c530(*(long *)(*plVar12 + 0x250) + 8);
    return uVar10;
  }
  return 0;
}


