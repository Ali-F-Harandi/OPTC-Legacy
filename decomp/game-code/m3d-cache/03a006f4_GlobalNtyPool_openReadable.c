// M3d: GlobalNtyPool_openReadable @ 0x3a006f4 (Ghidra decompile, true address)
#

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong m3d_3a006f4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 unaff_x20;
  long *unaff_x22;
  long *plVar9;
  undefined1 *unaff_x23;
  long lVar10;
  undefined1 *unaff_x24;
  long unaff_x25;
  undefined1 *unaff_x26;
  long lVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  long lStack_700;
  long lStack_6f8;
  undefined1 *puStack_6f0;
  code *pcStack_6e8;
  long *plStack_6e0;
  undefined1 *puStack_6d0;
  long lStack_6c8;
  undefined1 *puStack_6c0;
  undefined1 *puStack_6b8;
  long *plStack_6b0;
  long lStack_6a8;
  undefined8 uStack_6a0;
  ulong uStack_698;
  undefined8 uStack_690;
  long lStack_688;
  long lStack_680;
  char cStack_64c;
  undefined1 *puStack_648;
  undefined1 auStack_640 [32];
  undefined4 uStack_620;
  undefined8 uStack_61c;
  char cStack_614;
  undefined1 *puStack_610;
  undefined1 auStack_608 [32];
  undefined4 uStack_5e8;
  undefined8 uStack_5e4;
  char cStack_5dc;
  undefined1 *puStack_5d8;
  undefined1 auStack_5d0 [32];
  undefined4 uStack_5b0;
  undefined8 uStack_5ac;
  char cStack_5a4;
  byte bStack_5a0;
  undefined1 auStack_598 [1024];
  undefined8 uStack_198;
  undefined8 uStack_190;
  ulong uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined1 *puStack_168;
  undefined1 auStack_160 [32];
  undefined4 uStack_140;
  undefined8 uStack_13c;
  char cStack_134;
  undefined1 *puStack_130;
  undefined1 auStack_128 [32];
  undefined4 uStack_108;
  undefined8 uStack_104;
  char cStack_fc;
  undefined1 *puStack_f8;
  undefined1 auStack_f0 [32];
  undefined4 uStack_d0;
  undefined8 uStack_cc;
  char cStack_c4;
  undefined1 *puStack_c0;
  undefined1 auStack_b8 [32];
  undefined4 uStack_98;
  undefined8 uStack_94;
  char cStack_8c;
  undefined2 uStack_88;
  undefined4 uStack_84;
  long lStack_80;
  
  plVar9 = plRam00000000041b64a8;
  lVar2 = lRam00000000041b6190;
  puVar7 = &uStack_690;
  lVar10 = tpidr_el0;
  lStack_80 = *(long *)(lVar10 + 0x28);
  if (*plRam00000000041b64a8 == 0) {
    uVar8 = 0xc0000002;
    plStack_6e0 = plRam00000000041b64a8;
  }
  else {
    unaff_x22 = &lStack_170;
    uStack_140 = 0x20;
    uStack_108 = 0x20;
    puStack_168 = auStack_160;
    uStack_d0 = 0x20;
    lStack_170 = lRam00000000041b6190 + 0x10;
    unaff_x23 = auStack_128;
    uStack_98 = 0x20;
    unaff_x24 = auStack_f0;
    uStack_13c = 0x2000000000;
    unaff_x26 = auStack_b8;
    auStack_128[0] = 0;
    uStack_104 = 0x2000000000;
    auStack_f0[0] = 0;
    uStack_cc = 0x2000000000;
    auStack_b8[0] = 0;
    uStack_94 = 0x2000000000;
    uStack_88 = 0;
    cStack_134 = '\0';
    cStack_fc = '\0';
    cStack_c4 = '\0';
    cStack_8c = '\0';
    uStack_84 = 0;
    auStack_160[0] = 0;
    puStack_130 = unaff_x23;
    puStack_f8 = unaff_x24;
    puStack_c0 = unaff_x26;
    iVar3 = func_0x03fa3eb0(*(undefined8 *)(*plRam00000000041b64a8 + 0x28),param_1,&lStack_170);
    if (iVar3 < 0) {
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_198 = 0;
      func_0x03fa2550(auStack_598,param_1);
      uVar4 = func_0x03fa3f00(*plVar9,auStack_598);
      uVar8 = (ulong)uVar4;
      if (-1 < (int)uVar4) {
        func_0x03fa3f10(&lStack_688,uStack_690);
        puVar7 = (undefined8 *)(ulong)bStack_5a0;
        func_0x03fa3430(param_2,lStack_680);
        lStack_688 = lVar2 + 0x10;
        if ((cStack_5a4 != '\0') && (puStack_5d8 != (undefined1 *)0x0)) {
          func_0x03f0ca10();
        }
        uVar5 = _s__01460058;
        plVar9 = (long *)0x20;
        puStack_5d8 = auStack_5d0;
        cStack_5a4 = '\0';
        uStack_5b0 = 0x20;
        uStack_5ac = _s__01460058;
        auStack_5d0[0] = 0;
        if ((cStack_5dc != '\0') && (puStack_610 != (undefined1 *)0x0)) {
          func_0x03f0ca10();
        }
        puStack_610 = auStack_608;
        uStack_5e8 = 0x20;
        cStack_5dc = '\0';
        uStack_5e4 = uVar5;
        auStack_608[0] = 0;
        if ((cStack_614 != '\0') && (puStack_648 != (undefined1 *)0x0)) {
          func_0x03f0ca10();
        }
        cStack_614 = '\0';
        uStack_620 = 0x20;
        puStack_648 = auStack_640;
        uStack_61c = uVar5;
        auStack_640[0] = 0;
        if ((cStack_64c != '\0') && (lStack_680 != 0)) {
          func_0x03f0ca10();
        }
      }
      param_3 = puVar7;
      if ((uStack_188 & 1) != 0) {
        func_0x03f0b310(uStack_178);
        param_3 = puVar7;
      }
    }
    else {
      param_3 = (undefined8 *)(ulong)(byte)uStack_88;
      func_0x03fa3430(param_2,puStack_168);
      uVar8 = 0;
    }
    lStack_170 = lVar2 + 0x10;
    if ((cStack_8c != '\0') && (puStack_c0 != (undefined1 *)0x0)) {
      func_0x03f0ca10();
    }
    uVar5 = _s__01460058;
    unaff_x20 = 0x20;
    uStack_98 = 0x20;
    cStack_8c = 0;
    uStack_94 = _s__01460058;
    auStack_b8[0] = 0;
    puStack_c0 = unaff_x26;
    if ((cStack_c4 != '\0') && (puStack_f8 != (undefined1 *)0x0)) {
      func_0x03f0ca10();
    }
    uStack_d0 = 0x20;
    cStack_c4 = 0;
    uStack_cc = uVar5;
    auStack_f0[0] = 0;
    puStack_f8 = unaff_x24;
    if ((cStack_fc != '\0') && (puStack_130 != (undefined1 *)0x0)) {
      func_0x03f0ca10();
    }
    uStack_108 = 0x20;
    cStack_fc = 0;
    uStack_104 = uVar5;
    auStack_128[0] = 0;
    unaff_x25 = lVar2;
    plStack_6e0 = plVar9;
    puStack_130 = unaff_x23;
    if ((cStack_134 != '\0') && (puStack_168 != (undefined1 *)0x0)) {
      func_0x03f0ca10();
    }
  }
  if (*(long *)(lVar10 + 0x28) == lStack_80) {
    return uVar8;
  }
  auVar13 = func_0x03f0b330();
  lVar6 = auVar13._8_8_;
  lVar11 = auVar13._0_8_;
  pcStack_6e8 = m3d_3a00a58;
  lVar2 = tpidr_el0;
  lStack_6f8 = *(long *)(lVar2 + 0x28);
  lStack_700 = 0;
  puStack_6f0 = &stack0xffffffffffffffa0;
  puStack_6d0 = unaff_x26;
  lStack_6c8 = unaff_x25;
  puStack_6c0 = unaff_x24;
  puStack_6b8 = unaff_x23;
  plStack_6b0 = unaff_x22;
  lStack_6a8 = lVar10;
  uStack_6a0 = unaff_x20;
  uStack_698 = uVar8;
  iVar3 = func_0x03fa3ed0(*(undefined8 *)(lVar11 + 0x28),*(undefined8 *)(lVar6 + 0x408),&lStack_700)
  ;
  if (iVar3 < 0) {
    lVar10 = *(long *)(lVar6 + 0x400);
    if (lVar10 != 0) {
      *param_3 = 0;
      plVar9 = (long *)(lVar11 + 8);
      lVar11 = *(long *)(lVar11 + 0x10);
      uVar8 = 0xc000000a;
      if ((plVar9 != (long *)((long *)*plVar9)[1]) || (lVar11 != *(long *)*plVar9)) {
        uVar5 = func_0x03f0b2d0(lVar10);
        plVar12 = (long *)*plVar9;
        do {
          iVar3 = func_0x03f27550(**(long **)(lVar11 + 0x18) + 0x408,lVar10,uVar5);
          if (iVar3 == 0) {
            uVar5 = **(undefined8 **)(lVar11 + 0x18);
            *param_3 = uVar5;
            uVar8 = func_0x03fa3f20(uVar5,*(undefined8 *)(lVar6 + 0x408),&lStack_700);
            if ((int)uVar8 < 0) goto code_r0x03a00b74;
            goto code_r0x03a00ab8;
          }
          lVar11 = *(long *)(lVar11 + 0x20);
        } while ((plVar9 != (long *)plVar12[1]) || (lVar11 != *plVar12));
        uVar8 = 0xc000000a;
      }
      goto code_r0x03a00b74;
    }
    plVar9 = (long *)(lVar11 + 8);
    lVar10 = *(long *)(lVar11 + 0x10);
    if ((plVar9 != (long *)((long *)*plVar9)[1]) || (lVar10 != *(long *)*plVar9)) {
      do {
        iVar3 = func_0x03fa3f20(**(undefined8 **)(lVar10 + 0x18),*(undefined8 *)(lVar6 + 0x408),
                                &lStack_700);
        if (-1 < iVar3) goto code_r0x03a00ab8;
        lVar10 = *(long *)(lVar10 + 0x20);
      } while ((plVar9 != (long *)((long *)*plVar9)[1]) || (lVar10 != *(long *)*plVar9));
    }
  }
  else if (*(char *)(lStack_700 + 8) != '\0') {
code_r0x03a00ab8:
    uVar1 = *(undefined4 *)(lStack_700 + 0xc);
    uVar8 = 0;
    *param_3 = *(undefined8 *)(lStack_700 + 0x10);
    *param_4 = uVar1;
    goto code_r0x03a00b74;
  }
  uVar8 = 0xc0000000;
code_r0x03a00b74:
  if (*(long *)(lVar2 + 0x28) != lStack_6f8) {
    auVar13 = func_0x03f0b330(uVar8);
    iVar3 = func_0x03fa3ed0(*(undefined8 *)(auVar13._0_8_ + 0x28),
                            *(undefined8 *)(auVar13._8_8_ + 0x408));
    return (ulong)(iVar3 >> 0x1f & 0xc000000b);
  }
  return uVar8;
}


