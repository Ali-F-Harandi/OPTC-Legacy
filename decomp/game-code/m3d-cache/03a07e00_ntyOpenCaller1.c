// M3d: ntyOpenCaller1 @ 0x3a07e00 (Ghidra decompile, true address)
#

/* WARNING: Possible PIC construction at 0x03a07e54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03a080a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03a08a78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03a08bb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03a07f9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03a08074: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03a07fa0) */
/* WARNING: Removing unreachable block (ram,0x03a07f50) */
/* WARNING: Removing unreachable block (ram,0x03a07f68) */
/* WARNING: Removing unreachable block (ram,0x03a07fc0) */
/* WARNING: Removing unreachable block (ram,0x03a07fc4) */
/* WARNING: Removing unreachable block (ram,0x03a08bb4) */
/* WARNING: Removing unreachable block (ram,0x03a08a7c) */
/* WARNING: Removing unreachable block (ram,0x03a07e58) */
/* WARNING: Removing unreachable block (ram,0x03a08078) */
/* WARNING: Removing unreachable block (ram,0x03a07fdc) */
/* WARNING: Removing unreachable block (ram,0x03a07fe4) */
/* WARNING: Removing unreachable block (ram,0x03a07ffc) */
/* WARNING: Removing unreachable block (ram,0x03a0800c) */
/* WARNING: Removing unreachable block (ram,0x03a08014) */

