// rea decompile_all
// name: FUN_000035f8
// address: 0x35f8
// body: available
// range: 0x35f8-0x375b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_000035f8(undefined4 *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined4 local_4;
  
  local_4 = 0x1000;
  lVar4 = FUN_0001013c(0xde,0,0x2000,1,0x22,0xffffffffffffffff,0);
  if (lVar4 != 0) {
    lVar1 = lVar4 + 0x1000;
    iVar2 = FUN_0001013c(0xe2,lVar1,(lVar4 + 0x2000) - lVar1,3,0,0,0);
    iVar3 = FUN_0001013c(0xe2,lVar4,lVar1 - lVar4,3,0,0,0);
    if ((iVar2 != 0) && (iVar3 == 0)) {
      local_4 = 0x4000;
    }
  }
  if (lVar4 != 0) {
    FUN_0001013c(0xd7,lVar4,0x2000,0,0,0,0);
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = local_4;
  }
  return 1;
}

