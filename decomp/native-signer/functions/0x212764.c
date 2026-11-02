// rea decompile_all
// name: _INIT_0
// address: 0x212764
// body: available
// range: 0x212764-0x2127fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _INIT_0(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  char acStack_6c [92];
  
  uVar3 = getauxval(0x10);
  if (((uint)uVar3 >> 8 & 1) != 0) {
    iVar2 = __system_property_get("ro.arch",acStack_6c);
    uVar1 = (uint)((ulong)uVar3 >> 8);
    if (iVar2 < 1) {
      uVar4 = uVar1 & 1;
    }
    else {
      iVar2 = strncmp(acStack_6c,"exynos9810",10);
      uVar4 = 0;
      if (iVar2 != 0) {
        uVar4 = uVar1 & 1;
      }
    }
    DAT_0021fb78 = uVar4 != 0;
    return;
  }
  DAT_0021fb78 = 0;
  return;
}

