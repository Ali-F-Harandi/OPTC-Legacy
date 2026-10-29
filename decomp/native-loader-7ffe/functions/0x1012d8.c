// rea decompile_all
// name: FUN_001012d8
// address: 0x1012d8
// body: available
// range: 0x1012d8-0x10132b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001012d8(ulong param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_10;
  undefined8 local_8;
  
  uVar1 = ctr_el0;
  lVar2 = (long)(4 << (ulong)((uint)((ulong)uVar1 >> 0x10) & 0xf));
  for (local_8 = -lVar2 & param_1; local_8 < param_2; local_8 = local_8 + lVar2) {
    DC_CVAU(local_8);
  }
  DataSynchronizationBarrier(2,3,0);
  lVar2 = (long)(4 << (ulong)((uint)uVar1 & 0xf));
  for (uStack_10 = -lVar2 & param_1; uStack_10 < param_2; uStack_10 = uStack_10 + lVar2) {
    IC_IVAU(uStack_10);
  }
  DataSynchronizationBarrier(2,3,0);
  InstructionSynchronizationBarrier();
  return;
}

