// rea decompile_all
// name: FUN_001b0420
// address: 0x1b0420
// body: available
// range: 0x1b0420-0x1b06f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1b06f0 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001b0420(char *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar3;
  undefined1 *local_160;
  long *plStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long local_70 [2];
  
  lVar1 = tpidr_el0;
  local_70[0] = *(long *)(lVar1 + 0x28);
  lVar3 = -0x3cc2b3d163fe4027;
  local_90 = in_x4;
  local_88 = in_x5;
  uStack_80 = in_x6;
  local_78 = in_x7;
  do {
    while( true ) {
      while (-0x1efbf45246475359 < lVar3) {
        if (lVar3 < 0x332dfd522f05c93c) {
          if (lVar3 == -0x1efbf45246475358) {
            iVar2 = FUN_00212730(0,1,&DAT_0021fa8c);
            lVar3 = -0x28b93f8217cb5d73;
            if (iVar2 != 0) {
              lVar3 = 0x5f3fddf8e2fc9ebc;
            }
          }
          else if (lVar3 == -0x55c949af59ae76f) {
            lVar3 = 0x332dfd522f05c93c;
          }
        }
        else {
          if (lVar3 == 0x332dfd522f05c93c) {
            DAT_0021fa8c = 0;
            puStack_150 = &local_90;
            plStack_158 = local_70;
            uStack_148 = 0xffffff80ffffffe0;
            local_160 = (undefined1 *)register0x00000008;
            iVar2 = vsnprintf(param_1,199,&DAT_0021e7f0,&local_160);
            if (*(long *)(lVar1 + 0x28) != local_70[0]) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail(iVar2);
            }
            return;
          }
          if (lVar3 == 0x5f3fddf8e2fc9ebc) goto LAB_001b0590;
        }
      }
      if (lVar3 != -0x4a68ccefe6d06158) break;
      DAT_0021e800 = DAT_0021e800 ^ 0xf0;
      DAT_0021e801 = DAT_0021e801 ^ 0xf0;
      DAT_0021e802 = DAT_0021e802 ^ 0xf0;
      DAT_0021e803 = DAT_0021e803 ^ 0xf0;
      DAT_0021e805 = DAT_0021e805 ^ 0xf0;
      DAT_0021e804 = DAT_0021e804 ^ 0xf0;
      DAT_0021e806 = DAT_0021e806 ^ 0xf0;
      _DAT_0021e7f0 = _DAT_0021e7f0 ^ 0xf0f0f0f0f0f0f0f0;
      uRam000000000021e7f8 = uRam000000000021e7f8 ^ 0xf0f0f0f0f0f0f0f0;
      DAT_0021fa8d = '\x01';
      lVar3 = 0x332dfd522f05c93c;
    }
    if (lVar3 == -0x3cc2b3d163fe4027) {
LAB_001b0590:
      lVar3 = -0x1efbf45246475358;
    }
    else if ((lVar3 == -0x28b93f8217cb5d73) && (lVar3 = -0x55c949af59ae76f, DAT_0021fa8d == '\0')) {
      lVar3 = -0x4a68ccefe6d06158;
    }
  } while( true );
}

