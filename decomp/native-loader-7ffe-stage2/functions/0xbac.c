// rea decompile_all
// name: FUN_00000bac
// address: 0xbac
// body: available
// range: 0xbac-0xf0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_00000bac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined1 *in_stack_00000058;
  ulong in_stack_00000160;
  long lVar4;
  
  uStack0000000000000000 = param_8;
  uStack0000000000000008 = param_7;
  uStack0000000000000010 = param_6;
  uStack0000000000000018 = param_5;
  uStack0000000000000020 = param_4;
  uStack0000000000000028 = param_3;
  uStack0000000000000030 = param_2;
  uStack0000000000000038 = param_1;
  FUN_0000c214(&stack0x00000048,0,0x20);
  in_stack_00000048 = uStack0000000000000038;
  in_stack_00000050 = uStack0000000000000030;
  cVar1 = FUN_00007d84(uStack0000000000000030,0,&stack0x000000b0,0);
  cVar2 = '\0';
  if (cVar1 != '\0') {
    in_stack_00000160 = (ulong)DAT_000257e4;
    cVar2 = FUN_0000ac6c(&stack0x00000088);
  }
  cVar1 = '\0';
  if (cVar2 != '\0') {
    cVar1 = FUN_00002658(0,&stack0x00000068);
  }
  cVar2 = '\0';
  if (cVar1 != '\0') {
    cVar2 = FUN_000034dc(&stack0x000005c8,&stack0x000000b0,&DAT_000256e0,DAT_000257e0,
                         &stack0x00000088,&stack0x00000068);
  }
  FUN_0000ace8(&stack0x00000088);
  FUN_00002798(&stack0x00000068);
  if (cVar2 != '\0') {
    in_stack_00000058 = &stack0x000005c8;
  }
  lVar4 = 0;
  if ((cVar2 != '\0') && (lVar4 = FUN_00009f18(0x1800), lVar4 == 0)) {
    uVar3 = FUN_00001394();
    cVar2 = FUN_00001eb0(0,0,uVar3,2,0x109,1,1,0x1800);
  }
  cVar1 = '\0';
  if (cVar2 != '\0') {
    cVar1 = FUN_0000fee0(lVar4,0xe2,uStack0000000000000028,uStack0000000000000020,0);
  }
  cVar2 = '\0';
  if (cVar1 != '\0') {
    cVar2 = FUN_0000fee0(lVar4,0xd0,uStack0000000000000008,uStack0000000000000000,0);
  }
  if (cVar2 != '\0') {
    DAT_00025900 = uStack0000000000000018;
    DAT_00025908 = uStack0000000000000010;
    DAT_000258f8 = &stack0x00000048;
    DAT_00025910 = lVar4;
    FUN_00000f0c();
  }
  if (cVar2 != '\x01') {
    FUN_0001013c(0x5d,0,0,0,0,0,0);
    _Reset = 0;
  }
  return cVar2;
}

