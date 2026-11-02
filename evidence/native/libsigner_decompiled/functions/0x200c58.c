// rea decompile_all
// name: FUN_00200c58
// address: 0x200c58
// body: available
// range: 0x200c58-0x200ddf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte FUN_00200c58(ulong param_1,long param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  byte unaff_w19;
  ulong unaff_x21;
  
  lVar1 = -0x6bf42222db0ad31d;
  if (param_2 == 0 || param_1 == 0) {
    lVar1 = -0x1b715090d60a355e;
  }
  uVar3 = param_1;
  lVar4 = 0x22f3f9cf91cbb9a6;
  do {
    while( true ) {
      while (lVar5 = lVar4, 0xfb13253120e52d4 < lVar5) {
        if (lVar5 == 0xfb13253120e52d5) {
          iVar2 = FUN_001e17a8(param_1 + (unaff_x21 - uVar3),param_2);
          unaff_w19 = iVar2 == 0;
          lVar4 = -0x25a3e9f6f44c50c;
        }
        else {
          lVar4 = lVar1;
          if ((lVar5 != 0x22f3f9cf91cbb9a6) && (lVar4 = lVar5, lVar5 == 0x3007aa9d32d99be8))
          goto LAB_00200d54;
        }
      }
      if (lVar5 == -0x6bf42222db0ad31d) break;
      if (lVar5 == -0x1b715090d60a355e) {
LAB_00200d54:
        unaff_w19 = 0;
        lVar4 = -0x25a3e9f6f44c50c;
      }
      else {
        lVar4 = lVar5;
        if (lVar5 == -0x25a3e9f6f44c50c) {
          return unaff_w19 & 1;
        }
      }
    }
    unaff_x21 = FUN_001e16c4(param_1);
    uVar3 = FUN_001e16c4(param_2);
    lVar4 = 0x3007aa9d32d99be8;
    if (uVar3 <= unaff_x21) {
      lVar4 = 0xfb13253120e52d5;
    }
  } while( true );
}

