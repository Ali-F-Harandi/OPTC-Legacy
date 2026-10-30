// M3d: NtyCache_stream_openOrCreate @ 0x3a05958 (Ghidra decompile, true address)
#

long * m3d_3a05958(long param_1)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  long *plVar10;
  char *pcVar11;
  ulong in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar12;
  long lVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  undefined8 *puVar18;
  long lStack_ff0;
  int iStack_fe8;
  undefined1 auStack_fe0 [296];
  int aiStack_eb8 [4];
  long *plStack_ea8;
  undefined1 auStack_ea0 [1025];
  char acStack_a9f [1023];
  long lStack_6a0;
  undefined1 **ppuStack_690;
  undefined8 uStack_688;
  char *pcStack_5b0;
  ulong uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined1 *puStack_590;
  undefined1 **ppuStack_588;
  char **ppcStack_580;
  undefined8 uStack_578;
  undefined1 *puStack_568;
  undefined1 **ppuStack_560;
  char **ppcStack_558;
  undefined8 uStack_550;
  long lStack_548;
  undefined1 *puStack_540;
  code *pcStack_538;
  undefined1 auStack_520 [9];
  undefined1 auStack_517 [1023];
  long lStack_118;
  undefined1 **ppuStack_110;
  undefined8 uStack_108;
  long alStack_c8 [3];
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_68 [32];
  long lStack_48;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  if ((*(char *)(param_1 + 0x141) == '\0') || (*(char *)(param_1 + 9) == '\0')) {
    func_0x03fa3d60();
    uVar5 = func_0x03fa3ef0();
    func_0x03fa40c0(uVar5,*(undefined8 *)(param_1 + 0x20),param_1 + 0x58);
    uVar5 = *(undefined8 *)(param_1 + 0x60);
    plVar6 = (long *)func_0x03f25160();
    uVar7 = (**(code **)(*plVar6 + 0x40))(plVar6,uVar5);
    if ((uVar7 & 1) == 0) {
      plVar6 = (long *)0x80000000;
    }
    else {
      if ((*(byte *)(param_1 + 9) & 1) != 0) goto code_r0x03a059c4;
      cVar2 = func_0x03fa35a0(*(undefined8 *)(param_1 + 0x60),auStack_68);
      if (cVar2 != '\x01') {
        uVar5 = *(undefined8 *)(param_1 + 0x60);
        plVar6 = (long *)func_0x03f25160();
        (**(code **)(*plVar6 + 0x60))(plVar6,uVar5);
        plVar6 = (long *)0xc0000006;
        goto code_r0x03a059d0;
      }
      lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 8);
      uVar3 = *(uint *)(param_1 + 0xc);
      if (uVar3 < *(uint *)(lVar8 + 0x4b0)) {
        lVar17 = *(long *)(lVar8 + 0x4a0);
        lVar8 = lVar17;
        uVar15 = uVar3;
        if (0 < (int)uVar3) {
          do {
            lVar8 = *(long *)(lVar8 + 0x10);
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
        lVar13 = 0x274;
        if ((*(byte *)(*(long *)(lVar8 + 8) + 0x25f) & 0x40) != 0) {
          lVar13 = 0x288;
        }
        iVar16 = *(int *)(*(long *)(lVar8 + 8) + lVar13);
        if (iVar16 == 0) {
          lVar8 = lVar17;
          uVar15 = uVar3;
          if ((int)uVar3 < 1) {
            lVar8 = *(long *)(lVar17 + 8);
            iVar16 = *(int *)(lVar8 + 0x26c);
          }
          else {
            do {
              plVar6 = (long *)(lVar8 + 0x10);
              uVar15 = uVar15 - 1;
              lVar8 = *plVar6;
            } while (uVar15 != 0);
            iVar16 = *(int *)(*(long *)(*plVar6 + 8) + 0x26c);
            do {
              lVar17 = *(long *)(lVar17 + 0x10);
              uVar3 = uVar3 - 1;
            } while (uVar3 != 0);
            lVar8 = *(long *)(lVar17 + 8);
          }
          lVar8 = (long)iVar16 - (ulong)*(uint *)(lVar8 + 0x270);
          goto code_r0x03a05b20;
        }
        iVar4 = func_0x03f2dd60(*(undefined8 *)(param_1 + 0x60),uRam00000000041b61b0);
        if (iVar4 == iVar16) goto code_r0x03a05b2c;
      }
      else {
        lVar8 = 0;
code_r0x03a05b20:
        if (lVar8 == lStack_48) {
code_r0x03a05b2c:
          plVar6 = (long *)0x0;
          *(undefined1 *)(param_1 + 9) = 1;
          goto code_r0x03a059d0;
        }
      }
      uVar5 = *(undefined8 *)(param_1 + 0x60);
      plVar6 = (long *)func_0x03f25160();
      (**(code **)(*plVar6 + 0x60))(plVar6,uVar5);
      plVar6 = (long *)0xc0000008;
    }
  }
  else {
code_r0x03a059c4:
    plVar6 = (long *)0x0;
  }
code_r0x03a059d0:
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return plVar6;
  }
  lVar8 = func_0x03f0b330(plVar6);
  uStack_a8 = 0x3a05b40;
  lVar1 = tpidr_el0;
  alStack_c8[2] = *(long *)(lVar1 + 0x28);
  lVar17 = *(long *)(*(long *)(lVar8 + 0x10) + 0x20);
  puStack_b0 = &stack0xffffffffffffffd0;
  if (lVar17 == 0) {
    lVar17 = func_0x03fa3d70();
    lVar17 = *(long *)(lVar17 + 8);
  }
  alStack_c8[0] = 0;
  alStack_c8[1] = 0;
  func_0x03f241f0(alStack_c8,0);
  uVar5 = *(undefined8 *)(lVar8 + 0x60);
  uVar3 = *(uint *)(lVar8 + 0xc);
  lVar8 = *(long *)(*(long *)(lVar8 + 0x10) + 8);
  alStack_c8[0] = func_0x03f2cc80(uVar5,0x2c000000);
  if (alStack_c8[0] == 0) {
    iVar16 = 0;
    uVar3 = 0x80000000;
  }
  else {
    if (uVar3 < *(uint *)(lVar8 + 0x4b0)) {
      lVar12 = *(long *)(lVar8 + 0x4a0);
      lVar13 = lVar12;
      uVar15 = uVar3;
      if ((int)uVar3 < 1) {
        lVar13 = *(long *)(lVar12 + 8);
        if ((*(byte *)(lVar13 + 0x25f) >> 6 & 1) != 0) goto code_r0x03a05c44;
        piVar14 = (int *)(lVar13 + 0x274);
      }
      else {
        do {
          plVar6 = (long *)(lVar13 + 0x10);
          uVar15 = uVar15 - 1;
          lVar13 = *plVar6;
        } while (uVar15 != 0);
        uVar15 = uVar3;
        if ((*(byte *)(*(long *)(*plVar6 + 8) + 0x25f) >> 6 & 1) == 0) {
          do {
            lVar12 = *(long *)(lVar12 + 0x10);
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
          piVar14 = (int *)(*(long *)(lVar12 + 8) + 0x274);
        }
        else {
          do {
            lVar12 = *(long *)(lVar12 + 0x10);
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
          lVar13 = *(long *)(lVar12 + 8);
code_r0x03a05c44:
          piVar14 = (int *)(lVar13 + 0x288);
        }
      }
      iVar16 = *piVar14;
    }
    else {
      iVar16 = 0;
    }
    uVar3 = func_0x03f2ccb0(lVar17,lVar8,alStack_c8[0],uVar3);
  }
  func_0x03f2c2c0(alStack_c8);
  if (((-1 < (int)uVar3) && (iVar16 != 0)) &&
     (iVar4 = func_0x03f2dd60(uVar5,uRam00000000041b61b0), iVar16 != iVar4)) {
    uVar3 = 0x80000000;
  }
  alStack_c8[0] = 0;
  alStack_c8[1] = 0;
  func_0x03f241f0(alStack_c8,0);
  if (*(long *)(lVar1 + 0x28) == alStack_c8[2]) {
    return (long *)(ulong)(uVar3 & (int)uVar3 >> 0x1f);
  }
  lVar8 = func_0x03f0b330();
  uStack_108 = 0x3a05ccc;
  lVar1 = tpidr_el0;
  lStack_118 = *(long *)(lVar1 + 0x28);
  ppuStack_110 = &puStack_b0;
  plVar6 = (long *)func_0x03f25160();
  pcVar9 = (char *)(**(code **)(*plVar6 + 0x20))();
  plVar6 = (long *)func_0x03f2e950();
  pcVar11 = s_GNPCACHE_01319b93;
  (**(code **)(*plVar6 + 0x30))(plVar6,auStack_517,0x3ff);
  func_0x03fa3430(lVar8 + 0x78,auStack_517,1);
  uVar5 = *(undefined8 *)(lVar8 + 0x80);
  plVar6 = (long *)func_0x03f25160();
  uVar7 = (**(code **)(*plVar6 + 0x40))(plVar6,uVar5);
  if ((uVar7 & 1) == 0) {
    uVar5 = *(undefined8 *)(lVar8 + 0x80);
    plVar6 = (long *)func_0x03f25160();
    uVar7 = (**(code **)(*plVar6 + 0x68))(plVar6,uVar5);
    if ((uVar7 & 1) == 0) {
code_r0x03a05de4:
      plVar6 = (long *)0x80000000;
      goto code_r0x03a05df0;
    }
  }
  uVar7 = 0;
  do {
    in_x5 = uVar7;
    func_0x03f0c950(auStack_517,0,0x3fe);
    pcVar11 = *(char **)(lVar8 + 0x80);
    iVar16 = (int)in_x5;
    pcVar9 = s__s__02X_013a8723;
    m3d_3a05e1c(auStack_517);
    plVar6 = (long *)func_0x03f25160();
    uVar7 = (**(code **)(*plVar6 + 0x40))(plVar6,auStack_517);
    if ((uVar7 & 1) == 0) {
      plVar6 = (long *)func_0x03f25160();
      uVar7 = (**(code **)(*plVar6 + 0x68))(plVar6,auStack_517);
      if ((uVar7 & 1) == 0) goto code_r0x03a05de4;
    }
    uVar3 = iVar16 + 1;
    uVar7 = (ulong)uVar3;
  } while (uVar3 != 0x10);
  plVar6 = (long *)0x0;
code_r0x03a05df0:
  if (*(long *)(lVar1 + 0x28) == lStack_118) {
    return plVar6;
  }
  uVar5 = func_0x03f0b330(plVar6);
  pcStack_538 = m3d_3a05e1c;
  lVar1 = tpidr_el0;
  lStack_548 = *(long *)(lVar1 + 0x28);
  ppuStack_588 = &puStack_590;
  puStack_590 = auStack_520;
  ppcStack_580 = &pcStack_5b0;
  uStack_550 = 0xffffff80ffffffe0;
  uStack_578 = 0xffffff80ffffffe0;
  pcStack_5b0 = pcVar11;
  uStack_5a8 = in_x5;
  uStack_5a0 = in_x6;
  uStack_598 = in_x7;
  puStack_568 = puStack_590;
  ppuStack_560 = ppuStack_588;
  ppcStack_558 = ppcStack_580;
  puStack_540 = (undefined1 *)&ppuStack_110;
  plVar6 = (long *)func_0x03f0b700(uVar5,0x3fe,pcVar9,&puStack_590);
  if (*(long *)(lVar1 + 0x28) != lStack_548) {
    lVar8 = func_0x03f0b330();
    uStack_688 = 0x3a05eb4;
    lVar1 = tpidr_el0;
    lStack_6a0 = *(long *)(lVar1 + 0x28);
    puVar18 = (undefined8 *)(lVar8 + 0x10);
    ppuStack_690 = &puStack_540;
    func_0x03a02c40(lVar8 + 8,*puVar18);
    uVar5 = *(undefined8 *)(lVar8 + 0x80);
    *puVar18 = 0;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined8 **)(lVar8 + 8) = puVar18;
    plVar6 = (long *)func_0x03f25160();
    plVar6 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6,uVar5);
    lVar8 = lRam000000000419a1d0;
    if (((ulong)plVar6 & 1) != 0) {
      iVar16 = 0;
      lVar17 = lRam000000000419a1d0 + 0x10;
      lVar13 = lRam000000000419a1d8 + 0x10;
      do {
        pcVar9 = (char *)0x3fe;
        func_0x03f0c950(acStack_a9f,0);
        m3d_3a05e1c(acStack_a9f);
        plVar6 = (long *)func_0x03f25160();
        plVar6 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6,acStack_a9f);
        if (((ulong)plVar6 & 1) != 0) {
          iStack_fe8 = 1;
          lStack_ff0 = lVar17;
          func_0x03f0c950(auStack_fe0,0,0x53f);
          plVar6 = (long *)func_0x03f25160();
          pcVar9 = acStack_a9f;
          uVar7 = (**(code **)(*plVar6 + 0x70))(plVar6,&lStack_ff0);
          if ((uVar7 & 1) == 0) {
            lStack_ff0 = lVar8 + 0x10;
            if (iStack_fe8 != 1) {
              func_0x03f2cc20(auStack_fe0);
            }
          }
          else {
            if (plStack_ea8 == (long *)0x0) {
              plVar6 = (long *)func_0x03f0b2e0(0xd20);
              *plVar6 = lVar13;
              *(undefined4 *)(plVar6 + 0x181) = 0;
              *(undefined1 *)((long)plVar6 + 0xc0c) = 0;
              func_0x03f0c950(plVar6 + 1,0,0x3ff);
              func_0x03f0c950(plVar6 + 0x81,0,0x3ff);
              func_0x03f0c950(plVar6 + 0x101,0,0x3ff);
              plVar6[0x183] = 0;
              plVar6[0x182] = 0;
              plVar6[0x185] = 0;
              plVar6[0x184] = 0;
              plVar6[0x187] = 0;
              plVar6[0x186] = 0;
              plVar6[0x189] = 0;
              plVar6[0x188] = 0;
              plVar6[0x18b] = 0;
              plVar6[0x18a] = 0;
              plVar6[0x18d] = 0;
              plVar6[0x18c] = 0;
              plVar6[399] = 0;
              plVar6[0x18e] = 0;
              plVar6[0x191] = 0;
              plVar6[400] = 0;
              plVar6[0x193] = 0;
              plVar6[0x192] = 0;
              plVar6[0x195] = 0;
              plVar6[0x194] = 0;
              plVar6[0x197] = 0;
              plVar6[0x196] = 0;
              plVar6[0x199] = 0;
              plVar6[0x198] = 0;
              plVar6[0x19b] = 0;
              plVar6[0x19a] = 0;
              plVar6[0x19d] = 0;
              plVar6[0x19c] = 0;
              plVar6[0x19f] = 0;
              plVar6[0x19e] = 0;
              plVar6[0x1a1] = 0;
              plVar6[0x1a0] = 0;
              plVar6[0x1a3] = 0;
              plVar6[0x1a2] = 0;
              lVar12 = func_0x03f2cbd0(auStack_ea0,0x400);
              pcVar9 = (char *)0x3ff;
              if (lVar12 + 1U < 0x3ff) {
                pcVar9 = (char *)(lVar12 + 1);
              }
              func_0x03f2cbe0(plVar6 + 0x81,auStack_ea0,pcVar9,0x400,0x400);
              plStack_ea8 = plVar6;
            }
            func_0x03f2cbf0(plStack_ea8,aiStack_eb8);
            plVar6 = plStack_ea8;
            while( true ) {
              if ((*(byte *)((long)plVar6 + 0xc0b) >> 6 & 1) != 0) {
                plVar10 = (long *)func_0x03f25160();
                (**(code **)(*plVar10 + 0x60))(plVar10,plVar6 + 0x101);
              }
              cVar2 = func_0x03f2cc10(auStack_fe0,aiStack_eb8);
              if ((cVar2 == '\0') || (aiStack_eb8[0] == -1)) break;
              func_0x03f2cbf0(plStack_ea8,aiStack_eb8);
            }
            func_0x03f2cc20(auStack_fe0);
            lStack_ff0 = lVar8 + 0x10;
            iStack_fe8 = 1;
          }
          plVar6 = plStack_ea8;
          if (plStack_ea8 != (long *)0x0) {
            plVar6 = (long *)(**(code **)(*plStack_ea8 + 8))();
          }
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 != 0x10);
    }
    if (*(long *)(lVar1 + 0x28) != lStack_6a0) {
      func_0x03f0b330();
      func_0x03fa40c0();
      uVar5 = *(undefined8 *)(pcVar9 + 8);
      plVar6 = (long *)func_0x03f25160();
      uVar7 = (**(code **)(*plVar6 + 0x40))(plVar6,uVar5);
      uVar3 = 0;
      if ((uVar7 & 1) == 0) {
        uVar3 = 0x80000000;
      }
      return (long *)(ulong)uVar3;
    }
    return plVar6;
  }
  return plVar6;
}


