// rea decompile_all
// name: FUN_0000801c
// address: 0x801c
// body: available
// range: 0x801c-0x8277 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_0000801c(long param_1,long param_2,long *param_3,long param_4)

{
  char cVar1;
  long lVar2;
  char local_1;
  
  if (param_1 == 0) {
    local_1 = '\0';
  }
  else {
    cVar1 = FUN_000092b8(param_1,param_2);
    if (cVar1 == '\x01') {
      cVar1 = FUN_00009388(param_1,param_2);
      if (cVar1 == '\x01') {
        FUN_0000c214(param_3,0,0x518);
        *(undefined1 *)(param_3 + 0x22) = 1;
        *param_3 = param_1;
        param_3[1] = param_2;
        param_3[5] = param_1;
        *(uint *)((long)param_3 + 0x114) = (uint)*(ushort *)(param_3[5] + 0x12);
        param_3[4] = param_3[5];
        local_1 = FUN_00006b0c(param_3);
        if (local_1 != '\0') {
          local_1 = FUN_00006c08(param_3);
        }
        if (local_1 != '\0') {
          local_1 = FUN_00006d7c(param_3);
        }
        if (local_1 != '\0') {
          local_1 = FUN_00006fac(param_3);
        }
        if (local_1 != '\0') {
          local_1 = FUN_00007068(param_3);
        }
        if (local_1 != '\0') {
          local_1 = FUN_00007144(param_3);
        }
        if (local_1 != '\0') {
          local_1 = FUN_000071f4(param_3);
        }
        if (local_1 != '\0') {
          local_1 = FUN_00007954(param_3);
        }
        if (local_1 != '\0') {
          lVar2 = FUN_00007bb0(param_3);
          param_3[3] = lVar2;
          if (param_4 != 0) {
            FUN_0000ca14(param_3 + 0x23,param_4);
          }
        }
      }
      else {
        local_1 = '\0';
      }
    }
    else {
      local_1 = '\0';
    }
  }
  return local_1;
}

