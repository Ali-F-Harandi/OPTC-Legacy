// rea decompile_all
// name: FUN_001f51e8
// address: 0x1f51e8
// body: available
// range: 0x1f51e8-0x1f52ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_001f51e8(undefined4 *param_1,FILE *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = ftell(param_2);
  lVar1 = -0x3dc07bfa902cf42a;
  if (lVar3 < 0) {
    lVar1 = -0xab3a208b03543bf;
  }
  lVar2 = -0x9c4c91856260990;
  do {
    while (lVar4 = lVar2, lVar4 < -0x9c4c91856260990) {
      if (lVar4 == -0x3dc07bfa902cf42a) {
        *param_3 = lVar3;
        lVar2 = -0x938e289074b7147;
      }
      else {
        lVar2 = lVar4;
        if (lVar4 == -0xab3a208b03543bf) {
          *param_1 = 2;
          lVar2 = -0x938e289074b7147;
        }
      }
    }
    lVar2 = lVar1;
  } while ((lVar4 == -0x9c4c91856260990) || (lVar2 = lVar4, lVar4 != -0x938e289074b7147));
  return (uint)((ulong)lVar3 >> 0x3f) ^ 1;
}

