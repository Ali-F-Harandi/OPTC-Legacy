// rea decompile_all
// name: FUN_002102f0
// address: 0x2102f0
// body: available
// range: 0x2102f0-0x210407 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_002102f0(undefined4 *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  
  pvVar4 = realloc(*(void **)(param_2 + 0x18),(ulong)(*(int *)(param_2 + 0x14) + 1) << 2);
  lVar1 = 0x65536dc2a8308acd;
  if (pvVar4 != (void *)0x0) {
    lVar1 = 0xc7bf249d1db72b2;
  }
  lVar3 = -0x316a2fad8e5725cc;
  while( true ) {
    while (lVar5 = lVar3, lVar5 < 0x27963d1423e000f6) {
      lVar3 = lVar1;
      if ((lVar5 != -0x316a2fad8e5725cc) && (lVar3 = lVar5, lVar5 == 0xc7bf249d1db72b2)) {
        uVar2 = *(uint *)(param_2 + 0x14);
        *(void **)(param_2 + 0x18) = pvVar4;
        *(undefined4 *)((long)pvVar4 + (ulong)uVar2 * 4) = *(undefined4 *)(param_2 + 0x10);
        *(uint *)(param_2 + 0x14) = uVar2 + 1;
        lVar3 = 0x27963d1423e000f6;
      }
    }
    if (lVar5 == 0x27963d1423e000f6) break;
    lVar3 = lVar5;
    if (lVar5 == 0x65536dc2a8308acd) {
      *param_1 = 2;
      lVar3 = 0x27963d1423e000f6;
    }
  }
  return;
}

