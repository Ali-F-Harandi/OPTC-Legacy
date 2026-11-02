// M3d: GlobalNtyPool_createLocalCache @ 0x1ef0604 (Ghidra decompile, true address)
#

void m3d_1ef0604(long param_1,long param_2,ulong param_3,long *param_4,undefined1 *param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong *puVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  ulong auStack_70 [4];
  
  lVar2 = tpidr_el0;
  auStack_70[3] = *(long *)(lVar2 + 0x28);
  uVar7 = param_3;
  plVar8 = param_4;
  puVar9 = (ulong *)param_5;
  if (((param_3 != 0) && (param_2 != 0)) && (param_4 != (long *)0x0)) {
    func_0x03f2c1e0(param_1 + 8);
    puVar3 = puRam000000000419a110;
    lVar6 = *param_4;
    if (lVar6 != 0) {
      plVar10 = param_4 + 1;
      do {
        auStack_70[0] = 0;
        auStack_70[1] = 0;
        auStack_70[2] = 0;
        if (param_5 != (undefined1 *)0x0) {
          func_0x03f0c1a0(auStack_70,param_5);
          lVar6 = plVar10[-1];
        }
        func_0x03f0c1a0(auStack_70,lVar6);
        uVar4 = m3d_1ef1784(auStack_70,param_2);
        if ((int)uVar4 < 0) {
          puVar5 = (undefined8 *)*puVar3;
          if (puVar5 == (undefined8 *)0x0) {
            puVar5 = (undefined8 *)func_0x03f0b2e0(0x30);
            puVar5[5] = 0;
            puVar5[1] = 0;
            *puVar5 = puVar5 + 1;
            puVar5[4] = 0;
            puVar5[2] = 0;
            puVar5[3] = puVar5 + 4;
            *puVar3 = puVar5;
          }
          uVar1 = (ulong)auStack_70 | 1;
          if ((auStack_70[0] & 1) != 0) {
            uVar1 = auStack_70[2];
          }
          lVar6 = func_0x03f2c1f0(puVar5,uVar1);
          if (lVar6 != 0) {
            func_0x03f2a350(param_1 + 8);
          }
        }
        else {
          plVar8 = (long *)(ulong)uVar4;
          uVar7 = param_3;
          puVar9 = auStack_70;
          lVar6 = func_0x03f2c210(param_1,param_2,param_3,plVar8,auStack_70);
          if (lVar6 != 0) {
            func_0x03f2a350(param_1 + 8);
          }
        }
        if ((auStack_70[0] & 1) != 0) {
          func_0x03f0b310(auStack_70[2]);
        }
        lVar6 = *plVar10;
        plVar10 = plVar10 + 1;
      } while (lVar6 != 0);
    }
  }
  if (*(long *)(lVar2 + 0x28) == auStack_70[3]) {
    return;
  }
  auVar11 = func_0x03f0b330();
  plVar10 = auVar11._0_8_;
  *plVar10 = lRam000000000419a108 + 0x10;
  func_0x03f2c1b0(plVar10 + 1);
  func_0x03f2c220(plVar10,auVar11._8_8_,uVar7 & 0xffffffff,plVar8,puVar9);
  return;
}


