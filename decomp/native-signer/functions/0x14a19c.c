// rea decompile_all
// name: FUN_0014a19c
// address: 0x14a19c
// body: available
// range: 0x14a19c-0x14c573 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x14c570 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0014a19c(undefined8 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_d0 [8];
  long local_c8;
  undefined1 *local_c0;
  uint local_b4;
  undefined8 *local_b0;
  long local_a8;
  
  local_c8 = tpidr_el0;
  local_a8 = *(long *)(local_c8 + 0x28);
  puVar1 = auStack_d0;
  lVar6 = 0x61152b7a09e0691f;
  local_b0 = param_1;
LAB_0014a2e0:
  while( true ) {
    while (lVar4 = lVar6, lVar6 = lVar4, lVar4 < 0x3e8e9a229d65bef) {
      if (lVar4 < -0x385be54165883d04) {
        if (lVar4 < -0x5e62397a20e1c4a6) {
          if (lVar4 < -0x6d340dcb7ae57d8e) {
            if (lVar4 < -0x7865feda09388b7d) {
              if (lVar4 == -0x7dbf64c91b994c99) {
                DAT_0021f544 = 0;
                lVar6 = -0x7d2e1f0f1045297e;
              }
              else if (lVar4 == -0x7d2e1f0f1045297e) {
                iVar2 = FUN_00212730(0,1,&DAT_0021f540);
                lVar6 = -0x385be54165883d04;
                if (iVar2 != 0) {
                  lVar6 = -0x2cd0e93b0486a31e;
                }
              }
              else if (lVar4 == -0x7c1be96bc7c9017a) {
                lVar6 = -0x4ef1c4cf114e6567;
              }
            }
            else if (lVar4 < -0x6e9e95dac18523a6) {
              if (lVar4 == -0x7865feda09388b7d) {
                lVar6 = 0x497e5b98d7e89dd9;
                if (DAT_0021f713 == '\0') {
                  lVar6 = -0x1cb32a10a3e827ff;
                }
              }
              else if (lVar4 == -0x6fbeb3a2f33442d7) {
                lVar6 = 0xf9a7126da0e97f1;
                if (DAT_0021f712 == '\0') {
                  lVar6 = 0x5a0af51beedf739e;
                }
              }
            }
            else {
              if (lVar4 == -0x6e9e95dac18523a6) goto LAB_0014a2c8;
              if (lVar4 == -0x6dd7426346a9583e) {
                if (*(long *)(local_c8 + 0x28) != local_a8) {
                    /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
                }
                return local_b4 & 1;
              }
            }
          }
          else if (lVar4 < -0x63fcecda7eee7247) {
            if (lVar4 == -0x6d340dcb7ae57d8e) {
              DAT_0021d420 = DAT_0021d420 ^ 0xcf;
              DAT_0021d422 = DAT_0021d422 ^ 0xcf;
              DAT_0021d421 = DAT_0021d421 ^ 0xcf;
              _DAT_0021d410 = _DAT_0021d410 ^ 0xcfcfcfcfcfcfcfcf;
              uRam000000000021d418 = uRam000000000021d418 ^ 0xcfcfcfcfcfcfcfcf;
              DAT_0021f710 = '\x01';
              lVar6 = -0x634a7fef6b77ebe7;
            }
            else {
              if (lVar4 == -0x66cf17030d9c4292) {
                lVar6 = 0x7b952dd6a4dfbd42;
                goto LAB_0014c3d4;
              }
              if (lVar4 == -0x649056e7d03287b6) {
                DAT_0021f564 = 0;
                lVar4 = FUN_001e238c(local_b0[6],&DAT_0021d44c);
                lVar6 = -0x56832ed0c2762ffa;
                if (lVar4 != 0) {
                  lVar6 = 0x20da01d7196efb1a;
                }
              }
            }
          }
          else if (lVar4 < -0x627480394918dc9c) {
            lVar6 = 0x530424d3359cdc96;
            if ((lVar4 != -0x63fcecda7eee7247) && (lVar6 = lVar4, lVar4 == -0x634a7fef6b77ebe7)) {
              DAT_0021f55c = 0;
              lVar6 = 0x5b5325483a048e8f;
            }
          }
          else {
            lVar6 = 0x3f77fd5722478c7e;
            if ((lVar4 != -0x627480394918dc9c) && (lVar6 = lVar4, lVar4 == -0x6175291167365900)) {
              iVar2 = FUN_00212730(0,1,&DAT_0021f53c);
              lVar6 = 0x2b4c7e5329aefd4f;
              if (iVar2 != 0) {
                lVar6 = 0x1d784674e59cd0c2;
              }
            }
          }
        }
        else if (lVar4 < -0x4ab9a1953bd0b20d) {
          if (lVar4 < -0x55866d9ac3a2799b) {
            lVar6 = 0x4f5255e56777f274;
            if (((lVar4 != -0x5e62397a20e1c4a6) &&
                (lVar6 = -0x2c7cf632482bdbfd, lVar4 != -0x5901c19217cca216)) &&
               (lVar6 = lVar4, lVar4 == -0x56832ed0c2762ffa)) {
              lVar6 = -0x10315efbc95f3d8e;
            }
          }
          else if (lVar4 < -0x5307ff707cb48279) {
            if (lVar4 == -0x55866d9ac3a2799b) {
              DAT_0021f540 = 0;
              lVar6 = -0x6175291167365900;
            }
            else if (lVar4 == -0x542d5b9ab41fc0e4) goto LAB_0014a2c8;
          }
          else if (lVar4 == -0x5307ff707cb48279) {
            iVar2 = FUN_00212730(0,1,&DAT_0021f544);
            lVar6 = 0x4b576d231f4c4af;
            if (iVar2 != 0) {
              lVar6 = -0x1f55568df4cb0735;
            }
          }
          else if (lVar4 == -0x4ef1c4cf114e6567) {
            iVar2 = FUN_00212730(0,1,&DAT_0021f56c);
            lVar6 = 0x15d7b975425fb44c;
            if (iVar2 != 0) {
              lVar6 = -0x74b619dcbc05677;
            }
          }
        }
        else if (lVar4 < -0x3c8ea0a4b4ff2dcc) {
          if (lVar4 == -0x4ab9a1953bd0b20d) {
            lVar6 = -0x26817dced46bf0d1;
            if (DAT_0021f712 == '\0') {
              lVar6 = -0x3c8ea0a4b4ff2dcc;
            }
          }
          else {
            lVar6 = 0x7b952dd6a4dfbd42;
            if ((lVar4 != -0x4085271ed670b967) && (lVar6 = lVar4, lVar4 == -0x3f36d91187d3df03)) {
              DAT_0021d3a0 = DAT_0021d3a0 ^ 0x2f;
              DAT_0021d3a1 = DAT_0021d3a1 ^ 0x2f;
              DAT_0021d398 = DAT_0021d398 ^ 0x2f2f2f2f2f2f2f2f;
              DAT_0021f70a = '\x01';
              lVar6 = -0x7dbf64c91b994c99;
            }
          }
        }
        else if (lVar4 < -0x3a74ab4e50c2183a) {
          if (lVar4 == -0x3c8ea0a4b4ff2dcc) {
            lVar6 = -0x11d9f1dd4bc8f1d6;
            goto LAB_0014c3d4;
          }
          if (lVar4 == -0x3ae10f8106957949) {
            lVar6 = 0x3e8e9a229d65bef;
            if (DAT_0021f70f == '\0') {
              lVar6 = 0x7098b9b30b41a103;
            }
          }
        }
        else if (lVar4 == -0x3a74ab4e50c2183a) {
          DAT_0021f560 = 0;
          lVar6 = 0x339b816749bbabae;
        }
        else if (lVar4 == -0x3a4053244c71f751) {
          DAT_0021f56c = 0;
          iVar2 = FUN_001e17a8(local_b0[0xb],&DAT_0021d460);
          lVar6 = -0x542d5b9ab41fc0e4;
          if (iVar2 != 0) {
            lVar6 = -0x22f9e5cde959517a;
          }
        }
      }
      else if (lVar4 < -0x1bd5acd6b06033a9) {
        if (lVar4 < -0x26817dced46bf0d1) {
          if (lVar4 < -0x2cd0e93b0486a31e) {
            if (lVar4 == -0x385be54165883d04) {
              lVar6 = 0x3ce10bd2fd0d0c42;
              if (DAT_0021f709 == '\0') {
                lVar6 = 0x30f7d7f608f79971;
              }
            }
            else {
              lVar6 = -0x1709258ef6f74fa8;
              if ((lVar4 != -0x32b3d72e91961d32) && (lVar6 = lVar4, lVar4 == -0x2d20808d1c8876a7)) {
                DAT_0021d380 = DAT_0021d380 ^ 0xd8;
                DAT_0021d381 = DAT_0021d381 ^ 0xd8;
                DAT_0021d382 = DAT_0021d382 ^ 0xd8;
                DAT_0021d383 = DAT_0021d383 ^ 0xd8;
                _DAT_0021d370 = _DAT_0021d370 ^ 0xd8d8d8d8d8d8d8d8;
                uRam000000000021d378 = uRam000000000021d378 ^ 0xd8d8d8d8d8d8d8d8;
                DAT_0021f708 = '\x01';
                lVar6 = 0x2fa15c8f4c162347;
              }
            }
          }
          else {
            lVar6 = -0x7d2e1f0f1045297e;
            if (lVar4 != -0x2cd0e93b0486a31e) {
              if (lVar4 == -0x2c7cf632482bdbfd) {
                iVar2 = FUN_00212730(0,1,&DAT_0021f560);
                lVar6 = 0x2bd900dca7e9bae9;
                if (iVar2 != 0) {
                  lVar6 = -0x5901c19217cca216;
                }
              }
              else {
                lVar6 = lVar4;
                if (lVar4 == -0x2c2c6e2d944b2038) {
                  lVar6 = -0x649056e7d03287b6;
                  goto LAB_0014c3d4;
                }
              }
            }
          }
        }
        else if (lVar4 < -0x1f455fc772ec1e0a) {
          lVar6 = -0x11d9f1dd4bc8f1d6;
          if (lVar4 != -0x26817dced46bf0d1) {
            if (lVar4 == -0x22f9e5cde959517a) {
              local_b4 = FUN_0014c574(local_b0,local_c0,8);
              lVar6 = -0x6dd7426346a9583e;
            }
            else {
              lVar6 = lVar4;
              if (lVar4 == -0x1f55568df4cb0735) {
                lVar6 = -0x5307ff707cb48279;
              }
            }
          }
        }
        else if (lVar4 < -0x1d1ebe3b772ba247) {
          lVar6 = 0x5743f2987dcbc082;
          if ((lVar4 != -0x1f455fc772ec1e0a) && (lVar6 = lVar4, lVar4 == -0x1e6520e9492005bd)) {
            DAT_0021f548 = 0;
            lVar6 = -0x5307ff707cb48279;
          }
        }
        else {
          lVar6 = -0x10b455e27643aaa7;
          if ((lVar4 != -0x1d1ebe3b772ba247) && (lVar6 = lVar4, lVar4 == -0x1cb32a10a3e827ff)) {
            DAT_0021d454 = DAT_0021d454 ^ 0xaa;
            DAT_0021d455 = DAT_0021d455 ^ 0xaa;
            DAT_0021d456 = DAT_0021d456 ^ 0xaa;
            DAT_0021d457 = DAT_0021d457 ^ 0xaa;
            DAT_0021d458 = DAT_0021d458 ^ 0xaa;
            DAT_0021f713 = '\x01';
            lVar6 = 0x26af25bc6fd460b5;
          }
        }
      }
      else if (lVar4 < -0xa4272655a3e4897) {
        if (lVar4 < -0x10b455e27643aaa7) {
          if (lVar4 == -0x1bd5acd6b06033a9) {
            lVar6 = -0x1f455fc772ec1e0a;
            if (DAT_0021f70d == '\0') {
              lVar6 = 0x1adc2fa2b92b4b24;
            }
          }
          else if (lVar4 == -0x1709258ef6f74fa8) {
            iVar2 = FUN_00212730(0,1,&DAT_0021f564);
            lVar6 = -0xa24bd991c0613c6;
            if (iVar2 != 0) {
              lVar6 = -0x32b3d72e91961d32;
            }
          }
          else if (lVar4 == -0x11d9f1dd4bc8f1d6) {
            DAT_0021f564 = 0;
            lVar4 = FUN_001e238c(local_b0[2],&DAT_0021d44c);
            lVar6 = 0x6621ce2e7dc4164f;
            if (lVar4 != 0) {
              lVar6 = 0x2e00fc75c4d51ccf;
            }
          }
        }
        else if (lVar4 < -0xda878123d0938fa) {
          if (lVar4 == -0x10b455e27643aaa7) {
            DAT_0021f54c = 0;
            lVar6 = 0x4f5255e56777f274;
          }
          else if (lVar4 == -0x10315efbc95f3d8e) {
            iVar2 = FUN_00212730(0,1,&DAT_0021f568);
            lVar6 = -0x7865feda09388b7d;
            if (iVar2 != 0) {
              lVar6 = 0x11eb90f0f7ce048a;
            }
          }
        }
        else {
          lVar6 = -0x1709258ef6f74fa8;
          if ((lVar4 != -0xda878123d0938fa) && (lVar6 = lVar4, lVar4 == -0xb8dcbe2181ea9f7)) {
            lVar6 = -0x3a74ab4e50c2183a;
          }
        }
      }
      else if (lVar4 < -0x901a1a58d8c8e2) {
        if (lVar4 == -0xa4272655a3e4897) {
          DAT_0021d3a8 = DAT_0021d3a8 ^ 0x1414141414141414;
          DAT_0021f70b = '\x01';
          lVar6 = -0x1e6520e9492005bd;
        }
        else if (lVar4 == -0xa24bd991c0613c6) {
          lVar6 = -0x4085271ed670b967;
          if (DAT_0021f712 == '\0') {
            lVar6 = -0x66cf17030d9c4292;
          }
        }
        else if (lVar4 == -0x74b619dcbc05677) {
          lVar6 = -0x4ef1c4cf114e6567;
        }
      }
      else if (lVar4 < 0x249978005e98911) {
        lVar6 = 0x5b5325483a048e8f;
        if ((lVar4 != -0x901a1a58d8c8e2) && (lVar6 = lVar4, lVar4 == 0x1b1f3854e6cd7d0)) {
          lVar6 = -0x1d1ebe3b772ba247;
          if (DAT_0021f70c == '\0') {
            lVar6 = 0x3ee779252719cb8;
          }
        }
      }
      else if (lVar4 == 0x249978005e98911) {
        iVar2 = FUN_00212730(0,1,&DAT_0021f564);
        lVar6 = -0x4ab9a1953bd0b20d;
        if (iVar2 != 0) {
          lVar6 = 0x3f2de3246b8848e;
        }
      }
      else if (lVar4 == 0x2bb4ebafb57d1c9) {
        lVar6 = 0x249978005e98911;
      }
    }
    if (lVar4 < 0x369f9d835c96edf9) break;
    if (lVar4 < 0x5b5325483a048e8f) {
      if (lVar4 < 0x4d30f27cf971405b) {
        if (lVar4 < 0x3d84e01c604274bd) {
          if (lVar4 == 0x369f9d835c96edf9) {
            _DAT_0021d460 = _DAT_0021d460 ^ 0xd2d2d2d2d2d2d2d2;
            uRam000000000021d468 = uRam000000000021d468 ^ 0xd2d2d2d2d2d2d2d2;
            DAT_0021f714 = '\x01';
            lVar6 = -0x3a4053244c71f751;
          }
          else if (lVar4 == 0x3b54714f78c87612) {
            lVar6 = 0x69d8bfca6524b11d;
            if (DAT_0021f710 == '\0') {
              lVar6 = -0x6d340dcb7ae57d8e;
            }
          }
          else if (lVar4 == 0x3ce10bd2fd0d0c42) {
            lVar6 = -0x55866d9ac3a2799b;
          }
        }
        else if (lVar4 < 0x497e5b98d7e89dd9) {
          lVar6 = -0x1e6520e9492005bd;
          if ((lVar4 != 0x3d84e01c604274bd) && (lVar6 = lVar4, lVar4 == 0x3f77fd5722478c7e)) {
            iVar2 = FUN_00212730(0,1,&DAT_0021f554);
            lVar6 = 0x32cbfb1437f9c65b;
            if (iVar2 != 0) {
              lVar6 = -0x627480394918dc9c;
            }
          }
        }
        else {
          lVar6 = 0x26af25bc6fd460b5;
          if ((lVar4 != 0x497e5b98d7e89dd9) && (lVar6 = lVar4, lVar4 == 0x4a9f89dfcadbc0f8)) {
            lVar6 = -0x3a4053244c71f751;
          }
        }
      }
      else if (lVar4 < 0x530424d3359cdc96) {
        if (lVar4 == 0x4d30f27cf971405b) {
          DAT_0021d448 = DAT_0021d448 ^ 0xc6;
          DAT_0021d449 = DAT_0021d449 ^ 0xc6;
          DAT_0021d44a = DAT_0021d44a ^ 0xc6;
          _DAT_0021d430 = _DAT_0021d430 ^ 0xc6c6c6c6c6c6c6c6;
          uRam000000000021d438 = uRam000000000021d438 ^ 0xc6c6c6c6c6c6c6c6;
          DAT_0021d440 = DAT_0021d440 ^ 0xc6c6c6c6c6c6c6c6;
          DAT_0021f711 = '\x01';
          lVar6 = -0x3a74ab4e50c2183a;
        }
        else {
          lVar6 = 0x598f5a77fb239e5e;
          if ((lVar4 != 0x4df6f2b549209293) && (lVar6 = lVar4, lVar4 == 0x4f5255e56777f274)) {
            iVar2 = FUN_00212730(0,1,&DAT_0021f548);
            lVar6 = 0x23457a8e1613cddf;
            if (iVar2 != 0) {
              lVar6 = -0x5e62397a20e1c4a6;
            }
          }
        }
      }
      else if (lVar4 < 0x598f5a77fb239e5e) {
        if (lVar4 == 0x530424d3359cdc96) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f550);
          lVar6 = -0x1bd5acd6b06033a9;
          if (iVar2 != 0) {
            lVar6 = -0x63fcecda7eee7247;
          }
        }
        else if (lVar4 == 0x5743f2987dcbc082) {
          DAT_0021f550 = 0;
          lVar6 = 0x598f5a77fb239e5e;
        }
      }
      else if (lVar4 == 0x598f5a77fb239e5e) {
        iVar2 = FUN_00212730(0,1,&DAT_0021f54c);
        lVar6 = 0x1b1f3854e6cd7d0;
        if (iVar2 != 0) {
          lVar6 = 0x4df6f2b549209293;
        }
      }
      else if (lVar4 == 0x5a0af51beedf739e) {
        lVar6 = 0xb727b5bf6f5eb51;
LAB_0014c3d4:
        DAT_0021d451 = DAT_0021d451 ^ 0xea;
        DAT_0021d450 = DAT_0021d450 ^ 0xea;
        DAT_0021d44f = DAT_0021d44f ^ 0xea;
        DAT_0021d44e = DAT_0021d44e ^ 0xea;
        DAT_0021d44d = DAT_0021d44d ^ 0xea;
        DAT_0021d44c = DAT_0021d44c ^ 0xea;
        DAT_0021d452 = DAT_0021d452 ^ 0xea;
        DAT_0021f712 = '\x01';
      }
    }
    else if (lVar4 < 0x6621ce2e7dc4164f) {
      if (lVar4 < 0x600ae6dec4255729) {
        if (lVar4 == 0x5b5325483a048e8f) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f558);
          lVar6 = -0x3ae10f8106957949;
          if (iVar2 != 0) {
            lVar6 = -0x901a1a58d8c8e2;
          }
        }
        else if (lVar4 == 0x5e631727676e357f) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f564);
          lVar6 = -0x6fbeb3a2f33442d7;
          if (iVar2 != 0) {
            lVar6 = 0x5ed24a91fdbeaf08;
          }
        }
        else if (lVar4 == 0x5ed24a91fdbeaf08) {
          lVar6 = 0x5e631727676e357f;
        }
      }
      else if (lVar4 < 0x61152b7a09e0691f) {
        if (lVar4 == 0x600ae6dec4255729) {
          DAT_0021d3e0 = DAT_0021d3e0 ^ 0x23;
          DAT_0021d3e1 = DAT_0021d3e1 ^ 0x23;
          DAT_0021d3e2 = DAT_0021d3e2 ^ 0x23;
          DAT_0021d3e4 = DAT_0021d3e4 ^ 0x23;
          DAT_0021d3e5 = DAT_0021d3e5 ^ 0x23;
          DAT_0021d3e3 = DAT_0021d3e3 ^ 0x23;
          DAT_0021d3e6 = DAT_0021d3e6 ^ 0x23;
          DAT_0021d3d8 = DAT_0021d3d8 ^ 0x2323232323232323;
          DAT_0021f70e = '\x01';
          lVar6 = 0xcbe8113030f0b89;
        }
        else if (lVar4 == 0x60c6458f70fdf2e2) {
          lVar6 = 0xcbe8113030f0b89;
        }
      }
      else {
        lVar6 = 0x5e631727676e357f;
        if ((lVar4 != 0x61152b7a09e0691f) && (lVar6 = lVar4, lVar4 == 0x644245778bef9eef)) {
          lVar6 = 0x280e4b2f28b7519a;
          if (DAT_0021f712 == '\0') {
            lVar6 = -0x2c2c6e2d944b2038;
          }
        }
      }
    }
    else if (lVar4 < 0x70c6075b045fb041) {
      lVar6 = 0x7d3ca24dae973643;
      if (((lVar4 != 0x6621ce2e7dc4164f) &&
          (lVar6 = -0x634a7fef6b77ebe7, lVar4 != 0x69d8bfca6524b11d)) &&
         (lVar6 = lVar4, lVar4 == 0x7098b9b30b41a103)) {
        DAT_0021d408 = DAT_0021d408 ^ 0xb3;
        DAT_0021d409 = DAT_0021d409 ^ 0xb3;
        DAT_0021d40a = DAT_0021d40a ^ 0xb3;
        _DAT_0021d3f0 = _DAT_0021d3f0 ^ 0xb3b3b3b3b3b3b3b3;
        uRam000000000021d3f8 = uRam000000000021d3f8 ^ 0xb3b3b3b3b3b3b3b3;
        DAT_0021d400 = DAT_0021d400 ^ 0xb3b3b3b3b3b3b3b3;
        DAT_0021f70f = '\x01';
        lVar6 = 0x70c6075b045fb041;
      }
    }
    else if (lVar4 < 0x7b952dd6a4dfbd42) {
      if (lVar4 == 0x70c6075b045fb041) {
        DAT_0021f558 = 0;
        lVar6 = 0x3f77fd5722478c7e;
      }
      else if (lVar4 == 0x7924ea8b71413cb2) {
        lVar6 = -0x7dbf64c91b994c99;
      }
    }
    else if (lVar4 == 0x7b952dd6a4dfbd42) {
      DAT_0021f564 = 0;
      lVar4 = FUN_001e238c(local_b0[1],&DAT_0021d44c);
      lVar6 = 0x2bb4ebafb57d1c9;
      if (lVar4 != 0) {
        lVar6 = -0x6e9e95dac18523a6;
      }
    }
    else if (lVar4 == 0x7d3ca24dae973643) {
      iVar2 = FUN_00212730(0,1,&DAT_0021f564);
      lVar6 = 0x644245778bef9eef;
      if (iVar2 != 0) {
        lVar6 = 0x3277e6730e7ad8bb;
      }
    }
  }
  if (lVar4 < 0x20da01d7196efb1a) {
    if (0xcbe8113030f0b88 < lVar4) {
      if (lVar4 < 0x15d7b975425fb44c) {
        if (lVar4 == 0xcbe8113030f0b89) {
          DAT_0021f554 = 0;
          lVar6 = 0x530424d3359cdc96;
        }
        else {
          lVar6 = 0xb727b5bf6f5eb51;
          if ((lVar4 != 0xf9a7126da0e97f1) && (lVar6 = lVar4, lVar4 == 0x11eb90f0f7ce048a)) {
            lVar6 = -0x10315efbc95f3d8e;
          }
        }
      }
      else if (lVar4 < 0x1cfe4dfb0d75b170) {
        if (lVar4 == 0x15d7b975425fb44c) {
          lVar6 = 0x4a9f89dfcadbc0f8;
          if (DAT_0021f714 == '\0') {
            lVar6 = 0x369f9d835c96edf9;
          }
        }
        else if (lVar4 == 0x1adc2fa2b92b4b24) {
          DAT_0021d3d0 = DAT_0021d3d0 ^ 0x11;
          DAT_0021d3d1 = DAT_0021d3d1 ^ 0x11;
          DAT_0021d3d2 = DAT_0021d3d2 ^ 0x11;
          DAT_0021d3d3 = DAT_0021d3d3 ^ 0x11;
          DAT_0021d3c8 = DAT_0021d3c8 ^ 0x1111111111111111;
          DAT_0021f70d = '\x01';
          lVar6 = 0x5743f2987dcbc082;
        }
      }
      else {
        lVar6 = 0x2fa15c8f4c162347;
        if ((lVar4 != 0x1cfe4dfb0d75b170) && (lVar6 = lVar4, lVar4 == 0x1d784674e59cd0c2)) {
          lVar6 = -0x6175291167365900;
        }
      }
      goto LAB_0014a2e0;
    }
    if (lVar4 < 0x4b576d231f4c4af) {
      lVar6 = 0x70c6075b045fb041;
      if (lVar4 != 0x3e8e9a229d65bef) {
        if (lVar4 == 0x3ee779252719cb8) {
          DAT_0021d3c0 = DAT_0021d3c0 ^ 0x37;
          DAT_0021d3c1 = DAT_0021d3c1 ^ 0x37;
          DAT_0021d3c2 = DAT_0021d3c2 ^ 0x37;
          DAT_0021d3c3 = DAT_0021d3c3 ^ 0x37;
          DAT_0021d3c4 = DAT_0021d3c4 ^ 0x37;
          DAT_0021d3c5 = DAT_0021d3c5 ^ 0x37;
          DAT_0021d3c6 = DAT_0021d3c6 ^ 0x37;
          _DAT_0021d3b0 = _DAT_0021d3b0 ^ 0x3737373737373737;
          uRam000000000021d3b8 = uRam000000000021d3b8 ^ 0x3737373737373737;
          DAT_0021f70c = '\x01';
          lVar6 = -0x10b455e27643aaa7;
        }
        else {
          lVar6 = lVar4;
          if (lVar4 == 0x3f2de3246b8848e) {
            lVar6 = 0x249978005e98911;
          }
        }
      }
      goto LAB_0014a2e0;
    }
    if (lVar4 == 0x4b576d231f4c4af) {
      lVar6 = 0x7924ea8b71413cb2;
      if (DAT_0021f70a == '\0') {
        lVar6 = -0x3f36d91187d3df03;
      }
      goto LAB_0014a2e0;
    }
    if (lVar4 == 0xb727b5bf6f5eb51) {
      DAT_0021f564 = 0;
      lVar6 = -0x2c7cf632482bdbfd;
      goto LAB_0014a2e0;
    }
    if (lVar4 != 0xb799f093c4efe14) goto LAB_0014a2e0;
  }
  else if (lVar4 < 0x2d789229014778fb) {
    if (lVar4 < 0x280e4b2f28b7519a) {
      if (lVar4 != 0x20da01d7196efb1a) {
        if (lVar4 == 0x23457a8e1613cddf) {
          lVar6 = 0x3d84e01c604274bd;
          if (DAT_0021f70b == '\0') {
            lVar6 = -0xa4272655a3e4897;
          }
        }
        else if (lVar4 == 0x26af25bc6fd460b5) {
          DAT_0021f568 = 0;
          iVar2 = FUN_001e17a8(local_b0[8],&DAT_0021d454);
          lVar6 = 0xb799f093c4efe14;
          if (iVar2 != 0) {
            lVar6 = -0x7c1be96bc7c9017a;
          }
        }
        goto LAB_0014a2e0;
      }
    }
    else {
      if (lVar4 < 0x2b744d9ba586aac4) {
        lVar6 = -0x649056e7d03287b6;
        if ((lVar4 != 0x280e4b2f28b7519a) && (lVar6 = lVar4, lVar4 == 0x2b4c7e5329aefd4f)) {
          lVar6 = 0x1cfe4dfb0d75b170;
          if (DAT_0021f708 == '\0') {
            lVar6 = -0x2d20808d1c8876a7;
          }
        }
        goto LAB_0014a2e0;
      }
      if (lVar4 != 0x2b744d9ba586aac4) {
        if (lVar4 == 0x2bd900dca7e9bae9) {
          lVar6 = -0xb8dcbe2181ea9f7;
          if (DAT_0021f711 == '\0') {
            lVar6 = 0x4d30f27cf971405b;
          }
        }
        goto LAB_0014a2e0;
      }
    }
  }
  else {
    if (0x30f7d7f608f79970 < lVar4) {
      if (lVar4 < 0x32cbfb1437f9c65b) {
        if (lVar4 == 0x30f7d7f608f79971) {
          DAT_0021d390 = DAT_0021d390 ^ 0xe;
          DAT_0021d392 = DAT_0021d392 ^ 0xe;
          DAT_0021d391 = DAT_0021d391 ^ 0xe;
          DAT_0021d388 = DAT_0021d388 ^ 0xe0e0e0e0e0e0e0e;
          DAT_0021f709 = '\x01';
          lVar6 = -0x55866d9ac3a2799b;
        }
        else if (lVar4 == 0x3277e6730e7ad8bb) {
          lVar6 = 0x7d3ca24dae973643;
        }
      }
      else if (lVar4 == 0x32cbfb1437f9c65b) {
        lVar6 = 0x60c6458f70fdf2e2;
        if (DAT_0021f70e == '\0') {
          lVar6 = 0x600ae6dec4255729;
        }
      }
      else if (lVar4 == 0x339b816749bbabae) {
        iVar2 = FUN_00212730(0,1,&DAT_0021f55c);
        lVar6 = 0x3b54714f78c87612;
        if (iVar2 != 0) {
          lVar6 = 0x2d789229014778fb;
        }
      }
      goto LAB_0014a2e0;
    }
    lVar6 = 0x339b816749bbabae;
    if (lVar4 == 0x2d789229014778fb) goto LAB_0014a2e0;
    if (lVar4 != 0x2e00fc75c4d51ccf) {
      lVar6 = lVar4;
      if (lVar4 == 0x2fa15c8f4c162347) {
        DAT_0021f53c = 0;
        puVar5 = puVar1 + -0x80;
        *(undefined **)(puVar1 + -0x80) = &DAT_0021d370;
        *(ulong **)(puVar1 + -0x78) = &DAT_0021d388;
        *(ulong **)(puVar1 + -0x70) = &DAT_0021d398;
        *(ulong **)(puVar1 + -0x68) = &DAT_0021d388;
        *(ulong **)(puVar1 + -0x60) = &DAT_0021d3a8;
        *(ulong **)(puVar1 + -0x58) = &DAT_0021d388;
        *(undefined **)(puVar1 + -0x50) = &DAT_0021d3b0;
        *(ulong **)(puVar1 + -0x48) = &DAT_0021d3c8;
        *(ulong **)(puVar1 + -0x40) = &DAT_0021d3d8;
        *(ulong **)(puVar1 + -0x38) = &DAT_0021d3c8;
        *(undefined **)(puVar1 + -0x30) = &DAT_0021d3f0;
        *(ulong **)(puVar1 + -0x28) = &DAT_0021d3c8;
        *(undefined **)(puVar1 + -0x20) = &DAT_0021d410;
        *(ulong **)(puVar1 + -0x18) = &DAT_0021d3c8;
        uVar3 = *local_b0;
        *(undefined **)(puVar1 + -0x10) = &DAT_0021d430;
        *(ulong **)(puVar1 + -8) = &DAT_0021d3c8;
        local_c0 = puVar5;
        lVar4 = FUN_001e238c(uVar3,&DAT_0021d44c);
        puVar1 = puVar5;
        lVar6 = -0xda878123d0938fa;
        if (lVar4 != 0) {
          lVar6 = 0x2b744d9ba586aac4;
        }
      }
      goto LAB_0014a2e0;
    }
  }
LAB_0014a2c8:
  local_b4 = 1;
  lVar6 = -0x6dd7426346a9583e;
  goto LAB_0014a2e0;
}

