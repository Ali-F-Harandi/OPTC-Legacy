// rea decompile_all
// name: FUN_00210504
// address: 0x210504
// body: available
// range: 0x210504-0x2105f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00210504(uint *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  iVar4 = *(int *)(*(long *)(param_1 + 6) + (ulong)(param_1[5] - 1) * 4);
  uVar1 = iVar4 + param_2;
  lVar2 = -0x2ef756f1c7496e5f;
  if (*param_1 <= uVar1) {
    lVar2 = 0x5eda44100212fa2c;
  }
  lVar3 = -0x405b680ffecd4131;
  do {
    while (lVar5 = lVar3, -0x2ef756f1c7496e60 < lVar5) {
      if (lVar5 == 0x5eda44100212fa2c) {
        iVar4 = 0;
        lVar3 = -0x34ce59f19df9112f;
      }
      else {
        lVar3 = lVar5;
        if (lVar5 == -0x2ef756f1c7496e5f) {
          iVar4 = *(int *)(*(long *)(param_1 + 2) + (ulong)uVar1 * 4);
          lVar3 = -0x34ce59f19df9112f;
        }
      }
    }
    lVar3 = lVar2;
  } while ((lVar5 == -0x405b680ffecd4131) || (lVar3 = lVar5, lVar5 != -0x34ce59f19df9112f));
  return iVar4;
}

