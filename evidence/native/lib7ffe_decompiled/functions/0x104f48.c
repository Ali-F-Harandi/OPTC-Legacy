// rea decompile_all
// name: FUN_00104f48
// address: 0x104f48
// body: available
// range: 0x104f48-0x10504f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_00104f48(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  char *local_30;
  char *local_28;
  ulong local_10;
  char *local_8;
  
  uVar1 = FUN_001047cc(param_1);
  uVar2 = FUN_001047cc(param_2);
  if (uVar1 == 0) {
    local_8 = (char *)0x0;
  }
  else if (uVar2 == 0) {
    local_8 = (char *)0x0;
  }
  else if (uVar2 < uVar1) {
    local_8 = (char *)0x0;
  }
  else {
    local_28 = (char *)(param_1 + (uVar1 - 1));
    local_30 = (char *)(param_2 + (uVar2 - 1));
    local_8 = (char *)0x0;
    for (local_10 = 0; local_10 < uVar1; local_10 = local_10 + 1) {
      local_8 = local_30;
      if (*local_28 != *local_30) {
        return (char *)0x0;
      }
      local_28 = local_28 + -1;
      local_30 = local_30 + -1;
    }
  }
  return local_8;
}

