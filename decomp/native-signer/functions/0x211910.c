// rea decompile_all
// name: FUN_00211910
// address: 0x211910
// body: available
// range: 0x211910-0x211957 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x211954 to 0x20f318 FUN_0020f318 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00211910(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = FUN_00210504(*(undefined8 *)(param_2 + 0x28),0);
  FUN_0020f318(param_1,uVar1,0,uVar2,param_3);
  return;
}

