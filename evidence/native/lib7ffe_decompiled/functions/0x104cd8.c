// rea decompile_all
// name: FUN_00104cd8
// address: 0x104cd8
// body: available
// range: 0x104cd8-0x104d97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_00104cd8(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_4;
  
  iVar1 = FUN_001047cc(param_1);
  iVar2 = FUN_001047cc(param_2);
  if (iVar2 <= iVar1) {
    for (local_4 = 0; local_4 <= iVar1 - iVar2; local_4 = local_4 + 1) {
      iVar3 = FUN_00104828(param_1 + local_4,param_2,(long)iVar2);
      if (iVar3 == 0) {
        return param_1 + local_4;
      }
    }
  }
  return 0;
}

