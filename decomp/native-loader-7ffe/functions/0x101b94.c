// rea decompile_all
// name: FUN_00101b94
// address: 0x101b94
// body: available
// range: 0x101b94-0x101cb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00101b94(char *param_1)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00001448;
  undefined8 in_stack_00001450;
  long in_stack_00001458;
  long in_stack_00001460;
  long in_stack_00001490;
  code *in_stack_00001498;
  long in_stack_000014a0;
  long in_stack_000014a8;
  undefined8 in_stack_000014b0;
  char in_stack_000014bf;
  
  if (*param_1 != '\0') {
    in_stack_00001498 = (code *)(in_stack_000014a8 + (ulong)*(uint *)(in_stack_00001490 + 0x14));
  }
  if (in_stack_000014bf != '\0') {
    lVar5 = FUN_00105a88((ulong)*(uint *)(in_stack_00001490 + 8) + in_stack_000014a0,4,1);
    in_stack_00001460 = in_stack_00001460 + lVar5;
    in_stack_00001458 = in_stack_00001458 - lVar5;
  }
  FUN_00104598(in_stack_00001490,0,0x1000);
  cVar1 = '\0';
  if (in_stack_000014bf != '\0') {
    cVar1 = (*in_stack_00001498)
                      (in_stack_00000038,in_stack_000014b0,in_stack_000014a8,in_stack_000014a0,
                       in_stack_00001460,in_stack_00001458,in_stack_00001450,in_stack_00001448);
  }
  cVar2 = '\x01';
  if (cVar1 != '\x01') {
    uVar4 = _FINI_0();
    cVar2 = FUN_00105f34(0,0,uVar4,1,0xfb,1,6,0);
  }
  uVar3 = 0;
  if (cVar2 != '\0') {
    uVar4 = _FINI_0();
    uVar3 = FUN_00105f34(0,0,uVar4,1,0xfc,1,7,0);
  }
  return uVar3;
}

