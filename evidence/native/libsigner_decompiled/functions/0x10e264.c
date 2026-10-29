// rea decompile_all
// name: FUN_0010e264
// address: 0x10e264
// body: available
// range: 0x10e264-0x10e4a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10e4a0 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0010e264(double param_1,double *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  long local_88;
  long local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  lVar1 = 0x635f31928f91aac5;
  if (*(char *)(param_2 + 1) != '\0') {
    lVar1 = 0x4dc5ede807dc3016;
  }
  lVar3 = 0x5aba0b6a880053f8;
  dVar5 = param_1;
  do {
    while( true ) {
      while( true ) {
        while (lVar4 = lVar3, lVar3 = lVar4, 0x236d10b4e1dc5a1d < lVar4) {
          if (lVar4 < 0x5aba0b6a880053f8) {
            if (lVar4 == 0x236d10b4e1dc5a1e) {
              *param_2 = dVar5;
              lVar3 = -0x2f698491beb5022;
            }
            else if (lVar4 == 0x4dc5ede807dc3016) {
              lVar3 = -0x2f698491beb5022;
            }
          }
          else {
            lVar3 = lVar1;
            if ((lVar4 != 0x5aba0b6a880053f8) && (lVar3 = lVar4, lVar4 == 0x635f31928f91aac5)) {
              local_88 = 0;
              local_80 = 0;
              FUN_001f3abc(0,&local_88);
              dVar5 = (double)local_80 / 1000000.0 + (double)local_88 * 1000.0;
              lVar3 = -0x13f6cef773005e97;
              if (dVar5 - *param_2 <= param_1) {
                lVar3 = -0x51d504ef14920bb2;
              }
            }
          }
        }
        if (lVar4 != -0x51d504ef14920bb2) break;
        lVar3 = 0x236d10b4e1dc5a1e;
      }
      if (lVar4 != -0x13f6cef773005e97) break;
      *(undefined1 *)(param_2 + 1) = 1;
      lVar3 = 0x236d10b4e1dc5a1e;
    }
  } while (lVar4 != -0x2f698491beb5022);
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

