// rea decompile_all
// name: FUN_0014893c
// address: 0x14893c
// body: available
// range: 0x14893c-0x14946f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0014893c(long param_1,float *param_2,ulong *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x26;
  float fVar5;
  long local_88;
  long local_80;
  
  lVar1 = 0x3d0c6a4b16b08afb;
  if (param_3 == (ulong *)0x0 || param_1 == 0) {
    lVar1 = -0x43f5ac3d0297344d;
  }
  lVar4 = -0x65a16f35d9b4bc35;
LAB_00148aa0:
  lVar3 = lVar4;
  lVar4 = lVar3;
  if (lVar3 < 0xef4ecf2355856c1) {
    if (-0x49a064a695766e66 < lVar3) {
      if (lVar3 < -0x21872a524d552a7f) {
        if (lVar3 < -0x3d320decd9ddcb5e) {
          lVar4 = 0x64d8d5c3a12586ab;
          if ((lVar3 != -0x49a064a695766e65) && (lVar4 = lVar3, lVar3 == -0x43f5ac3d0297344d)) {
            lVar4 = 0x5aaadd33a505f2fa;
          }
        }
        else {
          lVar4 = 0x2ad142c74481dc00;
          if ((lVar3 != -0x3d320decd9ddcb5e) && (lVar4 = lVar3, lVar3 == -0x26b7aa46f058818e)) {
            lVar4 = 0x2ad142c74481dc00;
          }
        }
      }
      else if (lVar3 < -0x60c563096a6c011) {
        if (lVar3 == -0x21872a524d552a7f) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f530);
          lVar4 = -0x10c76017554eb93;
          if (iVar2 != 0) {
            lVar4 = -0x60c563096a6c011;
          }
        }
        else if (lVar3 == -0x171cc8548f589699) {
          lVar4 = 0x39a88526a3976260;
        }
      }
      else {
        lVar4 = -0x21872a524d552a7f;
        if (lVar3 != -0x60c563096a6c011) {
          if (lVar3 == -0x10c76017554eb93) {
            lVar4 = 0x6b0fcbfadcaa4d23;
            if (DAT_0021f705 == '\0') {
              lVar4 = 0x439ee8b95422dc9d;
            }
          }
          else {
            lVar4 = lVar3;
            if (lVar3 == 0xb004c0b537c953c) {
              lVar4 = -0x78dde4b15f68a78f;
            }
          }
        }
      }
      goto LAB_00148aa0;
    }
    if (lVar3 < -0x6cf0e1f85219066f) {
      if (lVar3 < -0x6f9de9da1eb30443) {
        if (lVar3 == -0x7c97ee83877a38f9) {
          lVar4 = 0x18528e7287c6c44d;
          if (DAT_0021f705 == '\0') {
            lVar4 = -0x5aa6270e31dc3068;
          }
        }
        else if (lVar3 == -0x78dde4b15f68a78f) {
          unaff_x26 = *(long *)(param_1 + 0x18);
          lVar4 = 0xef4ecf2355856c1;
          if (unaff_x26 != 0) {
            lVar4 = -0x26b7aa46f058818e;
          }
        }
      }
      else {
        lVar4 = 0x5aaadd33a505f2fa;
        if ((lVar3 != -0x6f9de9da1eb30443) && (lVar4 = lVar3, lVar3 == -0x6ebe55d317f42c39)) {
          lVar4 = 0x64d8d5c3a12586ab;
        }
      }
      goto LAB_00148aa0;
    }
    if (lVar3 < -0x65a16f35d9b4bc35) {
      lVar4 = -0x63314a0f03d3e1fd;
      if ((lVar3 != -0x6cf0e1f85219066f) && (lVar4 = lVar3, lVar3 == -0x6b6767c613170e43)) {
        DAT_0021f530 = 0;
        iVar2 = FUN_001e17a8(local_88,&DAT_0021d358);
        lVar4 = -0x6cf0e1f85219066f;
        if (iVar2 != 0) {
          lVar4 = 0xb004c0b537c953c;
        }
      }
      goto LAB_00148aa0;
    }
    lVar4 = lVar1;
    if (lVar3 == -0x65a16f35d9b4bc35) goto LAB_00148aa0;
    if (lVar3 == -0x63314a0f03d3e1fd) {
      fVar5 = *param_2;
      *param_3 = *param_3 | 0x1000000;
      *param_2 = fVar5 + (1.0 - fVar5);
      lVar4 = 0x5aaadd33a505f2fa;
      goto LAB_00148aa0;
    }
    lVar4 = lVar3;
    if (lVar3 != -0x5aa6270e31dc3068) goto LAB_00148aa0;
    lVar4 = 0x7bdb7d9ca9cd508b;
  }
  else {
    if (0x4cdb0353d1b20c46 < lVar3) {
      if (lVar3 < 0x68767f8ed1bcac3a) {
        if (lVar3 < 0x5aaadd33a505f2fa) {
          lVar4 = -0x21872a524d552a7f;
          if ((lVar3 != 0x4cdb0353d1b20c47) && (lVar4 = lVar3, lVar3 == 0x576305ef78ae3d7a)) {
            DAT_0021f530 = 0;
            iVar2 = FUN_001e17a8(local_80,&DAT_0021d358);
            lVar4 = 0x72247866f6bafb10;
            if (iVar2 != 0) {
              lVar4 = -0x171cc8548f589699;
            }
          }
        }
        else {
          lVar4 = -0x63314a0f03d3e1fd;
          if (lVar3 != 0x6069f0d1c72197f2) {
            if (lVar3 == 0x64d8d5c3a12586ab) {
              iVar2 = FUN_00212730(0,1,&DAT_0021f530);
              lVar4 = 0x68767f8ed1bcac3a;
              if (iVar2 != 0) {
                lVar4 = -0x6ebe55d317f42c39;
              }
            }
            else {
              lVar4 = lVar3;
              if (lVar3 == 0x5aaadd33a505f2fa) {
                return;
              }
            }
          }
        }
      }
      else if (lVar3 < 0x72247866f6bafb10) {
        if (lVar3 == 0x68767f8ed1bcac3a) {
          lVar4 = 0x2c67f66a4467d88a;
          if (DAT_0021f705 == '\0') {
            lVar4 = 0x464eba2f39f7f0b2;
          }
        }
        else if (lVar3 == 0x6b0fcbfadcaa4d23) {
          lVar4 = 0x576305ef78ae3d7a;
        }
      }
      else {
        lVar4 = -0x63314a0f03d3e1fd;
        if (((lVar3 != 0x72247866f6bafb10) &&
            (lVar4 = 0x39a88526a3976260, lVar3 != 0x77c0b3434a9a3b75)) &&
           (lVar4 = lVar3, lVar3 == 0x7bdb7d9ca9cd508b)) {
          DAT_0021f530 = 0;
          iVar2 = FUN_001e17a8(unaff_x26,&DAT_0021d358);
          lVar4 = 0x6069f0d1c72197f2;
          if (iVar2 != 0) {
            lVar4 = -0x6f9de9da1eb30443;
          }
        }
      }
      goto LAB_00148aa0;
    }
    if (lVar3 < 0x39a88526a3976260) {
      if (lVar3 < 0x2ad142c74481dc00) {
        lVar4 = 0x5aaadd33a505f2fa;
        if ((lVar3 != 0xef4ecf2355856c1) && (lVar4 = lVar3, lVar3 == 0x18528e7287c6c44d)) {
          lVar4 = 0x7bdb7d9ca9cd508b;
        }
      }
      else if (lVar3 == 0x2ad142c74481dc00) {
        iVar2 = FUN_00212730(0,1,&DAT_0021f530);
        lVar4 = -0x7c97ee83877a38f9;
        if (iVar2 != 0) {
          lVar4 = -0x3d320decd9ddcb5e;
        }
      }
      else if (lVar3 == 0x2c67f66a4467d88a) {
        lVar4 = -0x6b6767c613170e43;
      }
      goto LAB_00148aa0;
    }
    if (lVar3 < 0x3eaca1abd0e6cb81) {
      if (lVar3 == 0x39a88526a3976260) {
        local_88 = *(long *)(param_1 + 0x20);
        lVar4 = 0x3eaca1abd0e6cb81;
        if (local_88 != 0) {
          lVar4 = -0x49a064a695766e65;
        }
      }
      else if (lVar3 == 0x3d0c6a4b16b08afb) {
        local_80 = *(long *)(param_1 + 8);
        lVar4 = 0x77c0b3434a9a3b75;
        if (local_80 != 0) {
          lVar4 = 0x4cdb0353d1b20c47;
        }
      }
      goto LAB_00148aa0;
    }
    lVar4 = -0x78dde4b15f68a78f;
    if (lVar3 == 0x3eaca1abd0e6cb81) goto LAB_00148aa0;
    if (lVar3 != 0x439ee8b95422dc9d) {
      lVar4 = lVar3;
      if (lVar3 == 0x464eba2f39f7f0b2) {
        lVar4 = -0x6b6767c613170e43;
        goto LAB_00148a90;
      }
      goto LAB_00148aa0;
    }
    lVar4 = 0x576305ef78ae3d7a;
  }
LAB_00148a90:
  DAT_0021d35d = DAT_0021d35d ^ 4;
  DAT_0021d35c = DAT_0021d35c ^ 4;
  DAT_0021d35b = DAT_0021d35b ^ 4;
  DAT_0021d35a = DAT_0021d35a ^ 4;
  DAT_0021d359 = DAT_0021d359 ^ 4;
  DAT_0021d358 = DAT_0021d358 ^ 4;
  DAT_0021d35e = DAT_0021d35e ^ 4;
  DAT_0021f705 = '\x01';
  goto LAB_00148aa0;
}

