// M3d: GlobalNtyPool_createCacheFromList @ 0x1ef1588 (Ghidra decompile, true address)
#

long m3d_1ef1588(undefined8 param_1,long param_2,uint param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  if (param_3 != 0) {
    plVar8 = (long *)0x0;
    plVar6 = (long *)0x0;
    uVar11 = (ulong)param_3;
    puVar5 = (undefined8 *)(param_2 + 8);
    lVar7 = lRam0000000004187ac8 + 0x10;
    do {
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
      uVar9 = puVar5[-1];
      plVar6 = (long *)func_0x03f0b2e0(0x4f8);
      func_0x03f2c330();
      uVar3 = func_0x03f2c340(plVar6,uVar9,0);
      if ((uVar3 & 1) == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
        plVar8 = (long *)0x0;
        plVar6 = (long *)0x0;
      }
      else {
        plVar8 = (long *)func_0x03f0b2e0(0x38);
        uVar10 = *puVar5;
        uVar9 = func_0x03f0b2d0(uVar10);
        *plVar8 = lVar7;
        plVar8[4] = 0;
        plVar8[3] = 0;
        plVar8[6] = 0;
        plVar8[5] = 0;
        plVar8[2] = 0;
        plVar8[1] = 0;
        func_0x03f24990(plVar8 + 1,uVar10,uVar9,0xe0000000);
        iVar2 = m3d_1ef1784(param_4,plVar6);
        if ((-1 < iVar2) &&
           (lVar4 = func_0x03f2c210(param_1,plVar6,plVar8,iVar2,param_4), lVar4 != 0))
        goto code_r0x01ef16bc;
      }
      uVar11 = uVar11 - 1;
      puVar5 = puVar5 + 2;
    } while (uVar11 != 0);
    lVar4 = 0;
    lVar7 = 0;
    if (plVar6 != (long *)0x0) {
code_r0x01ef16bc:
      (**(code **)(*plVar6 + 8))(plVar6);
      lVar7 = lVar4;
    }
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))(plVar8);
    }
    if (lVar7 != 0) {
      return lVar7;
    }
  }
  plVar6 = plRam000000000419a110;
  if (*plRam000000000419a110 == 0) {
    puVar5 = (undefined8 *)func_0x03f0b2e0(0x30);
    puVar5[5] = 0;
    puVar5[1] = 0;
    *puVar5 = puVar5 + 1;
    puVar5[4] = 0;
    puVar5[2] = 0;
    puVar5[3] = puVar5 + 4;
    *plVar6 = (long)puVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0,0x3f2c1f0);
  (*pcVar1)();
}


