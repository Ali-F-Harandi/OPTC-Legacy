// rea decompile_all
// name: FUN_0016de70
// address: 0x16de70
// body: available
// range: 0x16de70-0x16df9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0016de70(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x78))();
  lVar1 = 0x6b5051bf1aed633d;
  if (lVar2 == 0) {
    lVar1 = -0x938e289074b7147;
  }
  lVar3 = -0x3dc07bfa902cf42a;
  while( true ) {
    while (-0x938e289074b7148 < lVar3) {
      if (lVar3 == 0x6b5051bf1aed633d) {
        (**(code **)(*param_1 + 0x80))(param_1);
        (**(code **)(*param_1 + 0x88))(param_1);
        lVar3 = -0x408ee13b050179d2;
      }
      else if (lVar3 == -0x938e289074b7147) {
        lVar3 = -0x408ee13b050179d2;
      }
    }
    if (lVar3 == -0x408ee13b050179d2) break;
    if (lVar3 == -0x3dc07bfa902cf42a) {
      lVar3 = lVar1;
    }
  }
  return lVar2 != 0;
}

