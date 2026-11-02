// rea decompile_all
// name: FUN_00101cb8
// address: 0x101cb8
// body: available
// range: 0x101cb8-0x101d53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00101cb8(void)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  
  cVar1 = FUN_00105f34();
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar3 = _FINI_0();
    uVar2 = FUN_00105f34(0,0,uVar3,1,0xfc,1,7,0);
  }
  return uVar2;
}

