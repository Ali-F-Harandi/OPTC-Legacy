// rea decompile_all
// name: FUN_0010edf4
// address: 0x10edf4
// body: available
// range: 0x10edf4-0x10ef73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10ef70 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0010edf4(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined1 auStack_f8 [124];
  undefined1 auStack_7c [20];
  ulong local_68;
  
  lVar2 = tpidr_el0;
  uVar5 = *(ulong *)(lVar2 + 0x28);
  puVar7 = (undefined4 *)*param_2;
  lVar1 = -0x3d195e45a87c496a;
  if (puVar7 != (undefined4 *)0x0) {
    lVar1 = 0x616167e75f9c95a2;
  }
  lVar3 = 0x6b90417ce1ccb7ee;
  local_68 = uVar5;
  do {
    while( true ) {
      while (lVar6 = lVar3, 0x616167e75f9c95a1 < lVar6) {
        lVar3 = lVar1;
        if ((lVar6 != 0x6b90417ce1ccb7ee) && (lVar3 = lVar6, lVar6 == 0x616167e75f9c95a2)) {
          FUN_001e38f8(auStack_f8,0,0x78);
          FUN_001f4848(auStack_f8);
          FUN_001f4874(auStack_f8,*(undefined8 *)(puVar7 + 2),*puVar7);
          FUN_001f4c0c(auStack_f8,auStack_7c);
          iVar4 = FUN_001e3668(param_1,auStack_7c,0x14);
          uVar5 = (ulong)(iVar4 == 0);
          lVar3 = 0x14437797ebdb3d1c;
        }
      }
      if (lVar6 != -0x3d195e45a87c496a) break;
      uVar5 = 0;
      lVar3 = 0x14437797ebdb3d1c;
    }
    lVar3 = lVar6;
  } while (lVar6 != 0x14437797ebdb3d1c);
  if (*(ulong *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (uint)uVar5 & 1;
}

