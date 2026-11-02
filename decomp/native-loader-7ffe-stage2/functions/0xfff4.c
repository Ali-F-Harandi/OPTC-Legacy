// rea decompile_all
// name: FUN_0000fff4
// address: 0xfff4
// body: available
// range: 0xfff4-0x100ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_0000fff4(undefined4 param_1,undefined8 param_2,char param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_0000fe24(param_1,param_2);
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 8);
    if (param_3 == '\0') {
      if (((*(uint *)(lVar1 + 4) & 0x100) == 0) && ((*(uint *)(lVar1 + 4) & 1) == 0)) {
        *(uint *)(lVar1 + 4) = *(uint *)(lVar1 + 4) | 1;
        FUN_0000c214(lVar2,0,*(undefined4 *)(lVar1 + 0x10));
        *(uint *)(lVar1 + 4) = *(uint *)(lVar1 + 4) | 2;
      }
    }
    else {
      if (((*(uint *)(lVar1 + 4) & 0x100) == 0) && (lVar2 != 0)) {
        FUN_00009f8c(lVar2,*(undefined4 *)(lVar1 + 0x10));
      }
      FUN_0000c214(lVar1,0,0x18);
    }
  }
  return 1;
}

