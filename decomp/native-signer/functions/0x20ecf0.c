// rea decompile_all
// name: FUN_0020ecf0
// address: 0x20ecf0
// body: available
// range: 0x20ecf0-0x20ee0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0020ecf0(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int *__ptr;
  
  __ptr = (int *)*param_1;
  iVar2 = *__ptr + -1;
  lVar1 = -0x3dc07bfa902cf42a;
  if (iVar2 != 0) {
    lVar1 = -0xab3a208b03543bf;
  }
  *__ptr = iVar2;
  lVar3 = -0x9c4c91856260990;
  do {
    while (lVar4 = lVar3, lVar4 < -0x9c4c91856260990) {
      if (lVar4 == -0x3dc07bfa902cf42a) {
        *param_1 = *(undefined8 *)(__ptr + 2);
        free(__ptr);
        lVar3 = -0x938e289074b7147;
      }
      else {
        lVar3 = lVar4;
        if (lVar4 == -0xab3a208b03543bf) {
          lVar3 = -0x938e289074b7147;
        }
      }
    }
    lVar3 = lVar1;
  } while ((lVar4 == -0x9c4c91856260990) || (lVar3 = lVar4, lVar4 != -0x938e289074b7147));
  return iVar2;
}

