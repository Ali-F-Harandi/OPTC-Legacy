// rea decompile_all
// name: FUN_001028a0
// address: 0x1028a0
// body: available
// range: 0x1028a0-0x102a4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00102930) */

char FUN_001028a0(ulong param_1,long param_2,long param_3)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  long lStack0000000000000008;
  long lStack0000000000000010;
  ulong uStack0000000000000018;
  ulong in_stack_00000048;
  long in_stack_00000050;
  
  lStack0000000000000008 = param_3;
  lStack0000000000000010 = param_2;
  uStack0000000000000018 = param_1;
  cVar1 = FUN_001038d0(&stack0x00000020);
  do {
    if (cVar1 == '\0') goto LAB_00102a34;
    if (cVar1 != '\0') {
      cVar1 = FUN_00102c90(&stack0x0000047f,&stack0x00000048,&stack0x00000020);
    }
  } while (((cVar1 == '\0') || (uStack0000000000000018 < in_stack_00000048)) ||
          (in_stack_00000048 + in_stack_00000050 <= uStack0000000000000018));
  uVar2 = FUN_001047cc(&stack0x00000074);
  uVar3 = lStack0000000000000008 - 1;
  if (uVar2 < uVar3) {
    uVar3 = uVar2;
  }
  FUN_00104e1c(lStack0000000000000010,&stack0x00000074,uVar3);
  *(undefined1 *)(lStack0000000000000010 + uVar3) = 0;
LAB_00102a34:
  FUN_0010394c(&stack0x00000020);
  return cVar1;
}

