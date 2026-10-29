// rea decompile_all
// name: FUN_0000b570
// address: 0xb570
// body: available
// range: 0xb570-0xb68b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_0000b570(long *param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong local_10;
  
  lVar3 = *param_1;
  uVar4 = param_1[1];
  if (lVar3 != 0) {
    lVar5 = FUN_0000c448(param_2);
    local_10 = 0;
    do {
      lVar6 = lVar3 + local_10;
      iVar2 = FUN_0000c4a4(lVar6,param_2,lVar5);
      bVar1 = false;
      if (iVar2 == 0) {
        bVar1 = *(char *)(lVar6 + lVar5) == '=';
      }
      if (bVar1) {
        return lVar6 + lVar5 + 1;
      }
      lVar6 = FUN_0000c448(lVar6);
      local_10 = local_10 + lVar6 + 1;
    } while (local_10 < uVar4);
  }
  return 0;
}

