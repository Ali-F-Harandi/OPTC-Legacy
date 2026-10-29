// rea decompile_all
// name: FUN_001446b4
// address: 0x1446b4
// body: available
// range: 0x1446b4-0x144ae3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001446b4(long param_1,float *param_2,ulong *param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long unaff_x24;
  float fVar5;
  
  lVar1 = -0x79a404b14589cd52;
  if (param_1 != 0) {
    lVar1 = -0x1d0ae1ea819e14e0;
  }
  lVar2 = 0x19b5fa96858340a0;
  do {
    while( true ) {
      while( true ) {
        while (lVar4 = lVar2, lVar2 = lVar4, 0x1f082a7e9ca616d7 < lVar4) {
          if (lVar4 < 0x6f2c9e5a47f8eed2) {
            lVar2 = -0x60b007b0daccefd7;
            if (lVar4 != 0x1f082a7e9ca616d8) {
              if (lVar4 == 0x2cde258c6e3fcfe2) {
                DAT_0021c460 = DAT_0021c460 ^ 0xd8;
                DAT_0021c458 = DAT_0021c458 ^ 0xd8d8d8d8d8d8d8d8;
                DAT_0021f650 = '\x01';
                lVar2 = 0x7cb3094f0e2166fd;
              }
              else {
                lVar2 = lVar4;
                if (lVar4 == 0x358ae00bb308ce6a) {
                  lVar2 = 0x7cb3094f0e2166fd;
                }
              }
            }
          }
          else if (lVar4 < 0x79e6215441af9758) {
            if (lVar4 == 0x6f2c9e5a47f8eed2) {
              fVar5 = *param_2;
              *param_3 = *param_3 | 0x10000;
              *param_2 = fVar5 + (1.0 - fVar5);
              lVar2 = -0x60b007b0daccefd7;
            }
            else if (lVar4 == 0x7153f648c25357c3) {
              lVar2 = -0x5445005e6bf580ca;
            }
          }
          else if (lVar4 == 0x79e6215441af9758) {
            lVar2 = 0x358ae00bb308ce6a;
            if (DAT_0021f650 == '\0') {
              lVar2 = 0x2cde258c6e3fcfe2;
            }
          }
          else if (lVar4 == 0x7cb3094f0e2166fd) {
            DAT_0021f25c = 0;
            lVar4 = FUN_001e238c(unaff_x24,&DAT_0021c458);
            lVar2 = 0x1f082a7e9ca616d8;
            if (lVar4 != 0) {
              lVar2 = 0x6f2c9e5a47f8eed2;
            }
          }
        }
        if (lVar4 < 0xe4cb1f6c0d36679) break;
        lVar2 = -0x5445005e6bf580ca;
        if (((lVar4 != 0xe4cb1f6c0d36679) &&
            (lVar2 = -0x60b007b0daccefd7, lVar4 != 0x128c184cb2fa40cd)) &&
           (lVar2 = lVar4, lVar4 == 0x19b5fa96858340a0)) {
          lVar2 = lVar1;
        }
      }
      if (lVar4 < -0x5445005e6bf580ca) break;
      if (lVar4 == -0x5445005e6bf580ca) {
        iVar3 = FUN_00212730(0,1,&DAT_0021f25c);
        lVar2 = 0x79e6215441af9758;
        if (iVar3 != 0) {
          lVar2 = 0xe4cb1f6c0d36679;
        }
      }
      else if (lVar4 == -0x1d0ae1ea819e14e0) {
        unaff_x24 = *(long *)(param_1 + 0x40);
        lVar2 = 0x7153f648c25357c3;
        if (unaff_x24 == 0 || param_3 == (ulong *)0x0) {
          lVar2 = 0x128c184cb2fa40cd;
        }
      }
    }
    lVar2 = -0x60b007b0daccefd7;
  } while ((lVar4 == -0x79a404b14589cd52) || (lVar2 = lVar4, lVar4 != -0x60b007b0daccefd7));
  return;
}

