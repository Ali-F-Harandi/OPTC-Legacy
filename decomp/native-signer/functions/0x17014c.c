// rea decompile_all
// name: FUN_0017014c
// address: 0x17014c
// body: available
// range: 0x17014c-0x1706d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0017014c(int *param_1,long *param_2,long param_3,undefined8 *param_4,size_t *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int unaff_w19;
  size_t unaff_x24;
  int unaff_w25;
  void *unaff_x26;
  
  lVar1 = -0x7ad67c16664e25fa;
  if (param_3 != 0) {
    lVar1 = -0x23395a9e9c848352;
  }
  lVar2 = 0x4d5d50fcdd4992d2;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while (lVar3 = lVar2, lVar2 = lVar3, 0x1552bb494d897f7d < lVar3) {
              if (lVar3 < 0x4d5d50fcdd4992d2) {
                if (lVar3 < 0x2352f2d6b10786ab) {
                  if (lVar3 == 0x1552bb494d897f7e) {
                    lVar2 = -0x73716f9563fa402;
                    if (*param_1 != 0) {
                      lVar2 = -0x503101e48cc58732;
                    }
                  }
                  else if (lVar3 == 0x1b91058c21da9ca7) {
                    (**(code **)(*param_2 + 0x80))(param_2);
                    (**(code **)(*param_2 + 0x88))(param_2);
                    unaff_w19 = 0x1b;
                    lVar2 = 0x3c2595d6266c5998;
                  }
                }
                else if (lVar3 == 0x2352f2d6b10786ab) {
                  unaff_w19 = 2;
                  lVar2 = 0x3c2595d6266c5998;
                }
                else if (lVar3 == 0x3c2595d6266c5998) {
                  *param_1 = unaff_w19;
                  lVar2 = -0xf8d0ba03b2e0b85;
                }
              }
              else if (lVar3 < 0x5f1d0a7f6212d984) {
                lVar2 = lVar1;
                if ((lVar3 != 0x4d5d50fcdd4992d2) && (lVar2 = lVar3, lVar3 == 0x5127e420c2beb41f)) {
                  lVar2 = 0x5f1d0a7f6212d984;
                }
              }
              else if (lVar3 == 0x5f1d0a7f6212d984) {
                *param_4 = 0;
                *param_5 = 0;
                free(unaff_x26);
                lVar2 = 0x2ea5ec9aa4903e5;
              }
              else if (lVar3 == 0x719dbab015af25c6) {
                (**(code **)(*param_2 + 0x80))(param_2);
                (**(code **)(*param_2 + 0x88))(param_2);
                *param_1 = 0x1b;
                lVar2 = 0x5f1d0a7f6212d984;
              }
            }
            if (-0x22526e95d7366020 < lVar3) break;
            if (lVar3 < -0x38b0832f7743f2b8) {
              if (lVar3 == -0x7ad67c16664e25fa) {
                unaff_w19 = 3;
                lVar2 = 0x3c2595d6266c5998;
              }
              else if (lVar3 == -0x503101e48cc58732) {
                lVar2 = -0xf8d0ba03b2e0b85;
              }
            }
            else {
              lVar2 = 0x2ea5ec9aa4903e5;
              if ((lVar3 != -0x38b0832f7743f2b8) && (lVar2 = lVar3, lVar3 == -0x23395a9e9c848352)) {
                unaff_w25 = (**(code **)(*param_2 + 0x558))(param_2,param_3);
                lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
                lVar2 = 0x1552bb494d897f7e;
                if (lVar3 != 0) {
                  lVar2 = 0x1b91058c21da9ca7;
                }
              }
            }
          }
          if (-0x73716f9563fa403 < lVar3) break;
          if (lVar3 == -0x22526e95d736601f) {
            (**(code **)(*param_2 + 0x640))(param_2,param_3,0,unaff_w25,unaff_x26);
            lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar2 = 0xf8f9546f45fbb47;
            if (lVar3 != 0) {
              lVar2 = 0x719dbab015af25c6;
            }
          }
          else if (lVar3 == -0xf8d0ba03b2e0b85) {
            *param_4 = 0;
            *param_5 = 0;
            lVar2 = 0x2ea5ec9aa4903e5;
          }
        }
        if (lVar3 != -0x73716f9563fa402) break;
        unaff_x24 = (size_t)unaff_w25;
        unaff_x26 = calloc(unaff_x24,1);
        lVar2 = 0x2352f2d6b10786ab;
        if (unaff_x26 != (void *)0x0) {
          lVar2 = -0x22526e95d736601f;
        }
      }
      if (lVar3 != 0xf8f9546f45fbb47) break;
      *param_4 = unaff_x26;
      *param_5 = unaff_x24;
      lVar2 = -0x38b0832f7743f2b8;
      if (*param_1 != 0) {
        lVar2 = 0x5127e420c2beb41f;
      }
    }
  } while (lVar3 != 0x2ea5ec9aa4903e5);
  return;
}

