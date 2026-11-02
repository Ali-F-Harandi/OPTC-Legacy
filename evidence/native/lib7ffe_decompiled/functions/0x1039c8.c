// rea decompile_all
// name: FUN_001039c8
// address: 0x1039c8
// body: available
// range: 0x1039c8-0x103a57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_001039c8(undefined8 param_1,undefined8 param_2)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  undefined1 local_1;
  
  local_1 = 1;
  local_20 = 0x6c5c7486;
  local_1c = 0xbc547ee4;
  local_18 = 0x7c76c49c;
  local_14 = 0x5474f4;
  local_10 = FUN_00105b54(&local_20,0x10);
  local_1 = FUN_00103478(param_1,local_10,param_2);
  FUN_00105c18(local_10);
  return local_1;
}

