// rea decompile_all
// name: FUN_0000ab24
// address: 0xab24
// body: available
// range: 0xab24-0xac6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_0000ab24(undefined8 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uStack0000000000000004;
  undefined8 uStack0000000000000008;
  undefined1 uStack0000000000000010;
  
  uStack0000000000000010 = 0;
  uStack0000000000000004 = param_2;
  uStack0000000000000008 = param_1;
  uVar3 = FUN_0000dafc(&stack0x00000418,8);
  FUN_0000cb1c(&stack0x00000010,uVar3);
  lVar4 = FUN_0000c448(&stack0x00000010);
  puVar1 = &stack0x00000010 + lVar4;
  FUN_0000dbc0(uVar3);
  FUN_0000cd78(uStack0000000000000004,puVar1,0);
  lVar4 = FUN_0000c448(puVar1);
  uVar3 = FUN_0000dafc(&stack0x00000410,8);
  FUN_0000cb1c(puVar1 + lVar4,uVar3);
  FUN_0000c448(puVar1 + lVar4);
  FUN_0000dbc0(uVar3);
  uVar2 = FUN_0000aae4(uStack0000000000000008,&stack0x00000010);
  return uVar2;
}

