// rea decompile_all
// name: FUN_001015b8
// address: 0x1015b8
// body: available
// range: 0x1015b8-0x1015ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_001015b8(int param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined8 in_stack_00000018;
  uint *in_stack_00000020;
  int in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  
  while( true ) {
    *in_stack_00000020 = param_2 ^ param_3 * param_1;
    iVar1 = in_stack_00000038._4_4_ + 1;
    if (in_stack_00000028 <= iVar1) break;
    in_stack_00000020 = (uint *)(in_stack_00000030 + (long)iVar1 * 4);
    *in_stack_00000020 =
         *in_stack_00000020 + (in_stack_00000038._4_4_ + 4) * in_stack_00000018._4_4_;
    param_2 = *in_stack_00000020;
    param_3 = in_stack_00000038._4_4_ + 2;
    param_1 = -0x40dfe9a3;
    in_stack_00000038._4_4_ = iVar1;
  }
  return 1;
}

