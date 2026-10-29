// rea decompile_all
// name: FUN_002009b8
// address: 0x2009b8
// body: available
// range: 0x2009b8-0x200ad3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte FUN_002009b8(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  byte in_w8;
  undefined1 *puVar4;
  
  puVar1 = (undefined1 *)0xc879bc31bae5bb14;
  if (param_2 == 0 || param_1 == 0) {
    puVar1 = (undefined1 *)0x36f07785a64d7584;
  }
  puVar2 = (undefined1 *)0x960858df0b0de441;
  do {
    while (puVar4 = puVar2, -0x378643ce451a44ed < (long)puVar4) {
      if (puVar4 == (undefined1 *)0x36f07785a64d7584) {
        in_w8 = 0;
        puVar2 = &DAT_c45038db124ae016;
      }
      else {
        puVar2 = puVar4;
        if (puVar4 == (undefined1 *)0xc879bc31bae5bb14) {
          lVar3 = FUN_001ef4b4(param_1,param_2);
          in_w8 = lVar3 != 0;
          puVar2 = &DAT_c45038db124ae016;
        }
      }
    }
    puVar2 = puVar1;
  } while ((puVar4 == (undefined1 *)0x960858df0b0de441) ||
          (puVar2 = puVar4, puVar4 != &DAT_c45038db124ae016));
  return in_w8 & 1;
}

