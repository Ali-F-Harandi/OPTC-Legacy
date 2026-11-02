// rea decompile_all
// name: FUN_00110f08
// address: 0x110f08
// body: available
// range: 0x110f08-0x111023 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00110f08(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = (ulong)*(byte *)(param_1 + 8);
  lVar1 = -0x1038528dd04cc9b8;
  if (*(byte *)(param_1 + 8) != 0) {
    lVar1 = 0x7bc8e480be254667;
  }
  lVar2 = -0x1131d0135a6d3962;
  while( true ) {
    while (lVar4 = lVar2, lVar4 < 0x21f15559b2a9e8ab) {
      lVar2 = lVar1;
      if ((lVar4 != -0x1131d0135a6d3962) && (lVar2 = lVar4, lVar4 == -0x1038528dd04cc9b8)) {
        uVar3 = *(ulong *)(param_1 + 0x238);
        lVar2 = 0x21f15559b2a9e8ab;
      }
    }
    if (lVar4 == 0x21f15559b2a9e8ab) break;
    lVar2 = lVar4;
    if (lVar4 == 0x7bc8e480be254667) {
      FUN_002083ac(param_1 + 0x20,5);
      uVar3 = *(ulong *)(param_1 + 0x238) | 1;
      lVar2 = 0x21f15559b2a9e8ab;
    }
  }
  *(ulong *)(param_1 + 0x238) = uVar3 | 0x20;
  return;
}

