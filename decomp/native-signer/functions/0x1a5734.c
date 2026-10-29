// rea decompile_all
// name: FUN_001a5734
// address: 0x1a5734
// body: available
// range: 0x1a5734-0x1a5aa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001a5734(void *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  void *unaff_x21;
  long unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x28;
  
  lVar1 = -0x70cbbcb2d9379497;
  if (param_2 != 0) {
    lVar1 = 0x18cea95c7aa82e9c;
  }
  lVar2 = -0x6ffbcb93e7a3f6a6;
  if (param_1 != (void *)0x0) {
    lVar2 = -0x1ea97c9610d8d670;
  }
  lVar3 = -0x5aa069224e609ae;
  do {
    while( true ) {
      while( true ) {
        while (lVar4 = lVar3, -0x5aa069224e609af < lVar4) {
          if (lVar4 < 0x18cea95c7aa82e9c) {
            lVar3 = lVar2;
            if (((lVar4 != -0x5aa069224e609ae) &&
                (lVar3 = -0xd42967cfb29632b, lVar4 != 0x1a56dbc320b72f5)) &&
               (lVar3 = lVar4, lVar4 == 0x5f27daa339ea2b5)) {
              unaff_x27 = (undefined8 *)((long)param_1 + unaff_x26 * 8);
              unaff_x21 = (void *)*unaff_x27;
              lVar3 = -0x14860c0c74340044;
              unaff_x20 = unaff_x26;
              if (unaff_x21 != (void *)0x0) {
                lVar3 = -0x1c2ba9e6d9d4bf2b;
              }
            }
          }
          else if (lVar4 == 0x18cea95c7aa82e9c) {
            unaff_x26 = 0;
            lVar3 = 0x5f27daa339ea2b5;
          }
          else if (lVar4 == 0x3d0c6eb98e16c8ab) {
            unaff_x28 = unaff_x20 + 1;
            lVar3 = 0x1a56dbc320b72f5;
            if (unaff_x28 != param_2) {
              lVar3 = 0x7ed46942f235a794;
            }
          }
          else {
            lVar3 = lVar4;
            if (lVar4 == 0x7ed46942f235a794) {
              lVar3 = 0x5f27daa339ea2b5;
              unaff_x26 = unaff_x28;
            }
          }
        }
        if (lVar4 < -0x1c2ba9e6d9d4bf2b) break;
        if (lVar4 == -0x1c2ba9e6d9d4bf2b) {
          free(unaff_x21);
          *unaff_x27 = 0;
          lVar3 = 0x3d0c6eb98e16c8ab;
        }
        else {
          lVar3 = 0x3d0c6eb98e16c8ab;
          if ((lVar4 != -0x14860c0c74340044) && (lVar3 = lVar4, lVar4 == -0xd42967cfb29632b)) {
            free(param_1);
            lVar3 = -0x4be75c64be9f347a;
          }
        }
      }
      if (-0x4be75c64be9f347b < lVar4) break;
      lVar3 = -0xd42967cfb29632b;
      if ((lVar4 != -0x70cbbcb2d9379497) && (lVar3 = lVar4, lVar4 == -0x6ffbcb93e7a3f6a6)) {
        lVar3 = -0x4be75c64be9f347a;
      }
    }
    lVar3 = lVar1;
  } while ((lVar4 == -0x1ea97c9610d8d670) || (lVar3 = lVar4, lVar4 != -0x4be75c64be9f347a));
  return;
}

