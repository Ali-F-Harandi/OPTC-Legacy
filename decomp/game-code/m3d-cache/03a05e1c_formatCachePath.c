// M3d: formatCachePath @ 0x3a05e1c (Ghidra decompile, true address)
#

long * m3d_3a05e1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lStack_ad0;
  int iStack_ac8;
  undefined1 auStack_ac0 [296];
  int aiStack_998 [4];
  long *plStack_988;
  undefined1 auStack_980 [1025];
  undefined1 auStack_57f [1023];
  long lStack_180;
  undefined1 *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  undefined1 **ppuStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  lVar3 = tpidr_el0;
  lVar10 = *(long *)(lVar3 + 0x28);
  ppuStack_68 = &puStack_70;
  puStack_60 = &uStack_90;
  uStack_58 = 0xffffff80ffffffe0;
  uStack_90 = param_5;
  uStack_88 = param_6;
  uStack_80 = param_7;
  uStack_78 = param_8;
  puStack_70 = (undefined1 *)register0x00000008;
  plVar5 = (long *)func_0x03f0b700(param_1,0x3fe,param_4,&puStack_70);
  if (*(long *)(lVar3 + 0x28) == lVar10) {
    return plVar5;
  }
  lVar10 = func_0x03f0b330();
  uStack_168 = 0x3a05eb4;
  lVar3 = tpidr_el0;
  lStack_180 = *(long *)(lVar3 + 0x28);
  puVar13 = (undefined8 *)(lVar10 + 0x10);
  puStack_170 = &stack0xffffffffffffffe0;
  func_0x03a02c40(lVar10 + 8,*puVar13);
  uVar12 = *(undefined8 *)(lVar10 + 0x80);
  *puVar13 = 0;
  *(undefined8 *)(lVar10 + 0x18) = 0;
  *(undefined8 **)(lVar10 + 8) = puVar13;
  plVar5 = (long *)func_0x03f25160();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5,uVar12);
  lVar10 = lRam000000000419a1d0;
  if (((ulong)plVar5 & 1) != 0) {
    iVar11 = 0;
    lVar1 = lRam000000000419a1d0 + 0x10;
    lVar2 = lRam000000000419a1d8 + 0x10;
    do {
      param_4 = (undefined1 *)0x3fe;
      func_0x03f0c950(auStack_57f,0);
      m3d_3a05e1c(auStack_57f);
      plVar5 = (long *)func_0x03f25160();
      plVar5 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5,auStack_57f);
      if (((ulong)plVar5 & 1) != 0) {
        iStack_ac8 = 1;
        lStack_ad0 = lVar1;
        func_0x03f0c950(auStack_ac0,0,0x53f);
        plVar5 = (long *)func_0x03f25160();
        param_4 = auStack_57f;
        uVar6 = (**(code **)(*plVar5 + 0x70))(plVar5,&lStack_ad0);
        if ((uVar6 & 1) == 0) {
          lStack_ad0 = lVar10 + 0x10;
          if (iStack_ac8 != 1) {
            func_0x03f2cc20(auStack_ac0);
          }
        }
        else {
          if (plStack_988 == (long *)0x0) {
            plVar5 = (long *)func_0x03f0b2e0(0xd20);
            *plVar5 = lVar2;
            *(undefined4 *)(plVar5 + 0x181) = 0;
            *(undefined1 *)((long)plVar5 + 0xc0c) = 0;
            func_0x03f0c950(plVar5 + 1,0,0x3ff);
            func_0x03f0c950(plVar5 + 0x81,0,0x3ff);
            func_0x03f0c950(plVar5 + 0x101,0,0x3ff);
            plVar5[0x183] = 0;
            plVar5[0x182] = 0;
            plVar5[0x185] = 0;
            plVar5[0x184] = 0;
            plVar5[0x187] = 0;
            plVar5[0x186] = 0;
            plVar5[0x189] = 0;
            plVar5[0x188] = 0;
            plVar5[0x18b] = 0;
            plVar5[0x18a] = 0;
            plVar5[0x18d] = 0;
            plVar5[0x18c] = 0;
            plVar5[399] = 0;
            plVar5[0x18e] = 0;
            plVar5[0x191] = 0;
            plVar5[400] = 0;
            plVar5[0x193] = 0;
            plVar5[0x192] = 0;
            plVar5[0x195] = 0;
            plVar5[0x194] = 0;
            plVar5[0x197] = 0;
            plVar5[0x196] = 0;
            plVar5[0x199] = 0;
            plVar5[0x198] = 0;
            plVar5[0x19b] = 0;
            plVar5[0x19a] = 0;
            plVar5[0x19d] = 0;
            plVar5[0x19c] = 0;
            plVar5[0x19f] = 0;
            plVar5[0x19e] = 0;
            plVar5[0x1a1] = 0;
            plVar5[0x1a0] = 0;
            plVar5[0x1a3] = 0;
            plVar5[0x1a2] = 0;
            lVar7 = func_0x03f2cbd0(auStack_980,0x400);
            param_4 = (undefined1 *)0x3ff;
            if (lVar7 + 1U < 0x3ff) {
              param_4 = (undefined1 *)(lVar7 + 1);
            }
            func_0x03f2cbe0(plVar5 + 0x81,auStack_980,param_4,0x400,0x400);
            plStack_988 = plVar5;
          }
          func_0x03f2cbf0(plStack_988,aiStack_998);
          plVar5 = plStack_988;
          while( true ) {
            if ((*(byte *)((long)plVar5 + 0xc0b) >> 6 & 1) != 0) {
              plVar8 = (long *)func_0x03f25160();
              (**(code **)(*plVar8 + 0x60))(plVar8,plVar5 + 0x101);
            }
            cVar4 = func_0x03f2cc10(auStack_ac0,aiStack_998);
            if ((cVar4 == '\0') || (aiStack_998[0] == -1)) break;
            func_0x03f2cbf0(plStack_988,aiStack_998);
          }
          func_0x03f2cc20(auStack_ac0);
          lStack_ad0 = lVar10 + 0x10;
          iStack_ac8 = 1;
        }
        plVar5 = plStack_988;
        if (plStack_988 != (long *)0x0) {
          plVar5 = (long *)(**(code **)(*plStack_988 + 8))();
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 != 0x10);
  }
  if (*(long *)(lVar3 + 0x28) == lStack_180) {
    return plVar5;
  }
  func_0x03f0b330();
  func_0x03fa40c0();
  uVar12 = *(undefined8 *)(param_4 + 8);
  plVar5 = (long *)func_0x03f25160();
  uVar6 = (**(code **)(*plVar5 + 0x40))(plVar5,uVar12);
  uVar9 = 0;
  if ((uVar6 & 1) == 0) {
    uVar9 = 0x80000000;
  }
  return (long *)(ulong)uVar9;
}


