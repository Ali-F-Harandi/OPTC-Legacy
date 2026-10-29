// rea decompile_all
// name: FUN_0012712c
// address: 0x12712c
// body: available
// range: 0x12712c-0x129b63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x129b60 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0012712c(short *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined1 *unaff_x27;
  long *__s;
  long local_90;
  long local_88;
  
  __s = &local_90;
  local_90 = tpidr_el0;
  local_88 = *(long *)(local_90 + 0x28);
  lVar4 = -0x19f79d8417373b2a;
LAB_00127260:
  while (lVar2 = lVar4, lVar4 = lVar2, -0x5bc40c228c222ba < lVar2) {
    if (lVar2 < 0x325182182b17a69e) {
      if (lVar2 < 0x12e9a821eda1e176) {
        if (lVar2 < 0x8fe7a66682c8a04) {
          if (lVar2 < 0x8b1b4901ef83a7) {
            if (lVar2 < -0xdb04fae0bc9b54) {
              lVar4 = -0x59e7be80602c42a7;
              if ((lVar2 != -0x5bc40c228c222b9) && (lVar4 = lVar2, lVar2 == -0x4d9f8c3bbc73dc5)) {
                iVar1 = FUN_00212730(0,1,&DAT_0021f260);
                lVar4 = 0x1e4a16417361f8ae;
                if (iVar1 != 0) {
                  lVar4 = 0x5777173fc1efbe1d;
                }
              }
            }
            else if (lVar2 == -0xdb04fae0bc9b54) {
              DAT_0021f260 = 0;
              lVar2 = FUN_001e238c(unaff_x27,&DAT_0021c470);
              lVar4 = 0x17159aef89473706;
              if (lVar2 != 0) {
                lVar4 = -0x21facd943851a124;
              }
            }
            else if (lVar2 == 0x4ae95f42ffb5d) {
              lVar4 = -0x53b5e3f20bb42b48;
            }
          }
          else if (lVar2 < 0x23258f4ff3a4841) {
            if (lVar2 == 0x8b1b4901ef83a7) {
              DAT_0021f254 = 0;
              uVar3 = FUN_001b1710(&DAT_0021c438,0x801,unaff_x27);
              lVar4 = -0x3e2ffff5ca645444;
              if ((uVar3 & 1) == 0) {
                lVar4 = -0x4e3d9425464273c7;
              }
            }
            else if (lVar2 == 0x1b2059ac6c9842f) {
              lVar4 = 0x6f3c6f97b14b7d86;
            }
          }
          else {
            lVar4 = 0x44deba006d2d4801;
            if ((lVar2 != 0x23258f4ff3a4841) && (lVar4 = lVar2, lVar2 == 0x7442e424f0576cd)) {
              DAT_0021f264 = 0;
              lVar2 = FUN_001e238c(unaff_x27,&DAT_0021c488);
              lVar4 = -0x4896bab554a0dae9;
              if (lVar2 != 0) {
                lVar4 = -0x86c811434081476;
              }
            }
          }
        }
        else if (lVar2 < 0xd13689237f469f0) {
          if (lVar2 < 0xb342b2cda2804e9) {
            lVar4 = 0x6f3c6f97b14b7d86;
            if ((lVar2 != 0x8fe7a66682c8a04) && (lVar4 = lVar2, lVar2 == 0xb1e98d3e0a413a8)) {
              lVar4 = -0x4349f36fd7187ba2;
              goto LAB_00129394;
            }
          }
          else if (lVar2 == 0xb342b2cda2804e9) {
            iVar1 = FUN_00212730(0,1,&DAT_0021f264);
            lVar4 = 0x6c77c8f9e3444c31;
            if (iVar1 != 0) {
              lVar4 = -0x416128ec12d809db;
            }
          }
          else if (lVar2 == 0xc1c0014a1a704db) {
            lVar4 = 0x4d931f56eb957c5a;
          }
        }
        else if (lVar2 < 0x10c09a7e26c7bc45) {
          if (lVar2 == 0xd13689237f469f0) {
            *param_1 = *param_1 + 1;
            lVar4 = 0x7333431cb1ef57ea;
          }
          else if (lVar2 == 0xf43df37eaa34fc3) {
            lVar4 = 0x4d931f56eb957c5a;
          }
        }
        else {
          lVar4 = -0x4a8e958f50cb2936;
          if (((lVar2 != 0x10c09a7e26c7bc45) &&
              (lVar4 = -0xdb04fae0bc9b54, lVar2 != 0x11a8e2a4f0711395)) &&
             (lVar4 = lVar2, lVar2 == 0x11c6687713f96334)) {
            iVar1 = FUN_00212730(0,1,&DAT_0021f268);
            lVar4 = 0x352e25158bc7d11a;
            if (iVar1 != 0) {
              lVar4 = 0x6553b286c8407477;
            }
          }
        }
      }
      else if (lVar2 < 0x2871ea9107cedd69) {
        if (lVar2 < 0x1a5858dea0284c2e) {
          if (lVar2 < 0x1652343901a79906) {
            if (lVar2 == 0x12e9a821eda1e176) {
              iVar1 = FUN_00212730(0,1,&DAT_0021f25c);
              lVar4 = -0x43cb51ac6f10ad5a;
              if (iVar1 != 0) {
                lVar4 = -0x1ab7d7cee959a11d;
              }
            }
            else if (lVar2 == 0x157086f9ee3133f8) {
              *param_1 = *param_1 + 1;
              lVar4 = 0xc1c0014a1a704db;
            }
          }
          else {
            lVar4 = 0x519d6b467110aa8d;
            if ((lVar2 != 0x1652343901a79906) && (lVar4 = lVar2, lVar2 == 0x17159aef89473706)) {
              lVar4 = 0x4c76874860a3d3ae;
            }
          }
        }
        else if (lVar2 < 0x1e4a16417361f8ae) {
          if (lVar2 == 0x1a5858dea0284c2e) {
            iVar1 = FUN_00212730(0,1,&DAT_0021f25c);
            lVar4 = -0x1d27ce34dec29fc7;
            if (iVar1 != 0) {
              lVar4 = -0x17b058e69a58c2eb;
            }
          }
          else if (lVar2 == 0x1e3ee457b2054f17) {
            lVar4 = -0x34f067e1117c2e19;
            if (DAT_0021f653 == '\0') {
              lVar4 = -0x4358e346d27e0c4b;
            }
          }
        }
        else if (lVar2 == 0x1e4a16417361f8ae) {
          lVar4 = 0x11a8e2a4f0711395;
          if (DAT_0021f651 == '\0') {
            lVar4 = -0x5a4e52a497a1edfd;
          }
        }
        else if (lVar2 == 0x2745f1d09246953f) {
          lVar4 = 0x2871ea9107cedd69;
        }
      }
      else if (lVar2 < 0x2ee01fa48395221f) {
        if (lVar2 < 0x2c5fba45f07f5deb) {
          lVar4 = 0x1b2059ac6c9842f;
          if (((lVar2 != 0x299a25d16e47a356) &&
              (lVar4 = -0x4d9f8c3bbc73dc5, lVar2 != 0x2b5387362988d12e)) &&
             (lVar4 = lVar2, lVar2 == 0x2871ea9107cedd69)) {
            if (*(long *)(local_90 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            return;
          }
        }
        else {
          lVar4 = 0x35dd32dfb4a6e12b;
          if ((lVar2 != 0x2c5fba45f07f5deb) && (lVar4 = lVar2, lVar2 == 0x2e213870a196e7c4)) {
            lVar4 = -0x25b220ee67c01f8c;
          }
        }
      }
      else if (lVar2 < 0x3084a77f8ccecb77) {
        if (lVar2 == 0x2ee01fa48395221f) {
          DAT_0021c440 = DAT_0021c440 ^ 0x18;
          DAT_0021c441 = DAT_0021c441 ^ 0x18;
          DAT_0021c442 = DAT_0021c442 ^ 0x18;
          DAT_0021c443 = DAT_0021c443 ^ 0x18;
          DAT_0021c444 = DAT_0021c444 ^ 0x18;
          DAT_0021c445 = DAT_0021c445 ^ 0x18;
          DAT_0021c438 = DAT_0021c438 ^ 0x1818181818181818;
          DAT_0021f64e = '\x01';
          lVar4 = 0x8b1b4901ef83a7;
        }
        else if (lVar2 == 0x2eeb9df6a9c9b9ed) {
          lVar4 = 0x42499f464d274604;
        }
      }
      else {
        if (lVar2 == 0x3084a77f8ccecb77) {
          lVar4 = 0x519d6b467110aa8d;
          goto LAB_001298a8;
        }
        if (lVar2 == 0x31b4adc2285646dc) {
          lVar4 = -0x4a8391dc248c7f4c;
        }
      }
    }
    else if (lVar2 < 0x516001ab3b518ec4) {
      if (lVar2 < 0x4523145fd7464f61) {
        if (lVar2 < 0x373719e29df8005e) {
          if (lVar2 < 0x352e25158bc7d11a) {
            lVar4 = 0x23258f4ff3a4841;
            if ((lVar2 != 0x325182182b17a69e) && (lVar4 = lVar2, lVar2 == 0x343897bece408525)) {
              lVar4 = -0x3d02ae5e9a21a1e4;
LAB_00129394:
              uRam000000000021c478 = uRam000000000021c478 ^ 0xd8d8d8d8d8d8d8d8;
              _DAT_0021c470 = _DAT_0021c470 ^ 0xd8d8d8d8d8d8d8d8;
              DAT_0021c481 = DAT_0021c481 ^ 0xd8;
              DAT_0021c480 = DAT_0021c480 ^ 0xd8;
              DAT_0021f651 = '\x01';
            }
          }
          else if (lVar2 == 0x352e25158bc7d11a) {
            lVar4 = -0x12c8c9625a12e62b;
            if (DAT_0021f653 == '\0') {
              lVar4 = -0x58d4a1ff99370983;
            }
          }
          else if (lVar2 == 0x35dd32dfb4a6e12b) {
            iVar1 = FUN_00212730(0,1,&DAT_0021f268);
            lVar4 = -0x6d1830078610e97c;
            if (iVar1 != 0) {
              lVar4 = -0x6040195d60536efc;
            }
          }
        }
        else if (lVar2 < 0x42499f464d274604) {
          lVar4 = 0x4d201dca34f9057d;
          if ((lVar2 != 0x373719e29df8005e) && (lVar4 = lVar2, lVar2 == 0x3d035c9aa1a74bc4)) {
            iVar1 = FUN_00212730(0,1,&DAT_0021f250);
            lVar4 = 0x556097f8a89a3555;
            if (iVar1 != 0) {
              lVar4 = -0x212ad74160accdfe;
            }
          }
        }
        else if (lVar2 == 0x42499f464d274604) {
          iVar1 = FUN_00212730(0,1,&DAT_0021f25c);
          lVar4 = -0x3c75933e8918a886;
          if (iVar1 != 0) {
            lVar4 = 0x2eeb9df6a9c9b9ed;
          }
        }
        else if (lVar2 == 0x44deba006d2d4801) {
          iVar1 = FUN_00212730(0,1,&DAT_0021f268);
          lVar4 = 0x1e3ee457b2054f17;
          if (iVar1 != 0) {
            lVar4 = -0x7684a385383e45a2;
          }
        }
      }
      else if (lVar2 < 0x4aca3f16e97412ac) {
        if (lVar2 < 0x48e5c1c93867eef1) {
          if (lVar2 == 0x4523145fd7464f61) {
            lVar4 = 0x7e21a329f993f1d3;
            if (DAT_0021f64e == '\0') {
              lVar4 = 0x2ee01fa48395221f;
            }
          }
          else if (lVar2 == 0x46c1bbde0911dd5e) {
            lVar4 = 0x7333431cb1ef57ea;
          }
        }
        else if (lVar2 == 0x48e5c1c93867eef1) {
          lVar4 = -0x4ef4c2cb6fde9765;
          if (DAT_0021f652 == '\0') {
            lVar4 = -0x670bf0433937c828;
          }
        }
        else if (lVar2 == 0x4ab9a3d3d82e6640) {
          *param_1 = *param_1 + 1;
          lVar4 = -0x59e7be80602c42a7;
        }
      }
      else if (lVar2 < 0x4c76874860a3d3ae) {
        if (lVar2 == 0x4aca3f16e97412ac) {
          *param_1 = *param_1 + 1;
          lVar4 = 0x23258f4ff3a4841;
        }
        else if (lVar2 == 0x4b015c885ed63430) {
          lVar4 = -0x4b9986a7dfdad2f0;
        }
      }
      else {
        lVar4 = 0x564e4570920a34cd;
        if (lVar2 != 0x4c76874860a3d3ae) {
          if (lVar2 == 0x4d201dca34f9057d) {
            iVar1 = FUN_00212730(0,1,&DAT_0021f258);
            lVar4 = -0x16a5855aa2da3a5d;
            if (iVar1 != 0) {
              lVar4 = 0x373719e29df8005e;
            }
          }
          else {
            lVar4 = lVar2;
            if (lVar2 == 0x4d931f56eb957c5a) {
              iVar1 = FUN_00212730(0,1,&DAT_0021f264);
              lVar4 = -0x62d31b2fb582d167;
              if (iVar1 != 0) {
                lVar4 = 0xf43df37eaa34fc3;
              }
            }
          }
        }
      }
    }
    else if (lVar2 < 0x6553b286c8407477) {
      if (lVar2 < 0x564e4570920a34cd) {
        if (lVar2 < 0x5485df2a4ff004cd) {
          if (lVar2 == 0x516001ab3b518ec4) {
            *param_1 = *param_1 + 1;
            lVar4 = 0x2b5387362988d12e;
          }
          else if (lVar2 == 0x519d6b467110aa8d) {
            DAT_0021f25c = 0;
            lVar2 = FUN_001e238c(unaff_x27,&DAT_0021c458);
            lVar4 = -0x4379695484f3b9ed;
            if (lVar2 != 0) {
              lVar4 = -0x552fa67ac2892b22;
            }
          }
        }
        else if (lVar2 == 0x5485df2a4ff004cd) {
          lVar4 = 0x6981fe660bc7544d;
LAB_00127250:
          DAT_0021c497 = DAT_0021c497 ^ 0x86;
          DAT_0021c496 = DAT_0021c496 ^ 0x86;
          DAT_0021c495 = DAT_0021c495 ^ 0x86;
          DAT_0021c494 = DAT_0021c494 ^ 0x86;
          DAT_0021c498 = DAT_0021c498 ^ 0x86;
          DAT_0021f653 = '\x01';
        }
        else if (lVar2 == 0x556097f8a89a3555) {
          lVar4 = 0x2e213870a196e7c4;
          if (DAT_0021f64d == '\0') {
            lVar4 = -0x7a5f2b3cc1020462;
          }
        }
      }
      else if (lVar2 < 0x5efe6882d5f81fab) {
        if (lVar2 == 0x564e4570920a34cd) {
          iVar1 = FUN_00212730(0,1,&DAT_0021f264);
          lVar4 = 0x48e5c1c93867eef1;
          if (iVar1 != 0) {
            lVar4 = -0x592bcae7d590fc8d;
          }
        }
        else if (lVar2 == 0x5777173fc1efbe1d) {
          lVar4 = -0x4d9f8c3bbc73dc5;
        }
      }
      else {
        lVar4 = 0x6981fe660bc7544d;
        if ((lVar2 != 0x5efe6882d5f81fab) && (lVar4 = lVar2, lVar2 == 0x62a421dce498d63f)) {
          lVar4 = 0x2c5fba45f07f5deb;
        }
      }
    }
    else if (lVar2 < 0x6f3c6f97b14b7d86) {
      if (lVar2 < 0x6981fe660bc7544d) {
        lVar4 = 0x11c6687713f96334;
        if ((lVar2 != 0x6553b286c8407477) && (lVar4 = lVar2, lVar2 == 0x68a8ec28bf33d61d)) {
          lVar4 = -0x479fb4e052341ead;
        }
      }
      else if (lVar2 == 0x6981fe660bc7544d) {
        DAT_0021f268 = 0;
        lVar2 = FUN_001e238c(unaff_x27,&DAT_0021c494);
        lVar4 = 0x4ae95f42ffb5d;
        if (lVar2 != 0) {
          lVar4 = -0x3470ec699c7f9eb9;
        }
      }
      else if (lVar2 == 0x6c77c8f9e3444c31) {
        lVar4 = -0x6d1ad2ec5fb1fa4b;
        if (DAT_0021f652 == '\0') {
          lVar4 = -0x5e7eec544003c7b6;
        }
      }
    }
    else if (lVar2 < 0x7a5fcb47e1097b92) {
      if (lVar2 == 0x6f3c6f97b14b7d86) {
        iVar1 = FUN_00212730(0,1,&DAT_0021f254);
        lVar4 = 0x4523145fd7464f61;
        if (iVar1 != 0) {
          lVar4 = 0x8fe7a66682c8a04;
        }
      }
      else if (lVar2 == 0x7333431cb1ef57ea) {
        lVar4 = 0x7dcf737b2adf3002;
      }
    }
    else if (lVar2 == 0x7a5fcb47e1097b92) {
      lVar4 = -0x3c224f889a7890e6;
      if (DAT_0021f651 == '\0') {
        lVar4 = 0xb1e98d3e0a413a8;
      }
    }
    else if (lVar2 == 0x7dcf737b2adf3002) {
      iVar1 = FUN_00212730(0,1,&DAT_0021f260);
      lVar4 = -0xe1aab80185e29c7;
      if (iVar1 != 0) {
        lVar4 = -0x6e8bfbccbadfbcb4;
      }
    }
    else if (lVar2 == 0x7e21a329f993f1d3) {
      lVar4 = 0x8b1b4901ef83a7;
    }
  }
  if (lVar2 < -0x4379695484f3b9ed) {
    if (lVar2 < -0x5a4e52a497a1edfd) {
      if (lVar2 < -0x6d1ad2ec5fb1fa4b) {
        if (lVar2 < -0x7684a385383e45a2) {
          if (lVar2 < -0x795f117d2acf5896) {
            lVar4 = 0x2b5387362988d12e;
            if ((lVar2 != -0x7e742c79edd0d15d) && (lVar4 = lVar2, lVar2 == -0x7a5f2b3cc1020462)) {
              DAT_0021c430 = DAT_0021c430 ^ 0xef;
              DAT_0021c431 = DAT_0021c431 ^ 0xef;
              _DAT_0021c420 = _DAT_0021c420 ^ 0xefefefefefefefef;
              uRam000000000021c428 = uRam000000000021c428 ^ 0xefefefefefefefef;
              DAT_0021f64d = '\x01';
              lVar4 = -0x25b220ee67c01f8c;
            }
          }
          else {
            lVar4 = 0x11c6687713f96334;
            if ((lVar2 != -0x795f117d2acf5896) && (lVar4 = lVar2, lVar2 == -0x78ade21811686803)) {
              DAT_0021f268 = 0;
              lVar2 = FUN_001e238c(unaff_x27,&DAT_0021c494);
              lVar4 = -0x5bc40c228c222b9;
              if (lVar2 != 0) {
                lVar4 = 0x4ab9a3d3d82e6640;
              }
            }
          }
        }
        else if (lVar2 < -0x7313e7a66a3bbc40) {
          lVar4 = 0x44deba006d2d4801;
          if ((lVar2 != -0x7684a385383e45a2) && (lVar4 = lVar2, lVar2 == -0x75dbffb39709e92e)) {
            *param_1 = *param_1 + 1;
            lVar4 = -0x249f7fc26b918e59;
          }
        }
        else {
          lVar4 = -0x39a3d296cdd14fd1;
          if ((lVar2 != -0x7313e7a66a3bbc40) && (lVar4 = lVar2, lVar2 == -0x6e8bfbccbadfbcb4)) {
            lVar4 = 0x7dcf737b2adf3002;
          }
        }
        goto LAB_00127260;
      }
      if (lVar2 < -0x6141532fd00a50be) {
        if (lVar2 < -0x670bf0433937c828) {
          lVar4 = -0x4cdcd6fb7877a002;
          if ((lVar2 != -0x6d1ad2ec5fb1fa4b) && (lVar4 = lVar2, lVar2 == -0x6d1830078610e97c)) {
            lVar4 = 0x5efe6882d5f81fab;
            if (DAT_0021f653 == '\0') {
              lVar4 = 0x5485df2a4ff004cd;
            }
          }
          goto LAB_00127260;
        }
        if (lVar2 != -0x670bf0433937c828) {
          if (lVar2 == -0x62d31b2fb582d167) {
            lVar4 = -0x17db6bb4c37139ad;
            if (DAT_0021f652 == '\0') {
              lVar4 = -0x60cd3c82222442fc;
            }
          }
          goto LAB_00127260;
        }
        lVar4 = -0x247c48d24182b04d;
      }
      else if (lVar2 < -0x6040195d60536efc) {
        if (lVar2 == -0x6141532fd00a50be) {
          *param_1 = *param_1 + 1;
          lVar4 = 0x2c5fba45f07f5deb;
          goto LAB_00127260;
        }
        if (lVar2 != -0x60cd3c82222442fc) goto LAB_00127260;
        lVar4 = 0x7442e424f0576cd;
      }
      else {
        lVar4 = 0x35dd32dfb4a6e12b;
        if (lVar2 == -0x6040195d60536efc) goto LAB_00127260;
        if (lVar2 != -0x5e7eec544003c7b6) {
          lVar4 = lVar2;
          if (lVar2 == -0x5dc8661fe70bb191) {
            lVar4 = 0x12e9a821eda1e176;
          }
          goto LAB_00127260;
        }
        lVar4 = -0x4cdcd6fb7877a002;
      }
      DAT_0021c488 = DAT_0021c488 ^ 0xc5c5c5c5c5c5c5c5;
      DAT_0021c490 = DAT_0021c490 ^ 0xc5;
      DAT_0021c492 = DAT_0021c492 ^ 0xc5;
      DAT_0021c491 = DAT_0021c491 ^ 0xc5;
      DAT_0021f652 = '\x01';
      goto LAB_00127260;
    }
    if (-0x4ef4c2cb6fde9766 < lVar2) {
      if (lVar2 < -0x4a8e958f50cb2936) {
        if (lVar2 < -0x4cdcd6fb7877a002) {
          lVar4 = -0x247c48d24182b04d;
          if ((lVar2 != -0x4ef4c2cb6fde9765) && (lVar4 = lVar2, lVar2 == -0x4e3d9425464273c7)) {
            lVar4 = -0x5a02aba064e491c4;
          }
        }
        else if (lVar2 == -0x4cdcd6fb7877a002) {
          DAT_0021f264 = 0;
          lVar2 = FUN_001e238c(unaff_x27,&DAT_0021c488);
          lVar4 = 0x325182182b17a69e;
          if (lVar2 != 0) {
            lVar4 = 0x4aca3f16e97412ac;
          }
        }
        else if (lVar2 == -0x4b9986a7dfdad2f0) {
          DAT_0021f258 = 0;
          uVar3 = FUN_001b1710(&DAT_0021c448,0x801,unaff_x27);
          lVar4 = -0x5dc8661fe70bb191;
          if ((uVar3 & 1) == 0) {
            lVar4 = 0x2745f1d09246953f;
          }
        }
      }
      else if (lVar2 < -0x4896bab554a0dae9) {
        if (lVar2 == -0x4a8e958f50cb2936) {
          FUN_001e38f8(unaff_x27,0,0x801);
          lVar4 = -0x5a02aba064e491c4;
        }
        else if (lVar2 == -0x4a8391dc248c7f4c) {
          DAT_0021f25c = 0;
          lVar2 = FUN_001e238c(unaff_x27,&DAT_0021c458);
          lVar4 = -0x7e742c79edd0d15d;
          if (lVar2 != 0) {
            lVar4 = 0x516001ab3b518ec4;
          }
        }
      }
      else {
        lVar4 = -0x795f117d2acf5896;
        if (lVar2 != -0x4896bab554a0dae9) {
          if (lVar2 == -0x479fb4e052341ead) {
            iVar1 = FUN_00212730(0,1,&DAT_0021f260);
            lVar4 = 0x7a5fcb47e1097b92;
            if (iVar1 != 0) {
              lVar4 = -0x16363b2ce2336309;
            }
          }
          else {
            lVar4 = lVar2;
            if (lVar2 == -0x43cb51ac6f10ad5a) {
              lVar4 = -0x7313e7a66a3bbc40;
              if (DAT_0021f650 == '\0') {
                lVar4 = -0x32ead494ef7d212b;
              }
            }
          }
        }
      }
      goto LAB_00127260;
    }
    if (lVar2 < -0x58d4a1ff99370983) {
      if (lVar2 < -0x59e7be80602c42a7) {
        if (lVar2 == -0x5a4e52a497a1edfd) {
          lVar4 = -0xdb04fae0bc9b54;
          goto LAB_00129394;
        }
        if (lVar2 == -0x5a02aba064e491c4) {
          lVar4 = 0x4d201dca34f9057d;
        }
      }
      else if (lVar2 == -0x59e7be80602c42a7) {
        FUN_001e38f8(unaff_x27,0,0x801);
        lVar4 = 0x2871ea9107cedd69;
      }
      else if (lVar2 == -0x592bcae7d590fc8d) {
        lVar4 = 0x564e4570920a34cd;
      }
      goto LAB_00127260;
    }
    if (-0x552fa67ac2892b23 < lVar2) {
      if (lVar2 == -0x552fa67ac2892b22) {
        *param_1 = *param_1 + 1;
        lVar4 = 0x68a8ec28bf33d61d;
      }
      else if (lVar2 == -0x53b5e3f20bb42b48) {
        FUN_001e38f8(unaff_x27,0,0x801);
        lVar4 = 0x1b2059ac6c9842f;
      }
      goto LAB_00127260;
    }
    if (lVar2 == -0x58d4a1ff99370983) {
      lVar4 = -0x123a1d4e94934922;
      goto LAB_00127250;
    }
    if (lVar2 != -0x578680e8d268dce5) goto LAB_00127260;
    lVar4 = -0x4a8391dc248c7f4c;
  }
  else {
    if (-0x25b220ee67c01f8d < lVar2) {
      if (lVar2 < -0x19f79d8417373b2a) {
        if (lVar2 < -0x212ad74160accdfe) {
          if (lVar2 < -0x247c48d24182b04d) {
            if (lVar2 == -0x25b220ee67c01f8c) {
              __s = (long *)((long)__s + -0x810);
              DAT_0021f250 = 0;
              memset(__s,0,0x801);
              uVar3 = FUN_001b1710(&DAT_0021c420,0x801,__s);
              lVar4 = -0x316debd89bccb892;
              unaff_x27 = (undefined1 *)__s;
              if ((uVar3 & 1) == 0) {
                lVar4 = 0x299a25d16e47a356;
              }
            }
            else if (lVar2 == -0x249f7fc26b918e59) {
              lVar4 = 0xb342b2cda2804e9;
            }
          }
          else if (lVar2 == -0x247c48d24182b04d) {
            DAT_0021f264 = 0;
            lVar2 = FUN_001e238c(unaff_x27,&DAT_0021c488);
            lVar4 = 0x62a421dce498d63f;
            if (lVar2 != 0) {
              lVar4 = -0x6141532fd00a50be;
            }
          }
          else if (lVar2 == -0x21facd943851a124) {
            *param_1 = *param_1 + 1;
            lVar4 = 0x4c76874860a3d3ae;
          }
        }
        else if (lVar2 < -0x1d27ce34dec29fc7) {
          lVar4 = 0x3d035c9aa1a74bc4;
          if ((lVar2 != -0x212ad74160accdfe) && (lVar4 = lVar2, lVar2 == -0x1ff8c9c596900baa)) {
            lVar4 = 0xc1c0014a1a704db;
          }
        }
        else if (lVar2 == -0x1d27ce34dec29fc7) {
          lVar4 = 0x1652343901a79906;
          if (DAT_0021f650 == '\0') {
            lVar4 = 0x3084a77f8ccecb77;
          }
        }
        else if (lVar2 == -0x1ab7d7cee959a11d) {
          lVar4 = 0x12e9a821eda1e176;
        }
      }
      else if (lVar2 < -0x16363b2ce2336309) {
        if (lVar2 < -0x17b058e69a58c2eb) {
          lVar4 = 0x3d035c9aa1a74bc4;
          if ((lVar2 != -0x19f79d8417373b2a) && (lVar4 = lVar2, lVar2 == -0x17db6bb4c37139ad)) {
            lVar4 = 0x7442e424f0576cd;
          }
        }
        else {
          lVar4 = 0x1a5858dea0284c2e;
          if ((lVar2 != -0x17b058e69a58c2eb) && (lVar4 = lVar2, lVar2 == -0x16a5855aa2da3a5d)) {
            lVar4 = 0x4b015c885ed63430;
            if (DAT_0021f64f == '\0') {
              lVar4 = -0x3efc2da3496f0afd;
            }
          }
        }
      }
      else if (lVar2 < -0x123a1d4e94934922) {
        lVar4 = -0x479fb4e052341ead;
        if ((lVar2 != -0x16363b2ce2336309) && (lVar4 = lVar2, lVar2 == -0x12c8c9625a12e62b)) {
          lVar4 = -0x123a1d4e94934922;
        }
      }
      else if (lVar2 == -0x123a1d4e94934922) {
        DAT_0021f268 = 0;
        lVar2 = FUN_001e238c(unaff_x27,&DAT_0021c494);
        lVar4 = 0x10c09a7e26c7bc45;
        if (lVar2 != 0) {
          lVar4 = -0x360208aa015ed5da;
        }
      }
      else if (lVar2 == -0xe1aab80185e29c7) {
        lVar4 = -0x25face9b779a220d;
        if (DAT_0021f651 == '\0') {
          lVar4 = 0x343897bece408525;
        }
      }
      else if (lVar2 == -0x86c811434081476) {
        *param_1 = *param_1 + 1;
        lVar4 = -0x795f117d2acf5896;
      }
      goto LAB_00127260;
    }
    if (lVar2 < -0x3c224f889a7890e6) {
      if (lVar2 < -0x3efc2da3496f0afd) {
        if (lVar2 < -0x4349f36fd7187ba2) {
          lVar4 = 0x68a8ec28bf33d61d;
          if ((lVar2 != -0x4379695484f3b9ed) && (lVar4 = lVar2, lVar2 == -0x4358e346d27e0c4b)) {
            lVar4 = -0x78ade21811686803;
            goto LAB_00127250;
          }
        }
        else if (lVar2 == -0x4349f36fd7187ba2) {
          DAT_0021f260 = 0;
          lVar2 = FUN_001e238c(unaff_x27,&DAT_0021c470);
          lVar4 = -0x1ff8c9c596900baa;
          if (lVar2 != 0) {
            lVar4 = 0x157086f9ee3133f8;
          }
        }
        else if (lVar2 == -0x416128ec12d809db) {
          lVar4 = 0xb342b2cda2804e9;
        }
      }
      else if (lVar2 < -0x3d02ae5e9a21a1e4) {
        if (lVar2 == -0x3efc2da3496f0afd) {
          DAT_0021c450 = DAT_0021c450 ^ 0xb;
          DAT_0021c451 = DAT_0021c451 ^ 0xb;
          DAT_0021c452 = DAT_0021c452 ^ 0xb;
          DAT_0021c453 = DAT_0021c453 ^ 0xb;
          DAT_0021c454 = DAT_0021c454 ^ 0xb;
          DAT_0021c455 = DAT_0021c455 ^ 0xb;
          DAT_0021c448 = DAT_0021c448 ^ 0xb0b0b0b0b0b0b0b;
          DAT_0021f64f = '\x01';
          lVar4 = -0x4b9986a7dfdad2f0;
        }
        else if (lVar2 == -0x3e2ffff5ca645444) {
          lVar4 = 0x1a5858dea0284c2e;
        }
      }
      else if (lVar2 == -0x3d02ae5e9a21a1e4) {
        DAT_0021f260 = 0;
        lVar2 = FUN_001e238c(unaff_x27,&DAT_0021c470);
        lVar4 = -0x38a37251ff50f43c;
        if (lVar2 != 0) {
          lVar4 = -0x75dbffb39709e92e;
        }
      }
      else if (lVar2 == -0x3c75933e8918a886) {
        lVar4 = 0x31b4adc2285646dc;
        if (DAT_0021f650 == '\0') {
          lVar4 = -0x578680e8d268dce5;
        }
      }
      goto LAB_00127260;
    }
    if (lVar2 < -0x34f067e1117c2e19) {
      if (lVar2 < -0x38a37251ff50f43c) {
        lVar4 = -0x4349f36fd7187ba2;
        if ((lVar2 != -0x3c224f889a7890e6) && (lVar4 = lVar2, lVar2 == -0x39a3d296cdd14fd1)) {
          DAT_0021f25c = 0;
          lVar2 = FUN_001e238c(unaff_x27,&DAT_0021c458);
          lVar4 = 0x46c1bbde0911dd5e;
          if (lVar2 != 0) {
            lVar4 = 0xd13689237f469f0;
          }
        }
      }
      else {
        lVar4 = -0x249f7fc26b918e59;
        if ((lVar2 != -0x38a37251ff50f43c) && (lVar4 = lVar2, lVar2 == -0x360208aa015ed5da)) {
          *param_1 = *param_1 + 1;
          lVar4 = -0x4a8e958f50cb2936;
        }
      }
      goto LAB_00127260;
    }
    if (lVar2 < -0x32ead494ef7d212b) {
      lVar4 = -0x78ade21811686803;
      if ((lVar2 != -0x34f067e1117c2e19) && (lVar4 = lVar2, lVar2 == -0x3470ec699c7f9eb9)) {
        *param_1 = *param_1 + 1;
        lVar4 = -0x53b5e3f20bb42b48;
      }
      goto LAB_00127260;
    }
    if (lVar2 != -0x32ead494ef7d212b) {
      lVar4 = 0x42499f464d274604;
      if ((lVar2 != -0x316debd89bccb892) && (lVar4 = lVar2, lVar2 == -0x25face9b779a220d)) {
        lVar4 = -0x3d02ae5e9a21a1e4;
      }
      goto LAB_00127260;
    }
    lVar4 = -0x39a3d296cdd14fd1;
  }
LAB_001298a8:
  DAT_0021c460 = DAT_0021c460 ^ 0xd8;
  DAT_0021c458 = DAT_0021c458 ^ 0xd8d8d8d8d8d8d8d8;
  DAT_0021f650 = '\x01';
  goto LAB_00127260;
}

