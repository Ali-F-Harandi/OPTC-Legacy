// rea decompile_all
// name: FUN_001de550
// address: 0x1de550
// body: available
// range: 0x1de550-0x1de687 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1de684 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001de550(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_40 = 0;
  FUN_0016db8c(param_1,param_2,param_4,&local_40);
  lVar1 = -0x25a3e9f6f44c50c;
  if (*param_1 != 0) {
    lVar1 = 0xfb13253120e52d5;
  }
  lVar3 = 0x3007aa9d32d99be8;
  do {
    while (lVar4 = lVar3, lVar4 < 0x3007aa9d32d99be8) {
      if (lVar4 == -0x25a3e9f6f44c50c) {
        *param_5 = *param_5 + local_40;
        lVar3 = 0x31b9d74c89a90fe3;
      }
      else {
        lVar3 = lVar4;
        if (lVar4 == 0xfb13253120e52d5) {
          lVar3 = 0x31b9d74c89a90fe3;
        }
      }
    }
    lVar3 = lVar1;
  } while ((lVar4 == 0x3007aa9d32d99be8) || (lVar3 = lVar4, lVar4 != 0x31b9d74c89a90fe3));
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

