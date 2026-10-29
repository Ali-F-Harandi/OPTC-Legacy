// rea decompile_all
// name: FUN_00010204
// address: 0x10204
// body: available
// range: 0x10204-0x10467 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_00010204(uint *param_1,ulong param_2,undefined2 *param_3)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  uint local_60 [8];
  uint *local_40;
  int local_34;
  undefined2 *local_30;
  uint *local_28;
  int local_1c;
  uint *local_18;
  uint *local_10;
  uint *local_8;
  
  if (param_1 == (uint *)0x0) {
    uVar4 = 0;
  }
  else if (param_3 == (undefined2 *)0x0) {
    uVar4 = 0;
  }
  else if (param_1 == (uint *)0x0) {
    uVar4 = 0;
  }
  else if (param_3 == (undefined2 *)0x0) {
    uVar4 = 0;
  }
  else {
    local_30 = param_3;
    local_28 = param_1;
    cVar2 = FUN_00010468(*param_3);
    if (cVar2 == '\x01') {
      uVar3 = FUN_000104a0(*local_30);
      if (uVar3 == (ushort)local_30[1]) {
        local_60[0] = 0;
        local_60[1] = 0;
        local_60[2] = 0;
        local_60[3] = 0;
        local_60[4] = 0;
        local_60[5] = 0;
        local_60[6] = 0;
        local_60[7] = 0;
        local_8 = local_28;
        local_10 = local_60;
        local_18 = local_60 + 4;
        local_34 = (int)(param_2 >> 4);
        for (local_1c = 0; local_1c < local_34; local_1c = local_1c + 1) {
          *local_18 = *local_8;
          local_18[1] = local_8[1];
          local_18[2] = local_8[2];
          local_18[3] = local_8[3];
          FUN_000104f8(local_30 + 2,local_30[1],local_18,local_8);
          puVar1 = local_10;
          *local_8 = *local_8 ^ *local_10;
          local_8[1] = local_8[1] ^ local_10[1];
          local_8[2] = local_8[2] ^ local_10[2];
          local_8[3] = local_8[3] ^ local_10[3];
          local_40 = local_10;
          local_10 = local_18;
          local_18 = puVar1;
          local_8 = local_8 + 4;
        }
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}

