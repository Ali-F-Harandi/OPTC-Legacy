// rea decompile_all
// name: FUN_001acd7c
// address: 0x1acd7c
// body: available
// range: 0x1acd7c-0x1ace8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001acd7c(undefined4 *param_1,long param_2,long *param_3,long *param_4)

{
  undefined1 *puVar1;
  long lVar2;
  uint *puVar3;
  undefined1 *puVar4;
  
  puVar3 = (uint *)*param_3;
  *param_3 = (long)(puVar3 + 2);
  lVar2 = FUN_001e53f4(*(long *)(param_2 + 8) + (ulong)*puVar3,puVar3[1]);
  puVar1 = (undefined1 *)0x125dd2cc844aecb4;
  if (lVar2 != 0) {
    puVar1 = &DAT_f615808441b1dafc;
  }
  *param_4 = lVar2;
  puVar4 = (undefined1 *)0x887e73b2c28c6a1;
  do {
    while( true ) {
      while ((long)puVar4 < 0x125dd2cc844aecb4) {
        if (puVar4 == &DAT_f615808441b1dafc) {
          puVar4 = (undefined1 *)0x696b554ab6b2c8c5;
        }
        else if (puVar4 == (undefined1 *)0x887e73b2c28c6a1) {
          puVar4 = puVar1;
        }
      }
      if (puVar4 != (undefined1 *)0x125dd2cc844aecb4) break;
      *param_1 = 2;
      puVar4 = (undefined1 *)0x696b554ab6b2c8c5;
    }
  } while (puVar4 != (undefined1 *)0x696b554ab6b2c8c5);
  return;
}

