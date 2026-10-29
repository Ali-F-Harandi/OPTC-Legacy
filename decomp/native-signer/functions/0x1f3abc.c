// rea decompile_all
// name: FUN_001f3abc
// address: 0x1f3abc
// body: available
// range: 0x1f3abc-0x1f3c5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_001f3abc(uint param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  
  uVar4 = syscall(0x71,(ulong)param_1,param_2);
  puVar1 = (undefined1 *)0x353e7cd16df664a2;
  if (param_1 != 0) {
    puVar1 = (undefined1 *)0x696b554ab6b2c8c5;
  }
  puVar2 = (undefined1 *)0x125dd2cc844aecb4;
  if ((int)uVar4 != -0x26) {
    puVar2 = &DAT_f615808441b1dafc;
  }
  uVar5 = uVar4;
  puVar3 = (undefined1 *)0x887e73b2c28c6a1;
  while( true ) {
    while (puVar6 = puVar3, (long)puVar6 < 0x2ce2edddaf334d81) {
      if (puVar6 == &DAT_f615808441b1dafc) {
        uVar5 = uVar4 & 0xffffffff;
        puVar3 = (undefined1 *)0x2ce2edddaf334d81;
      }
      else {
        puVar3 = puVar2;
        if ((puVar6 != (undefined1 *)0x887e73b2c28c6a1) &&
           (puVar3 = puVar6, puVar6 == (undefined1 *)0x125dd2cc844aecb4)) {
          puVar3 = puVar1;
        }
      }
    }
    if (puVar6 == (undefined1 *)0x2ce2edddaf334d81) break;
    if (puVar6 == (undefined1 *)0x353e7cd16df664a2) {
      syscall(0xa9,param_2,0);
      uVar5 = 0;
      *(long *)(param_2 + 8) = *(long *)(param_2 + 8) * 0x3e800000000 >> 0x20;
      puVar3 = (undefined1 *)0x2ce2edddaf334d81;
    }
    else {
      puVar3 = puVar6;
      if (puVar6 == (undefined1 *)0x696b554ab6b2c8c5) {
        uVar5 = 0xffffffea;
        puVar3 = (undefined1 *)0x2ce2edddaf334d81;
      }
    }
  }
  return uVar5;
}

