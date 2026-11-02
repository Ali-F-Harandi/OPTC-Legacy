// rea decompile_all
// name: FUN_0000f108
// address: 0xf108
// body: available
// range: 0xf108-0xf2ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_0000f108(uint param_1,long param_2,ulong param_3)

{
  uint *puVar1;
  undefined4 local_34;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 0x7b48238;
  local_8 = 0xe34eac63;
  local_34 = param_1;
  for (local_c = 0; (int)local_c < (int)(param_3 >> 2); local_c = local_c + 1) {
    puVar1 = (uint *)(param_2 + (long)(int)local_c * 4);
    local_4 = (local_4 + 0xe9fa57e4) * local_4 + local_34 + -0x71b6a98d << (ulong)(local_c & 7);
    local_8 = (local_8 + 0x4f8b1bca) * local_8 + local_34 + 0x72f6fcbe >>
              (ulong)(local_c * local_c & 0xf);
    local_34 = local_4 ^ local_8;
    *puVar1 = *puVar1 + (local_c & 0xd) * -0x4bc46451;
    *puVar1 = *puVar1 ^ (local_c & 3) * -0x50a80805;
    *puVar1 = *puVar1 - local_34;
    *puVar1 = *puVar1 ^ local_34;
  }
  return 1;
}

