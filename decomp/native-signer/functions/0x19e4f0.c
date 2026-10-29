// rea decompile_all
// name: FUN_0019e4f0
// address: 0x19e4f0
// body: available
// range: 0x19e4f0-0x19f05b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0019e4f0(int *param_1,long *param_2,long param_3,long *param_4)

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
  
  lVar1 = 0x26af25bc6fd460b5;
  if (param_3 != 0) {
    lVar1 = 0xb799f093c4efe14;
  }
  lVar4 = -0x1cb32a10a3e827ff;
LAB_0019e60c:
  do {
    lVar3 = lVar4;
    lVar4 = lVar3;
    if (lVar3 < -0x74b619dcbc05677) {
      if (lVar3 < -0x385be54165883d04) {
        if (lVar3 < -0x4ef1c4cf114e6567) {
          if (lVar3 < -0x6dd7426346a9583e) {
            if (lVar3 == -0x7c1be96bc7c9017a) {
              lVar4 = -0x4ef1c4cf114e6567;
              if (unaff_x27 != 0) {
                lVar4 = -0x74b619dcbc05677;
              }
            }
            else if (lVar3 == -0x6fbeb3a2f33442d7) {
              *param_4 = 0;
              lVar4 = 0xf9a7126da0e97f1;
            }
          }
          else if (lVar3 == -0x6dd7426346a9583e) {
            iVar2 = FUN_00212730(0,1,&DAT_0021f7f0);
            lVar4 = -0xa24bd991c0613c6;
            if (iVar2 != 0) {
              lVar4 = 0x2b4c7e5329aefd4f;
            }
          }
          else if (lVar3 == -0x542d5b9ab41fc0e4) {
            DAT_0021d8c4 = DAT_0021d8c4 ^ 0x9c;
            DAT_0021d8c5 = DAT_0021d8c5 ^ 0x9c;
            DAT_0021d8c6 = DAT_0021d8c6 ^ 0x9c;
            DAT_0021d8c7 = DAT_0021d8c7 ^ 0x9c;
            DAT_0021d8c8 = DAT_0021d8c8 ^ 0x9c;
            DAT_0021f9c6 = '\x01';
            lVar4 = -0x22f9e5cde959517a;
          }
          goto LAB_0019e60c;
        }
        if (lVar3 < -0x4085271ed670b967) {
          if (lVar3 == -0x4ef1c4cf114e6567) {
            local_84 = 0x11;
            goto LAB_0019ef64;
          }
          if (lVar3 == -0x4ab9a1953bd0b20d) {
            lVar4 = -0x26817dced46bf0d1;
            if (DAT_0021f9c6 == '\0') {
              lVar4 = -0x542d5b9ab41fc0e4;
            }
          }
          goto LAB_0019e60c;
        }
        lVar4 = -0x385be54165883d04;
        if (lVar3 == -0x4085271ed670b967) goto LAB_0019e60c;
        if (lVar3 != -0x3ae10f8106957949) {
          lVar4 = lVar3;
          if (lVar3 == -0x3a4053244c71f751) {
            lVar4 = 0x369f9d835c96edf9;
          }
          goto LAB_0019e60c;
        }
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        local_74 = local_88;
      }
      else {
        if (lVar3 < -0x1d1ebe3b772ba247) {
          if (lVar3 < -0x22f9e5cde959517a) {
            if (lVar3 == -0x385be54165883d04) {
              DAT_0021f7f0 = 0;
              local_90 = (**(code **)(*param_2 + 0x108))
                                   (param_2,unaff_x27,&DAT_0021d8b8,&DAT_0021d8c4);
              lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
              lVar4 = 0x4b576d231f4c4af;
              if (lVar3 != 0) {
                lVar4 = 0x3ce10bd2fd0d0c42;
              }
            }
            else if (lVar3 == -0x26817dced46bf0d1) {
              lVar4 = -0x22f9e5cde959517a;
            }
          }
          else if (lVar3 == -0x22f9e5cde959517a) {
            DAT_0021f7f4 = 0;
            lVar4 = -0x6dd7426346a9583e;
          }
          else if (lVar3 == -0x1f455fc772ec1e0a) {
            (**(code **)(*param_2 + 0x80))(param_2);
            (**(code **)(*param_2 + 0x88))(param_2);
            lVar4 = 0x60c6458f70fdf2e2;
            if (unaff_x27 != 0) {
              lVar4 = 0x32cbfb1437f9c65b;
            }
            *param_1 = 0x11;
          }
          goto LAB_0019e60c;
        }
        if (lVar3 < -0x1bd5acd6b06033a9) {
          lVar4 = 0x3b54714f78c87612;
          if ((lVar3 != -0x1d1ebe3b772ba247) && (lVar4 = lVar3, lVar3 == -0x1cb32a10a3e827ff)) {
            lVar4 = lVar1;
          }
          goto LAB_0019e60c;
        }
        if (lVar3 != -0x1bd5acd6b06033a9) {
          if (lVar3 == -0xb8dcbe2181ea9f7) {
            *param_1 = local_84;
            lVar4 = -0x6fbeb3a2f33442d7;
          }
          else if (lVar3 == -0xa24bd991c0613c6) {
            lVar4 = -0x4085271ed670b967;
            if (DAT_0021f9c5 == '\0') {
              lVar4 = 0x1cfe4dfb0d75b170;
            }
          }
          goto LAB_0019e60c;
        }
        local_74 = 0x1b;
      }
LAB_0019e5f8:
      lVar4 = 0x3e8e9a229d65bef;
      goto LAB_0019e60c;
    }
    if (lVar3 < 0x2bd900dca7e9bae9) {
      if (lVar3 < 0xf9a7126da0e97f1) {
        if (lVar3 < 0x3e8e9a229d65bef) {
          lVar4 = 0x369f9d835c96edf9;
          if ((lVar3 != -0x74b619dcbc05677) && (lVar4 = lVar3, lVar3 == 0x1b1f3854e6cd7d0)) {
            lVar4 = -0x1bd5acd6b06033a9;
            if (*param_4 != 0) {
              lVar4 = -0x1d1ebe3b772ba247;
            }
          }
        }
        else if (lVar3 == 0x3e8e9a229d65bef) {
          *param_1 = local_74;
          lVar4 = 0x3b54714f78c87612;
        }
        else if (lVar3 == 0x4b576d231f4c4af) {
          lVar4 = 0x7924ea8b71413cb2;
          if (local_90 != 0) {
            lVar4 = 0x23457a8e1613cddf;
          }
        }
        else if (lVar3 == 0xb799f093c4efe14) {
          unaff_x27 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
          lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar4 = -0x7c1be96bc7c9017a;
          if (lVar3 != 0) {
            lVar4 = -0x1f455fc772ec1e0a;
          }
        }
      }
      else if (lVar3 < 0x26af25bc6fd460b5) {
        if (lVar3 == 0x1cfe4dfb0d75b170) {
          DAT_0021d8c0 = DAT_0021d8c0 ^ 0xd5;
          DAT_0021d8c1 = DAT_0021d8c1 ^ 0xd5;
          DAT_0021d8c2 = DAT_0021d8c2 ^ 0xd5;
          DAT_0021d8c3 = DAT_0021d8c3 ^ 0xd5;
          DAT_0021d8b8 = DAT_0021d8b8 ^ 0xd5d5d5d5d5d5d5d5;
          DAT_0021f9c5 = '\x01';
          lVar4 = -0x385be54165883d04;
        }
        else if (lVar3 == 0x23457a8e1613cddf) {
          lVar4 = (**(code **)(*param_2 + 0x110))(param_2,param_3,local_90);
          *param_4 = lVar4;
          lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar4 = 0x1b1f3854e6cd7d0;
          if (lVar3 != 0) {
            lVar4 = 0x3d84e01c604274bd;
          }
        }
        else if (lVar3 == 0xf9a7126da0e97f1) {
          return;
        }
      }
      else if (lVar3 == 0x26af25bc6fd460b5) {
        local_84 = 3;
LAB_0019ef64:
        lVar4 = -0xb8dcbe2181ea9f7;
      }
      else if (lVar3 == 0x2b4c7e5329aefd4f) {
        lVar4 = -0x6dd7426346a9583e;
      }
      goto LAB_0019e60c;
    }
    if (lVar3 < 0x3ce10bd2fd0d0c42) {
      if (lVar3 < 0x369f9d835c96edf9) {
        lVar4 = 0xf9a7126da0e97f1;
        if ((lVar3 != 0x2bd900dca7e9bae9) && (lVar4 = lVar3, lVar3 == 0x32cbfb1437f9c65b)) {
          lVar4 = 0x3b54714f78c87612;
        }
      }
      else if (lVar3 == 0x369f9d835c96edf9) {
        iVar2 = FUN_00212730(0,1,&DAT_0021f7f4);
        lVar4 = -0x4ab9a1953bd0b20d;
        if (iVar2 != 0) {
          lVar4 = -0x3a4053244c71f751;
        }
      }
      else if (lVar3 == 0x3b54714f78c87612) {
        (**(code **)(*param_2 + 0xb8))(param_2,unaff_x27);
        lVar4 = 0x2bd900dca7e9bae9;
        if (*param_1 != 0) {
          lVar4 = 0x69d8bfca6524b11d;
        }
      }
      goto LAB_0019e60c;
    }
    if (lVar3 < 0x60c6458f70fdf2e2) {
      if (lVar3 == 0x3ce10bd2fd0d0c42) {
        local_88 = 0x11;
      }
      else {
        if (lVar3 != 0x3d84e01c604274bd) goto LAB_0019e60c;
        local_88 = 0x1b;
      }
      lVar4 = -0x3ae10f8106957949;
      goto LAB_0019e60c;
    }
    lVar4 = -0x6fbeb3a2f33442d7;
    if (((lVar3 != 0x60c6458f70fdf2e2) && (lVar3 != 0x69d8bfca6524b11d)) &&
       (lVar4 = lVar3, lVar3 == 0x7924ea8b71413cb2)) {
      local_74 = 0x11;
      goto LAB_0019e5f8;
    }
  } while( true );
}

