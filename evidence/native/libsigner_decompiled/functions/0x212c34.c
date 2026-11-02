// rea decompile_all
// name: _INIT_1
// address: 0x212c34
// body: available
// range: 0x212c34-0x212ccb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _INIT_1(void)

{
  int iVar1;
  ulong uVar2;
  undefined8 local_88;
  ulong uStack_80;
  undefined8 local_78;
  char acStack_6c [92];
  
  if ((DAT_0021fb80 == 0) &&
     ((iVar1 = __system_property_get("ro.arch",acStack_6c), iVar1 < 1 ||
      (iVar1 = strncmp(acStack_6c,"exynos9810",10), iVar1 != 0)))) {
    uVar2 = getauxval(0x10);
    local_78 = getauxval(0x1a);
    local_88 = 0x18;
    uStack_80 = uVar2;
    FUN_002127fc(uVar2 | 0x4000000000000000,&local_88);
    return;
  }
  return;
}

