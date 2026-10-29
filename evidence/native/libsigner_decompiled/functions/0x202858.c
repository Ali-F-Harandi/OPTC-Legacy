// rea decompile_all
// name: FUN_00202858
// address: 0x202858
// body: available
// range: 0x202858-0x202927 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00202858(ulong *param_1,uint param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = &DAT_f615808441b1dafc;
  if (param_1 != (ulong *)0x0) {
    puVar1 = (undefined1 *)0x125dd2cc844aecb4;
  }
  puVar2 = (undefined1 *)0x887e73b2c28c6a1;
  do {
    while( true ) {
      while ((long)puVar2 < 0x125dd2cc844aecb4) {
        if (puVar2 == &DAT_f615808441b1dafc) {
          puVar2 = (undefined1 *)0x696b554ab6b2c8c5;
        }
        else if (puVar2 == (undefined1 *)0x887e73b2c28c6a1) {
          puVar2 = puVar1;
        }
      }
      if (puVar2 != (undefined1 *)0x125dd2cc844aecb4) break;
      *param_1 = (ulong)param_2;
      puVar2 = (undefined1 *)0x696b554ab6b2c8c5;
    }
  } while (puVar2 != (undefined1 *)0x696b554ab6b2c8c5);
  return;
}

