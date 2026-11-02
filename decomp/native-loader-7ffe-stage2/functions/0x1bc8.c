// rea decompile_all
// name: FUN_00001bc8
// address: 0x1bc8
// body: available
// range: 0x1bc8-0x1d3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_00001bc8(long param_1,int param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 local_10;
  undefined4 local_4;
  
  iVar2 = DAT_0002591c;
  local_4 = 0xf02f7685;
  FUN_0000c338(param_3,param_1 + (long)param_2 * 0x5c,0x5c);
  for (local_10 = 0; local_10 < 0x5c; local_10 = local_10 + 4) {
    uVar1 = *(uint *)(param_3 + local_10);
    uVar3 = FUN_00001d40(uVar1 ^ local_4 * local_4 >> 3);
    *(uint *)(param_3 + local_10) =
         ((uVar3 ^ (iVar2 + -0x6909f48f) * iVar2 << (ulong)(param_2 + 1U & 3)) +
         ((int)local_10 + 1) * 0x79934cf6 + iVar2) -
         ((uint)((iVar2 + -0x626498c3) * iVar2) >> (ulong)((int)local_10 + 3U & 5));
    local_4 = uVar1;
  }
  return 1;
}

