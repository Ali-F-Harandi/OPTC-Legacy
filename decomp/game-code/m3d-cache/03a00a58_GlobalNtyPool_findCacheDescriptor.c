// M3d: GlobalNtyPool_findCacheDescriptor @ 0x3a00a58 (Ghidra decompile, true address)
#

ulong m3d_3a00a58(long param_1,long param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  long lStack_70;
  long lStack_68;
  
  lVar2 = tpidr_el0;
  lStack_68 = *(long *)(lVar2 + 0x28);
  lStack_70 = 0;
  iVar3 = func_0x03fa3ed0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x408),
                          &lStack_70);
  if (iVar3 < 0) {
    lVar7 = *(long *)(param_2 + 0x400);
    if (lVar7 != 0) {
      *param_3 = 0;
      plVar6 = (long *)(param_1 + 8);
      lVar8 = *(long *)(param_1 + 0x10);
      uVar4 = 0xc000000a;
      if ((plVar6 != (long *)((long *)*plVar6)[1]) || (lVar8 != *(long *)*plVar6)) {
        uVar5 = func_0x03f0b2d0(lVar7);
        plVar9 = (long *)*plVar6;
        do {
          iVar3 = func_0x03f27550(**(long **)(lVar8 + 0x18) + 0x408,lVar7,uVar5);
          if (iVar3 == 0) {
            uVar5 = **(undefined8 **)(lVar8 + 0x18);
            *param_3 = uVar5;
            uVar4 = func_0x03fa3f20(uVar5,*(undefined8 *)(param_2 + 0x408),&lStack_70);
            if ((int)uVar4 < 0) goto code_r0x03a00b74;
            goto code_r0x03a00ab8;
          }
          lVar8 = *(long *)(lVar8 + 0x20);
        } while ((plVar6 != (long *)plVar9[1]) || (lVar8 != *plVar9));
        uVar4 = 0xc000000a;
      }
      goto code_r0x03a00b74;
    }
    plVar6 = (long *)(param_1 + 8);
    lVar7 = *(long *)(param_1 + 0x10);
    if ((plVar6 != (long *)((long *)*plVar6)[1]) || (lVar7 != *(long *)*plVar6)) {
      do {
        iVar3 = func_0x03fa3f20(**(undefined8 **)(lVar7 + 0x18),*(undefined8 *)(param_2 + 0x408),
                                &lStack_70);
        if (-1 < iVar3) goto code_r0x03a00ab8;
        lVar7 = *(long *)(lVar7 + 0x20);
      } while ((plVar6 != (long *)((long *)*plVar6)[1]) || (lVar7 != *(long *)*plVar6));
    }
  }
  else if (*(char *)(lStack_70 + 8) != '\0') {
code_r0x03a00ab8:
    uVar1 = *(undefined4 *)(lStack_70 + 0xc);
    uVar4 = 0;
    *param_3 = *(undefined8 *)(lStack_70 + 0x10);
    *param_4 = uVar1;
    goto code_r0x03a00b74;
  }
  uVar4 = 0xc0000000;
code_r0x03a00b74:
  if (*(long *)(lVar2 + 0x28) != lStack_68) {
    auVar10 = func_0x03f0b330(uVar4);
    iVar3 = func_0x03fa3ed0(*(undefined8 *)(auVar10._0_8_ + 0x28),
                            *(undefined8 *)(auVar10._8_8_ + 0x408));
    return (ulong)(iVar3 >> 0x1f & 0xc000000b);
  }
  return uVar4;
}


