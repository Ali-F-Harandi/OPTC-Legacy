// rea decompile_all
// name: FUN_00005a44
// address: 0x5a44
// body: available
// range: 0x5a44-0x5c33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_00005a44(long *param_1)

{
  char local_81;
  long local_80;
  long local_78;
  uint local_6c;
  uint *local_68;
  long *local_60;
  ulong local_58;
  ulong local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  int local_28;
  int local_24;
  long local_20;
  long local_18;
  long local_10;
  int local_4;
  
  local_10 = param_1[2];
  local_18 = param_1[1];
  local_20 = param_1[3];
  local_28 = (int)param_1[5];
  local_30 = *param_1;
  local_38 = *(long *)(local_10 + 0xa8);
  local_40 = *(long *)(local_10 + 0xb8);
  local_24 = *(int *)((long)param_1 + 0x24);
  for (local_4 = local_24; local_4 < local_28; local_4 = local_4 + 1) {
    local_48 = local_20 + (long)local_4 * 0x18;
    local_50 = *(ulong *)(local_48 + 8);
    local_58 = local_50 >> 0x20;
    if (local_58 != 0) {
      local_58 = FUN_000058bc(local_48,local_4,*(ulong *)(local_10 + 0xb0) & 0xffffffff);
      *(uint *)(local_18 + local_58 * 4) = *(uint *)(local_18 + local_58 * 4) | 1;
      local_60 = (long *)(local_30 + local_58 * 8);
      if (*local_60 == 0) {
        local_68 = (uint *)(local_38 + local_58 * 0x18);
        local_6c = *local_68;
        local_78 = local_40 + (ulong)local_6c;
        local_81 = '\0';
        local_80 = FUN_0000444c(local_78,&local_81);
        if (local_81 != '\0') {
          *local_60 = local_80;
          *(uint *)(local_18 + local_58 * 4) = *(uint *)(local_18 + local_58 * 4) | 2;
        }
      }
    }
  }
  return 1;
}

