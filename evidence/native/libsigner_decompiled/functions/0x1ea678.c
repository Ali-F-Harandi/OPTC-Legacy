// rea decompile_all
// name: FUN_001ea678
// address: 0x1ea678
// body: available
// range: 0x1ea678-0x1ea9ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_001ea678(char *param_1,char param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  char *in_x7;
  char cVar4;
  char *unaff_x19;
  char *unaff_x20;
  char *unaff_x21;
  char cVar5;
  char *unaff_x26;
  char *pcVar6;
  long lVar7;
  char *unaff_x29;
  char *pcVar8;
  char *unaff_x30;
  char *pcVar9;
  
  cVar4 = '\0';
  lVar1 = -0x1aa196cea8a824ec;
  if (param_2 != '\0') {
    lVar1 = 0x6ba687d86db6deec;
  }
  lVar2 = -0x52d8f6b8a3da3d9e;
  cVar3 = '\0';
  do {
    while( true ) {
      while( true ) {
        while (cVar5 = cVar3, pcVar9 = unaff_x30, pcVar8 = unaff_x29, lVar7 = lVar2,
              pcVar6 = unaff_x26, unaff_x26 = pcVar6, lVar2 = lVar7, unaff_x29 = pcVar8,
              unaff_x30 = pcVar9, cVar3 = cVar5, lVar7 < 0x366faf7c9bd6c7be) {
          if (lVar7 < -0x1aa196cea8a824ec) {
            if (lVar7 == -0x6df3a92de1c09228) {
              in_x7 = pcVar9 + 1;
              unaff_x20 = pcVar9;
              lVar2 = 0x6e6e1c8720089005;
              if (*pcVar9 != '\0') {
                lVar2 = 0x7823e529026ef05b;
              }
            }
            else if (lVar7 == -0x52d8f6b8a3da3d9e) {
              lVar2 = lVar1;
            }
          }
          else {
            lVar2 = -0x6df3a92de1c09228;
            unaff_x30 = param_1;
            if (((lVar7 != -0x1aa196cea8a824ec) &&
                (unaff_x26 = unaff_x21, lVar2 = 0x366faf7c9bd6c7be, unaff_x30 = pcVar9,
                cVar3 = cVar4, lVar7 != 0x21827f7327203db)) &&
               (unaff_x26 = pcVar6, lVar2 = lVar7, cVar3 = cVar5, lVar7 == 0x12e1be5f2b72ca6f)) {
              lVar2 = 0x4f11b5a35da5d5cb;
              unaff_x29 = unaff_x19;
            }
          }
        }
        if (lVar7 < 0x6e6e1c8720089005) break;
        if (lVar7 == 0x6e6e1c8720089005) {
          unaff_x26 = unaff_x20;
          lVar2 = 0x366faf7c9bd6c7be;
          cVar3 = *unaff_x20;
        }
        else if (lVar7 == 0x7823e529026ef05b) {
          lVar2 = -0x6df3a92de1c09228;
          unaff_x30 = in_x7;
        }
      }
      if (lVar7 != 0x4f11b5a35da5d5cb) break;
      unaff_x19 = pcVar8 + 1;
      cVar4 = *pcVar8;
      unaff_x21 = pcVar8;
      lVar2 = 0x21827f7327203db;
      if (cVar4 != param_2 && cVar4 != '\0') {
        lVar2 = 0x12e1be5f2b72ca6f;
      }
    }
    lVar2 = 0x4f11b5a35da5d5cb;
    unaff_x29 = param_1;
  } while ((lVar7 == 0x6ba687d86db6deec) ||
          (lVar2 = lVar7, unaff_x29 = pcVar8, lVar7 != 0x366faf7c9bd6c7be));
  if (cVar5 != param_2) {
    pcVar6 = (char *)0x0;
  }
  return pcVar6;
}

