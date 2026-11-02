// rea decompile_all
// name: FUN_002083ac
// address: 0x2083ac
// body: available
// range: 0x2083ac-0x208493 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_002083ac(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = -0x189dd9be034f6f3a;
  if (0x3f < param_2) {
    lVar1 = -0x3f0aedafd881a303;
  }
  lVar2 = -0x7aff4164fa82cff2;
  do {
    while (lVar3 = lVar2, -0x3f0aedafd881a304 < lVar3) {
      if (lVar3 == -0x189dd9be034f6f3a) {
        *(ulong *)(param_1 + 0x210) =
             *(ulong *)(param_1 + 0x210) ^ *(ulong *)(param_1 + (0x3f - param_2) * 8 + 0x10);
        lVar2 = -0x784e00d20971c752;
      }
      else {
        lVar2 = lVar3;
        if (lVar3 == -0x3f0aedafd881a303) {
          lVar2 = -0x784e00d20971c752;
        }
      }
    }
    lVar2 = lVar1;
  } while ((lVar3 == -0x7aff4164fa82cff2) || (lVar2 = lVar3, lVar3 != -0x784e00d20971c752));
  return;
}

