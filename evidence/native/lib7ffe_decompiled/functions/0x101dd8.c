// rea decompile_all
// name: FUN_00101dd8
// address: 0x101dd8
// body: available
// range: 0x101dd8-0x101e43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_00101dd8(undefined8 param_1,long param_2,long *param_3,long *param_4,long *param_5,
                 undefined8 *param_6)

{
  undefined2 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_10a8 [32];
  long lStack_1088;
  ushort uStack_1070;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  long alStack_98 [2];
  long lStack_88;
  uint uStack_80;
  int iStack_7c;
  ulong uStack_78;
  int *piStack_70;
  uint uStack_64;
  undefined1 *puStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  int iStack_34;
  long lStack_30;
  long lStack_28;
  int iStack_1c;
  ulong uStack_18;
  undefined1 *puStack_10;
  char cStack_1;
  
  cStack_1 = 1;
  uStack_50 = 0x1000;
  cStack_1 = FUN_00103b64(param_1,param_2,auStack_10a8,0x1000,0,0);
  if (cStack_1 != '\x01') {
    uVar3 = _FINI_0();
    cVar2 = cStack_1;
    uVar4 = FUN_001047cc(param_1);
    cStack_1 = FUN_00105f34(0,0,uVar3,2,0x33,1,1,cVar2,param_1,uVar4);
  }
  puStack_10 = (undefined1 *)0x0;
  if (cStack_1 != '\0') {
    puStack_10 = auStack_10a8;
    uStack_58 = lStack_1088 + (ulong)uStack_1070 * 0x38;
    if (0x1000 < uStack_58) {
      uVar3 = _FINI_0();
      iVar5 = (int)uStack_58;
      uVar4 = FUN_001047cc(param_1);
      cStack_1 = FUN_00105f34(0,0,uVar3,2,0x3c,1,2,-iVar5,param_1,uVar4);
    }
  }
  if (cStack_1 != '\0') {
    if (*(long *)(puStack_10 + 0x20) == 0) {
      uVar3 = _FINI_0();
      uVar6 = *(ulong *)(puStack_10 + 0x20);
      uVar4 = FUN_001047cc(param_1);
      cStack_1 = FUN_00105f34(0,0,uVar3,2,0x40,1,3,uVar6 & 0xffffffff,param_1,uVar4);
    }
    if (*(short *)(puStack_10 + 0x38) == 0) {
      uVar3 = _FINI_0();
      uVar1 = *(undefined2 *)(puStack_10 + 0x38);
      uVar4 = FUN_001047cc(param_1);
      cStack_1 = FUN_00105f34(0,0,uVar3,2,0x41,1,4,uVar1,param_1,uVar4);
    }
    if (*(long *)(puStack_10 + 0x28) == 0) {
      uVar3 = _FINI_0();
      uVar6 = *(ulong *)(puStack_10 + 0x28);
      uVar4 = FUN_001047cc(param_1);
      cStack_1 = FUN_00105f34(0,0,uVar3,2,0x42,1,5,uVar6 & 0xffffffff,param_1,uVar4);
    }
  }
  uStack_18 = 0;
  if (cStack_1 != '\0') {
    puStack_60 = puStack_10 + *(long *)(puStack_10 + 0x20);
    uStack_64 = (uint)*(ushort *)(puStack_10 + 0x38);
    for (iStack_1c = 0; iStack_1c < (int)uStack_64; iStack_1c = iStack_1c + 1) {
      piStack_70 = (int *)(puStack_60 + (long)iStack_1c * 0x38);
      if ((((*piStack_70 != 0) && (*piStack_70 == 1)) && (*(long *)(piStack_70 + 8) != 0)) &&
         (uStack_78 = *(long *)(piStack_70 + 2) + *(long *)(piStack_70 + 8), uStack_18 <= uStack_78)
         ) {
        uStack_18 = uStack_78;
      }
    }
  }
  if (cStack_1 != '\0') {
    if (uStack_18 == 0) {
      uVar3 = _FINI_0();
      uVar6 = uStack_18 & 0xffffffff;
      uVar4 = FUN_001047cc(param_1);
      cStack_1 = FUN_00105f34(0,0,uVar3,2,0x5e,1,6,uVar6,param_1,uVar4);
    }
    if (*(ulong *)(puStack_10 + 0x28) < uStack_18) {
      uVar3 = _FINI_0();
      uVar6 = uStack_18 & 0xffffffff;
      uVar4 = FUN_001047cc(param_1);
      cStack_1 = FUN_00105f34(0,0,uVar3,2,0x5f,1,7,uVar6,param_1,uVar4);
    }
  }
  alStack_98[0] = 0;
  uStack_a0 = 0;
  if ((cStack_1 != '\0') &&
     (cStack_1 = FUN_00103c6c(param_1,param_2 + uStack_18,alStack_98,&uStack_a0,0,0),
     cStack_1 != '\x01')) {
    uVar3 = _FINI_0();
    cVar2 = cStack_1;
    uVar4 = FUN_001047cc(param_1);
    cStack_1 = FUN_00105f34(0,0,uVar3,2,0x6a,1,8,cVar2,param_1,uVar4);
  }
  lStack_28 = 0;
  if (cStack_1 != '\0') {
    lStack_28 = alStack_98[0] + (*(long *)(puStack_10 + 0x28) - uStack_18);
  }
  lStack_30 = 0;
  if (cStack_1 != '\0') {
    iStack_7c = -0x80000000;
    uStack_80 = (uint)*(ushort *)(puStack_10 + 0x3c);
    for (iStack_34 = 0; iStack_34 < (int)uStack_80; iStack_34 = iStack_34 + 1) {
      lStack_88 = lStack_28 + (long)iStack_34 * 0x40;
      uStack_a4 = 0;
      FUN_001046bc(&uStack_a4,lStack_88 + 4,4);
      if (*(int *)(lStack_88 + 4) == iStack_7c) {
        lStack_30 = lStack_88;
        break;
      }
    }
  }
  if (cStack_1 != '\0') {
    if (lStack_30 == 0) {
      uVar3 = _FINI_0();
      uVar4 = FUN_001047cc(param_1);
      cStack_1 = FUN_00105f34(0,0,uVar3,2,0x8e,1,9,0,param_1,uVar4);
    }
    if (*(ulong *)(lStack_30 + 0x18) < uStack_18) {
      uVar3 = _FINI_0();
      uVar6 = uStack_18 & 0xffffffff;
      uVar4 = FUN_001047cc(param_1);
      cStack_1 = FUN_00105f34(0,0,uVar3,2,0x8f,1,10,uVar6,param_1,uVar4);
    }
    if (*(long *)(lStack_30 + 0x20) == 0) {
      uVar3 = _FINI_0();
      uVar6 = *(ulong *)(lStack_30 + 0x20);
      uVar4 = FUN_001047cc(param_1);
      cStack_1 = FUN_00105f34(0,0,uVar3,2,0x90,1,0xb,uVar6 & 0xffffffff,param_1,uVar4);
    }
  }
  if (cStack_1 != '\0') {
    lVar7 = *(long *)(lStack_30 + 0x20);
    *param_3 = alStack_98[0] + (*(long *)(lStack_30 + 0x18) - uStack_18) + 0x23c;
    *param_4 = lVar7 + -0x23c;
    *param_5 = alStack_98[0];
    *param_6 = uStack_a0;
  }
  return cStack_1;
}

