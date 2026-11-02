// rea decompile_all
// name: FUN_001e43f0
// address: 0x1e43f0
// body: available
// range: 0x1e43f0-0x1e4577 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_001e43f0(char *param_1,char param_2,char *param_3)

{
  char *pcVar1;
  char *extraout_x1;
  char *pcVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar1 = (char *)strlen(param_1);
  pcVar4 = extraout_x1 + -1;
  pcVar2 = extraout_x1;
  lVar3 = 0x2ea5ec9aa4903e5;
  pcVar5 = pcVar1 + 1;
LAB_001e44b8:
  while( true ) {
    while (lVar3 < -0x1600a62692a3eebb) {
      pcVar6 = param_3;
      if (lVar3 == -0x56bb61885886ae54) goto LAB_001e4538;
      if (lVar3 == -0x220211bfb882d8f5) {
        return pcVar1;
      }
      if ((lVar3 == -0x1d6a050721dd3e21) &&
         (param_3 = pcVar4, lVar3 = 0xdc8188db88ec11b, param_1[(long)pcVar4] != param_2)) {
        lVar3 = -0x56bb61885886ae54;
      }
    }
    if (0x41a203875b031c2 < lVar3) break;
    if (lVar3 == -0x1600a62692a3eebb) {
      lVar3 = 0x41a203875b031c3;
      if (pcVar5 != (char *)0x0) {
        lVar3 = -0x1d6a050721dd3e21;
      }
      pcVar4 = pcVar5 + -1;
      pcVar2 = pcVar5;
    }
    else {
      pcVar6 = pcVar5;
      if (lVar3 == 0x2ea5ec9aa4903e5) {
LAB_001e4538:
        lVar3 = -0x1600a62692a3eebb;
        pcVar5 = pcVar6;
      }
    }
  }
  if (lVar3 == 0x41a203875b031c3) {
    pcVar1 = (char *)0x0;
  }
  else {
    if (lVar3 != 0xdc8188db88ec11b) goto LAB_001e44b8;
    pcVar1 = param_1 + (long)param_3;
  }
  pcVar4 = pcVar2 + -1;
  lVar3 = -0x220211bfb882d8f5;
  goto LAB_001e44b8;
}

