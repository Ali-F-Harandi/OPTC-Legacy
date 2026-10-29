// rea decompile_all
// name: FUN_001f9f24
// address: 0x1f9f24
// body: available
// range: 0x1f9f24-0x1fa06b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001f9f24(undefined4 *param_1,uint *param_2,uint param_3,undefined8 param_4)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  
  *param_2 = param_3;
  pvVar2 = calloc(1,(ulong)param_3);
  lVar1 = -0x6bd26373b69e2212;
  if (pvVar2 != (void *)0x0) {
    lVar1 = -0x28ee212cd644d530;
  }
  *(void **)(param_2 + 2) = pvVar2;
  lVar3 = 0x21f15559b2a9e8ab;
  while( true ) {
    while (lVar3 < -0x19fe551b65af4a47) {
      if (lVar3 == -0x6bd26373b69e2212) {
        *param_1 = 1;
        lVar3 = -0x19fe551b65af4a47;
      }
      else if (lVar3 == -0x28ee212cd644d530) {
        FUN_001f4fdc(param_1,pvVar2,(ulong)param_3,1,param_4);
        lVar3 = -0x19fe551b65af4a47;
      }
    }
    if (lVar3 == -0x19fe551b65af4a47) break;
    if (lVar3 == 0x21f15559b2a9e8ab) {
      lVar3 = lVar1;
    }
  }
  return;
}

