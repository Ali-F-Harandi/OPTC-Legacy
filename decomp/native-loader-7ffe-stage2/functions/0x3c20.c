// rea decompile_all
// name: FUN_00003c20
// address: 0x3c20
// body: available
// range: 0x3c20-0x3cff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00003c20(ulong param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_10;
  undefined8 local_8;
  
  uVar1 = ctr_el0;
  lVar2 = (long)(4 << (ulong)((uint)((ulong)uVar1 >> 0x10) & 0xf));
  for (local_8 = -lVar2 & param_1; local_8 < param_2; local_8 = local_8 + lVar2) {
    DC_CVAU(local_8);
  }
  DataSynchronizationBarrier(2,3,0);
  lVar2 = (long)(4 << (ulong)((uint)uVar1 & 0xf));
  for (local_10 = -lVar2 & param_1; local_10 < param_2; local_10 = local_10 + lVar2) {
    IC_IVAU(local_10);
  }
  DataSynchronizationBarrier(2,3,0);
  InstructionSynchronizationBarrier();
  return;
}

