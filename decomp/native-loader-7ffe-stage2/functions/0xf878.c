// rea decompile_all
// name: FUN_0000f878
// address: 0xf878
// body: available
// range: 0xf878-0xf9f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ushort FUN_0000f878(undefined8 param_1,long param_2)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  uint local_10;
  uint local_c;
  uint local_8;
  
  uVar3 = FUN_0000f788(param_1);
  puVar1 = (ushort *)(param_2 + (long)(int)(uVar3 & 0xff) * 3);
  if ((*puVar1 & 0x8000) == 0) {
    local_8 = (uint)(byte)puVar1[1];
    uVar2 = *puVar1;
    local_10 = 1 << (ulong)(local_8 & 0x1f);
    while( true ) {
      local_8 = local_8 + 1;
      local_c = uVar2 & 0x7fff;
      puVar1 = (ushort *)(param_2 + (long)(int)(local_c + ((local_10 & uVar3) != 0)) * 3);
      if ((*puVar1 & 0x8000) != 0) break;
      uVar2 = *puVar1;
      local_10 = local_10 << 1;
    }
    uVar2 = *puVar1;
  }
  else {
    local_8 = (uint)(byte)puVar1[1];
    uVar2 = *puVar1;
  }
  FUN_0000f7d4(param_1,local_8);
  return uVar2 & 0x7fff;
}

