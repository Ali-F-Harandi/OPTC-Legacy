// M3d: gnpFactoryCaller @ 0x3a00290 (Ghidra decompile, true address)
#

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong m3d_3a00290(undefined8 *param_1)

{
  undefined4 uVar1;
  bool in_ZR;
  bool in_CY;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  long unaff_x20;
  long lVar11;
  uint unaff_w21;
  long unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x29;
  undefined1 auVar12 [16];
  long in_stack_00000008;
  long lStack_5b0;
  undefined4 uStack_5a4;
  long lStack_5a0;
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
  
  uVar9 = *param_1;
  if (!in_CY || in_ZR) {
code_r0x03a002c4:
    *unaff_x24 = 0;
    uVar9 = func_0x03f2c2a0();
    uVar4 = func_0x03f2c2b0();
    if (-1 < (int)uVar4) {
      *unaff_x24 = uVar9;
    }
  }
  else {
    lVar8 = *(long *)(unaff_x20 + 0x4a0);
    uVar10 = unaff_w21;
    if (0 < (int)unaff_w21) {
      do {
        lVar8 = *(long *)(lVar8 + 0x10);
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if ((*(byte *)(*(long *)(lVar8 + 8) + 0x25f) >> 6 & 1) == 0) goto code_r0x03a002c4;
    plVar5 = (long *)func_0x03f0b2e0(0x48);
    func_0x03f2cca0();
    plVar7 = plVar5;
    iVar2 = func_0x03f2ccb0(uVar9,*(undefined8 *)(in_stack_00000008 + 8),plVar5,
                            *(undefined4 *)(unaff_x29 + -0xc));
    unaff_w21 = (uint)plVar7;
    if (iVar2 < 0) {
      func_0x03f2c2c0();
      uVar4 = 0x80000000;
    }
    else {
      unaff_w21 = 0;
      (**(code **)(*plVar5 + 0x30))(plVar5,0);
      uVar4 = 0;
      *unaff_x24 = plVar5;
    }
  }
  if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar4;
  }
  auVar12 = func_0x03f0b330(uVar4);
  plVar7 = plRam00000000041b64a8;
  plVar5 = auVar12._8_8_;
  uVar9 = auVar12._0_8_;
  lVar8 = tpidr_el0;
  lStack_80 = *(long *)(lVar8 + 0x28);
  uVar10 = 0xc0000005;
  lStack_5a0 = 0;
  uStack_5a4 = 0;
  if (*plRam00000000041b64a8 == 0) {
    uVar10 = 0xc0000002;
    goto code_r0x03a00548;
  }
  uStack_140 = 0x20;
  uStack_108 = 0x20;
  uStack_d0 = 0x20;
  lStack_170 = lRam00000000041b6190 + 0x10;
  puStack_168 = auStack_160;
  uStack_98 = 0x20;
  uStack_13c = 0x2000000000;
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
  puStack_130 = auStack_128;
  puStack_f8 = auStack_f0;
  puStack_c0 = auStack_b8;
  iVar2 = func_0x03fa3eb0(*(undefined8 *)(*plRam00000000041b64a8 + 0x28),uVar9,&lStack_170);
  if (iVar2 < 0) {
    if ((unaff_w21 >> 0xd & 1) == 0) {
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_198 = 0;
      func_0x03fa2550(auStack_598,uVar9);
      uVar3 = func_0x03fa3ec0(*plVar7,auStack_598,&lStack_5a0,&uStack_5a4);
      lVar6 = lStack_5a0;
      if (-1 < (int)uVar3) {
        if (*(char *)(lStack_5a0 + 0x18) == '\0') {
          uVar3 = 0xc0000010;
        }
        else {
          lStack_5b0 = 0;
          iVar2 = func_0x03fa3ed0(*(undefined8 *)(*plVar7 + 0x28),uStack_190,&lStack_5b0);
          if ((iVar2 < 0) || (iVar2 = func_0x03fa3ee0(lStack_5b0), iVar2 < 0)) {
            uVar1 = uStack_5a4;
            lVar11 = *(long *)(lVar6 + 0x20);
            if (lVar11 == 0) {
              lVar11 = *(long *)(*plRam00000000041b64b0 + 8);
            }
            uVar9 = *(undefined8 *)(lVar6 + 8);
            *plVar5 = 0;
            lVar6 = func_0x03f2c2a0();
            uVar3 = func_0x03f2c2b0(lVar6,uVar9,uVar1,lVar11);
            if (-1 < (int)uVar3) {
              *plVar5 = lVar6;
            }
          }
          else {
            lVar6 = func_0x03f2cc80(*(undefined8 *)(lStack_5b0 + 0x60),0x40000000);
            *plVar5 = lVar6;
            uVar3 = uVar10;
            if (lVar6 != 0) {
              uVar3 = 0;
            }
          }
        }
      }
      uVar10 = uVar3;
      if ((uStack_188 & 1) != 0) {
        func_0x03f0b310(uStack_178);
      }
    }
    else {
      iVar2 = func_0x03fa24f0(uVar9,&lStack_170);
      if (-1 < iVar2) {
        lVar6 = func_0x03f2cc80(puStack_168,0x40000000);
        goto code_r0x03a00488;
      }
      uVar10 = 0xc0000005;
    }
  }
  else {
    lVar6 = func_0x03f2cc80(puStack_168,0x40000000);
code_r0x03a00488:
    *plVar5 = lVar6;
    if (lVar6 != 0) {
      uVar10 = 0;
    }
  }
  lStack_170 = lRam00000000041b6190 + 0x10;
  if ((cStack_8c != '\0') && (puStack_c0 != (undefined1 *)0x0)) {
    func_0x03f0ca10();
  }
  uVar9 = _s__01460058;
  cStack_8c = 0;
  uStack_98 = 0x20;
  uStack_94 = _s__01460058;
  auStack_b8[0] = 0;
  puStack_c0 = auStack_b8;
  if ((cStack_c4 != '\0') && (puStack_f8 != (undefined1 *)0x0)) {
    func_0x03f0ca10();
  }
  uStack_d0 = 0x20;
  cStack_c4 = 0;
  uStack_cc = uVar9;
  auStack_f0[0] = 0;
  puStack_f8 = auStack_f0;
  if ((cStack_fc != '\0') && (puStack_130 != (undefined1 *)0x0)) {
    func_0x03f0ca10();
  }
  uStack_108 = 0x20;
  cStack_fc = 0;
  uStack_104 = uVar9;
  auStack_128[0] = 0;
  puStack_130 = auStack_128;
  if ((cStack_134 != '\0') && (puStack_168 != (undefined1 *)0x0)) {
    func_0x03f0ca10();
  }
code_r0x03a00548:
  if (*(long *)(lVar8 + 0x28) != lStack_80) {
    lVar8 = func_0x03f0b330();
    return *(ulong *)(lVar8 + 0x28);
  }
  return (ulong)uVar10;
}


