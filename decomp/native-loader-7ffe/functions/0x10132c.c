// rea decompile_all
// name: FUN_0010132c
// address: 0x10132c
// body: available
// range: 0x10132c-0x1013b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0010132c(void)

{
  long lVar1;
  ulong in_stack_00000000;
  ulong in_stack_00000008;
  long in_stack_00000020;
  uint in_stack_00000028;
  ulong uStack0000000000000030;
  ulong in_stack_00000038;
  
  while (in_stack_00000038 = in_stack_00000038 + in_stack_00000020,
        in_stack_00000038 < in_stack_00000000) {
    DC_CVAU(in_stack_00000038);
  }
  DataSynchronizationBarrier(2,3,0);
  lVar1 = (long)(4 << (ulong)(in_stack_00000028 & 0xf));
  for (uStack0000000000000030 = -lVar1 & in_stack_00000008;
      uStack0000000000000030 < in_stack_00000000;
      uStack0000000000000030 = uStack0000000000000030 + lVar1) {
    IC_IVAU(uStack0000000000000030);
  }
  DataSynchronizationBarrier(2,3,0);
  InstructionSynchronizationBarrier();
  return;
}

