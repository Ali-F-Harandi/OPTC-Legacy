// rea decompile_all
// name: FUN_0016c648
// address: 0x16c648
// body: available
// range: 0x16c648-0x16cadf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0016c648(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = -0x25a3e9f6f44c50c;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (lVar3 = lVar1, lVar1 = lVar3, lVar3 < 0xc7bf249d1db72b2) {
            if (lVar3 < -0x2ef756f1c7496e5f) {
              if (lVar3 == -0x405b680ffecd4131) {
                *param_4 = 0;
                *param_5 = 0;
                lVar1 = 0x5eda44100212fa2c;
              }
              else {
                lVar1 = 0x65536dc2a8308acd;
                if ((lVar3 != -0x34ce59f19df9112f) && (lVar1 = lVar3, lVar3 == -0x316a2fad8e5725cc))
                {
                  _DAT_0021d7f0 = _DAT_0021d7f0 ^ 0x6a6a6a6a6a6a6a6a;
                  uRam000000000021d7f8 = uRam000000000021d7f8 ^ 0x6a6a6a6a6a6a6a6a;
                  DAT_0021f7dc = '\x01';
                  lVar1 = 0x65536dc2a8308acd;
                }
              }
            }
            else if (lVar3 < -0x25a3e9f6f44c50c) {
              if (lVar3 == -0x2ef756f1c7496e5f) {
                lVar1 = -0x34ce59f19df9112f;
                if (DAT_0021f7dc == '\0') {
                  lVar1 = -0x316a2fad8e5725cc;
                }
              }
              else if (lVar3 == -0x12e0f8e15901e122) {
                lVar1 = 0x5eda44100212fa2c;
              }
            }
            else {
              lVar1 = 0x31b9d74c89a90fe3;
              if ((lVar3 != -0x25a3e9f6f44c50c) && (lVar1 = lVar3, lVar3 == -0x111819a4994f0fa)) {
                lVar1 = -0x405b680ffecd4131;
              }
            }
          }
          if (0x3ace195dd3930385 < lVar3) break;
          if (lVar3 < 0x31b9d74c89a90fe3) {
            lVar1 = -0x405b680ffecd4131;
            if ((lVar3 != 0xc7bf249d1db72b2) && (lVar1 = lVar3, lVar3 == 0x27963d1423e000f6)) {
              FUN_001821f0(param_1,param_2,*param_4,0);
              lVar1 = 0x3b16db62a3c2f4fb;
              if (*param_1 != 0) {
                lVar1 = -0x111819a4994f0fa;
              }
            }
          }
          else if (lVar3 == 0x31b9d74c89a90fe3) {
            iVar2 = FUN_00212730(0,1,&DAT_0021f7d0);
            lVar1 = -0x2ef756f1c7496e5f;
            if (iVar2 != 0) {
              lVar1 = 0x32f4713bcaf93571;
            }
          }
          else if (lVar3 == 0x32f4713bcaf93571) {
            lVar1 = 0x31b9d74c89a90fe3;
          }
        }
        if (0x5eda44100212fa2b < lVar3) break;
        lVar1 = -0x405b680ffecd4131;
        if ((lVar3 != 0x3ace195dd3930386) && (lVar1 = lVar3, lVar3 == 0x3b16db62a3c2f4fb)) {
          FUN_0017d96c(param_1,param_2,param_3,param_5);
          lVar1 = -0x12e0f8e15901e122;
          if (*param_1 != 0) {
            lVar1 = 0x3ace195dd3930386;
          }
        }
      }
      if (lVar3 != 0x65536dc2a8308acd) break;
      DAT_0021f7d0 = 0;
      FUN_0018117c(param_1,param_2,&DAT_0021d7f0,param_4);
      lVar1 = 0x27963d1423e000f6;
      if (*param_1 != 0) {
        lVar1 = 0xc7bf249d1db72b2;
      }
    }
  } while (lVar3 != 0x5eda44100212fa2c);
  return;
}

