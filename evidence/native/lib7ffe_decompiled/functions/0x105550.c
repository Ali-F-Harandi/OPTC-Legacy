// rea decompile_all
// name: FUN_00105550
// address: 0x105550
// body: available
// range: 0x105550-0x105687 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_00105550(long param_1)

{
  int iVar1;
  long lVar2;
  undefined1 local_38 [2];
  undefined1 local_36;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_11;
  long local_10;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    local_28 = 0x2e;
    local_27 = 0;
    local_38[0] = 0x2e;
    local_36 = 0;
    iVar1 = FUN_001048d8(param_1,&local_28);
    if ((iVar1 != 0) && (iVar1 = FUN_001048d8(param_1,local_38), iVar1 != 0)) {
      local_10 = FUN_001047cc(param_1);
      if (local_10 == 0) {
        param_1 = 0;
      }
      else {
        local_11 = 0x2f;
        if (*(char *)(param_1 + local_10 + -1) == '/') {
          param_1 = 0;
        }
        else {
          lVar2 = FUN_00104c44(param_1,0x2f);
          if (lVar2 != 0) {
            param_1 = lVar2 + 1;
          }
        }
      }
    }
  }
  return param_1;
}

