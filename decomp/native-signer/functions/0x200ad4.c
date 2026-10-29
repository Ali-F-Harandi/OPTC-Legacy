// rea decompile_all
// name: FUN_00200ad4
// address: 0x200ad4
// body: available
// range: 0x200ad4-0x200c57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte FUN_00200ad4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  byte unaff_w19;
  ulong unaff_x22;
  
  lVar1 = -0x189dd9be034f6f3a;
  if (param_2 == 0 || param_1 == 0) {
    lVar1 = -0x3f0aedafd881a303;
  }
  lVar2 = -0x7aff4164fa82cff2;
  while( true ) {
    while( true ) {
      while (lVar5 = lVar2, lVar5 < -0x189dd9be034f6f3a) {
        lVar2 = lVar1;
        if ((lVar5 != -0x7aff4164fa82cff2) &&
           ((lVar5 == -0x784e00d20971c752 || (lVar2 = lVar5, lVar5 == -0x3f0aedafd881a303)))) {
          unaff_w19 = 0;
          lVar2 = 0x29ff0ff794febe2e;
        }
      }
      if (lVar5 != 0x34ee749c3dc3cf5c) break;
      iVar3 = FUN_001e1c70(param_1,param_2,unaff_x22);
      unaff_w19 = iVar3 == 0;
      lVar2 = 0x29ff0ff794febe2e;
    }
    if (lVar5 == 0x29ff0ff794febe2e) break;
    lVar2 = lVar5;
    if (lVar5 == -0x189dd9be034f6f3a) {
      uVar4 = FUN_001e16c4(param_1);
      unaff_x22 = FUN_001e16c4(param_2);
      lVar2 = -0x784e00d20971c752;
      if (unaff_x22 <= uVar4) {
        lVar2 = 0x34ee749c3dc3cf5c;
      }
    }
  }
  return unaff_w19 & 1;
}

