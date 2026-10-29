// rea decompile_all
// name: FUN_00195a84
// address: 0x195a84
// body: available
// range: 0x195a84-0x1965d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00195a84(int *param_1,long *param_2,long param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x27;
  long local_88;
  int local_80;
  int local_7c;
  int local_6c;
  
  lVar1 = 0x6e35d39d91507b1d;
  if (param_3 != 0) {
    lVar1 = -0x119120f13bff4c9e;
  }
  lVar4 = 0xa18d0d32a9117c8;
LAB_00195ba0:
  do {
    while (lVar3 = lVar4, lVar4 = lVar3, lVar3 < 0x6e202156fd348ce) {
      if (lVar3 < -0x193680af91dec1cf) {
        if (lVar3 < -0x578594bb223808b4) {
          if (lVar3 < -0x61890485beeddb76) {
            lVar4 = 0x46695213b8895bc6;
            if ((lVar3 != -0x6df5c611c3cdcd86) && (lVar4 = lVar3, lVar3 == -0x6537cd062662e11a)) {
              DAT_0021f934 = 0;
              lVar4 = 0x6e202156fd348ce;
            }
          }
          else {
            lVar4 = -0x46ebd6ab40c8fd09;
            if ((lVar3 != -0x61890485beeddb76) && (lVar4 = lVar3, lVar3 == -0x57bf3d08bc3763e2)) {
              DAT_0021e288 = ~DAT_0021e288;
              DAT_0021e289 = ~DAT_0021e289;
              DAT_0021e28a = ~DAT_0021e28a;
              DAT_0021e28b = ~DAT_0021e28b;
              DAT_0021e280 = CONCAT17(~(byte)((ulong)DAT_0021e280 >> 0x38),
                                      CONCAT16(~(byte)((ulong)DAT_0021e280 >> 0x30),
                                               CONCAT15(~(byte)((ulong)DAT_0021e280 >> 0x28),
                                                        CONCAT14(~(byte)((ulong)DAT_0021e280 >> 0x20
                                                                        ),CONCAT13(~(byte)((ulong)
                                                  DAT_0021e280 >> 0x18),
                                                  CONCAT12(~(byte)((ulong)DAT_0021e280 >> 0x10),
                                                           CONCAT11(~(byte)((ulong)DAT_0021e280 >> 8
                                                                           ),~(byte)DAT_0021e280))))
                                                  )));
              DAT_0021fa13 = '\x01';
              lVar4 = 0x3e51e4b6291bea0;
            }
          }
        }
        else if (lVar3 < -0x34434486eeb04da6) {
          if (lVar3 == -0x578594bb223808b4) {
            lVar4 = 0x20fc03a23bd2b6cc;
            if (DAT_0021fa13 == '\0') {
              lVar4 = -0x57bf3d08bc3763e2;
            }
          }
          else if (lVar3 == -0x46ebd6ab40c8fd09) {
            *param_4 = 0;
            lVar4 = 0x36e0def00706dcd8;
          }
        }
        else if (lVar3 == -0x34434486eeb04da6) {
          *param_1 = local_6c;
          lVar4 = 0x5b3e00137363b623;
        }
        else if (lVar3 == -0x29e24627b41fdc61) {
          lVar4 = -0xeab2a2c77676fc9;
          if (unaff_x27 != 0) {
            lVar4 = -0x6df5c611c3cdcd86;
          }
        }
        else if (lVar3 == -0x21c89b5d578ba2e8) {
          lVar4 = 0x6e202156fd348ce;
        }
      }
      else if (lVar3 < -0xf6dfedc0344244) {
        if (lVar3 < -0x108e783a983b623d) {
          if (lVar3 == -0x193680af91dec1cf) {
            lVar4 = (**(code **)(*param_2 + 0x2f8))(param_2,param_3,local_88);
            *param_4 = lVar4;
            lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar4 = -0x108e783a983b623d;
            if (lVar3 != 0) {
              lVar4 = 0x1729d5e4bf3ba9a5;
            }
          }
          else if (lVar3 == -0x119120f13bff4c9e) {
            unaff_x27 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
            lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar4 = -0x29e24627b41fdc61;
            if (lVar3 != 0) {
              lVar4 = 0x55536219551f45;
            }
          }
        }
        else if (lVar3 == -0x108e783a983b623d) {
          lVar4 = 0x2bef79588c25b284;
          if (*param_4 != 0) {
            lVar4 = 0x2273fdf57e9c1f3a;
          }
        }
        else if (lVar3 == -0xeab2a2c77676fc9) {
          local_7c = 0x11;
LAB_0019632c:
          lVar4 = 0x2d45ddb959f05951;
        }
      }
      else if (lVar3 < 0x25ec24d3cec37a6) {
        if (lVar3 == -0xf6dfedc0344244) {
          local_80 = 0x11;
LAB_00196504:
          lVar4 = 0x33cb6bebebf6f44b;
        }
        else if (lVar3 == 0x55536219551f45) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          lVar4 = 0x25ec24d3cec37a6;
          if (unaff_x27 != 0) {
            lVar4 = 0x43b5eeafd2e1ff93;
          }
          *param_1 = 0x11;
        }
      }
      else {
        lVar4 = -0x46ebd6ab40c8fd09;
        if (lVar3 != 0x25ec24d3cec37a6) {
          if (lVar3 == 0x3e51e4b6291bea0) {
            DAT_0021f930 = 0;
            local_88 = (**(code **)(*param_2 + 0x2f0))
                                 (param_2,unaff_x27,&DAT_0021e280,&DAT_0021e290);
            lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar4 = 0x2b076ac9ee8eb2d4;
            if (lVar3 != 0) {
              lVar4 = -0xf6dfedc0344244;
            }
          }
          else {
            lVar4 = lVar3;
            if (lVar3 == 0x4bb92aa8fd87d9f) {
              lVar4 = 0x46695213b8895bc6;
            }
          }
        }
      }
    }
    if (lVar3 < 0x33cb6bebebf6f44b) {
      if (lVar3 < 0x20fc03a23bd2b6cc) {
        if (lVar3 < 0x1252adc4bf08f935) {
          if (lVar3 == 0x6e202156fd348ce) {
            iVar2 = FUN_00212730(0,1,&DAT_0021f930);
            lVar4 = -0x578594bb223808b4;
            if (iVar2 != 0) {
              lVar4 = -0x21c89b5d578ba2e8;
            }
          }
          else if (lVar3 == 0xa18d0d32a9117c8) {
            lVar4 = lVar1;
          }
        }
        else if (lVar3 == 0x1252adc4bf08f935) {
          _DAT_0021e290 = _DAT_0021e290 ^ 0x101010101010101;
          uRam000000000021e298 = uRam000000000021e298 ^ 0x101010101010101;
          _DAT_0021e2a0 = _DAT_0021e2a0 ^ 0x101010101010101;
          uRam000000000021e2a8 = uRam000000000021e2a8 ^ 0x101010101010101;
          DAT_0021e2b0 = DAT_0021e2b0 ^ 1;
          DAT_0021fa14 = '\x01';
          lVar4 = -0x6537cd062662e11a;
        }
        else if (lVar3 == 0x1729d5e4bf3ba9a5) {
          local_80 = 0x1b;
          goto LAB_00196504;
        }
      }
      else if (lVar3 < 0x2b076ac9ee8eb2d4) {
        lVar4 = 0x3e51e4b6291bea0;
        if ((lVar3 != 0x20fc03a23bd2b6cc) && (lVar4 = lVar3, lVar3 == 0x2273fdf57e9c1f3a)) {
          lVar4 = 0x5b3e00137363b623;
        }
      }
      else if (lVar3 == 0x2b076ac9ee8eb2d4) {
        lVar4 = 0x3c6047a73784c8dd;
        if (local_88 != 0) {
          lVar4 = -0x193680af91dec1cf;
        }
      }
      else {
        if (lVar3 == 0x2bef79588c25b284) {
          local_6c = 0x1b;
          goto LAB_00195b8c;
        }
        if (lVar3 == 0x2d45ddb959f05951) {
          *param_1 = local_7c;
          lVar4 = -0x46ebd6ab40c8fd09;
        }
      }
      goto LAB_00195ba0;
    }
    if (lVar3 < 0x58a9e2f33cee85af) {
      if (lVar3 < 0x43b5eeafd2e1ff93) {
        if (lVar3 == 0x33cb6bebebf6f44b) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          local_6c = local_80;
LAB_00195b8c:
          lVar4 = -0x34434486eeb04da6;
        }
        else {
          if (lVar3 == 0x3c6047a73784c8dd) {
            local_6c = 0x11;
            goto LAB_00195b8c;
          }
          if (lVar3 == 0x36e0def00706dcd8) {
            return;
          }
        }
      }
      else {
        lVar4 = 0x5b3e00137363b623;
        if ((lVar3 != 0x43b5eeafd2e1ff93) && (lVar4 = lVar3, lVar3 == 0x46695213b8895bc6)) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f934);
          lVar4 = 0x6c05945b101f2e8a;
          if (iVar2 != 0) {
            lVar4 = 0x4bb92aa8fd87d9f;
          }
        }
      }
    }
    else if (lVar3 < 0x6c05945b101f2e8a) {
      lVar4 = 0x36e0def00706dcd8;
      if ((lVar3 != 0x58a9e2f33cee85af) && (lVar4 = lVar3, lVar3 == 0x5b3e00137363b623)) {
        (**(code **)(*param_2 + 0xb8))(param_2,unaff_x27);
        lVar4 = 0x58a9e2f33cee85af;
        if (*param_1 != 0) {
          lVar4 = -0x61890485beeddb76;
        }
      }
    }
    else if (lVar3 == 0x6c05945b101f2e8a) {
      lVar4 = 0x7c549ef106217fb9;
      if (DAT_0021fa14 == '\0') {
        lVar4 = 0x1252adc4bf08f935;
      }
    }
    else {
      if (lVar3 == 0x6e35d39d91507b1d) {
        local_7c = 3;
        goto LAB_0019632c;
      }
      if (lVar3 == 0x7c549ef106217fb9) {
        lVar4 = -0x6537cd062662e11a;
      }
    }
  } while( true );
}

