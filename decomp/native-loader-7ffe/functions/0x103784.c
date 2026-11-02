// rea decompile_all
// name: FUN_00103784
// address: 0x103784
// body: available
// range: 0x103784-0x103787 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00103784(undefined8 param_1,undefined4 param_2)

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
  uStack_18 = FUN_00105b54(&uStack_28,8);
  FUN_00104ea0(puStack_8,uStack_18);
  lVar2 = FUN_001047cc(puStack_8);
  puStack_8 = puStack_8 + lVar2;
  FUN_00105c18(uStack_18);
  if (cStack_9 != '\0') {
    FUN_001050fc(param_2,puStack_8,0);
    lVar2 = FUN_001047cc(puStack_8);
    puStack_8 = puStack_8 + lVar2;
  }
  if (cStack_9 != '\0') {
    uStack_30 = 0x64e48c86;
    uStack_2c = 100;
    uStack_20 = FUN_00105b54(&uStack_30,8);
    FUN_00104ea0(puStack_8,uStack_20);
    lVar2 = FUN_001047cc(puStack_8);
    puStack_8 = puStack_8 + lVar2;
    FUN_00105c18(uStack_20);
  }
  uVar1 = FUN_00103748(param_1,auStack_430);
  return uVar1;
}

