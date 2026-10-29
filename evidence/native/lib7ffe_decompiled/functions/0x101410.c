// rea decompile_all
// name: FUN_00101410
// address: 0x101410
// body: available
// range: 0x101410-0x10141f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_00101410(void)

{
  long lVar1;
  bool in_ZR;
  int iVar2;
  int iVar3;
  undefined4 *in_stack_00000018;
  long in_stack_00000048;
  int in_stack_00000050;
  undefined8 in_stack_00000058;
  
  if (!in_ZR) {
    lVar1 = in_stack_00000048 + 0x1000;
    iVar2 = FUN_00105e3c(0xe2,lVar1,(in_stack_00000048 + 0x2000) - lVar1,3,0,0,0);
    iVar3 = FUN_00105e3c(0xe2,in_stack_00000048,lVar1 - in_stack_00000048,3,0,0,0);
    if ((iVar2 != 0) && (iVar3 == 0)) {
      in_stack_00000058._4_4_ = 0x4000;
    }
  }
  if (in_stack_00000048 != 0) {
    FUN_00105e3c(0xd7,in_stack_00000048,(long)in_stack_00000050,0,0,0,0);
  }
  if ((in_stack_00000058._3_1_ != '\0') && (in_stack_00000018 != (undefined4 *)0x0)) {
    *in_stack_00000018 = in_stack_00000058._4_4_;
  }
  return in_stack_00000058._3_1_;
}

