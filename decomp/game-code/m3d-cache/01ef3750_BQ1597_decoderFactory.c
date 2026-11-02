// M3d: BQ1597_decoderFactory @ 0x1ef3750 (Ghidra decompile, true address)
#

uint m3d_1ef3750(long param_1,long param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  
  uVar11 = param_3 & 0xffffffff;
  uVar4 = func_0x03f2c550(param_2,param_1 + 0x18,param_3,2);
  if ((int)uVar4 < 0) {
    return uVar4 | 0x80018000;
  }
  uVar4 = *(uint *)(param_2 + 0x4b0);
  *(undefined8 *)(param_1 + 0x28) = param_4;
  if ((uint)param_3 < uVar4) {
    lVar8 = *(long *)(param_2 + 0x4a0);
    if ((int)(uint)param_3 < 1) {
      lVar8 = *(long *)(lVar8 + 8);
      uVar1 = *(uint *)(lVar8 + 0x25c);
      uVar4 = *(uint *)(lVar8 + 0x260);
      iVar10 = *(int *)(lVar8 + 0x26c);
    }
    else {
      uVar9 = param_3 & 0xffffffff;
      lVar7 = lVar8;
      do {
        lVar7 = *(long *)(lVar7 + 0x10);
        uVar4 = (int)uVar9 - 1;
        uVar9 = (ulong)uVar4;
      } while (uVar4 != 0);
      param_3 = param_3 & 0xffffffff;
      uVar1 = *(uint *)(*(long *)(lVar7 + 8) + 0x25c);
      lVar7 = lVar8;
      do {
        lVar7 = *(long *)(lVar7 + 0x10);
        uVar4 = (int)param_3 - 1;
        param_3 = (ulong)uVar4;
      } while (uVar4 != 0);
      uVar4 = *(uint *)(*(long *)(lVar7 + 8) + 0x260);
      lVar7 = lVar8;
      uVar9 = uVar11;
      do {
        lVar7 = *(long *)(lVar7 + 0x10);
        uVar3 = (int)uVar9 - 1;
        uVar9 = (ulong)uVar3;
      } while (uVar3 != 0);
      iVar10 = *(int *)(*(long *)(lVar7 + 8) + 0x26c);
      do {
        lVar8 = *(long *)(lVar8 + 0x10);
        uVar3 = (int)uVar11 - 1;
        uVar11 = (ulong)uVar3;
      } while (uVar3 != 0);
      lVar8 = *(long *)(lVar8 + 8);
    }
    iVar2 = *(int *)(lVar8 + 0x270);
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(ulong *)(param_1 + 0x30) = (ulong)(uint)(iVar10 - iVar2);
    if ((uVar1 >> 0x1d & 1) != 0) {
      plVar5 = (long *)func_0x03f0b2e0(0x20);
      lVar8 = lRam000000000419a140;
      lVar7 = *(long *)(param_1 + 0x18);
      *(long **)(param_1 + 0x20) = plVar5;
      plVar5[2] = 0;
      plVar5[3] = lVar7;
      *plVar5 = lVar8 + 0x10;
      plVar5[1] = 0;
      return 0;
    }
    if ((uVar4 & 1) == 0) {
      if ((uVar4 >> 2 & 1) == 0) {
        if ((uVar4 >> 1 & 1) == 0) goto code_r0x01ef3820;
        plVar5 = (long *)func_0x03f0b2e0(0x168);
        func_0x03f2c560(plVar5,*(undefined8 *)(param_1 + 0x18),param_4);
      }
      else {
        plVar5 = (long *)func_0x03f0b2e0(0x58);
        plVar5[9] = 0;
        plVar5[10] = 0;
        plVar5[2] = 0;
        plVar5[1] = 0;
        lVar8 = lRam000000000419a150;
        uVar6 = *(undefined8 *)(param_1 + 0x18);
        plVar5[4] = 0;
        plVar5[3] = 0;
        plVar5[6] = 0;
        plVar5[5] = 0;
        *(undefined8 *)((long)plVar5 + 0x39) = 0;
        *(undefined8 *)((long)plVar5 + 0x31) = 0;
        *plVar5 = lVar8 + 0x10;
        func_0x03f2c570(plVar5,uVar6,param_4);
      }
    }
    else {
      plVar5 = (long *)func_0x03f0b2e0(0x58);
      plVar5[9] = 0;
      plVar5[10] = 0;
      plVar5[2] = 0;
      plVar5[1] = 0;
      lVar8 = lRam000000000419a148;
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      plVar5[4] = 0;
      plVar5[3] = 0;
      plVar5[6] = 0;
      plVar5[5] = 0;
      *(undefined8 *)((long)plVar5 + 0x39) = 0;
      *(undefined8 *)((long)plVar5 + 0x31) = 0;
      *plVar5 = lVar8 + 0x10;
      func_0x03f2c570(plVar5,uVar6,param_4);
    }
    uVar4 = 0;
    *(long **)(param_1 + 0x20) = plVar5;
  }
  else {
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
code_r0x01ef3820:
    func_0x03f2c2c0(param_1 + 0x18);
    uVar4 = 0x80008002;
  }
  return uVar4;
}


