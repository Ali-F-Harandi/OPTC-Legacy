// rea decompile_all
// name: FUN_00210408
// address: 0x210408
// body: available
// range: 0x210408-0x2104e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00210408(undefined4 *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = *(int *)(param_2 + 0x14) - 1;
  lVar1 = 0x3b16db62a3c2f4fb;
  if (*(int *)(param_2 + 0x14) != 0) {
    lVar1 = 0x3ace195dd3930386;
  }
  lVar3 = -0x111819a4994f0fa;
  while( true ) {
    while (0x3ace195dd3930385 < lVar3) {
      if (lVar3 == 0x3ace195dd3930386) {
        lVar3 = -0x12e0f8e15901e122;
        *(undefined4 *)(param_2 + 0x10) =
             *(undefined4 *)(*(long *)(param_2 + 0x18) + (ulong)uVar2 * 4);
        *(uint *)(param_2 + 0x14) = uVar2;
      }
      else if (lVar3 == 0x3b16db62a3c2f4fb) {
        *param_1 = 7;
        lVar3 = -0x12e0f8e15901e122;
      }
    }
    if (lVar3 == -0x12e0f8e15901e122) break;
    if (lVar3 == -0x111819a4994f0fa) {
      lVar3 = lVar1;
    }
  }
  return;
}

