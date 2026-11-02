// M3d: gnpI @ 0x3a00110 (Ghidra decompile, true address)
#

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong m3d_3a00110(long param_1,undefined8 *param_2,uint param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  uint *puVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  long lStack_620;
  undefined4 uStack_614;
  long lStack_610;
  undefined1 auStack_608 [1024];
  undefined8 uStack_208;
  undefined8 uStack_200;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined1 *puStack_1d8;
  undefined1 auStack_1d0 [32];
  undefined4 uStack_1b0;
  undefined8 uStack_1ac;
  char cStack_1a4;
  undefined1 *puStack_1a0;
  undefined1 auStack_198 [32];
  undefined4 uStack_178;
  undefined8 uStack_174;
  char cStack_16c;
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
  undefined2 uStack_f8;
  undefined4 uStack_f4;
  long lStack_f0;
  long *plStack_70;
  long lStack_68;
  uint uStack_5c;
  long lStack_58;
  
  lVar10 = tpidr_el0;
  lStack_58 = *(long *)(lVar10 + 0x28);
  uVar7 = 0xc000000a;
  lVar13 = *plRam00000000041b64a8;
  uStack_5c = 0;
  if (lVar13 == 0) {
    uVar7 = 0xc0000002;
    goto code_r0x03a001d4;
  }
  lVar12 = *(long *)(param_1 + 0x400);
  if (lVar12 != 0) {
    plVar14 = (long *)(lVar13 + 8);
    lVar13 = *(long *)(lVar13 + 0x10);
    if (plVar14 != (long *)((long *)*plVar14)[1] || lVar13 != *(long *)*plVar14) {
      uVar4 = func_0x03f0b2d0(lVar12);
code_r0x03a00188:
      param_3 = uVar4;
      iVar5 = func_0x03f27550(**(long **)(lVar13 + 0x18) + 0x408,lVar12);
      if (iVar5 != 0) goto code_r0x03a001a4;
      puVar11 = &uStack_5c;
      lVar13 = **(long **)(lVar13 + 0x18);
      lStack_68 = 0;
      uVar7 = func_0x03fa3ea0(lVar13,*(undefined8 *)(param_1 + 0x408),puVar11,&lStack_68);
      uVar4 = uStack_5c;
      param_3 = (uint)puVar11;
      if ((int)uVar7 < 0) goto code_r0x03a001d4;
      if (*(char *)(lStack_68 + 0x18) == '\0') {
        uVar7 = 0xc0000010;
        goto code_r0x03a001d4;
      }
      lVar12 = *(long *)(lStack_68 + 8);
      puVar1 = (undefined8 *)(*plRam00000000041b64b0 + 8);
      if (*(long *)(lVar13 + 0x20) != 0) {
        puVar1 = (undefined8 *)(lStack_68 + 0x20);
      }
      uVar15 = *puVar1;
      if (*(uint *)(lVar12 + 0x4b0) <= uStack_5c) goto code_r0x03a002c4;
      lVar13 = *(long *)(lVar12 + 0x4a0);
      uVar6 = uStack_5c;
      if (0 < (int)uStack_5c) {
        do {
          lVar13 = *(long *)(lVar13 + 0x10);
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if ((*(byte *)(*(long *)(lVar13 + 8) + 0x25f) >> 6 & 1) == 0) {
code_r0x03a002c4:
        *param_2 = 0;
        uVar8 = func_0x03f2c2a0();
        param_3 = uVar4;
        uVar7 = func_0x03f2c2b0(uVar8,lVar12,uVar4,uVar15);
        if (-1 < (int)uVar7) {
          *param_2 = uVar8;
        }
        goto code_r0x03a001d4;
      }
      plVar9 = (long *)func_0x03f0b2e0(0x48);
      func_0x03f2cca0();
      plVar14 = plVar9;
      plStack_70 = plVar9;
      iVar5 = func_0x03f2ccb0(uVar15,*(undefined8 *)(lStack_68 + 8),plVar9,uStack_5c);
      param_3 = (uint)plVar14;
      if (iVar5 < 0) {
        func_0x03f2c2c0(&plStack_70);
        uVar7 = 0x80000000;
      }
      else {
        param_3 = 0;
        (**(code **)(*plVar9 + 0x30))(plVar9,0);
        uVar7 = 0;
        *param_2 = plVar9;
      }
    }
    goto code_r0x03a001d4;
  }
  uVar7 = *(ulong *)(param_1 + 0x408);
  if (*(long *)(lVar10 + 0x28) == lStack_58) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)UndefinedInstructionException(0,0x3fa2570);
    (*pcVar2)();
  }
  goto code_r0x03a00384;
code_r0x03a001a4:
  lVar13 = *(long *)(lVar13 + 0x20);
  if ((plVar14 != (long *)((long *)*plVar14)[1]) || (lVar13 != *(long *)*plVar14))
  goto code_r0x03a00188;
  uVar7 = 0xc000000a;
code_r0x03a001d4:
  if (*(long *)(lVar10 + 0x28) == lStack_58) {
    return uVar7;
  }
code_r0x03a00384:
  auVar16 = func_0x03f0b330(uVar7);
  plVar14 = plRam00000000041b64a8;
  plVar9 = auVar16._8_8_;
  uVar15 = auVar16._0_8_;
  lVar10 = tpidr_el0;
  lStack_f0 = *(long *)(lVar10 + 0x28);
  uVar4 = 0xc0000005;
  lStack_610 = 0;
  uStack_614 = 0;
  if (*plRam00000000041b64a8 == 0) {
    uVar4 = 0xc0000002;
    goto code_r0x03a00548;
  }
  uStack_1b0 = 0x20;
  uStack_178 = 0x20;
  uStack_140 = 0x20;
  lStack_1e0 = lRam00000000041b6190 + 0x10;
  puStack_1d8 = auStack_1d0;
  uStack_108 = 0x20;
  uStack_1ac = 0x2000000000;
  auStack_198[0] = 0;
  uStack_174 = 0x2000000000;
  auStack_160[0] = 0;
  uStack_13c = 0x2000000000;
  auStack_128[0] = 0;
  uStack_104 = 0x2000000000;
  uStack_f8 = 0;
  cStack_1a4 = '\0';
  cStack_16c = '\0';
  cStack_134 = '\0';
  cStack_fc = '\0';
  uStack_f4 = 0;
  auStack_1d0[0] = 0;
  puStack_1a0 = auStack_198;
  puStack_168 = auStack_160;
  puStack_130 = auStack_128;
  iVar5 = func_0x03fa3eb0(*(undefined8 *)(*plRam00000000041b64a8 + 0x28),uVar15,&lStack_1e0);
  if (iVar5 < 0) {
    if ((param_3 >> 0xd & 1) == 0) {
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_1f8 = 0;
      uStack_200 = 0;
      uStack_208 = 0;
      func_0x03fa2550(auStack_608,uVar15);
      uVar6 = func_0x03fa3ec0(*plVar14,auStack_608,&lStack_610,&uStack_614);
      lVar13 = lStack_610;
      if (-1 < (int)uVar6) {
        if (*(char *)(lStack_610 + 0x18) == '\0') {
          uVar6 = 0xc0000010;
        }
        else {
          lStack_620 = 0;
          iVar5 = func_0x03fa3ed0(*(undefined8 *)(*plVar14 + 0x28),uStack_200,&lStack_620);
          if ((iVar5 < 0) || (iVar5 = func_0x03fa3ee0(lStack_620), iVar5 < 0)) {
            uVar3 = uStack_614;
            lVar12 = *(long *)(lVar13 + 0x20);
            if (lVar12 == 0) {
              lVar12 = *(long *)(*plRam00000000041b64b0 + 8);
            }
            uVar15 = *(undefined8 *)(lVar13 + 8);
            *plVar9 = 0;
            lVar13 = func_0x03f2c2a0();
            uVar6 = func_0x03f2c2b0(lVar13,uVar15,uVar3,lVar12);
            if (-1 < (int)uVar6) {
              *plVar9 = lVar13;
            }
          }
          else {
            lVar13 = func_0x03f2cc80(*(undefined8 *)(lStack_620 + 0x60),0x40000000);
            *plVar9 = lVar13;
            uVar6 = uVar4;
            if (lVar13 != 0) {
              uVar6 = 0;
            }
          }
        }
      }
      uVar4 = uVar6;
      if ((uStack_1f8 & 1) != 0) {
        func_0x03f0b310(uStack_1e8);
      }
    }
    else {
      iVar5 = func_0x03fa24f0(uVar15,&lStack_1e0);
      if (-1 < iVar5) {
        lVar13 = func_0x03f2cc80(puStack_1d8,0x40000000);
        goto code_r0x03a00488;
      }
      uVar4 = 0xc0000005;
    }
  }
  else {
    lVar13 = func_0x03f2cc80(puStack_1d8,0x40000000);
code_r0x03a00488:
    *plVar9 = lVar13;
    if (lVar13 != 0) {
      uVar4 = 0;
    }
  }
  lStack_1e0 = lRam00000000041b6190 + 0x10;
  if ((cStack_fc != '\0') && (puStack_130 != (undefined1 *)0x0)) {
    func_0x03f0ca10();
  }
  uVar15 = _s__01460058;
  cStack_fc = 0;
  uStack_108 = 0x20;
  uStack_104 = _s__01460058;
  auStack_128[0] = 0;
  puStack_130 = auStack_128;
  if ((cStack_134 != '\0') && (puStack_168 != (undefined1 *)0x0)) {
    func_0x03f0ca10();
  }
  uStack_140 = 0x20;
  cStack_134 = 0;
  uStack_13c = uVar15;
  auStack_160[0] = 0;
  puStack_168 = auStack_160;
  if ((cStack_16c != '\0') && (puStack_1a0 != (undefined1 *)0x0)) {
    func_0x03f0ca10();
  }
  uStack_178 = 0x20;
  cStack_16c = 0;
  uStack_174 = uVar15;
  auStack_198[0] = 0;
  puStack_1a0 = auStack_198;
  if ((cStack_1a4 != '\0') && (puStack_1d8 != (undefined1 *)0x0)) {
    func_0x03f0ca10();
  }
code_r0x03a00548:
  if (*(long *)(lVar10 + 0x28) == lStack_f0) {
    return (ulong)uVar4;
  }
  lVar10 = func_0x03f0b330();
  return *(ulong *)(lVar10 + 0x28);
}


