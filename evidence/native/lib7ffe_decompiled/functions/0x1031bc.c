// rea decompile_all
// name: FUN_001031bc
// address: 0x1031bc
// body: available
// range: 0x1031bc-0x103437 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_001031bc(int param_1,undefined1 *param_2,long *param_3,long param_4,undefined1 *param_5)

{
  undefined4 uVar1;
  long local_1050;
  undefined1 *local_1040;
  undefined1 auStack_1028 [4096];
  long lStack_28;
  undefined8 local_20;
  long lStack_18;
  long lStack_10;
  undefined1 uStack_2;
  char local_1;
  
  local_1 = '\x01';
  local_20 = 0;
  local_20 = FUN_00105e3c(0x3e,(long)param_1,0,0,0,0,0);
  local_1050 = param_4;
  local_1040 = param_2;
  if (param_2 == (undefined1 *)0x0) {
    local_1040 = auStack_1028;
    local_1050 = 0x1000;
  }
  uStack_2 = 0;
  lStack_10 = 0;
  lStack_18 = 0;
  do {
    do {
      if (local_1 == '\0') goto LAB_001033c0;
      lStack_28 = FUN_00105e3c(0x3f,(long)param_1,local_1040 + lStack_18,local_1050 - lStack_18,0,0,
                               0);
      if (lStack_28 < 0) {
        uVar1 = FUN_00104054();
        local_1 = FUN_00105f34(0,0,uVar1,2,0x114,1,1,0,0,0);
        goto LAB_001033c0;
      }
      if (lStack_28 == 0) goto LAB_001033c0;
    } while (lStack_28 < 1);
    lStack_18 = lStack_18 + lStack_28;
    lStack_10 = lStack_10 + lStack_28;
  } while (local_1050 != lStack_18);
  uStack_2 = 1;
LAB_001033c0:
  if (param_3 != (long *)0x0) {
    *param_3 = lStack_10;
  }
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uStack_2;
  }
  return local_1;
}

