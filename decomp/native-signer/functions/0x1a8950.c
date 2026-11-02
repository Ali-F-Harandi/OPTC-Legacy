// rea decompile_all
// name: FUN_001a8950
// address: 0x1a8950
// body: available
// range: 0x1a8950-0x1a8ab7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1a8ab4 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001a8950(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined4 local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_6c = 0;
  FUN_00116d24(param_3);
  puVar3 = (undefined1 *)0x887e73b2c28c6a1;
  do {
    while( true ) {
      while ((long)puVar3 < 0x125dd2cc844aecb4) {
        if (puVar3 == &DAT_f615808441b1dafc) {
          puVar3 = (undefined1 *)0x696b554ab6b2c8c5;
        }
        else if ((puVar3 == (undefined1 *)0x887e73b2c28c6a1) &&
                (uVar2 = FUN_00111024(param_1,&local_6c,param_2,param_3),
                puVar3 = &DAT_f615808441b1dafc, (uVar2 & 1) == 0)) {
          puVar3 = (undefined1 *)0x125dd2cc844aecb4;
        }
      }
      if (puVar3 != (undefined1 *)0x125dd2cc844aecb4) break;
      FUN_00116c90(param_3);
      local_6c = 0;
      puVar3 = (undefined1 *)0x696b554ab6b2c8c5;
    }
  } while (puVar3 != (undefined1 *)0x696b554ab6b2c8c5);
  FUN_0016db64(&local_6c,param_1,param_3);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

