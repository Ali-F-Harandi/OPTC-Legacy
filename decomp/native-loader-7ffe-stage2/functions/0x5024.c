// rea decompile_all
// name: FUN_00005024
// address: 0x5024
// body: available
// range: 0x5024-0x51e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_00005024(long *param_1)

{
  long local_78;
  ulong local_70;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulong local_48;
  ulong local_40;
  char local_35;
  undefined4 local_34;
  long local_30;
  long local_28;
  int local_20;
  int local_1c;
  long local_18;
  long *local_10;
  int local_8;
  char local_1;
  
  local_1 = '\x01';
  local_18 = param_1[4];
  local_1c = *(int *)((long)param_1 + 0x14);
  local_20 = (int)param_1[3];
  local_28 = *param_1;
  local_30 = param_1[1];
  local_34 = *(undefined4 *)((long)param_1 + 0x1c);
  local_35 = FUN_000058a0();
  local_8 = local_1c;
  while( true ) {
    if (local_20 <= local_8) {
      return local_1;
    }
    local_10 = (long *)(local_30 + (long)local_8 * 0x18);
    if ((local_35 != '\0') && (local_40 = (ulong)local_10[1] >> 0x20, local_40 != 0)) {
      local_40 = FUN_00004e9c(local_10,local_8,local_34);
      FUN_0000c338(&local_78,local_10,0x18);
      local_10 = &local_78;
      local_48 = local_70 & 0xffffffff;
      local_70 = local_40 << 0x20 | local_48;
    }
    local_50 = FUN_000062f8(0);
    local_58 = FUN_00005404(local_28,local_10,local_50);
    if (local_35 == '\0') {
      local_60 = (undefined8 *)(local_28 + *local_10);
      *local_60 = local_58;
    }
    else {
      local_1 = FUN_00000a64(local_10,local_18,local_28,local_58);
    }
    if (local_1 != '\x01') break;
    local_8 = local_8 + 1;
  }
  return local_1;
}

