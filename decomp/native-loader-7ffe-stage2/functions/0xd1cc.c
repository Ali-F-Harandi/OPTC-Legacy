// rea decompile_all
// name: FUN_0000d1cc
// address: 0xd1cc
// body: available
// range: 0xd1cc-0xd303 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_0000d1cc(long param_1)

{
  int iVar1;
  long lVar2;
  undefined1 local_38 [2];
  undefined1 local_36;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_11;
  long local_10;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    local_28 = 0x2e;
    local_27 = 0;
    local_38[0] = 0x2e;
    local_36 = 0;
    iVar1 = FUN_0000c554(param_1,&local_28);
    if ((iVar1 != 0) && (iVar1 = FUN_0000c554(param_1,local_38), iVar1 != 0)) {
      local_10 = FUN_0000c448(param_1);
      if (local_10 == 0) {
        param_1 = 0;
      }
      else {
        local_11 = 0x2f;
        if (*(char *)(param_1 + local_10 + -1) == '/') {
          param_1 = 0;
        }
        else {
          lVar2 = FUN_0000c8c0(param_1,0x2f);
          if (lVar2 != 0) {
            param_1 = lVar2 + 1;
          }
        }
      }
    }
  }
  return param_1;
}

