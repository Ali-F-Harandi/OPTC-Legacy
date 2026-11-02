// rea decompile_all
// name: FUN_00211018
// address: 0x211018
// body: available
// range: 0x211018-0x2111bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00211018(undefined4 *param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined4 *unaff_x27;
  undefined4 local_74;
  
  iVar2 = *param_2;
  lVar1 = -0x45704382c9dcec73;
  if (iVar2 != 0) {
    lVar1 = 0x418b7d3c908df894;
  }
  puVar3 = param_1;
  lVar4 = 0x7d8bf94548220fb8;
  while( true ) {
    while (lVar4 < 0x36f07785a64d7584) {
      if (lVar4 == -0x71c5c29ef27b8351) {
        *param_1 = 2;
        lVar4 = 0x36f07785a64d7584;
      }
      else if (lVar4 == -0x69f7a720f4f21bbf) {
        *(undefined4 **)(puVar3 + 2) = unaff_x27;
        *(undefined4 **)(param_2 + 2) = puVar3;
        *puVar3 = local_74;
        *param_2 = iVar2 + 1;
        lVar4 = 0x36f07785a64d7584;
      }
      else if (lVar4 == -0x45704382c9dcec73) {
        *param_1 = 4;
        lVar4 = 0x36f07785a64d7584;
      }
    }
    if (lVar4 == 0x36f07785a64d7584) break;
    if (lVar4 == 0x418b7d3c908df894) {
      unaff_x27 = *(undefined4 **)(param_2 + 2);
      local_74 = *unaff_x27;
      puVar3 = calloc(1,0x10);
      lVar4 = -0x71c5c29ef27b8351;
      if (puVar3 != (undefined4 *)0x0) {
        lVar4 = -0x69f7a720f4f21bbf;
      }
    }
    else if (lVar4 == 0x7d8bf94548220fb8) {
      lVar4 = lVar1;
    }
  }
  return;
}

