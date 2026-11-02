// rea decompile_all
// name: FUN_00103788
// address: 0x103788
// body: available
// range: 0x103788-0x1038cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00103788(undefined8 param_1,undefined4 param_2)

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
  uVar3 = FUN_00105b54(&stack0x00000418,8);
  FUN_00104ea0(&stack0x00000010,uVar3);
  lVar4 = FUN_001047cc(&stack0x00000010);
  puVar1 = &stack0x00000010 + lVar4;
  FUN_00105c18(uVar3);
  FUN_001050fc(uStack0000000000000004,puVar1,0);
  lVar4 = FUN_001047cc(puVar1);
  uVar3 = FUN_00105b54(&stack0x00000410,8);
  FUN_00104ea0(puVar1 + lVar4,uVar3);
  FUN_001047cc(puVar1 + lVar4);
  FUN_00105c18(uVar3);
  uVar2 = FUN_00103748(uStack0000000000000008,&stack0x00000010);
  return uVar2;
}

