// rea decompile_all
// name: FUN_00119890
// address: 0x119890
// body: available
// range: 0x119890-0x119aa3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x119aa0 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00119890(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong local_80;
  int local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_6c = 0;
  lVar3 = 0x157086f9ee3133f8;
LAB_00119984:
  while (0xc1c0014a1a704da < lVar3) {
    if (lVar3 < 0x157086f9ee3133f8) {
      if (lVar3 == 0xc1c0014a1a704db) {
        lVar3 = 0xf43df37eaa34fc3;
      }
      else if ((lVar3 == 0xf43df37eaa34fc3) && (lVar3 = -0x60cd3c82222442fc, local_6c != 0)) {
        lVar3 = 0x7442e424f0576cd;
      }
    }
    else if (lVar3 == 0x4d931f56eb957c5a) {
      FUN_002083ac(param_1 + 0x20,0x2f);
      *(ulong *)(param_1 + 0x238) = *(ulong *)(param_1 + 0x238) | 1;
      lVar3 = 0xf43df37eaa34fc3;
    }
    else if ((lVar3 == 0x157086f9ee3133f8) &&
            (uVar2 = FUN_001b6390(&local_6c,&PTR_s__system_lib64_libart_so_0021e8b0),
            lVar3 = 0x4d931f56eb957c5a, (uVar2 & 1) == 0)) {
      lVar3 = 0xc1c0014a1a704db;
    }
  }
  if (lVar3 != -0x60cd3c82222442fc) goto code_r0x001199bc;
  local_80 = *(ulong *)(param_1 + 0x238);
  goto LAB_00119a40;
code_r0x001199bc:
  if (lVar3 == -0x4896bab554a0dae9) {
    *(ulong *)(param_1 + 0x238) = local_80 | 0x800800000000000;
    if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  if (lVar3 == 0x7442e424f0576cd) {
    FUN_002083ac(param_1 + 0x20,0x3b);
    local_80 = *(ulong *)(param_1 + 0x238) | 1;
LAB_00119a40:
    lVar3 = -0x4896bab554a0dae9;
  }
  goto LAB_00119984;
}

