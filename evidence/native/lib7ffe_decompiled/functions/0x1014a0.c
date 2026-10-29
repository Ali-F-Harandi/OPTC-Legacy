// rea decompile_all
// name: FUN_001014a0
// address: 0x1014a0
// body: available
// range: 0x1014a0-0x1014c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_001014a0(int param_1)

{
  undefined4 *in_stack_00000018;
  int in_stack_00000020;
  long in_stack_00000048;
  int in_stack_00000050;
  undefined8 in_stack_00000058;
  
  if ((param_1 != 0) && (in_stack_00000020 == 0)) {
    in_stack_00000058._4_4_ = 0x4000;
  }
  if (in_stack_00000048 != 0) {
    FUN_00105e3c(0xd7,in_stack_00000048,(long)in_stack_00000050,0,0,0,0);
  }
  if ((in_stack_00000058._3_1_ != '\0') && (in_stack_00000018 != (undefined4 *)0x0)) {
    *in_stack_00000018 = in_stack_00000058._4_4_;
  }
  return in_stack_00000058._3_1_;
}

