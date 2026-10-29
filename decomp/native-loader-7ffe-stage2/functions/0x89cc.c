// rea decompile_all
// name: FUN_000089cc
// address: 0x89cc
// body: available
// range: 0x89cc-0x8ae3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_000089cc(long param_1,char *param_2)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong local_10;
  
  if (((param_2 != (char *)0x0) && (*param_2 != '\0')) &&
     (lVar3 = *(long *)(param_1 + 200), lVar3 != 0)) {
    uVar4 = *(ulong *)(param_1 + 0xd0);
    for (local_10 = 0; local_10 < uVar4; local_10 = local_10 + 1) {
      uVar1 = *(ushort *)(lVar3 + local_10 * 2);
      if (((uVar1 != 0) && (uVar1 != 1)) &&
         ((1 < uVar1 && (iVar2 = FUN_00008874(param_1,uVar1,param_2), iVar2 == 0)))) {
        return 1;
      }
    }
  }
  return 0;
}

