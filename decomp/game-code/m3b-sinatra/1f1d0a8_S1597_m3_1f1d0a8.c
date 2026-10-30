// M3b: S1597_m3_1f1d0a8 @ 0x1f1d0a8 (true address, RTTI-verified)
// see notes/m3b-plt-rtti-cipher.md

void S1597_m3_1f1d0a8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_2059 [8193];
  long lStack_58;
  
  lVar2 = tpidr_el0;
  lStack_58 = *(long *)(lVar2 + 0x28);
  uVar1 = *(uint *)(param_1 + 0x28);
  uVar6 = (ulong)uVar1;
  if ((uVar1 != 0) || (*(char *)(param_1 + 0x34) == '\0')) {
    if ((uVar1 != 0) && (*(int *)(param_1 + 0x2c) != 0)) {
      lVar7 = *(long *)(param_1 + 0x38);
code_r0x01f1d100:
      uVar4 = param_4 * param_3;
      if ((uVar6 & 0xffffffff) <= (ulong)(param_4 * param_3)) {
        uVar4 = uVar6 & 0xffffffff;
      }
      strtoull(param_2,lVar7,uVar4);
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) - (int)uVar4;
      *(ulong *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + uVar4;
      goto code_r0x01f1d13c;
    }
    GOTUNRES_41b9050(auStack_2059,0,0x2000);
    uVar6 = (**(code **)(**(long **)(param_1 + 0x18) + 0x18))
                      (*(long **)(param_1 + 0x18),auStack_2059,0x2000);
    if (0 < (long)uVar6) {
      lVar7 = param_1 + 0x40;
      iVar3 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))
                        (*(long **)(param_1 + 0x20),auStack_2059,lVar7,uVar6 & 0xffffffff);
      if (-1 < iVar3) {
        iVar3 = *(int *)(param_1 + 0x2c);
        *(long *)(param_1 + 0x38) = lVar7;
        uVar1 = iVar3 + (int)uVar6;
        *(int *)(param_1 + 0x28) = (int)uVar6;
        *(uint *)(param_1 + 0x2c) = uVar1;
        if (*(uint *)(param_1 + 0x30) <= uVar1) {
          uVar1 = *(uint *)(param_1 + 0x30) - iVar3;
          uVar6 = (ulong)uVar1;
          *(uint *)(param_1 + 0x28) = uVar1;
          *(undefined1 *)(param_1 + 0x34) = 1;
        }
        if ((int)uVar6 != 0) goto code_r0x01f1d100;
      }
    }
  }
  uVar4 = 0;
code_r0x01f1d13c:
  if (*(long *)(lVar2 + 0x28) != lStack_58) {
    plVar5 = (long *)GOTUNRES_41b8540(uVar4);
                    /* WARNING: Could not recover jumptable at 0x01f1d21c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x10))();
    return;
  }
  return;
}
