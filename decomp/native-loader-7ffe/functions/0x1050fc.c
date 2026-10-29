// rea decompile_all
// name: FUN_001050fc
// address: 0x1050fc
// body: available
// range: 0x1050fc-0x1051df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_001050fc(undefined4 param_1,long param_2,ulong param_3)

{
  char cVar1;
  int iVar2;
  ulong local_38;
  char *local_30;
  ulong local_10;
  undefined4 local_4;
  
  local_38 = param_3;
  if (param_3 == 0) {
    iVar2 = FUN_00105094(param_1);
    local_38 = (ulong)iVar2;
  }
  local_30 = (char *)(param_2 + local_38);
  *local_30 = '\0';
  local_4 = param_1;
  for (local_10 = 0; local_30 = local_30 + -1, local_10 < local_38; local_10 = local_10 + 1) {
    cVar1 = FUN_001059ec(local_4,10);
    *local_30 = cVar1 + '0';
    local_4 = FUN_001059bc(local_4,10);
  }
  return param_2 + local_38;
}

