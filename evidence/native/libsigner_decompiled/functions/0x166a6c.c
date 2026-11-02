// rea decompile_all
// name: FUN_00166a6c
// address: 0x166a6c
// body: available
// range: 0x166a6c-0x168cc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x168cc0 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00166a6c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  int unaff_w21;
  undefined1 *unaff_x25;
  undefined1 auStack_c0 [8];
  long local_b8;
  undefined8 local_b0;
  int local_a4;
  undefined8 local_a0;
  long local_98;
  
  local_b8 = tpidr_el0;
  local_98 = *(long *)(local_b8 + 0x28);
  puVar2 = auStack_c0;
  lVar1 = -0x303abd89a1f3add0;
  local_b0 = param_2;
  local_a0 = param_1;
LAB_00166b94:
  lVar4 = lVar1;
  lVar1 = lVar4;
  if (lVar4 < -0x941b68420e51a23) {
    if (lVar4 < -0x3c6129f05cda04cd) {
      if (lVar4 < -0x61d62e26988ffb3b) {
        if (lVar4 < -0x7742a0a0d69437fd) {
          if (lVar4 < -0x7e611ab186679ddc) {
            if (lVar4 == -0x7f4420e48e37485d) {
              DAT_0021f610 = 0;
              FUN_001b0700(&DAT_0021d770,unaff_x25);
              lVar4 = FUN_001e5154(unaff_x25);
              param_3[7] = lVar4;
              lVar1 = -0x161410237f6dbec8;
              if (lVar4 != 0) {
                lVar1 = -0x69ccb84ce703bc62;
              }
            }
            else {
              lVar1 = -0x2ea663b2baadd76a;
              if ((lVar4 != -0x7f01610d05452ea7) && (lVar1 = lVar4, lVar4 == -0x7eb887f3b40ef682)) {
                lVar1 = 0x77cdbdb56e772635;
              }
            }
          }
          else {
            if (lVar4 == -0x7e611ab186679ddc) goto LAB_00166b80;
            lVar1 = 0xc19b80e07e8f1f6;
            if ((lVar4 != -0x78afe3f073d4811f) && (lVar1 = lVar4, lVar4 == -0x774402cb9db37c60)) {
              lVar1 = 0x2af0e8d37ca9a4d5;
              if (DAT_0021f676 == '\0') {
                lVar1 = -0x4489bc4d530536af;
              }
            }
          }
        }
        else if (lVar4 < -0x706ef5c0d33fd081) {
          if (lVar4 == -0x7742a0a0d69437fd) {
            lVar1 = -0x941b68420e51a23;
            if (DAT_0021f73a == '\0') {
              lVar1 = -0x52c18a31b520385b;
            }
          }
          else if (lVar4 == -0x73e46706e1d63c99) {
            lVar1 = 0x29cb26ec66bb707e;
            if (DAT_0021f73b == '\0') {
              lVar1 = -0x161e91622771b457;
            }
          }
          else if (lVar4 == -0x714f922f0b359886) {
            DAT_0021f2dc = 0;
            FUN_001b0700(&DAT_0021c690,unaff_x25);
            lVar4 = FUN_001e5154(unaff_x25);
            param_3[4] = lVar4;
            lVar1 = 0x4079cb867a494593;
            if (lVar4 != 0) {
              lVar1 = -0x67736af9ba34b790;
            }
          }
        }
        else if (lVar4 < -0x69ccb84ce703bc62) {
          if (lVar4 == -0x706ef5c0d33fd081) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f2c0);
            lVar1 = 0x14dd8f219130b897;
            if (iVar3 != 0) {
              lVar1 = -0x5ad3d0ffb2a13b1d;
            }
          }
          else if (lVar4 == -0x704a2472f83730bf) {
            DAT_0021d7a0 = DAT_0021d7a0 ^ 0x12;
            DAT_0021d7a1 = DAT_0021d7a1 ^ 0x12;
            DAT_0021d7a2 = DAT_0021d7a2 ^ 0x12;
            DAT_0021d7a3 = DAT_0021d7a3 ^ 0x12;
            DAT_0021d7a4 = DAT_0021d7a4 ^ 0x12;
            DAT_0021d7a5 = DAT_0021d7a5 ^ 0x12;
            DAT_0021d7a6 = DAT_0021d7a6 ^ 0x12;
            _DAT_0021d790 = _DAT_0021d790 ^ 0x1212121212121212;
            uRam000000000021d798 = uRam000000000021d798 ^ 0x1212121212121212;
            DAT_0021f73c = '\x01';
            lVar1 = 0x2230386da4788946;
          }
        }
        else {
          lVar1 = 0x5d8731b3d7758644;
          if ((lVar4 != -0x69ccb84ce703bc62) && (lVar1 = lVar4, lVar4 == -0x67736af9ba34b790)) {
            lVar1 = -0x3c6129f05cda04cd;
          }
        }
        goto LAB_00166b94;
      }
      if (lVar4 < -0x4ccc5b7169e9ed92) {
        if (lVar4 < -0x57352733c3e69166) {
          if (lVar4 == -0x61d62e26988ffb3b) {
            DAT_0021f2b8 = 0;
            FUN_001b0700(&DAT_0021c600,unaff_x25);
            lVar4 = FUN_001e5154(unaff_x25);
            param_3[1] = lVar4;
            lVar1 = -0x32ac0dd0c4c8214d;
            if (lVar4 != 0) {
              lVar1 = 0x36ab101a6561b810;
            }
          }
          else {
            lVar1 = -0x2b6c491772a3fa63;
            if ((lVar4 != -0x614074341a7c2138) && (lVar1 = lVar4, lVar4 == -0x5ad3d0ffb2a13b1d)) {
              lVar1 = -0x706ef5c0d33fd081;
            }
          }
        }
        else if (lVar4 < -0x52c18a31b520385b) {
          if (lVar4 == -0x57352733c3e69166) {
            DAT_0021c5e0 = DAT_0021c5e0 ^ 0x3b;
            DAT_0021c5e1 = DAT_0021c5e1 ^ 0x3b;
            DAT_0021c5e2 = DAT_0021c5e2 ^ 0x3b;
            DAT_0021c5e3 = DAT_0021c5e3 ^ 0x3b;
            DAT_0021c5e4 = DAT_0021c5e4 ^ 0x3b;
            DAT_0021c5e5 = DAT_0021c5e5 ^ 0x3b;
            DAT_0021c5d8 = DAT_0021c5d8 ^ 0x3b3b3b3b3b3b3b3b;
            DAT_0021f664 = '\x01';
            lVar1 = 0x4909e14080d5a13b;
          }
          else if (lVar4 == -0x54a8774d8fed41e8) {
            lVar1 = -0x3c6129f05cda04cd;
          }
        }
        else if (lVar4 == -0x52c18a31b520385b) {
          DAT_0021d778 = DAT_0021d778 ^ 0xb9;
          DAT_0021d779 = DAT_0021d779 ^ 0xb9;
          DAT_0021d77a = DAT_0021d77a ^ 0xb9;
          DAT_0021d77b = DAT_0021d77b ^ 0xb9;
          DAT_0021d77c = DAT_0021d77c ^ 0xb9;
          DAT_0021d77d = DAT_0021d77d ^ 0xb9;
          DAT_0021d770 = DAT_0021d770 ^ 0xb9b9b9b9b9b9b9b9;
          DAT_0021f73a = '\x01';
          lVar1 = -0x7f4420e48e37485d;
        }
        else if (lVar4 == -0x4d7b05f2a61075c4) {
          lVar1 = 0x37d56ecb9b95aa54;
        }
        goto LAB_00166b94;
      }
      if (lVar4 < -0x455ba9373813b855) {
        if (lVar4 == -0x4ccc5b7169e9ed92) {
          iVar3 = FUN_00212730(0,1,&DAT_0021f2dc);
          lVar1 = 0x50f03b2fd0083b81;
          if (iVar3 != 0) {
            lVar1 = 0x18860ed42d7290d7;
          }
        }
        else if (lVar4 == -0x49f87de42f8c2738) {
          DAT_0021c5c0 = DAT_0021c5c0 ^ 0xc5;
          DAT_0021c5c1 = DAT_0021c5c1 ^ 0xc5;
          DAT_0021c5c2 = DAT_0021c5c2 ^ 0xc5;
          DAT_0021c5c3 = DAT_0021c5c3 ^ 0xc5;
          DAT_0021c5c4 = DAT_0021c5c4 ^ 0xc5;
          DAT_0021c5c5 = DAT_0021c5c5 ^ 0xc5;
          DAT_0021c5b8 = DAT_0021c5b8 ^ 0xc5c5c5c5c5c5c5c5;
          DAT_0021f661 = '\x01';
          lVar1 = 0xdc992783f7e3dc3;
        }
        else if (lVar4 == -0x4962e84dc357e60f) {
          lVar1 = -0x61d62e26988ffb3b;
        }
        goto LAB_00166b94;
      }
      if (-0x4489bc4d530536b0 < lVar4) {
        if (lVar4 == -0x4489bc4d530536af) {
          _DAT_0021c700 = _DAT_0021c700 ^ 0xfdfdfdfdfdfdfdfd;
          uRam000000000021c708 = uRam000000000021c708 ^ 0xfdfdfdfdfdfdfdfd;
          DAT_0021f676 = '\x01';
          lVar1 = 0x7bc8b2c5397bdd06;
        }
        else if (lVar4 == -0x4089dea98ab7888e) {
          lVar1 = 0x7c07b73418bc4d2a;
        }
        goto LAB_00166b94;
      }
      if (lVar4 != -0x455ba9373813b855) {
        if (lVar4 == -0x44d8666a4db3f783) {
          lVar1 = -0x25ce92c861ab4a80;
          unaff_w21 = local_a4;
        }
        goto LAB_00166b94;
      }
    }
    else {
      if (-0x2a5e0b9f19826eff < lVar4) {
        if (lVar4 < -0x1762cbbe063ba853) {
          if (lVar4 < -0x208f09eeefd14921) {
            if (lVar4 < -0x25ce92c861ab4a80) {
              if (lVar4 == -0x2a5e0b9f19826efe) goto LAB_00166b80;
              if (lVar4 == -0x27dfc68da6478aac) {
                DAT_0021c6a0 = DAT_0021c6a0 ^ 0x27;
                DAT_0021c6a1 = DAT_0021c6a1 ^ 0x27;
                _DAT_0021c690 = _DAT_0021c690 ^ 0x2727272727272727;
                uRam000000000021c698 = uRam000000000021c698 ^ 0x2727272727272727;
                DAT_0021f670 = '\x01';
                lVar1 = -0x714f922f0b359886;
              }
            }
            else {
              lVar1 = 0xdc992783f7e3dc3;
              if ((lVar4 != -0x21c3c6a7474390f8) && (lVar1 = lVar4, lVar4 == -0x25ce92c861ab4a80)) {
                if (*(long *)(local_b8 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
                }
                return unaff_w21;
              }
            }
          }
          else if (lVar4 == -0x208f09eeefd14921) {
            lVar1 = 0x619cdac13510d3a1;
            if (DAT_0021f68a == '\0') {
              lVar1 = 0x1f9d070d39ebc17c;
            }
          }
          else if (lVar4 == -0x1f8c95ce01d2f09c) {
            lVar1 = 0x5a56d41964610296;
            if (DAT_0021f73c == '\0') {
              lVar1 = -0x704a2472f83730bf;
            }
          }
          else if (lVar4 == -0x1d59ccd4c665ab21) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f2f4);
            lVar1 = -0x774402cb9db37c60;
            if (iVar3 != 0) {
              lVar1 = 0x750b73afc6210d18;
            }
          }
        }
        else if (lVar4 < -0x161e91622771b457) {
          lVar1 = -0x34349a6daf33c54d;
          if (((lVar4 != -0x1762cbbe063ba853) &&
              (lVar1 = 0x5d8731b3d7758644, lVar4 != -0x17401c2c9dabb109)) &&
             (lVar1 = lVar4, lVar4 == -0x162af40c684be352)) {
            lVar1 = -0x309a93cc3cccc953;
          }
        }
        else if (lVar4 < -0x14659e50011e82ae) {
          if (lVar4 == -0x161e91622771b457) {
            DAT_0021d788 = DAT_0021d788 ^ 0x5a;
            DAT_0021d789 = DAT_0021d789 ^ 0x5a;
            DAT_0021d78a = DAT_0021d78a ^ 0x5a;
            DAT_0021d78b = DAT_0021d78b ^ 0x5a;
            DAT_0021d78c = DAT_0021d78c ^ 0x5a;
            DAT_0021d78d = DAT_0021d78d ^ 0x5a;
            DAT_0021d780 = DAT_0021d780 ^ 0x5a5a5a5a5a5a5a5a;
            DAT_0021f73b = '\x01';
            lVar1 = 0x48c24bb63ca86e0e;
          }
          else if (lVar4 == -0x161410237f6dbec8) goto LAB_00166b80;
        }
        else if (lVar4 == -0x14659e50011e82ae) {
          iVar3 = FUN_00212730(0,1,&DAT_0021f610);
          lVar1 = -0x7742a0a0d69437fd;
          if (iVar3 != 0) {
            lVar1 = 0xf18d59936500668;
          }
        }
        else if (lVar4 == -0x12a200d9f40afe52) {
          iVar3 = FUN_00212730(0,1,&DAT_0021f2ac);
          lVar1 = -0x37dd4636a2ce593f;
          if (iVar3 != 0) {
            lVar1 = -0x6efbd5909ca67ba;
          }
        }
        goto LAB_00166b94;
      }
      if (lVar4 < -0x32ac0dd0c4c8214d) {
        if (lVar4 < -0x34bde270406bf65e) {
          if (lVar4 == -0x3c6129f05cda04cd) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f344);
            lVar1 = -0x208f09eeefd14921;
            if (iVar3 != 0) {
              lVar1 = -0x54a8774d8fed41e8;
            }
          }
          else {
            lVar1 = -0x309a93cc3cccc953;
            if ((lVar4 != -0x385adb4fbd9464cc) && (lVar1 = lVar4, lVar4 == -0x37dd4636a2ce593f)) {
              lVar1 = 0x2157c24d565f4e93;
              if (DAT_0021f664 == '\0') {
                lVar1 = -0x57352733c3e69166;
              }
            }
          }
        }
        else if (lVar4 == -0x34bde270406bf65e) {
          DAT_0021c680 = DAT_0021c680 ^ 0x14;
          _DAT_0021c670 = _DAT_0021c670 ^ 0x1414141414141414;
          uRam000000000021c678 = uRam000000000021c678 ^ 0x1414141414141414;
          DAT_0021f66e = '\x01';
          lVar1 = 0x58e3a6d3a3d8bdc8;
        }
        else if (lVar4 == -0x34a01e26370752e4) {
          local_a4 = FUN_00168cc4(local_a0,local_b0,param_3);
          lVar1 = 0x33b06952ca4f1520;
          if (local_a4 != 0) {
            lVar1 = -0x44d8666a4db3f783;
          }
        }
        else if (lVar4 == -0x34349a6daf33c54d) {
          DAT_0021f300 = 0;
          FUN_001b0700(&DAT_0021c730,unaff_x25);
          lVar4 = FUN_001e5154(unaff_x25);
          param_3[6] = lVar4;
          lVar1 = 0x52a8bc453f1de1c5;
          if (lVar4 != 0) {
            lVar1 = 0x6549eab510274099;
          }
        }
        goto LAB_00166b94;
      }
      if (lVar4 < -0x2f9d5809356650ec) {
        if (lVar4 == -0x32ac0dd0c4c8214d) goto LAB_00166b80;
        if (lVar4 == -0x309a93cc3cccc953) {
          iVar3 = FUN_00212730(0,1,&DAT_0021f618);
          lVar1 = -0x1f8c95ce01d2f09c;
          if (iVar3 != 0) {
            lVar1 = -0x162af40c684be352;
          }
        }
        else if (lVar4 == -0x303abd89a1f3add0) {
          lVar1 = -0x12a200d9f40afe52;
        }
        goto LAB_00166b94;
      }
      if (-0x2db8042d00acb973 < lVar4) {
        if (lVar4 == -0x2db8042d00acb972) {
          DAT_0021f290 = 0;
          FUN_001b0700(&DAT_0021c598,unaff_x25);
          lVar4 = FUN_001e5154(unaff_x25);
          param_3[8] = lVar4;
          lVar1 = -0x7e611ab186679ddc;
          if (lVar4 != 0) {
            lVar1 = -0x385adb4fbd9464cc;
          }
        }
        else if (lVar4 == -0x2b6c491772a3fa63) {
          iVar3 = FUN_00212730(0,1,&DAT_0021f300);
          lVar1 = 0x3dbcee7e8a0b99d9;
          if (iVar3 != 0) {
            lVar1 = -0x6edde28f64cbb3;
          }
        }
        goto LAB_00166b94;
      }
      if (lVar4 != -0x2f9d5809356650ec) {
        if (lVar4 == -0x2ea663b2baadd76a) {
          iVar3 = FUN_00212730(0,1,&DAT_0021f290);
          lVar1 = 0x31e56fc416edf48f;
          if (iVar3 != 0) {
            lVar1 = -0x7f01610d05452ea7;
          }
        }
        goto LAB_00166b94;
      }
    }
  }
  else if (lVar4 < 0x4909e14080d5a13b) {
    if (lVar4 < 0x2157c24d565f4e93) {
      if (lVar4 < 0xdc992783f7e3dc3) {
        if (lVar4 < 0x18844b270522d2a) {
          lVar1 = -0x7f4420e48e37485d;
          if (((lVar4 != -0x941b68420e51a23) &&
              (lVar1 = -0x12a200d9f40afe52, lVar4 != -0x6efbd5909ca67ba)) &&
             (lVar1 = lVar4, lVar4 == -0x6edde28f64cbb3)) {
            lVar1 = -0x2b6c491772a3fa63;
          }
        }
        else if (lVar4 == 0x18844b270522d2a) {
          lVar1 = -0x21c3c6a7474390f8;
          if (DAT_0021f661 == '\0') {
            lVar1 = -0x49f87de42f8c2738;
          }
        }
        else {
          lVar1 = 0x37d56ecb9b95aa54;
          if ((lVar4 != 0xc0c0d57302168c0) && (lVar1 = lVar4, lVar4 == 0xc19b80e07e8f1f6)) {
            DAT_0021f2c0 = 0;
            FUN_001b0700(&DAT_0021c620,unaff_x25);
            lVar4 = FUN_001e5154(unaff_x25);
            param_3[3] = lVar4;
            lVar1 = 0xe095f9aa7371dfd;
            if (lVar4 != 0) {
              lVar1 = 0x5dc4ca00664766d5;
            }
          }
        }
        goto LAB_00166b94;
      }
      if (lVar4 < 0x14dd8f219130b897) {
        if (lVar4 == 0xdc992783f7e3dc3) {
          DAT_0021f2a0 = 0;
          FUN_001b0700(&DAT_0021c5b8,unaff_x25);
          lVar4 = FUN_001e5154(unaff_x25);
          param_3[0xb] = lVar4;
          lVar1 = -0x2f9d5809356650ec;
          if (lVar4 != 0) {
            lVar1 = -0x614074341a7c2138;
          }
          goto LAB_00166b94;
        }
        if (lVar4 != 0xe095f9aa7371dfd) {
          if (lVar4 == 0xf18d59936500668) {
            lVar1 = -0x14659e50011e82ae;
          }
          goto LAB_00166b94;
        }
      }
      else {
        if (lVar4 < 0x1f9d070d39ebc17c) {
          if (lVar4 == 0x14dd8f219130b897) {
            lVar1 = -0x78afe3f073d4811f;
            if (DAT_0021f669 == '\0') {
              lVar1 = 0x66478b0308ae5c73;
            }
          }
          else if (lVar4 == 0x18860ed42d7290d7) {
            lVar1 = -0x4ccc5b7169e9ed92;
          }
          goto LAB_00166b94;
        }
        if (lVar4 == 0x1f9d070d39ebc17c) {
          DAT_0021c880 = ~DAT_0021c880;
          DAT_0021c881 = ~DAT_0021c881;
          DAT_0021c882 = ~DAT_0021c882;
          DAT_0021c883 = ~DAT_0021c883;
          _DAT_0021c870 =
               CONCAT17(~(byte)((ulong)_DAT_0021c870 >> 0x38),
                        CONCAT16(~(byte)((ulong)_DAT_0021c870 >> 0x30),
                                 CONCAT15(~(byte)((ulong)_DAT_0021c870 >> 0x28),
                                          CONCAT14(~(byte)((ulong)_DAT_0021c870 >> 0x20),
                                                   CONCAT13(~(byte)((ulong)_DAT_0021c870 >> 0x18),
                                                            CONCAT12(~(byte)((ulong)_DAT_0021c870 >>
                                                                            0x10),
                                                                     CONCAT11(~(byte)((ulong)
                                                  _DAT_0021c870 >> 8),~(byte)_DAT_0021c870)))))));
          uRam000000000021c878 =
               CONCAT17(~(byte)((ulong)uRam000000000021c878 >> 0x38),
                        CONCAT16(~(byte)((ulong)uRam000000000021c878 >> 0x30),
                                 CONCAT15(~(byte)((ulong)uRam000000000021c878 >> 0x28),
                                          CONCAT14(~(byte)((ulong)uRam000000000021c878 >> 0x20),
                                                   CONCAT13(~(byte)((ulong)uRam000000000021c878 >>
                                                                   0x18),
                                                            CONCAT12(~(byte)((ulong)
                                                  uRam000000000021c878 >> 0x10),
                                                  CONCAT11(~(byte)((ulong)uRam000000000021c878 >> 8)
                                                           ,~(byte)uRam000000000021c878)))))));
          DAT_0021f68a = '\x01';
          lVar1 = 0x662571078ec648ed;
          goto LAB_00166b94;
        }
        if (lVar4 != 0x2125ce75f102d571) goto LAB_00166b94;
      }
    }
    else if (lVar4 < 0x33b06952ca4f1520) {
      if (lVar4 < 0x29cb26ec66bb707e) {
        lVar1 = 0x4909e14080d5a13b;
        if (lVar4 != 0x2157c24d565f4e93) {
          if (lVar4 == 0x2230386da4788946) {
            DAT_0021f618 = 0;
            FUN_001b0700(&DAT_0021d790,unaff_x25);
            lVar4 = FUN_001e5154(unaff_x25);
            param_3[0xd] = lVar4;
            lVar1 = -0x455ba9373813b855;
            if (lVar4 != 0) {
              lVar1 = -0x34a01e26370752e4;
            }
          }
          else {
            lVar1 = lVar4;
            if (lVar4 == 0x27612d190e67ae5a) {
              lVar1 = -0x1d59ccd4c665ab21;
            }
          }
        }
        goto LAB_00166b94;
      }
      if (lVar4 < 0x2fe14205c4538a18) {
        lVar1 = 0x48c24bb63ca86e0e;
        if ((lVar4 != 0x29cb26ec66bb707e) && (lVar1 = lVar4, lVar4 == 0x2af0e8d37ca9a4d5)) {
          lVar1 = 0x7bc8b2c5397bdd06;
        }
        goto LAB_00166b94;
      }
      if (lVar4 != 0x2fe14205c4538a18) {
        if (lVar4 == 0x31e56fc416edf48f) {
          lVar1 = 0x5032e2b67c7fce74;
          if (DAT_0021f65d == '\0') {
            lVar1 = 0x61ca911370ea7d8c;
          }
        }
        goto LAB_00166b94;
      }
    }
    else {
      if (lVar4 < 0x39684bc8e6ad0217) {
        if (lVar4 == 0x33b06952ca4f1520) {
          unaff_w21 = FUN_0016a0a4(local_a0,param_3);
          lVar1 = -0x25ce92c861ab4a80;
        }
        else {
          lVar1 = -0x706ef5c0d33fd081;
          if ((lVar4 != 0x36ab101a6561b810) && (lVar1 = lVar4, lVar4 == 0x37d56ecb9b95aa54)) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f2b8);
            lVar1 = 0x6b33ab51531e350e;
            if (iVar3 != 0) {
              lVar1 = -0x4d7b05f2a61075c4;
            }
          }
        }
        goto LAB_00166b94;
      }
      if (lVar4 < 0x4079cb867a494593) {
        if (lVar4 == 0x39684bc8e6ad0217) {
          DAT_0021c740 = DAT_0021c740 ^ 0xa1;
          DAT_0021c741 = DAT_0021c741 ^ 0xa1;
          DAT_0021c742 = DAT_0021c742 ^ 0xa1;
          DAT_0021c743 = DAT_0021c743 ^ 0xa1;
          DAT_0021c744 = DAT_0021c744 ^ 0xa1;
          _DAT_0021c730 = _DAT_0021c730 ^ 0xa1a1a1a1a1a1a1a1;
          uRam000000000021c738 = uRam000000000021c738 ^ 0xa1a1a1a1a1a1a1a1;
          DAT_0021f679 = '\x01';
          lVar1 = -0x34349a6daf33c54d;
        }
        else if (lVar4 == 0x3dbcee7e8a0b99d9) {
          lVar1 = -0x1762cbbe063ba853;
          if (DAT_0021f679 == '\0') {
            lVar1 = 0x39684bc8e6ad0217;
          }
        }
        goto LAB_00166b94;
      }
      if (lVar4 != 0x4079cb867a494593) {
        if (lVar4 == 0x48c24bb63ca86e0e) {
          DAT_0021f614 = 0;
          FUN_001b0700(&DAT_0021d780,unaff_x25);
          lVar4 = FUN_001e5154(unaff_x25);
          param_3[10] = lVar4;
          lVar1 = 0x2125ce75f102d571;
          if (lVar4 != 0) {
            lVar1 = 0x715ac748467e07ce;
          }
        }
        goto LAB_00166b94;
      }
    }
  }
  else if (lVar4 < 0x61ca911370ea7d8c) {
    if (0x5a56d41964610295 < lVar4) {
      if (lVar4 < 0x5ccb79be146ec887) {
        lVar1 = 0x2230386da4788946;
        if (((lVar4 != 0x5a56d41964610296) &&
            (lVar1 = 0x77cdbdb56e772635, lVar4 != 0x5a8ff999c41a8d91)) &&
           (lVar1 = lVar4, lVar4 == 0x5b32950be4577664)) {
          lVar1 = 0x7c07b73418bc4d2a;
        }
      }
      else if (lVar4 < 0x5dc4ca00664766d5) {
        if (lVar4 == 0x5ccb79be146ec887) {
          _DAT_0021c600 = _DAT_0021c600 ^ 0x1c1c1c1c1c1c1c1c;
          uRam000000000021c608 = uRam000000000021c608 ^ 0x1c1c1c1c1c1c1c1c;
          DAT_0021c610 = DAT_0021c610 ^ 0x1c1c1c1c1c1c1c1c;
          DAT_0021f667 = '\x01';
          lVar1 = -0x61d62e26988ffb3b;
        }
        else if (lVar4 == 0x5d8731b3d7758644) {
          iVar3 = FUN_00212730(0,1,&DAT_0021f2d4);
          lVar1 = 0x53481780d6bffe0f;
          if (iVar3 != 0) {
            lVar1 = -0x17401c2c9dabb109;
          }
        }
      }
      else {
        lVar1 = -0x4ccc5b7169e9ed92;
        if ((lVar4 != 0x5dc4ca00664766d5) && (lVar1 = lVar4, lVar4 == 0x619cdac13510d3a1)) {
          lVar1 = 0x662571078ec648ed;
        }
      }
      goto LAB_00166b94;
    }
    if (lVar4 < 0x52a8bc453f1de1c5) {
      if (lVar4 == 0x4909e14080d5a13b) {
        DAT_0021f2ac = 0;
        unaff_x25 = puVar2 + -0x60;
        *(undefined8 *)(puVar2 + -0xc) = 0;
        *(undefined8 *)(puVar2 + -0x14) = 0;
        *(undefined8 *)(puVar2 + -0x48) = 0;
        *(undefined8 *)(puVar2 + -0x50) = 0;
        *(undefined8 *)(puVar2 + -0x38) = 0;
        *(undefined8 *)(puVar2 + -0x40) = 0;
        *(undefined8 *)(puVar2 + -0x28) = 0;
        *(undefined8 *)(puVar2 + -0x30) = 0;
        *(undefined8 *)(puVar2 + -0x18) = 0;
        *(undefined8 *)(puVar2 + -0x20) = 0;
        *(undefined8 *)(puVar2 + -0x58) = 0;
        *(undefined8 *)(puVar2 + -0x60) = 0;
        FUN_001b0700(&DAT_0021c5d8,unaff_x25);
        lVar4 = FUN_001e5154(unaff_x25);
        param_3[9] = lVar4;
        puVar2 = unaff_x25;
        lVar1 = -0x2a5e0b9f19826efe;
        if (lVar4 != 0) {
          lVar1 = 0xc0c0d57302168c0;
        }
      }
      else {
        lVar1 = -0x2db8042d00acb972;
        if ((lVar4 != 0x5032e2b67c7fce74) && (lVar1 = lVar4, lVar4 == 0x50f03b2fd0083b81)) {
          lVar1 = 0x7046c40eb1bb2732;
          if (DAT_0021f670 == '\0') {
            lVar1 = -0x27dfc68da6478aac;
          }
        }
      }
      goto LAB_00166b94;
    }
    if (lVar4 != 0x52a8bc453f1de1c5) {
      if (lVar4 == 0x53481780d6bffe0f) {
        lVar1 = 0x6be992f41156a81d;
        if (DAT_0021f66e == '\0') {
          lVar1 = -0x34bde270406bf65e;
        }
      }
      else if (lVar4 == 0x58e3a6d3a3d8bdc8) {
        DAT_0021f2d4 = 0;
        FUN_001b0700(&DAT_0021c670,unaff_x25);
        lVar4 = FUN_001e5154(unaff_x25);
        param_3[2] = lVar4;
        lVar1 = 0x2fe14205c4538a18;
        if (lVar4 != 0) {
          lVar1 = -0x4089dea98ab7888e;
        }
      }
      goto LAB_00166b94;
    }
  }
  else if (lVar4 < 0x6e7efb7632588ced) {
    if (lVar4 < 0x66478b0308ae5c73) {
      if (lVar4 == 0x61ca911370ea7d8c) {
        DAT_0021c5a0 = DAT_0021c5a0 ^ 200;
        DAT_0021c5a1 = DAT_0021c5a1 ^ 200;
        DAT_0021c5a2 = DAT_0021c5a2 ^ 200;
        DAT_0021c5a3 = DAT_0021c5a3 ^ 200;
        DAT_0021c598 = DAT_0021c598 ^ 0xc8c8c8c8c8c8c8c8;
        DAT_0021f65d = '\x01';
        lVar1 = -0x2db8042d00acb972;
      }
      else {
        lVar1 = -0x14659e50011e82ae;
        if ((lVar4 != 0x6549eab510274099) && (lVar1 = lVar4, lVar4 == 0x662571078ec648ed)) {
          DAT_0021f344 = 0;
          FUN_001b0700(&DAT_0021c870,unaff_x25);
          lVar4 = FUN_001e5154(unaff_x25);
          param_3[5] = lVar4;
          lVar1 = 0x6b77c4dc9fa00666;
          if (lVar4 != 0) {
            lVar1 = 0x27612d190e67ae5a;
          }
        }
      }
      goto LAB_00166b94;
    }
    if (lVar4 < 0x6b77c4dc9fa00666) {
      if (lVar4 == 0x66478b0308ae5c73) {
        DAT_0021c630 = DAT_0021c630 ^ 0x87;
        _DAT_0021c620 = _DAT_0021c620 ^ 0x8787878787878787;
        uRam000000000021c628 = uRam000000000021c628 ^ 0x8787878787878787;
        DAT_0021f669 = '\x01';
        lVar1 = 0xc19b80e07e8f1f6;
      }
      else if (lVar4 == 0x6b33ab51531e350e) {
        lVar1 = -0x4962e84dc357e60f;
        if (DAT_0021f667 == '\0') {
          lVar1 = 0x5ccb79be146ec887;
        }
      }
      goto LAB_00166b94;
    }
    if (lVar4 != 0x6b77c4dc9fa00666) {
      if (lVar4 == 0x6be992f41156a81d) {
        lVar1 = 0x58e3a6d3a3d8bdc8;
      }
      goto LAB_00166b94;
    }
  }
  else {
    if (0x750b73afc6210d17 < lVar4) {
      if (lVar4 < 0x7bc8b2c5397bdd06) {
        lVar1 = -0x1d59ccd4c665ab21;
        if ((lVar4 != 0x750b73afc6210d18) && (lVar1 = lVar4, lVar4 == 0x77cdbdb56e772635)) {
          iVar3 = FUN_00212730(0,1,&DAT_0021f2a0);
          lVar1 = 0x18844b270522d2a;
          if (iVar3 != 0) {
            lVar1 = 0x5a8ff999c41a8d91;
          }
        }
      }
      else if (lVar4 == 0x7bc8b2c5397bdd06) {
        DAT_0021f2f4 = 0;
        FUN_001b0700(&DAT_0021c700,unaff_x25);
        lVar4 = FUN_001e5154(unaff_x25);
        *param_3 = lVar4;
        lVar1 = 0x6e7efb7632588ced;
        if (lVar4 != 0) {
          lVar1 = -0x7eb887f3b40ef682;
        }
      }
      else if (lVar4 == 0x7c07b73418bc4d2a) {
        iVar3 = FUN_00212730(0,1,&DAT_0021f614);
        lVar1 = -0x73e46706e1d63c99;
        if (iVar3 != 0) {
          lVar1 = 0x5b32950be4577664;
        }
      }
      goto LAB_00166b94;
    }
    if (lVar4 != 0x6e7efb7632588ced) {
      lVar1 = -0x714f922f0b359886;
      if ((lVar4 != 0x7046c40eb1bb2732) && (lVar1 = lVar4, lVar4 == 0x715ac748467e07ce)) {
        lVar1 = -0x2ea663b2baadd76a;
      }
      goto LAB_00166b94;
    }
  }
LAB_00166b80:
  unaff_w21 = 2;
  lVar1 = -0x25ce92c861ab4a80;
  goto LAB_00166b94;
}

