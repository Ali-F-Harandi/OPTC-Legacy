// M3d: GlobalNtyPool_findVolumeByName_v2 @ 0x3a00388 (Ghidra decompile, true address)
#

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong m3d_3a00388(undefined8 param_1,long *param_2,uint param_3)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
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
  
  plVar1 = plRam00000000041b64a8;
  lVar6 = tpidr_el0;
  lStack_80 = *(long *)(lVar6 + 0x28);
  uVar7 = 0xc0000005;
  lStack_5a0 = 0;
  uStack_5a4 = 0;
  if (*plRam00000000041b64a8 == 0) {
    uVar7 = 0xc0000002;
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
  iVar3 = func_0x03fa3eb0(*(undefined8 *)(*plRam00000000041b64a8 + 0x28),param_1,&lStack_170);
  if (iVar3 < 0) {
    if ((param_3 >> 0xd & 1) == 0) {
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_198 = 0;
      func_0x03fa2550(auStack_598,param_1);
      uVar4 = func_0x03fa3ec0(*plVar1,auStack_598,&lStack_5a0,&uStack_5a4);
      lVar5 = lStack_5a0;
      if (-1 < (int)uVar4) {
        if (*(char *)(lStack_5a0 + 0x18) == '\0') {
          uVar4 = 0xc0000010;
        }
        else {
          lStack_5b0 = 0;
          iVar3 = func_0x03fa3ed0(*(undefined8 *)(*plVar1 + 0x28),uStack_190,&lStack_5b0);
          if ((iVar3 < 0) || (iVar3 = func_0x03fa3ee0(lStack_5b0), iVar3 < 0)) {
            uVar2 = uStack_5a4;
            lVar8 = *(long *)(lVar5 + 0x20);
            if (lVar8 == 0) {
              lVar8 = *(long *)(*plRam00000000041b64b0 + 8);
            }
            uVar9 = *(undefined8 *)(lVar5 + 8);
            *param_2 = 0;
            lVar5 = func_0x03f2c2a0();
            uVar4 = func_0x03f2c2b0(lVar5,uVar9,uVar2,lVar8);
            if (-1 < (int)uVar4) {
              *param_2 = lVar5;
            }
          }
          else {
            lVar5 = func_0x03f2cc80(*(undefined8 *)(lStack_5b0 + 0x60),0x40000000);
            *param_2 = lVar5;
            uVar4 = uVar7;
            if (lVar5 != 0) {
              uVar4 = 0;
            }
          }
        }
      }
      uVar7 = uVar4;
      if ((uStack_188 & 1) != 0) {
        func_0x03f0b310(uStack_178);
      }
    }
    else {
      iVar3 = func_0x03fa24f0(param_1,&lStack_170);
      if (-1 < iVar3) {
        lVar5 = func_0x03f2cc80(puStack_168,0x40000000);
        goto code_r0x03a00488;
      }
      uVar7 = 0xc0000005;
    }
  }
  else {
    lVar5 = func_0x03f2cc80(puStack_168,0x40000000);
code_r0x03a00488:
    *param_2 = lVar5;
    if (lVar5 != 0) {
      uVar7 = 0;
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
  if (*(long *)(lVar6 + 0x28) != lStack_80) {
    lVar6 = func_0x03f0b330();
    return *(ulong *)(lVar6 + 0x28);
  }
  return (ulong)uVar7;
}


