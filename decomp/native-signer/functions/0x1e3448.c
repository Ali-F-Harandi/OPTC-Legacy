// rea decompile_all
// name: FUN_001e3448
// address: 0x1e3448
// body: available
// range: 0x1e3448-0x1e3667 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_001e3448(char *param_1,char param_2,long param_3)

{
  long lVar1;
  long lVar2;
  char *in_x7;
  char *pcVar3;
  char *unaff_x19;
  long unaff_x20;
  long lVar4;
  long unaff_x21;
  char *unaff_x22;
  long unaff_x23;
  char *unaff_x24;
  long lVar5;
  
  lVar1 = -0x144ad6ddee249a62;
  if (param_3 != 0) {
    lVar1 = 0x11389729d7590b94;
  }
  lVar2 = 0xbccd62a0fc32d;
LAB_001e354c:
  do {
    while( true ) {
      while (lVar5 = lVar2, pcVar3 = unaff_x24, unaff_x24 = pcVar3, lVar2 = lVar5,
            lVar5 < 0xbccd62a0fc32d) {
        if (lVar5 < -0x429b7b8ddead7976) {
          unaff_x24 = unaff_x22;
          lVar2 = -0x65a31e6327338728;
          if (lVar5 != -0x6e4a13fb3d707c87) {
            if (lVar5 == -0x5587caf0ffc9f6c4) {
              unaff_x22 = in_x7;
              unaff_x23 = unaff_x20;
              unaff_x24 = pcVar3;
              lVar2 = -0x6e4a13fb3d707c87;
              if (*in_x7 != param_2) {
                lVar2 = 0x361985fb5d496b76;
              }
            }
            else {
              unaff_x24 = pcVar3;
              lVar2 = lVar5;
              if (lVar5 == -0x65a31e6327338728) {
                return pcVar3;
              }
            }
          }
        }
        else if ((lVar5 == -0x429b7b8ddead7976) || (lVar5 == -0x144ad6ddee249a62)) {
          unaff_x24 = (char *)0x0;
          lVar2 = -0x65a31e6327338728;
        }
      }
      if (lVar5 < 0x361985fb5d496b76) goto code_r0x001e35ac;
      if (lVar5 != 0x361985fb5d496b76) break;
      unaff_x21 = unaff_x23 + -1;
      unaff_x19 = unaff_x22 + 1;
      lVar2 = -0x429b7b8ddead7976;
      if (unaff_x21 != 0) {
        lVar2 = 0x4b73c4e968047988;
      }
    }
    pcVar3 = unaff_x19;
    lVar4 = unaff_x21;
  } while (lVar5 != 0x4b73c4e968047988);
  goto LAB_001e3614;
code_r0x001e35ac:
  lVar2 = lVar1;
  if ((lVar5 != 0xbccd62a0fc32d) &&
     (pcVar3 = param_1, lVar4 = param_3, lVar2 = lVar5, lVar5 == 0x11389729d7590b94)) {
LAB_001e3614:
    in_x7 = pcVar3;
    unaff_x20 = lVar4;
    lVar2 = -0x5587caf0ffc9f6c4;
  }
  goto LAB_001e354c;
}