long m3d_3a07e00(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                undefined1 param_4 [16],undefined1 param_5 [16],undefined1 param_6 [16],
                undefined1 param_7 [16],undefined1 param_8 [16])

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar4;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  long **pplVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  char *pcVar17;
  undefined1 *puVar18;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined4 uVar19;
  undefined8 *puVar20;
  long unaff_x19;
  long *plVar21;
  long unaff_x20;
  long lVar22;
  undefined1 *puVar23;
  long lVar24;
  long *plVar25;
  long *plVar26;
  long unaff_x23;
  long *unaff_x24;
  undefined1 *unaff_x25;
  long unaff_x26;
  undefined8 unaff_x28;
  undefined1 ***unaff_x29;
  undefined8 extraout_d0;
  undefined1 auVar27 [16];
  undefined8 extraout_var;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  int in_stack_00000000;
  long *in_stack_00000010;
  undefined8 *in_stack_00000018;
  long *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined1 auStack_db0 [12];
  uint uStack_da4;
  long *plStack_da0;
  long lStack_d98;
  undefined1 **ppuStack_d90;
  undefined8 uStack_d88;
  long *plStack_d40;
  long *plStack_d38;
  long *plStack_d30;
  undefined8 uStack_d28;
  undefined8 uStack_d20;
  undefined8 uStack_d18;
  undefined8 uStack_d10;
  undefined7 uStack_d08;
  undefined1 uStack_d01;
  undefined7 uStack_d00;
  undefined8 uStack_cf9;
  long lStack_ce8;
  undefined1 *puStack_ce0;
  undefined8 uStack_cd8;
  undefined1 *puStack_cd0;
  undefined1 *puStack_cc8;
  undefined1 *puStack_cc0;
  long lStack_cb8;
  undefined1 auStack_ca5 [1023];
  undefined1 auStack_8a6 [1023];
  undefined1 auStack_4a7 [1023];
  long lStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_50 [8];
  long lStack_48;
  
  uVar40 = param_8._8_8_;
  uVar39 = param_8._0_8_;
  uVar38 = param_7._8_8_;
  uVar37 = param_7._0_8_;
  uVar36 = param_6._8_8_;
  uVar35 = param_6._0_8_;
  uVar34 = param_5._8_8_;
  uVar33 = param_5._0_8_;
  uVar32 = param_4._8_8_;
  uVar31 = param_4._0_8_;
  uVar30 = param_3._8_8_;
  uVar29 = param_3._0_8_;
  uVar15 = param_2._8_8_;
  uVar28 = param_2._0_8_;
  *(undefined8 *)(unaff_x19 + 8) = 0;
  plVar5 = (long *)func_0x03f0b2e0(0x4f8);
  func_0x03f2c330();
  puVar16 = (undefined1 *)0x0;
  if (unaff_x20 != 0) {
    puVar16 = (undefined1 *)register0x00000008;
  }
  uVar6 = func_0x03f2c340(plVar5);
  if ((uVar6 & 1) == 0) {
    lVar22 = 0xc0000009;
    (**(code **)(*plVar5 + 8))(plVar5);
    *(undefined8 *)(unaff_x19 + 8) = 0;
    if (in_stack_00000010 != (long *)0x0) {
      if ((in_stack_00000010[1] != 0) && (*in_stack_00000010 != 0)) {
        func_0x03f0cbe0();
      }
      goto code_r0x03f0b310;
    }
code_r0x03a080b0:
    if (*(undefined1 ***)(unaff_x23 + 0x28) == unaff_x29[-1]) {
      return lVar22;
    }
    plVar5 = (long *)func_0x03f0b330();
    lVar10 = tpidr_el0;
    lStack_48 = *(long *)(lVar10 + 0x28);
    *plVar5 = lRam00000000041b6540 + 0x10;
    plVar5[1] = 0;
    func_0x03a02898(plVar5 + 2);
    lVar22 = lRam00000000041b6190 + 0x10;
    plVar5[0xd] = lVar22;
    *(undefined1 *)(plVar5 + 0xf) = 0;
    plVar5[0xe] = (long)(plVar5 + 0xf);
    plVar5[0x2b] = lVar22;
    *(undefined1 *)(plVar5 + 0x1d) = 0;
    plVar5[0x2c] = (long)(plVar5 + 0x2d);
    plVar5[0x1c] = (long)(plVar5 + 0x1d);
    plVar5[0x33] = (long)(plVar5 + 0x34);
    *(undefined1 *)(plVar5 + 0x24) = 0;
    plVar5[0x3a] = (long)(plVar5 + 0x3b);
    plVar5[0x23] = (long)(plVar5 + 0x24);
    plVar5[0x41] = (long)(plVar5 + 0x42);
    *(undefined8 *)((long)plVar5 + 0x18c) = 0x2000000000;
    *(undefined4 *)(plVar5 + 0x13) = 0x20;
    *(undefined1 *)((long)plVar5 + 0xa4) = 0;
    *(undefined1 *)(plVar5 + 0x16) = 0;
    plVar5[0x15] = (long)(plVar5 + 0x16);
    *(undefined4 *)(plVar5 + 0x1a) = 0x20;
    *(undefined1 *)((long)plVar5 + 0xdc) = 0;
    *(undefined4 *)(plVar5 + 0x21) = 0x20;
    *(undefined1 *)((long)plVar5 + 0x114) = 0;
    *(undefined4 *)(plVar5 + 0x28) = 0x20;
    *(undefined1 *)((long)plVar5 + 0x14c) = 0;
    *(undefined4 *)((long)plVar5 + 0x154) = 0;
    *(undefined8 *)((long)plVar5 + 0x9c) = 0x2000000000;
    *(undefined8 *)((long)plVar5 + 0xd4) = 0x2000000000;
    *(undefined8 *)((long)plVar5 + 0x10c) = 0x2000000000;
    *(undefined8 *)((long)plVar5 + 0x144) = 0x2000000000;
    *(undefined2 *)(plVar5 + 0x2a) = 0;
    *(undefined4 *)(plVar5 + 0x31) = 0x20;
    *(undefined1 *)((long)plVar5 + 0x194) = 0;
    plVar5[0x38] = 0x20;
    *(undefined1 *)((long)plVar5 + 0x1cc) = 0;
    *(undefined4 *)(plVar5 + 0x39) = 0x20;
    *(undefined4 *)(plVar5 + 0x3f) = 0x20;
    *(undefined1 *)((long)plVar5 + 0x204) = 0;
    *(undefined4 *)(plVar5 + 0x46) = 0x20;
    *(undefined1 *)((long)plVar5 + 0x23c) = 0;
    *(undefined4 *)((long)plVar5 + 0x244) = 0;
    *(undefined1 *)(plVar5 + 0x2d) = 0;
    *(undefined1 *)(plVar5 + 0x34) = 0;
    *(undefined1 *)(plVar5 + 0x3b) = 0;
    *(undefined8 *)((long)plVar5 + 0x1fc) = 0x2000000000;
    *(undefined1 *)(plVar5 + 0x42) = 0;
    lVar22 = lRam000000000419a598;
    *(undefined8 *)((long)plVar5 + 0x234) = 0x2000000000;
    *(undefined2 *)(plVar5 + 0x48) = 0;
    plVar5[0x49] = lVar22 + 0x10;
    plVar21 = (long *)func_0x03f0b2e0(0x30);
    *plVar21 = lRam000000000419a5a0 + 0x10;
    func_0x03f2dd80(auStack_50);
    func_0x03f2dd90(plVar21 + 1,auStack_50);
    lVar22 = func_0x03f2dda0(auStack_50);
    plVar5[0x4a] = (long)plVar21;
    if (*(long *)(lVar10 + 0x28) == lStack_48) {
      return lVar22;
    }
    auVar41 = func_0x03f0b330();
    lVar22 = auVar41._8_8_;
    uStack_98 = 0x3a0831c;
    unaff_x24 = (long *)tpidr_el0;
    lStack_a8 = unaff_x24[5];
    puStack_a0 = &stack0xffffffffffffffc0;
    plVar5 = (long *)func_0x03f2e950();
    unaff_x25 = auStack_8a6;
    (**(code **)(*plVar5 + 0x20))(plVar5,auStack_8a6,0x3fe,auVar41._0_8_);
    puVar8 = (undefined1 *)func_0x03f2cbd0(auStack_8a6,0x3ff);
    uVar9 = func_0x03f0b2d0(puVar16);
    uVar6 = uVar9;
    if (puVar8 + uVar9 < (undefined1 *)0x3fd) {
code_r0x03a083b8:
      puVar8 = unaff_x25 + (long)puVar8;
      func_0x03f0b910(puVar8,puVar16,uVar6);
      puVar8[uVar6] = 0;
    }
    else {
      iVar3 = 0x3fd - (int)puVar8;
      if ((ulong)(long)iVar3 <= uVar9) {
        uVar6 = (long)iVar3;
      }
      if (iVar3 < (int)uVar9) goto code_r0x03a083b8;
    }
    plVar5 = (long *)func_0x03f2e950();
    uVar4 = (**(code **)(*plVar5 + 0x28))(plVar5,auStack_ca5,0x3fe,auVar41._0_8_);
    puVar23 = (undefined1 *)(ulong)uVar4;
    plVar5 = (long *)func_0x03f25160();
    if ((int)uVar4 < 0) {
      puVar11 = (undefined1 *)(**(code **)(*plVar5 + 0x20))();
      plVar5 = (long *)func_0x03f2e950();
      lVar10 = *plVar5;
      puVar23 = puVar11;
    }
    else {
      uVar6 = (**(code **)(*plVar5 + 0x50))(plVar5,auStack_ca5);
      if ((uVar6 & 1) != 0) {
        plVar5 = (long *)func_0x03f25160();
        puVar23 = (undefined1 *)(**(code **)(*plVar5 + 0x20))();
        plVar5 = (long *)func_0x03f25160();
        (**(code **)(*plVar5 + 0x20))();
        lVar10 = func_0x03f0b2d0();
        if (lVar10 + 1U < 0x3fe) {
          plVar5 = (long *)func_0x03f25160();
          (**(code **)(*plVar5 + 0x20))();
          lVar10 = func_0x03f0b2d0();
          lVar10 = lVar10 + 1;
        }
        else {
          lVar10 = 0x3fe;
        }
        func_0x03f30520(auStack_ca5,puVar23,lVar10,0x3ff);
      }
      plVar5 = (long *)func_0x03f2e950();
      lVar10 = *plVar5;
      puVar11 = auStack_ca5;
    }
    puVar18 = auStack_8a6;
    (**(code **)(lVar10 + 0x30))(plVar5,auStack_4a7,0x3ff,puVar11);
    func_0x03fa3430(lVar22,auStack_4a7,0);
    if (unaff_x24[5] == lStack_a8) {
      return *(long *)(lVar22 + 8);
    }
    lVar12 = func_0x03f0b330(*(long *)(lVar22 + 8));
    uStack_cd8 = 0x3a084fc;
    lVar10 = tpidr_el0;
    lStack_ce8 = *(long *)(lVar10 + 0x28);
    lVar24 = *(long *)(*(long *)(lVar12 + 8) + 0x28);
    puStack_ce0 = (undefined1 *)&puStack_a0;
    puStack_cd0 = puVar8;
    puStack_cc8 = puVar16;
    puStack_cc0 = puVar23;
    lStack_cb8 = lVar22;
    if (lVar24 == 0) {
code_r0x03a08594:
      lVar22 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar12 + 0x140);
      puStack_ce0 = (undefined1 *)&puStack_a0;
      plVar5 = (long *)func_0x03f25160();
      uVar4 = (**(code **)(*plVar5 + 0x48))(plVar5,uVar7);
      if ((uVar4 >> 0x1e & 1) == 0) {
        lVar22 = *(long *)(*(long *)(lVar12 + 8) + 0x28);
        if (lVar22 != 0) {
          plVar5 = (long *)func_0x03f2cc80(*(undefined8 *)(lVar12 + 0x140),0x2c000000);
          plStack_d30 = plVar5;
          if (plVar5 == (long *)0x0) goto code_r0x03a08644;
          uVar7 = func_0x03f0b2d0(lVar22);
          (**(code **)(*plVar5 + 0x28))(plVar5,lVar22,uVar7);
          pplVar13 = &plStack_d30;
code_r0x03a08590:
          func_0x03f2c2c0(pplVar13);
        }
        goto code_r0x03a08594;
      }
      uStack_cf9 = 0;
      uStack_d00 = 0;
      uStack_d18 = 0;
      uStack_d20 = 0;
      uStack_d08 = 0;
      uStack_d01 = 0;
      uStack_d10 = 0;
      uStack_d28 = 0;
      plStack_d30 = (long *)0x0;
      plStack_d40 = (long *)func_0x03f2cc80(*(undefined8 *)(lVar12 + 0x140),0x40000000);
      if (plStack_d40 == (long *)0x0) {
code_r0x03a08644:
        lVar22 = 0xc0000005;
      }
      else {
        uVar4 = (**(code **)(*plStack_d40 + 0x18))(plStack_d40,&plStack_d30,0x3f);
        func_0x03f2c2c0(&plStack_d40);
        if ((int)uVar4 < 0) {
          lVar22 = 0xc0000004;
        }
        else {
          lVar22 = func_0x03f0b3f0(&plStack_d30,lVar24,uVar4 & 0x7fffffff);
          if ((int)lVar22 != 0) {
            lVar22 = *(long *)(*(long *)(lVar12 + 8) + 0x28);
            if (lVar22 == 0) goto code_r0x03a08594;
            plVar5 = (long *)func_0x03f2cc80(*(undefined8 *)(lVar12 + 0x140),0x2c000000);
            plStack_d38 = plVar5;
            if (plVar5 != (long *)0x0) {
              uVar7 = func_0x03f0b2d0(lVar22);
              (**(code **)(*plVar5 + 0x28))(plVar5,lVar22,uVar7);
              pplVar13 = &plStack_d38;
              goto code_r0x03a08590;
            }
            goto code_r0x03a08644;
          }
        }
      }
    }
    if (*(long *)(lVar10 + 0x28) == lStack_ce8) {
      return lVar22;
    }
    auVar41 = func_0x03f0b330(lVar22);
    plVar14 = auVar41._8_8_;
    uStack_d88 = 0x3a08684;
    unaff_x29 = &ppuStack_d90;
    unaff_x23 = tpidr_el0;
    lStack_d98 = *(long *)(unaff_x23 + 0x28);
    unaff_x19 = 0xc0000005;
    plVar5 = *(long **)(auVar41._0_8_ + 0x230);
    ppuStack_d90 = &puStack_ce0;
    plVar21 = (long *)func_0x03f25160();
    uVar6 = (**(code **)(*plVar21 + 0x40))(plVar21,plVar5);
    if ((uVar6 & 1) == 0) {
      unaff_x19 = 0xc000000c;
    }
    else {
      plVar5 = plVar14 + 1;
      plVar21 = (long *)*plVar5;
      while (plVar21 != (long *)0x0) {
        lVar22 = *plVar21;
        plVar21 = (long *)plVar21[2];
        (**(code **)(lVar22 + 8))();
        unaff_x24 = plVar21;
      }
      *plVar5 = 0;
      plVar14[2] = 0;
      *(undefined4 *)(plVar14 + 3) = 0;
      plVar21 = (long *)func_0x03f2cc80(*(undefined8 *)(auVar41._0_8_ + 0x230),0x40000000);
      plStack_da0 = plVar21;
      if (plVar21 != (long *)0x0) {
        lVar22 = (**(code **)(*plVar21 + 0x18))(plVar21,&uStack_da4,4);
        if (lVar22 == 4) {
          if (uStack_da4 == 0) {
            lVar22 = (**(code **)(*plVar21 + 0x18))(plVar21,&uStack_da4,4);
            if (lVar22 == 4) {
              uVar4 = (uStack_da4 & 0xff00ff00) >> 8 | (uStack_da4 & 0xff00ff) << 8;
              uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
              bVar2 = uStack_da4 != 0;
              uStack_da4 = uVar4;
              if (bVar2) {
                unaff_x24 = (long *)0x0;
                unaff_x25 = (undefined1 *)(lRam00000000041b6548 + 0x10);
                unaff_x26 = lRam00000000041b6550 + 0x10;
                do {
                  plVar21 = (long *)func_0x03f0b2e0(0x410);
                  *plVar21 = (long)unaff_x25;
                  plVar21[0x81] = 0;
                  func_0x03f0c950(plVar21 + 1,0,0x3fe);
                  lVar22 = (**(code **)(*plStack_da0 + 0x18))(plStack_da0,plVar21 + 0x81,8);
                  if (lVar22 != 8) {
                    unaff_x19 = 0xc000000f;
code_r0x03a0891c:
                    (**(code **)(*plVar21 + 8))(plVar21);
                    goto code_r0x03a087a4;
                  }
                  lVar22 = (**(code **)(*plStack_da0 + 0x18))(plStack_da0,plVar21 + 1,0x24);
                  if (lVar22 != 0x24) {
                    unaff_x19 = 0xc000000d;
                    goto code_r0x03a0891c;
                  }
                  plVar26 = (long *)func_0x03f0b2e0(0x20);
                  lVar22 = *plVar5;
                  plVar26[2] = 0;
                  plVar26[3] = 0;
                  *plVar26 = unaff_x26;
                  plVar26[1] = (long)plVar21;
                  if (lVar22 == 0) {
                    plVar14[2] = (long)plVar26;
                  }
                  else {
                    *(long **)(lVar22 + 0x18) = plVar26;
                    plVar26[2] = lVar22;
                  }
                  uVar4 = (int)unaff_x24 + 1;
                  unaff_x24 = (long *)(ulong)uVar4;
                  plVar14[1] = (long)plVar26;
                  *(int *)(plVar14 + 3) = (int)plVar14[3] + 1;
                } while (uVar4 < uStack_da4);
              }
              auVar41._8_8_ = plVar14;
              auVar41._0_8_ = plVar21;
              func_0x03f2c2c0(&plStack_da0);
              unaff_x19 = 0;
              goto code_r0x03a08824;
            }
            goto code_r0x03a087a0;
          }
          unaff_x19 = 0xc000000e;
        }
        else {
code_r0x03a087a0:
          unaff_x19 = 0xc000000f;
        }
code_r0x03a087a4:
        func_0x03f2c2c0(&plStack_da0);
        puVar20 = (undefined8 *)*plVar14;
        plVar26 = (long *)plVar14[1];
        plVar21 = (long *)*puVar20;
        plVar25 = plVar14;
        if (((long *)puVar20[1] != plVar14) || (plVar26 != plVar21)) {
          do {
            if ((long *)plVar26[1] != (long *)0x0) {
              (**(code **)(*(long *)plVar26[1] + 8))();
              puVar20 = (undefined8 *)*plVar14;
              plVar21 = (long *)*puVar20;
            }
            plVar26 = (long *)plVar26[2];
          } while (((long *)puVar20[1] != plVar14) || (plVar26 != plVar21));
          plVar26 = (long *)*plVar5;
        }
        while (plVar26 != (long *)0x0) {
          plVar25 = (long *)plVar26[2];
          (**(code **)(*plVar26 + 8))(plVar26);
          plVar26 = plVar25;
        }
        *plVar5 = 0;
        plVar14[2] = 0;
        *(undefined4 *)(plVar14 + 3) = 0;
        auVar42._8_8_ = 0;
        auVar42._0_8_ = plVar25;
        auVar41 = auVar42 << 0x40;
      }
    }
