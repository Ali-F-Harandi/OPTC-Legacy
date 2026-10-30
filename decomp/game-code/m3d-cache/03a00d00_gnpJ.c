// M3d: gnpJ @ 0x3a00d00 (Ghidra decompile, true address)
#

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m3d_3a00d00(undefined8 *param_1,ulong param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong unaff_x19;
  undefined8 *unaff_x20;
  undefined1 auVar7 [16];
  long lStack_4f0;
  long lStack_4e8;
  undefined1 auStack_4dc [4];
  long lStack_4d8;
  undefined1 *puStack_4d0;
  undefined8 uStack_4c8;
  long lStack_4c0;
  undefined8 *puStack_4b0;
  ulong uStack_4a8;
  undefined8 uStack_498;
  undefined8 uStack_490;
  long lStack_488;
  undefined1 auStack_47c [4];
  long lStack_478;
  undefined1 auStack_470 [1024];
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  plVar6 = plRam00000000041b64a8;
  lVar1 = tpidr_el0;
  lStack_48 = *(long *)(lVar1 + 0x28);
  if (*plRam00000000041b64a8 == 0) {
    uVar4 = 0xc0000002;
  }
  else {
    lStack_478 = 0;
    lStack_50 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_68 = 0;
    lStack_70 = 0;
    func_0x03fa2550(auStack_470,param_1);
    param_3 = &lStack_478;
    uVar4 = func_0x03fa3ec0(*plVar6,auStack_470,param_3,auStack_47c);
    lVar2 = lStack_478;
    unaff_x20 = param_1;
    if (-1 < (int)uVar4) {
      if (lStack_70 == 0) {
        uStack_498 = 0;
        uStack_490 = 0;
        lStack_488 = 0;
        func_0x03f0c1a0(&uStack_498,s_NTY____01501e64);
        func_0x03f0c1a0(&uStack_498,lVar2 + 0x408);
        func_0x03f0c1a0(&uStack_498,s___0134587a);
        unaff_x20 = &uStack_498;
        func_0x03f0c1a0(&uStack_498,param_1);
        lVar2 = lStack_488;
        if ((uStack_498 & 1) == 0) {
          lVar2 = (long)&uStack_498 + 1;
        }
        func_0x03fa2550(param_2,lVar2);
        if ((uStack_498 & 1) != 0) {
          func_0x03f0b310(lStack_488);
        }
      }
      else {
        lVar2 = (long)&uStack_60 + 1;
        if ((uStack_60 & 1) != 0) {
          lVar2 = lStack_50;
        }
        func_0x03fa2550(param_2,lVar2);
      }
      uVar4 = 0;
    }
    unaff_x19 = param_2;
    if ((uStack_60 & 1) != 0) {
      uVar4 = uVar4 & 0xffffffff;
      func_0x03f0b310(lStack_50);
      unaff_x19 = uVar4;
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack_48) {
    return;
  }
  auVar7 = func_0x03f0b330(uVar4);
  uStack_4c8 = 0x3a00ec0;
  lVar2 = tpidr_el0;
  lStack_4d8 = *(long *)(lVar2 + 0x28);
  *param_3 = 0;
  lStack_4f0 = 0;
  lStack_4e8 = 0;
  puStack_4d0 = &stack0xffffffffffffffc0;
  lStack_4c0 = lVar1;
  puStack_4b0 = unaff_x20;
  uStack_4a8 = unaff_x19;
  iVar3 = func_0x03fa3ec0(auVar7._0_8_,auVar7._8_8_,&lStack_4e8,auStack_4dc);
  if ((iVar3 < 0) || (*(char *)(lStack_4e8 + 0x18) == '\0')) {
code_r0x03a00f54:
    uVar5 = 0xc000000a;
  }
  else {
    iVar3 = func_0x03fa3f20(lStack_4e8,*(undefined8 *)(auVar7._8_8_ + 0x408),&lStack_4f0);
    if ((iVar3 < 0) || (iVar3 = func_0x03fa3ee0(lStack_4f0), iVar3 < 0)) {
      if (lStack_4f0 == 0) goto code_r0x03a00f54;
      uVar5 = func_0x03fa3f30(lStack_4f0);
      if ((int)uVar5 < 0) goto code_r0x03a00f5c;
    }
    uVar5 = 0;
    *param_3 = *(long *)(lStack_4f0 + 0x60);
  }
code_r0x03a00f5c:
  if (*(long *)(lVar2 + 0x28) != lStack_4d8) {
    auVar7 = func_0x03f0b330(uVar5);
    lVar1 = lRam00000000041b6190;
    plVar6 = auVar7._0_8_;
    *(undefined4 *)(plVar6 + 6) = 0x20;
    *(undefined1 *)(plVar6 + 2) = 0;
    *plVar6 = lVar1 + 0x10;
    uVar5 = _s__01460058;
    *(undefined1 *)((long)plVar6 + 0x3c) = 0;
    *(undefined1 *)(plVar6 + 9) = 0;
    plVar6[8] = (long)(plVar6 + 9);
    *(undefined1 *)(plVar6 + 0x10) = 0;
    plVar6[0xf] = (long)(plVar6 + 0x10);
    plVar6[1] = (long)(plVar6 + 2);
    *(undefined8 *)((long)plVar6 + 0x34) = uVar5;
    *(undefined4 *)(plVar6 + 0xd) = 0x20;
    *(undefined1 *)((long)plVar6 + 0x74) = 0;
    *(undefined8 *)((long)plVar6 + 0x6c) = uVar5;
    *(undefined4 *)(plVar6 + 0x14) = 0x20;
    *(undefined1 *)((long)plVar6 + 0xac) = 0;
    *(undefined8 *)((long)plVar6 + 0xa4) = uVar5;
    plVar6[0x16] = (long)(plVar6 + 0x17);
    *(undefined4 *)(plVar6 + 0x1b) = 0x20;
    *(undefined1 *)((long)plVar6 + 0xe4) = 0;
    *(undefined8 *)((long)plVar6 + 0xdc) = uVar5;
    *(undefined1 *)(plVar6 + 0x17) = 0;
    *(undefined2 *)(plVar6 + 0x1d) = 0;
    *(undefined4 *)((long)plVar6 + 0xec) = 0;
    func_0x03fa3430(plVar6,auVar7._8_8_,0);
    return;
  }
  return;
}


