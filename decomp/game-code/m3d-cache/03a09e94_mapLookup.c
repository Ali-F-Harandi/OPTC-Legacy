// M3d: mapLookup @ 0x3a09e94 (Ghidra decompile, true address)
#

void m3d_3a09e94(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined1 auVar10 [16];
  long lStack_c0;
  long lStack_b8;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  long lStack_60;
  long lStack_58;
  undefined4 uStack_4c;
  long lStack_48;
  
  plVar6 = &lStack_60;
  lVar1 = tpidr_el0;
  puVar5 = &uStack_4c;
  lStack_48 = *(long *)(lVar1 + 0x28);
  plVar4 = &lStack_58;
  iVar2 = func_0x03fa3ea0();
  if (iVar2 < 0) {
    uVar3 = 0xc000000b;
  }
  else {
    lStack_60 = 0;
    iVar2 = func_0x03fa42a0(*(undefined8 *)(param_1 + 0x38),param_2,&lStack_60);
    if (iVar2 < 0) {
      lVar7 = func_0x03f0b2e0(0x148);
      func_0x03fa42b0(lVar7,param_2);
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      *(undefined1 *)(lVar7 + 8) = 1;
      *(undefined4 *)(lVar7 + 0xc) = uStack_4c;
      *(long *)(lVar7 + 0x10) = lStack_58;
      lStack_60 = lVar7;
      func_0x03fa4110(uVar3,param_2,lVar7);
    }
    else {
      *(long *)(lStack_60 + 0x10) = lStack_58;
      *(undefined1 *)(lStack_60 + 8) = 1;
      *(undefined4 *)(lStack_60 + 0xc) = uStack_4c;
    }
    func_0x03fa3d60();
    uVar3 = func_0x03fa3ef0();
    func_0x03fa42c0(uVar3,param_2);
    uVar3 = 0;
    *param_3 = lStack_60;
    puVar5 = (undefined4 *)plVar6;
  }
  if (*(long *)(lVar1 + 0x28) == lStack_48) {
    return;
  }
  auVar10 = func_0x03f0b330(uVar3);
  uVar3 = auVar10._8_8_;
  lVar7 = auVar10._0_8_;
  uStack_a8 = 0x3a09fc4;
  lVar1 = tpidr_el0;
  lStack_b8 = *(long *)(lVar1 + 0x28);
  puStack_b0 = &stack0xffffffffffffffc0;
  if (*(char *)(lVar7 + 0x18) == '\0') {
    uVar3 = 0x80000000;
  }
  else {
    if (*(long *)(lVar7 + 0x10) == 0) {
      lStack_c0 = 0;
      iVar2 = func_0x03fa42a0(*(undefined8 *)(lVar7 + 0x38),uVar3,&lStack_c0);
      if (-1 < iVar2) {
        uVar3 = 0;
        lVar7 = *(long *)(lStack_c0 + 0x10);
        *puVar5 = *(undefined4 *)(lStack_c0 + 0xc);
        *plVar4 = lVar7;
        goto code_r0x03a0a0c4;
      }
    }
    if (*(int *)(lVar7 + 0x820) == 0) {
code_r0x03a0a068:
      *plVar4 = lVar7;
      uVar3 = func_0x03fa42d0(*(undefined8 *)(lVar7 + 8),uVar3,puVar5,0);
    }
    else {
      plVar6 = *(long **)(lVar7 + 0x808);
      lVar9 = *(long *)(lVar7 + 0x810);
      puVar8 = (undefined8 *)plVar6[1];
      while( true ) {
        if (((undefined8 *)(lVar7 + 0x808) == puVar8) && (lVar9 == *plVar6)) goto code_r0x03a0a068;
        iVar2 = func_0x03fa3ea0(*(undefined8 *)(lVar9 + 8),uVar3,puVar5,plVar4);
        if (-1 < iVar2) break;
        plVar6 = *(long **)(lVar7 + 0x808);
        lVar9 = *(long *)(lVar9 + 0x10);
        puVar8 = (undefined8 *)plVar6[1];
      }
      uVar3 = 0;
    }
  }
code_r0x03a0a0c4:
  if (*(long *)(lVar1 + 0x28) == lStack_b8) {
    return;
  }
  plVar4 = (long *)func_0x03f0b330(uVar3);
  lVar7 = lRam00000000041b6560;
  *(undefined2 *)(plVar4 + 1) = 0;
  *(undefined4 *)((long)plVar4 + 0xc) = 0;
  lVar1 = lRam00000000041b64f8;
  *(undefined4 *)(plVar4 + 9) = 0x20;
  *plVar4 = lVar7 + 0x10;
  *(undefined1 *)((long)plVar4 + 0x54) = 0;
  plVar4[2] = 0;
  plVar4[3] = lVar1 + 0x10;
  *(undefined1 *)(plVar4 + 5) = 0;
  plVar4[4] = (long)(plVar4 + 5);
  *(undefined8 *)((long)plVar4 + 0x4c) = 0x2000000000;
  func_0x03fa3440(plVar4 + 4);
  lVar1 = lRam00000000041b6190;
  *(undefined1 *)(plVar4 + 0xd) = 0;
  *(undefined4 *)(plVar4 + 0x11) = 0x20;
  *(undefined1 *)((long)plVar4 + 0x94) = 0;
  plVar4[0xb] = lVar1 + 0x10;
  plVar4[0xc] = (long)(plVar4 + 0xd);
  *(undefined1 *)(plVar4 + 0x14) = 0;
  plVar4[0x13] = (long)(plVar4 + 0x14);
  *(undefined1 *)(plVar4 + 0x1b) = 0;
  plVar4[0x1a] = (long)(plVar4 + 0x1b);
  *(undefined4 *)(plVar4 + 0x18) = 0x20;
  *(undefined1 *)((long)plVar4 + 0xcc) = 0;
  *(undefined4 *)(plVar4 + 0x1f) = 0x20;
  *(undefined1 *)((long)plVar4 + 0x104) = 0;
  *(undefined1 *)(plVar4 + 0x22) = 0;
  plVar4[0x21] = (long)(plVar4 + 0x22);
  *(undefined4 *)(plVar4 + 0x26) = 0x20;
  *(undefined1 *)((long)plVar4 + 0x13c) = 0;
  *(undefined4 *)((long)plVar4 + 0x144) = 0;
  *(undefined8 *)((long)plVar4 + 0x8c) = 0x2000000000;
  *(undefined8 *)((long)plVar4 + 0xc4) = 0x2000000000;
  *(undefined8 *)((long)plVar4 + 0xfc) = 0x2000000000;
  *(undefined8 *)((long)plVar4 + 0x134) = 0x2000000000;
  *(undefined2 *)(plVar4 + 0x28) = 0;
  return;
}