code_r0x03a08824:
    if (*(long *)(unaff_x23 + 0x28) == lStack_d98) {
      return unaff_x19;
    }
    uVar7 = 0x3a08934;
    puVar16 = (undefined1 *)func_0x03f0b330();
    auVar27._8_8_ = extraout_var;
    auVar27._0_8_ = extraout_d0;
    register0x00000008 = (BADSPACEBASE *)auStack_db0;
  }
  else {
    *(long **)(unaff_x19 + 8) = plVar5;
    if (in_stack_00000010 != (long *)0x0) {
      if ((in_stack_00000010[1] != 0) && (*in_stack_00000010 != 0)) {
        func_0x03f0cbe0();
      }
      goto code_r0x03f0b310;
    }
    uVar7 = func_0x03f0b2e0(0x260);
    func_0x03fa41f0();
    *(undefined8 *)(unaff_x19 + 0x38) = uVar7;
    func_0x03fa4120(uVar7);
    uVar7 = *(undefined8 *)(unaff_x19 + 0x50);
    plVar5 = (long *)func_0x03f25160();
    uVar6 = (**(code **)(*plVar5 + 0x50))(plVar5,uVar7);
    uVar19 = 0x808000;
    if ((uVar6 & 1) == 0) {
      uVar19 = 0x1008000;
    }
    *(undefined4 *)(unaff_x19 + 0x44) = uVar19;
    func_0x03fa41d0(*(undefined8 *)(unaff_x19 + 0x50),unaff_x19 + 0x138,s__Gemfile_lock_014092e2);
    func_0x03fa41d0(*(undefined8 *)(unaff_x19 + 0x50),unaff_x19 + 0x228,s__yml_0139327f);
    puVar16 = (undefined1 *)(ulong)(in_stack_00000000 != 0);
    func_0x03fa4200(*(undefined8 *)(unaff_x19 + 800),*(undefined8 *)(unaff_x19 + 8));
    func_0x03fa4210();
    in_stack_00000020 = (long *)0x0;
    in_stack_00000028 = 0;
    in_stack_00000030 = 0;
    in_stack_00000018 = (undefined8 *)func_0x03f0b2e0(0x10);
    *in_stack_00000018 = 0;
    in_stack_00000018[1] = &stack0x00000018;
    iVar3 = func_0x03fa4220();
    plVar5 = in_stack_00000020;
    if (iVar3 < 0) {
      while (plVar5 != (long *)0x0) {
        plVar21 = (long *)plVar5[2];
        (**(code **)(*plVar5 + 8))();
        plVar5 = plVar21;
      }
code_r0x03a08098:
      in_stack_00000020 = (long *)0x0;
      in_stack_00000028 = 0;
      in_stack_00000030 = 0;
      if (in_stack_00000018 != (undefined8 *)0x0) goto code_r0x03f0b310;
      lVar22 = 0;
      goto code_r0x03a080b0;
    }
    if ((&stack0x00000018 == (undefined8 **)in_stack_00000018[1]) &&
       (in_stack_00000020 == (long *)*in_stack_00000018)) {
      while (plVar5 != (long *)0x0) {
        plVar21 = (long *)plVar5[2];
        (**(code **)(*plVar5 + 8))();
        plVar5 = plVar21;
      }
      goto code_r0x03a08098;
    }
    lVar22 = in_stack_00000020[1];
    auVar41._8_8_ = lVar22;
    auVar41._0_8_ = &stack0x00000018;
    auVar27 = func_0x03f0c950(&stack0x00000039,0,0x3fe);
    in_x5 = *(undefined8 *)(lVar22 + 0x408);
    puVar16 = &stack0x00000039;
    puVar18 = *(undefined1 **)(*(long *)(unaff_x19 + 0x38) + 0x160);
    uVar7 = 0x3a07fa0;
  }
  *(undefined1 ****)((long)register0x00000008 + -0x20) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -0x18) = uVar7;
  *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x28;
  *(long *)((long)register0x00000008 + -8) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x90) = puVar18;
  *(undefined8 *)((long)register0x00000008 + -0x88) = in_x5;
  *(undefined8 *)((long)register0x00000008 + -0x80) = in_x6;
  *(undefined8 *)((long)register0x00000008 + -0x78) = in_x7;
  pcVar17 = s__s__08llu_assets_0132ed71;
  *(undefined1 (*) [16])((long)register0x00000008 + -0x110) = auVar27;
  *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar15;
  *(undefined8 *)((long)register0x00000008 + -0x100) = uVar28;
  puVar8 = (undefined1 *)((long)register0x00000008 + -0x70);
  *(undefined8 *)((long)register0x00000008 + -0xe8) = uVar30;
  *(undefined8 *)((long)register0x00000008 + -0xf0) = uVar29;
  *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar32;
  *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar31;
  *(undefined8 *)((long)register0x00000008 + -200) = uVar34;
  *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar33;
  *(undefined8 *)((long)register0x00000008 + -0xb8) = uVar36;
  *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar35;
  *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar38;
  *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar37;
  *(undefined8 *)((long)register0x00000008 + -0x98) = uVar40;
  *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar39;
  lVar22 = tpidr_el0;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)(lVar22 + 0x28);
  *(BADSPACEBASE **)((long)register0x00000008 + -0x48) = register0x00000008;
  *(undefined1 **)((long)register0x00000008 + -0x40) =
       (undefined1 *)((long)register0x00000008 + -0x70);
  *(undefined1 **)((long)register0x00000008 + -0x38) =
       (undefined1 *)((long)register0x00000008 + -0x90);
  *(undefined8 *)((long)register0x00000008 + -0x30) = 0xffffff80ffffffe0;
  *(undefined8 *)((long)register0x00000008 + -0x68) =
       *(undefined8 *)((long)register0x00000008 + -0x40);
  *(undefined8 *)((long)register0x00000008 + -0x70) =
       *(undefined8 *)((long)register0x00000008 + -0x48);
  *(undefined8 *)((long)register0x00000008 + -0x58) =
       *(undefined8 *)((long)register0x00000008 + -0x30);
  *(undefined8 *)((long)register0x00000008 + -0x60) =
       *(undefined8 *)((long)register0x00000008 + -0x38);
  lVar10 = func_0x03f0b700(puVar16,0x3fe);
  if (*(long *)(lVar22 + 0x28) == *(long *)((long)register0x00000008 + -0x28)) {
    return lVar10;
  }
  auVar42 = func_0x03f0b330();
  uVar15 = auVar42._8_8_;
  uVar28 = auVar42._0_8_;
  *(undefined1 **)((long)register0x00000008 + -0x160) =
       (undefined1 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x158) = 0x3a089d0;
  *(long *)((long)register0x00000008 + -0x150) = unaff_x26;
  *(undefined1 **)((long)register0x00000008 + -0x148) = unaff_x25;
  *(long **)((long)register0x00000008 + -0x140) = unaff_x24;
  *(long *)((long)register0x00000008 + -0x138) = unaff_x23;
  *(long **)((long)register0x00000008 + -0x130) = plVar5;
  *(undefined1 (*) [16])((long)register0x00000008 + -0x128) = auVar41;
  *(long *)((long)register0x00000008 + -0x118) = lVar22;
  lVar22 = tpidr_el0;
  *(undefined8 *)((long)register0x00000008 + -0x168) = *(undefined8 *)(lVar22 + 0x28);
  plVar5 = (long *)func_0x03f0b2e0(0x858);
  func_0x03fa4250(plVar5,uVar28);
  *(long **)((long)register0x00000008 + -0x170) = plVar5;
  *(undefined1 *)(plVar5 + 3) = 0;
  func_0x03fa4260(uVar28,uVar15,plVar5 + 99,s__vbx_01449fe0);
  lVar10 = plVar5[100];
  *(undefined8 *)((long)register0x00000008 + -0x180) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x178) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x188) = 0;
  iVar3 = func_0x03fa41e0(lVar10,(undefined1 *)((long)register0x00000008 + -0x188),
                          (undefined1 *)((long)register0x00000008 + -0x178));
  plVar21 = *(long **)((long)register0x00000008 + -0x178);
  if ((iVar3 < 0) && (plVar21 != (long *)0x0)) {
    if ((plVar21[1] != 0) && (*plVar21 != 0)) {
      func_0x03f0cbe0();
    }
  }
  else {
    plVar14 = (long *)func_0x03f0b2e0(0x4f8);
    func_0x03f2c330();
    puVar16 = (undefined1 *)0x0;
    if (plVar21 != (long *)0x0) {
      puVar16 = (undefined1 *)((long)register0x00000008 + -0x188);
    }
    uVar6 = func_0x03f2c340(plVar14,uVar15,puVar16);
    if ((uVar6 & 1) == 0) {
      (**(code **)(*plVar14 + 8))(plVar14);
      plVar14 = (long *)0x0;
      bVar2 = false;
      plVar21 = *(long **)((long)register0x00000008 + -0x178);
    }
    else if (puVar8 == (undefined1 *)0x0) {
      bVar2 = true;
      plVar21 = *(long **)((long)register0x00000008 + -0x178);
    }
    else {
      iVar3 = func_0x03f27550(plVar14[5],puVar8 + 8,0x24);
      bVar2 = iVar3 == 0;
      plVar21 = *(long **)((long)register0x00000008 + -0x178);
    }
    if (plVar21 == (long *)0x0) {
      if (bVar2) {
        plVar5[1] = (long)plVar14;
        func_0x03fa3430(plVar5 + 9,uVar15,0);
        lVar10 = plVar5[10];
        plVar21 = (long *)func_0x03f25160();
        uVar6 = (**(code **)(*plVar21 + 0x50))(plVar21,lVar10);
        uVar19 = 0x810000;
        if ((uVar6 & 1) == 0) {
          uVar19 = 0x1010000;
        }
        *(undefined4 *)((long)plVar5 + 0x44) = uVar19;
        func_0x03fa4260(uVar28,uVar15,plVar5 + 0x27,s__Gemfile_lock_014092e2);
        func_0x03fa4200(plVar5[100],plVar14,*(int *)((long)register0x00000008 + -0x188) != 0);
        uVar15 = func_0x03fa3d60();
        func_0x03fa3fa0(uVar15,uVar28);
        uVar6 = ((ulong)pcVar17 & 0xff00ff00ff00ff00) >> 8 |
                ((ulong)pcVar17 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        lVar10 = func_0x03fa4270(uVar28,uVar6 >> 0x20 | uVar6 << 0x20,
                                 (undefined1 *)((long)register0x00000008 + -0x170));
      }
      else {
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 8))(plVar14);
        }
        (**(code **)(*plVar5 + 8))(plVar5);
        lVar10 = 0x80000000;
      }
      if (*(long *)(lVar22 + 0x28) == *(long *)((long)register0x00000008 + -0x168)) {
        return lVar10;
      }
      plVar21 = (long *)func_0x03f0b330(lVar10);
      *(undefined1 **)((long)register0x00000008 + -0x1c0) =
           (undefined1 *)((long)register0x00000008 + -0x160);
      *(undefined8 *)((long)register0x00000008 + -0x1b8) = 0x3a08c44;
      *(long **)((long)register0x00000008 + -0x1b0) = plVar5;
      *(char **)((long)register0x00000008 + -0x1a0) = pcVar17;
      *(undefined8 *)((long)register0x00000008 + -0x198) = uVar28;
      plVar5 = (long *)plVar21[1];
      while (plVar5 != (long *)0x0) {
        lVar22 = *plVar5;
        plVar5 = (long *)plVar5[2];
        (**(code **)(lVar22 + 8))();
      }
      plVar21[1] = 0;
      plVar21[2] = 0;
      *(undefined4 *)(plVar21 + 3) = 0;
      if (*plVar21 == 0) {
        return 0;
      }
    }
    else if ((plVar21[1] != 0) && (*plVar21 != 0)) {
      func_0x03f0cbe0();
    }
  }
code_r0x03f0b310:
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0,0x3f0b310);
  (*pcVar1)();
}


