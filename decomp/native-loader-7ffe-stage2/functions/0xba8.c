// rea decompile_all
// name: FUN_00000ba8
// address: 0xba8
// body: available
// range: 0xba8-0xbab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_00000ba8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined8 auStack_b08 [4];
  undefined1 auStack_ae8 [32];
  undefined1 auStack_ac8 [40];
  undefined1 auStack_aa0 [1304];
  undefined1 auStack_588 [1328];
  ulong uStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  undefined1 *puStack_20;
  undefined8 *puStack_18;
  long lStack_10;
  char cStack_1;
  
  cStack_1 = '\x01';
  puStack_18 = auStack_b08;
  FUN_0000c214(puStack_18,0,0x20);
  if (cStack_1 != '\0') {
    *puStack_18 = param_1;
    puStack_18[1] = param_2;
  }
  puStack_20 = auStack_588;
  if (cStack_1 != '\0') {
    puStack_28 = auStack_aa0;
    if (cStack_1 != '\0') {
      uStack_38 = 0;
      puStack_40 = puStack_28;
      uStack_30 = param_2;
      cStack_1 = FUN_00007d84(param_2,0,puStack_28,0);
    }
    if (cStack_1 != '\0') {
      *(ulong *)(puStack_28 + 0xb0) = (ulong)DAT_000257e4;
    }
    puStack_48 = auStack_ac8;
    if (cStack_1 != '\0') {
      cStack_1 = FUN_0000ac6c(puStack_48);
    }
    puStack_50 = auStack_ae8;
    if (cStack_1 != '\0') {
      cStack_1 = FUN_00002658(0,puStack_50);
    }
    if (cStack_1 != '\0') {
      cStack_1 = FUN_000034dc(puStack_20,puStack_28,&DAT_000256e0,DAT_000257e0,puStack_48,puStack_50
                             );
    }
    FUN_0000ace8(puStack_48);
    FUN_00002798(puStack_50);
  }
  if (cStack_1 != '\0') {
    puStack_18[2] = puStack_20;
  }
  lStack_10 = 0;
  if (cStack_1 != '\0') {
    uStack_58 = 0x1800;
    lStack_10 = FUN_00009f18(0x1800);
    if (lStack_10 == 0) {
      uVar1 = FUN_00001394();
      cStack_1 = FUN_00001eb0(0,0,uVar1,2,0x109,1,1,uStack_58 & 0xffffffff,0,0);
    }
  }
  if (cStack_1 != '\0') {
    cStack_1 = FUN_0000fee0(lStack_10,0xe2,param_3,param_4,0);
  }
  if (cStack_1 != '\0') {
    cStack_1 = FUN_0000fee0(lStack_10,0xd0,param_7,param_8,0);
  }
  if (cStack_1 != '\0') {
    DAT_000258f8 = puStack_18;
    DAT_00025910 = lStack_10;
    DAT_00025900 = param_5;
    DAT_00025908 = param_6;
    FUN_00000f0c();
  }
  if (cStack_1 != '\x01') {
    FUN_0001013c(0x5d,0,0,0,0,0,0);
  }
  if (cStack_1 != '\x01') {
    _Reset = 0;
  }
  return cStack_1;
}

