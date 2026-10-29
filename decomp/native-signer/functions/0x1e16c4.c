// rea decompile_all
// name: FUN_001e16c4
// address: 0x1e16c4
// body: available
// range: 0x1e16c4-0x1e17a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_001e16c4(char *param_1,char *param_2)

{
  char *pcVar1;
  char *in_x14;
  undefined1 *puVar2;
  char *pcVar3;
  
  pcVar3 = param_1 + 1;
  pcVar1 = param_1;
  puVar2 = (undefined1 *)0x887e73b2c28c6a1;
  do {
    while( true ) {
      while ((long)puVar2 < 0x125dd2cc844aecb4) {
        if (puVar2 == &DAT_f615808441b1dafc) {
          param_2 = pcVar3;
          in_x14 = pcVar1;
          puVar2 = (undefined1 *)0x696b554ab6b2c8c5;
          if (*pcVar1 != '\0') {
            puVar2 = (undefined1 *)0x125dd2cc844aecb4;
          }
        }
        else if (puVar2 == (undefined1 *)0x887e73b2c28c6a1) {
          puVar2 = &DAT_f615808441b1dafc;
        }
      }
      if (puVar2 != (undefined1 *)0x125dd2cc844aecb4) break;
      pcVar3 = param_2 + 1;
      pcVar1 = param_2;
      puVar2 = &DAT_f615808441b1dafc;
    }
  } while (puVar2 != (undefined1 *)0x696b554ab6b2c8c5);
  return (long)in_x14 - (long)param_1;
}

