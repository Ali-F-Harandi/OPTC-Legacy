// rea decompile_all
// name: FUN_001ff5c8
// address: 0x1ff5c8
// body: available
// range: 0x1ff5c8-0x1ffebf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1ffebc to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001ff5c8(int *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  size_t sVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  int unaff_w24;
  ulong local_80;
  long local_78;
  int local_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_6c = 0;
  local_80 = 0;
  local_78 = 0;
  FUN_001fe014();
  lVar1 = -0x797daf6592e4222d;
  if (*param_1 != 0) {
    lVar1 = 0x78ac43fddd7c64db;
  }
  lVar3 = 0x5ebfca74eead21cf;
LAB_001ff700:
  do {
    while (lVar9 = lVar3, lVar3 = lVar9, 0x1b91058c21da9ca6 < lVar9) {
      if (lVar9 < 0x57cabee7967ab664) {
        if (lVar9 < 0x39a16bddf8dc82a2) {
          if (lVar9 == 0x1b91058c21da9ca7) {
            uVar8 = *param_2;
            puVar7 = param_2 + 5;
LAB_001ffe1c:
            FUN_001fd388(param_1,puVar7,(int)local_78 + -4,uVar8);
            lVar3 = 0x719dbab015af25c6;
          }
          else if (lVar9 == 0x2352f2d6b10786ab) {
            uVar6 = FUN_001f51e8(param_1,*param_2,&local_80);
            lVar3 = 0xf8f9546f45fbb47;
            if ((uVar6 & 1) == 0) {
              lVar3 = -0x22526e95d736601f;
            }
          }
          else if (lVar9 == 0x3485297baf428faf) {
            sVar5 = fread(&local_6c,4,1,(FILE *)*param_2);
            lVar3 = 0x57cabee7967ab664;
            if (sVar5 != 0) {
              lVar3 = 0x6230bf87be098d5d;
            }
          }
        }
        else if (lVar9 < 0x4d5d50fcdd4992d2) {
          if (lVar9 == 0x39a16bddf8dc82a2) {
            lVar3 = -0x503101e48cc58732;
            if (unaff_w24 != 0x7109871a) {
              lVar3 = -0x7440f7630005660c;
            }
          }
          else if (lVar9 == 0x3c2595d6266c5998) {
            lVar3 = 0x719dbab015af25c6;
          }
        }
        else if (lVar9 == 0x4d5d50fcdd4992d2) {
          lVar3 = -0x73716f9563fa402;
          if (unaff_w24 != 0x1b93ad61) {
            lVar3 = -0x7ad67c16664e25fa;
          }
        }
        else if (lVar9 == 0x5127e420c2beb41f) {
          lVar3 = -0x1600a62692a3eebb;
        }
      }
      else if (lVar9 < 0x719dbab015af25c6) {
        if (lVar9 < 0x5f1d0a7f6212d984) {
          lVar3 = -0x1600a62692a3eebb;
          if ((lVar9 != 0x57cabee7967ab664) && (lVar3 = lVar9, lVar9 == 0x5ebfca74eead21cf)) {
            lVar3 = lVar1;
          }
        }
        else {
          lVar3 = -0x1600a62692a3eebb;
          if ((lVar9 != 0x5f1d0a7f6212d984) && (lVar3 = lVar9, lVar9 == 0x6230bf87be098d5d)) {
            lVar3 = 0x7bca060775e09e1e;
            unaff_w24 = local_6c;
          }
        }
      }
      else if (lVar9 < 0x78ac43fddd7c64db) {
        if (lVar9 == 0x719dbab015af25c6) {
          lVar3 = 0x2ea5ec9aa4903e5;
          if (*param_1 != 0) {
            lVar3 = 0x5f1d0a7f6212d984;
          }
        }
        else if (lVar9 == 0x727aabeac1ff5013) {
          sVar5 = fread(&local_78,8,1,(FILE *)*param_2);
          lVar3 = -0x3ea1661ac6a1c4db;
          if (sVar5 != 0) {
            lVar3 = 0x3485297baf428faf;
          }
        }
      }
      else {
        lVar3 = -0x1600a62692a3eebb;
        if ((lVar9 != 0x78ac43fddd7c64db) && (lVar3 = lVar9, lVar9 == 0x7bca060775e09e1e)) {
          lVar3 = -0x23395a9e9c848352;
          if (0x1b93ad60 < unaff_w24) {
            lVar3 = -0x7e369e6589ba78e7;
          }
        }
      }
    }
    if (lVar9 < -0x23395a9e9c848352) {
      if (lVar9 < -0x7440f7630005660c) {
        if (lVar9 == -0x7e369e6589ba78e7) {
          lVar3 = 0x4d5d50fcdd4992d2;
          if (0x71098719 < unaff_w24) {
            lVar3 = 0x39a16bddf8dc82a2;
          }
        }
        else {
          lVar3 = 0x2352f2d6b10786ab;
          if ((lVar9 != -0x7ad67c16664e25fa) && (lVar3 = lVar9, lVar9 == -0x797daf6592e4222d)) {
            lVar3 = 0x727aabeac1ff5013;
          }
        }
      }
      else if (lVar9 < -0x3ea1661ac6a1c4db) {
        lVar3 = 0x2352f2d6b10786ab;
        if ((lVar9 != -0x7440f7630005660c) && (lVar3 = lVar9, lVar9 == -0x503101e48cc58732)) {
          FUN_001fb544(param_1,param_2 + 3,(int)local_78 + -4,*param_2);
          lVar3 = 0x719dbab015af25c6;
        }
      }
      else {
        lVar3 = -0x1600a62692a3eebb;
        if ((lVar9 != -0x3ea1661ac6a1c4db) && (lVar3 = lVar9, lVar9 == -0x38b0832f7743f2b8)) {
          iVar4 = fseek((FILE *)*param_2,local_78 + -4,1);
          lVar3 = 0x3c2595d6266c5998;
          if (iVar4 != 0) {
            lVar3 = -0xf8d0ba03b2e0b85;
          }
        }
      }
      goto LAB_001ff700;
    }
    if (lVar9 < -0x73716f9563fa402) {
      if (lVar9 < -0x1600a62692a3eebb) {
        if (lVar9 == -0x23395a9e9c848352) {
          lVar3 = 0x1b91058c21da9ca7;
          if (unaff_w24 != -0xfac9740) {
            lVar3 = 0x1552bb494d897f7e;
          }
        }
        else if (lVar9 == -0x22526e95d736601f) {
          lVar3 = -0x1600a62692a3eebb;
        }
      }
      else if (lVar9 == -0xf8d0ba03b2e0b85) {
        *param_1 = 7;
        lVar3 = -0x1600a62692a3eebb;
      }
      else if (lVar9 == -0x1600a62692a3eebb) {
        if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
    else if (lVar9 < 0xf8f9546f45fbb47) {
      if (lVar9 == -0x73716f9563fa402) {
        uVar8 = *param_2;
        puVar7 = param_2 + 7;
        goto LAB_001ffe1c;
      }
      if (lVar9 == 0x2ea5ec9aa4903e5) {
        lVar3 = 0x727aabeac1ff5013;
      }
    }
    else if (lVar9 == 0xf8f9546f45fbb47) {
      lVar3 = -0x38b0832f7743f2b8;
      if ((ulong)(param_2[2] + param_2[1]) <= local_80) {
        lVar3 = 0x5127e420c2beb41f;
      }
    }
    else if (lVar9 == 0x1552bb494d897f7e) {
      lVar3 = 0x2352f2d6b10786ab;
    }
  } while( true );
}

