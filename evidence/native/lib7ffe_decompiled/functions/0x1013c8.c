// rea decompile_all
// name: FUN_001013c8
// address: 0x1013c8
// body: available
// range: 0x1013c8-0x1013d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_001013c8(char param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined4 *in_stack_00000018;
  int iStack0000000000000050;
  undefined4 uStack0000000000000054;
  char cStack000000000000005b;
  undefined4 uStack000000000000005c;
  
  uStack000000000000005c = 0x1000;
  uStack0000000000000054 = 1;
  iStack0000000000000050 = 0x2000;
  cStack000000000000005b = param_1;
  lVar4 = FUN_00105e3c(0xde,0,0x2000,1,0x22,0xffffffffffffffff,0);
  if (lVar4 != 0) {
    lVar1 = lVar4 + 0x1000;
    iVar2 = FUN_00105e3c(0xe2,lVar1,(lVar4 + 0x2000) - lVar1,3,0,0,0);
    iVar3 = FUN_00105e3c(0xe2,lVar4,lVar1 - lVar4,3,0,0,0);
    if ((iVar2 != 0) && (iVar3 == 0)) {
      uStack000000000000005c = 0x4000;
    }
  }
  if (lVar4 != 0) {
    FUN_00105e3c(0xd7,lVar4,(long)iStack0000000000000050,0,0,0,0);
  }
  if ((cStack000000000000005b != '\0') && (in_stack_00000018 != (undefined4 *)0x0)) {
    *in_stack_00000018 = uStack000000000000005c;
  }
  return cStack000000000000005b;
}

