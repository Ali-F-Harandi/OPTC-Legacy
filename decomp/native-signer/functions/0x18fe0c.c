// rea decompile_all
// name: FUN_0018fe0c
// address: 0x18fe0c
// body: available
// range: 0x18fe0c-0x1909bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0018fe0c(int *param_1,long *param_2,long param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x27;
  long local_90;
  int local_88;
  int local_84;
  int local_74;
  
  lVar1 = 0x6c53b7f23bd8197e;
  if (param_3 != 0) {
    lVar1 = -0x734567a119bfc6cb;
  }
  lVar4 = -0x3402d80c1c036ab5;
LAB_0018ff28:
  do {
    lVar3 = lVar4;
    lVar4 = lVar3;
    if (lVar3 < -0x18c522510761cbaf) {
      if (lVar3 < -0x50da7c4df1e2296b) {
        if (lVar3 < -0x71c2cfed19aea11f) {
          if (lVar3 < -0x740ffa5db660bfc4) {
            lVar4 = 0x3647e3366d517829;
            if ((lVar3 != -0x7baefb2c63782b3a) && (lVar4 = lVar3, lVar3 == -0x7898a018c23c0e73)) {
              local_88 = 0x11;
              goto LAB_001908d8;
            }
          }
          else if (lVar3 == -0x740ffa5db660bfc4) {
            *param_1 = local_74;
            lVar4 = 0x30fb9398ead65061;
          }
          else if (lVar3 == -0x734567a119bfc6cb) {
            unaff_x27 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
            lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar4 = -0x556d88aa4bc1f0e7;
            if (lVar3 != 0) {
              lVar4 = -0x50da7c4df1e2296b;
            }
          }
          goto LAB_0018ff28;
        }
        if (-0x69328f58fb79e86a < lVar3) {
          if (lVar3 == -0x69328f58fb79e869) {
            iVar2 = FUN_00212730(0,1,&DAT_0021f8f8);
            lVar4 = 0x360bde7043336cd1;
            if (iVar2 != 0) {
              lVar4 = -0x3f27a9072f05f006;
            }
          }
          else if (lVar3 == -0x628593b71adfef50) {
            lVar4 = 0x541a38fe766e0536;
            if (DAT_0021f9d7 == '\0') {
              lVar4 = -0x59bb24205359ae3;
            }
          }
          else if (lVar3 == -0x556d88aa4bc1f0e7) {
            lVar4 = 0x7cdec887c6be3f55;
            if (unaff_x27 != 0) {
              lVar4 = -0x4c1aa46b7e67815b;
            }
          }
          goto LAB_0018ff28;
        }
        if (lVar3 != -0x71c2cfed19aea11f) {
          if (lVar3 == -0x70de9c263ba1aea6) {
            lVar4 = -0x150be2d39fb0ddef;
          }
          goto LAB_0018ff28;
        }
        local_74 = 0x1b;
      }
      else {
        if (lVar3 < -0x3402d80c1c036ab5) {
          if (lVar3 < -0x44e0528419669501) {
            if (lVar3 == -0x50da7c4df1e2296b) {
              (**(code **)(*param_2 + 0x80))(param_2);
              (**(code **)(*param_2 + 0x88))(param_2);
              lVar4 = 0x7255e29735145109;
              if (unaff_x27 != 0) {
                lVar4 = 0x4ee01e5f5a193425;
              }
              *param_1 = 0x11;
            }
            else if (lVar3 == -0x4c1aa46b7e67815b) {
              lVar4 = -0x69328f58fb79e869;
            }
          }
          else {
            lVar4 = 0x30fb9398ead65061;
            if ((lVar3 != -0x44e0528419669501) && (lVar4 = lVar3, lVar3 == -0x3f27a9072f05f006)) {
              lVar4 = -0x69328f58fb79e869;
            }
          }
          goto LAB_0018ff28;
        }
        if (lVar3 < -0x2753c30d7363ac3a) {
          lVar4 = lVar1;
          if ((lVar3 != -0x3402d80c1c036ab5) && (lVar4 = lVar3, lVar3 == -0x2d1a3b095430b561)) {
            lVar4 = -0x71c2cfed19aea11f;
            if (*param_4 != 0) {
              lVar4 = -0x44e0528419669501;
            }
          }
          goto LAB_0018ff28;
        }
        if (lVar3 == -0x2753c30d7363ac3a) {
          DAT_0021e0a0 = DAT_0021e0a0 ^ 0xd;
          DAT_0021e0a1 = DAT_0021e0a1 ^ 0xd;
          DAT_0021e0a2 = DAT_0021e0a2 ^ 0xd;
          DAT_0021e0a4 = DAT_0021e0a4 ^ 0xd;
          DAT_0021e0a5 = DAT_0021e0a5 ^ 0xd;
          DAT_0021e0a3 = DAT_0021e0a3 ^ 0xd;
          DAT_0021e0a6 = DAT_0021e0a6 ^ 0xd;
          DAT_0021e098 = DAT_0021e098 ^ 0xd0d0d0d0d0d0d0d;
          DAT_0021fa05 = '\x01';
          lVar4 = 0x3647e3366d517829;
          goto LAB_0018ff28;
        }
        if (lVar3 == -0x1b765ab63ff9eef2) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          local_74 = local_88;
        }
        else {
          if (lVar3 != -0x1a80798c55f502d4) goto LAB_0018ff28;
          local_74 = 0x11;
        }
      }
      lVar4 = -0x740ffa5db660bfc4;
      goto LAB_0018ff28;
    }
    if (lVar3 < 0x34648656952d6215) {
      if (lVar3 < 0xdef46015ed616dc) {
        if (lVar3 < -0x59bb24205359ae3) {
          if (lVar3 == -0x18c522510761cbaf) {
            iVar2 = FUN_00212730(0,1,&DAT_0021f838);
            lVar4 = -0x628593b71adfef50;
            if (iVar2 != 0) {
              lVar4 = 0xcc4ae0ad9abff89;
            }
          }
          else if (lVar3 == -0x150be2d39fb0ddef) {
            *param_4 = 0;
            lVar4 = 0x34648656952d6215;
          }
        }
        else if (lVar3 == -0x59bb24205359ae3) {
          DAT_0021da70 = DAT_0021da70 ^ 0x38;
          DAT_0021da71 = DAT_0021da71 ^ 0x38;
          DAT_0021da72 = DAT_0021da72 ^ 0x38;
          DAT_0021da73 = DAT_0021da73 ^ 0x38;
          DAT_0021da74 = DAT_0021da74 ^ 0x38;
          _DAT_0021da60 = _DAT_0021da60 ^ 0x3838383838383838;
          uRam000000000021da68 = uRam000000000021da68 ^ 0x3838383838383838;
          DAT_0021f9d7 = '\x01';
          lVar4 = 0x322023fa146ac358;
        }
        else if (lVar3 == 0xcc4ae0ad9abff89) {
          lVar4 = -0x18c522510761cbaf;
        }
      }
      else if (lVar3 < 0x2ce3ba7a15650982) {
        if (lVar3 == 0xdef46015ed616dc) {
          local_88 = 0x1b;
LAB_001908d8:
          lVar4 = -0x1b765ab63ff9eef2;
        }
        else if (lVar3 == 0x23926b4931e4ddd9) {
          lVar4 = (**(code **)(*param_2 + 0x110))(param_2,param_3,local_90);
          *param_4 = lVar4;
          lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar4 = -0x2d1a3b095430b561;
          if (lVar3 != 0) {
            lVar4 = 0xdef46015ed616dc;
          }
        }
      }
      else if (lVar3 == 0x2ce3ba7a15650982) {
        lVar4 = -0x1a80798c55f502d4;
        if (local_90 != 0) {
          lVar4 = 0x23926b4931e4ddd9;
        }
      }
      else if (lVar3 == 0x30fb9398ead65061) {
        (**(code **)(*param_2 + 0xb8))(param_2,unaff_x27);
        lVar4 = 0x3d437eeae255edfe;
        if (*param_1 != 0) {
          lVar4 = -0x70de9c263ba1aea6;
        }
      }
      else if (lVar3 == 0x322023fa146ac358) {
        DAT_0021f838 = 0;
        local_90 = (**(code **)(*param_2 + 0x108))(param_2,unaff_x27,&DAT_0021e098,&DAT_0021da60);
        lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar4 = 0x2ce3ba7a15650982;
        if (lVar3 != 0) {
          lVar4 = -0x7898a018c23c0e73;
        }
      }
      goto LAB_0018ff28;
    }
    if (0x4ee01e5f5a193424 < lVar3) {
      if (lVar3 < 0x6c53b7f23bd8197e) {
        lVar4 = 0x30fb9398ead65061;
        if ((lVar3 != 0x4ee01e5f5a193425) && (lVar4 = lVar3, lVar3 == 0x541a38fe766e0536)) {
          lVar4 = 0x322023fa146ac358;
        }
        goto LAB_0018ff28;
      }
      if (lVar3 == 0x6c53b7f23bd8197e) {
        local_84 = 3;
      }
      else {
        lVar4 = -0x150be2d39fb0ddef;
        if ((lVar3 == 0x7255e29735145109) || (lVar4 = lVar3, lVar3 != 0x7cdec887c6be3f55))
        goto LAB_0018ff28;
        local_84 = 0x11;
      }
      lVar4 = 0x4581287ce2b2c74d;
      goto LAB_0018ff28;
    }
    if (lVar3 < 0x3d437eeae255edfe) {
      if (lVar3 == 0x360bde7043336cd1) {
        lVar4 = -0x7baefb2c63782b3a;
        if (DAT_0021fa05 == '\0') {
          lVar4 = -0x2753c30d7363ac3a;
        }
      }
      else if (lVar3 == 0x3647e3366d517829) {
        DAT_0021f8f8 = 0;
        lVar4 = -0x18c522510761cbaf;
      }
      else if (lVar3 == 0x34648656952d6215) {
        return;
      }
    }
    else {
      lVar4 = 0x34648656952d6215;
      if ((lVar3 != 0x3d437eeae255edfe) && (lVar4 = lVar3, lVar3 == 0x4581287ce2b2c74d)) {
        *param_1 = local_84;
        lVar4 = -0x150be2d39fb0ddef;
      }
    }
  } while( true );
}

