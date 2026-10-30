// M3d: blockCodec32 @ 0x1ef4338 (Ghidra decompile, true address)
#

void m3d_1ef4338(long *param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined1 auStack_69 [33];
  long lStack_48;
  
  lVar2 = tpidr_el0;
  lStack_48 = *(long *)(lVar2 + 0x28);
  *param_3 = 0xffffffff;
  if (*(int *)((long)param_1 + 0x4c) == 0) {
    uVar3 = *(uint *)(param_1 + 9);
    if (uVar3 != 0) {
      lVar5 = param_1[6];
      uVar1 = uVar3;
      if ((int)param_2 <= (int)uVar3) {
        uVar1 = param_2;
      }
      *param_3 = uVar1;
      lVar5 = (lVar5 - (int)uVar3) + 0x20;
      *(uint *)(param_1 + 9) = (int)param_1[9] - uVar1;
      goto code_r0x01ef445c;
    }
  }
  else {
    *(undefined4 *)(param_1 + 9) = 0;
  }
  uVar3 = (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],auStack_69,0x20);
  if ((int)uVar3 < 1) {
code_r0x01ef43f4:
    lVar5 = 0;
  }
  else {
    if (param_1[4] == 0) {
      func_0x03f0b910(param_1[6],auStack_69,uVar3 & 0x7fffffff);
      iVar4 = *(int *)((long)param_1 + 0x4c);
    }
    else {
      iVar4 = (**(code **)(*param_1 + 0x20))
                        (param_1,param_1[4],auStack_69,param_1[6],uVar3 & 0x7fffffff);
      if (iVar4 < 1) goto code_r0x01ef43f4;
      iVar4 = *(int *)((long)param_1 + 0x4c);
    }
    if (iVar4 == 0) {
      lVar5 = param_1[6];
      if ((int)uVar3 <= (int)param_2) {
        param_2 = uVar3;
      }
      *param_3 = param_2;
      *(uint *)(param_1 + 9) = uVar3 - param_2;
    }
    else {
      *(int *)(param_1 + 9) = 0x20 - iVar4;
      *(undefined4 *)((long)param_1 + 0x4c) = 0;
      lVar5 = func_0x03f2c5c0(param_1,param_2,param_3);
    }
  }
code_r0x01ef445c:
  if (*(long *)(lVar2 + 0x28) != lStack_48) {
    plVar6 = (long *)func_0x03f0b330(lVar5);
    *plVar6 = lRam000000000419a170 + 0x10;
    if ((long *)plVar6[4] != (long *)0x0) {
      (**(code **)(*(long *)plVar6[4] + 8))();
      plVar6[4] = 0;
    }
    if ((plVar6[6] != 0) && (plVar6[5] != 0)) {
      func_0x03f0cbe0();
    }
    plVar6[5] = 0;
    plVar6[6] = 0;
    lVar2 = lRam000000000419a168;
    *(undefined1 *)(plVar6 + 8) = 0;
    plVar6[7] = 0;
    *plVar6 = lVar2 + 0x10;
    if ((long *)plVar6[2] != (long *)0x0) {
      (**(code **)(*(long *)plVar6[2] + 8))();
      plVar6[2] = 0;
    }
    return;
  }
  return;
}


