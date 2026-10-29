// rea decompile_all
// name: FUN_001ace90
// address: 0x1ace90
// body: available
// range: 0x1ace90-0x1ad07b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001ace90(undefined4 *param_1,long param_2,undefined8 *param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined *unaff_x22;
  
  uVar2 = *(uint *)*param_3;
  lVar1 = 0x2ce2edddaf334d81;
  if (uVar2 != 0xffffffff) {
    lVar1 = -0x2ddd98d59c65e2d2;
  }
  *param_3 = (uint *)*param_3 + 1;
  lVar4 = 0x353e7cd16df664a2;
  while( true ) {
    while( true ) {
      while (-0xab3a208b03543c0 < lVar4) {
        if (lVar4 < 0x2ce2edddaf334d81) {
          if (lVar4 == -0xab3a208b03543bf) {
            *param_1 = 2;
            lVar4 = -0x3dc07bfa902cf42a;
          }
          else if (lVar4 == -0x9c4c91856260990) {
            lVar4 = -0x3dc07bfa902cf42a;
          }
        }
        else if (lVar4 == 0x2ce2edddaf334d81) {
          unaff_x22 = &DAT_001030a0;
          lVar4 = -0x55b9520f58750739;
        }
        else if (lVar4 == 0x353e7cd16df664a2) {
          lVar4 = lVar1;
        }
      }
      if (lVar4 != -0x55b9520f58750739) break;
      lVar3 = FUN_001e5154(unaff_x22);
      lVar4 = -0xab3a208b03543bf;
      if (lVar3 != 0) {
        lVar4 = -0x9c4c91856260990;
      }
      *(long *)(param_4 + 8) = lVar3;
    }
    if (lVar4 == -0x3dc07bfa902cf42a) break;
    if (lVar4 == -0x2ddd98d59c65e2d2) {
      unaff_x22 = (undefined *)
                  (*(long *)(param_2 + 8) +
                  (ulong)*(uint *)(*(long *)(param_2 + 8) + (ulong)*(uint *)(param_2 + 0x24) +
                                  (ulong)uVar2 * 4));
      lVar4 = -0x55b9520f58750739;
    }
  }
  return;
}

