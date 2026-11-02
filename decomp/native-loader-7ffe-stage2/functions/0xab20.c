// rea decompile_all
// name: FUN_0000ab20
// address: 0xab20
// body: available
// range: 0xab20-0xab23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_0000ab20(undefined8 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 auStack_430 [1024];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined8 uStack_18;
  char cStack_9;
  undefined1 *puStack_8;
  
  cStack_9 = '\x01';
  auStack_430[0] = 0;
  puStack_8 = auStack_430;
  uStack_28 = 0x6c5c7486;
  uStack_24 = 0x7ee4;
  uStack_18 = FUN_0000dafc(&uStack_28,8);
  FUN_0000cb1c(puStack_8,uStack_18);
  lVar2 = FUN_0000c448(puStack_8);
  puStack_8 = puStack_8 + lVar2;
  FUN_0000dbc0(uStack_18);
  if (cStack_9 != '\0') {
    FUN_0000cd78(param_2,puStack_8,0);
    lVar2 = FUN_0000c448(puStack_8);
    puStack_8 = puStack_8 + lVar2;
  }
  if (cStack_9 != '\0') {
    uStack_30 = 0x64e48c86;
    uStack_2c = 100;
    uStack_20 = FUN_0000dafc(&uStack_30,8);
    FUN_0000cb1c(puStack_8,uStack_20);
    lVar2 = FUN_0000c448(puStack_8);
    puStack_8 = puStack_8 + lVar2;
    FUN_0000dbc0(uStack_20);
  }
  uVar1 = FUN_0000aae4(param_1,auStack_430);
  return uVar1;
}

