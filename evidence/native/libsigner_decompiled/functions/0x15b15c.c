// rea decompile_all
// name: FUN_0015b15c
// address: 0x15b15c
// body: available
// range: 0x15b15c-0x15d8b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0015b15c(ulong param_1,ulong param_2,byte param_3)

{
  byte unaff_10000132;
  uint unaff_100004a6;
  bool bVar1;
  int iVar2;
  ulong uVar3;
  byte bVar4;
  ulong uVar6;
  long lVar7;
  uint in_w9;
  uint uVar8;
  uint uVar9;
  long lVar10;
  ulong in_x10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ulong local_100;
  byte local_f4;
  long local_f0;
  long *local_e8;
  byte local_dc;
  long local_d8;
  long *local_d0;
  byte local_c4;
  ulong local_c0;
  byte local_b8;
  byte local_b4;
  byte local_b0;
  uint local_ac;
  ulong local_a8;
  uint local_9c;
  ulong local_98;
  ulong local_90;
  byte local_78;
  uint local_74;
  byte bVar5;
  
  uVar3 = param_2;
  lVar10 = 0x47a3edbdfa2d2a6f;
LAB_0015b238:
  bVar5 = unaff_10000132;
  bVar4 = param_3;
  uVar8 = unaff_100004a6;
  uVar9 = in_w9;
  lVar7 = lVar10;
  uVar11 = in_x10;
  uVar6 = param_1;
  uVar13 = uVar3 & 0xffffffff;
  param_1 = uVar6;
  in_x10 = uVar11;
  lVar10 = lVar7;
  in_w9 = uVar9;
  unaff_100004a6 = uVar8;
  param_3 = bVar4;
  unaff_10000132 = bVar5;
  if (lVar7 < 0x73056bb2ccb4178) {
    uVar12 = (uint)uVar3;
    if (lVar7 < -0x3e44666cf9227280) {
      if (lVar7 < -0x666f422811c5dc38) {
        if (lVar7 < -0x6a7137d3b17fe77c) {
          if (lVar7 < -0x723383facfe0e0c4) {
            if (lVar7 < -0x7d5e988f71156033) {
              if (lVar7 == -0x7ebd7274c3e69ee4) {
                iVar2 = FUN_00212730(0,1,&DAT_0021f5f0);
                bVar1 = iVar2 == 0;
                lVar7 = 0x56bd9e5e0f866344;
                lVar10 = 0x2ff4ea7105468fb1;
                goto LAB_0015b220;
              }
              uVar3 = uVar13;
              in_w9 = uVar8;
              param_3 = bVar5;
              if (lVar7 == -0x7ea213cabcdd2196) {
                return uVar9 & 1;
              }
            }
            else if (lVar7 == -0x7d5e988f71156033) {
              uVar3 = uVar13;
              lVar10 = 0x7f3764f448859757;
              if (DAT_0021f730 == '\0') {
                lVar10 = -0x67412acb99df4f82;
              }
            }
            else {
              uVar3 = uVar13;
              param_3 = bVar5;
              bVar4 = local_b8;
              if (lVar7 == -0x7cf4d1c4902bdb85) goto LAB_0015c060;
            }
          }
          else {
            uVar3 = uVar13;
            lVar10 = 0x65cc84cc1270cdb6;
            param_3 = bVar5;
            if (lVar7 != -0x723383facfe0e0c4) {
              if (lVar7 == -0x70146c4a782ca26b) {
                local_b0 = false;
                goto LAB_0015d748;
              }
              lVar10 = lVar7;
              if (lVar7 == -0x6b8df44b1228de4a) goto LAB_0015c99c;
            }
          }
        }
        else if (lVar7 < -0x67c57ea724b7fda9) {
          if (lVar7 == -0x6a7137d3b17fe77c) {
            uVar3 = uVar13;
            lVar10 = 0x86a4bce947d3137;
            if (DAT_0021f732 == '\0') {
              lVar10 = 0x46f98937b23f36d9;
            }
          }
          else {
            uVar3 = uVar13;
            lVar10 = -0x184c2bb9525e4f41;
            param_3 = bVar5;
            if ((lVar7 != -0x6a49f2ceaea5d35d) && (lVar10 = lVar7, lVar7 == -0x6823c2eed4847ec2)) {
              lVar10 = 0x468cf486cb280129;
              param_3 = bVar4;
              if (DAT_0021f734 == '\0') {
                lVar10 = 0x5eeacf8fb89c2038;
              }
            }
          }
        }
        else {
          uVar3 = uVar13;
          lVar10 = 0x65cc84cc1270cdb6;
          in_w9 = uVar8;
          param_3 = bVar5;
          if (lVar7 != -0x67c57ea724b7fda9) {
            if (lVar7 == -0x67872d29df81539f) goto LAB_0015c99c;
            lVar10 = lVar7;
            if (lVar7 == -0x67412acb99df4f82) {
              DAT_0021d6b8 = DAT_0021d6b8 ^ 0x39;
              _DAT_0021d690 = _DAT_0021d690 ^ 0x3939393939393939;
              uRam000000000021d698 = uRam000000000021d698 ^ 0x3939393939393939;
              _DAT_0021d6a0 = _DAT_0021d6a0 ^ 0x3939393939393939;
              uRam000000000021d6a8 = uRam000000000021d6a8 ^ 0x3939393939393939;
              DAT_0021d6b9 = DAT_0021d6b9 ^ 0x39;
              DAT_0021d6ba = DAT_0021d6ba ^ 0x39;
              DAT_0021d6bb = DAT_0021d6bb ^ 0x39;
              DAT_0021d6b0 = DAT_0021d6b0 ^ 0x3939393939393939;
              DAT_0021f730 = '\x01';
              lVar10 = 0x1d3f371e7c901d7c;
            }
          }
        }
      }
      else if (lVar7 < -0x570c9540a7181b47) {
        if (lVar7 < -0x60eda6d158846bb9) {
          if (lVar7 == -0x666f422811c5dc38) {
            iVar2 = FUN_00212730(0,1,&DAT_0021f5e8);
            uVar3 = uVar13;
            lVar10 = -0x6a7137d3b17fe77c;
            if (iVar2 != 0) {
              lVar10 = -0x43ae18391f0ae8fe;
            }
          }
          else if (lVar7 == -0x61511772e48f7f87) {
            lVar10 = -0x1a8c8d0530328c5e;
LAB_0015d544:
            DAT_0021d70c = DAT_0021d70c ^ 0x19;
            DAT_0021d70b = DAT_0021d70b ^ 0x19;
            DAT_0021d70a = DAT_0021d70a ^ 0x19;
            DAT_0021d709 = DAT_0021d709 ^ 0x19;
            DAT_0021d708 = DAT_0021d708 ^ 0x19;
            DAT_0021d70d = DAT_0021d70d ^ 0x19;
            DAT_0021f733 = '\x01';
            uVar3 = uVar13;
            in_w9 = uVar8;
            param_3 = bVar5;
          }
          else {
            uVar3 = uVar13;
            param_3 = bVar5;
            if (lVar7 == -0x6148a2434195ed0b) {
              local_9c = local_ac;
              goto LAB_0015bb78;
            }
          }
        }
        else {
          if (lVar7 == -0x60eda6d158846bb9) goto LAB_0015c99c;
          uVar3 = uVar13;
          lVar10 = 0x4bdf24b6dcedcc60;
          in_w9 = uVar8;
          param_3 = bVar5;
          if ((lVar7 != -0x6053b76aa9cc563b) && (lVar10 = lVar7, lVar7 == -0x5a7e8db0d4b2721c)) {
            lVar10 = -0x518331177bf07220;
          }
        }
      }
      else if (lVar7 < -0x47995c714684b1a6) {
        if (lVar7 == -0x570c9540a7181b47) goto LAB_0015ce0c;
        if (lVar7 == -0x518331177bf07220) {
          DAT_0021f5f4 = 0;
          lVar7 = FUN_001e238c(*(undefined8 *)(param_2 + 0x58),&DAT_0021d718);
          uVar3 = uVar13;
          lVar10 = 0x7dbf46daf659981d;
          if (((local_dc | local_f4) & 1) == 0 && lVar7 == 0) {
            lVar10 = 0x3d0d050fa6533e4b;
          }
        }
        else {
          uVar3 = uVar13;
          param_3 = bVar5;
          if (lVar7 == -0x4990b717da65dc04) {
            param_1 = 0;
            lVar10 = 0x46e6a202339f5196;
            param_3 = 0;
            unaff_10000132 = 0;
          }
        }
      }
      else if (lVar7 < -0x44ca3de9aa1ebd1e) {
        uVar3 = uVar13;
        lVar10 = -0x44ca3de9aa1ebd1e;
        param_3 = bVar5;
        if ((lVar7 != -0x47995c714684b1a6) && (lVar10 = lVar7, lVar7 == -0x460202159ae68fff)) {
          lVar10 = 0x2a8a964b8407acc8;
        }
      }
      else {
        if (lVar7 == -0x44ca3de9aa1ebd1e) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f5f4);
          bVar1 = iVar2 == 0;
          lVar7 = -0x47995c714684b1a6;
          lVar10 = -0x14bba3d3756146cb;
          goto LAB_0015b220;
        }
        uVar3 = uVar13;
        in_w9 = uVar8;
        param_3 = bVar5;
        if (lVar7 == -0x43ae18391f0ae8fe) {
          lVar10 = -0x666f422811c5dc38;
        }
      }
      goto LAB_0015b238;
    }
    if (-0x17c5207c218e5501 < lVar7) {
      if (lVar7 < -0x108355cb6d2366ca) {
        if (lVar7 < -0x13ce592e275f7df4) {
          uVar3 = uVar13;
          lVar10 = -0x283394f5e05146dc;
          param_3 = bVar5;
          if (lVar7 != -0x17c5207c218e5500) {
            if (lVar7 == -0x14bba3d3756146cb) {
              lVar10 = -0x5a7e8db0d4b2721c;
              param_3 = bVar4;
              if (DAT_0021f735 == '\0') {
                lVar10 = 0x64c2fee337ad597d;
              }
            }
            else {
              lVar10 = lVar7;
              if (lVar7 == -0x143008f5b975f26d) {
                lVar10 = 0x67d2517cf48296c3;
              }
            }
          }
        }
        else {
          uVar3 = uVar13;
          lVar10 = 0x204deb1e48620f75;
          in_w9 = uVar8;
          param_3 = bVar5;
          if (lVar7 != -0x13ce592e275f7df4) {
            if (lVar7 == -0x134572230a7dc119) {
              DAT_0021f5f0 = 0;
              lVar10 = FUN_001e238c(*(undefined8 *)(param_2 + 0x50),&DAT_0021d710);
              local_b0 = lVar10 != 0;
LAB_0015d748:
              uVar3 = uVar13;
              lVar10 = 0x78b48b399046b6ad;
              in_w9 = uVar8;
              param_3 = bVar5;
            }
            else {
              lVar10 = lVar7;
              if (lVar7 == -0x116aee16011f56e4) goto LAB_0015c7ac;
            }
          }
        }
      }
      else if (lVar7 < -0x77592ce91c6b538) {
        if (lVar7 == -0x108355cb6d2366ca) {
          DAT_0021d6d8 = DAT_0021d6d8 ^ 0x5e;
          DAT_0021d6d9 = DAT_0021d6d9 ^ 0x5e;
          DAT_0021d6da = DAT_0021d6da ^ 0x5e;
          _DAT_0021d6c0 = _DAT_0021d6c0 ^ 0x5e5e5e5e5e5e5e5e;
          uRam000000000021d6c8 = uRam000000000021d6c8 ^ 0x5e5e5e5e5e5e5e5e;
          DAT_0021d6db = DAT_0021d6db ^ 0x5e;
          DAT_0021d6dc = DAT_0021d6dc ^ 0x5e;
          DAT_0021d6dd = DAT_0021d6dd ^ 0x5e;
          DAT_0021d6d0 = DAT_0021d6d0 ^ 0x5e5e5e5e5e5e5e5e;
          DAT_0021f731 = '\x01';
          uVar3 = uVar13;
          lVar10 = 0x67d2517cf48296c3;
          in_w9 = uVar8;
          param_3 = bVar5;
        }
        else if (lVar7 == -0xe7d2d395e333dbc) {
          uVar3 = uVar13;
          lVar10 = 0x6677755849989d21;
          if (DAT_0021f733 == '\0') {
            lVar10 = -0x61511772e48f7f87;
          }
        }
        else {
          uVar3 = uVar13;
          param_3 = bVar5;
          if (lVar7 == -0x8075ddae67817a9) {
            local_d8 = *(long *)(param_2 + uVar11 * 0x10 + 0x70);
            lVar10 = -0x67872d29df81539f;
            local_ac = uVar12;
            local_a8 = uVar11;
            if (local_d8 != 0) {
              lVar10 = 0x7dbbccefe5607489;
            }
          }
        }
      }
      else if (lVar7 < -0x4979314860ec7fc) {
        if (lVar7 == -0x77592ce91c6b538) {
          DAT_0021f5ec = 0;
          lVar10 = FUN_001e238c(*(undefined8 *)(param_2 + 8),&DAT_0021d708);
          local_b8 = lVar10 != 0;
          goto LAB_0015d0ec;
        }
        uVar3 = uVar13;
        param_3 = bVar5;
        if (lVar7 == -0x574030d9be7ee4c) {
LAB_0015c99c:
          unaff_100004a6 = 0;
          in_w9 = 0;
LAB_0015ce18:
          uVar3 = uVar13;
          in_x10 = uVar11;
          lVar10 = -0x7ea213cabcdd2196;
          param_3 = bVar5;
        }
      }
      else if (lVar7 == -0x4979314860ec7fc) {
        uVar3 = 0;
        in_x10 = 0;
        lVar10 = -0x8075ddae67817a9;
        in_w9 = uVar8;
        param_3 = bVar5;
      }
      else {
        uVar3 = uVar13;
        in_w9 = uVar8;
        param_3 = bVar5;
        if (lVar7 == 0x642650e2034b125) {
          DAT_0021d380 = DAT_0021d380 ^ 0xd8;
          DAT_0021d381 = DAT_0021d381 ^ 0xd8;
          DAT_0021d382 = DAT_0021d382 ^ 0xd8;
          DAT_0021d383 = DAT_0021d383 ^ 0xd8;
          _DAT_0021d370 = _DAT_0021d370 ^ 0xd8d8d8d8d8d8d8d8;
          uRam000000000021d378 = uRam000000000021d378 ^ 0xd8d8d8d8d8d8d8d8;
          DAT_0021f708 = '\x01';
          lVar10 = -0x31ca795f2a8bc98e;
        }
      }
      goto LAB_0015b238;
    }
    if (lVar7 < -0x2520125c42fb7d9f) {
      if (lVar7 < -0x295a5fe648a88e93) {
        if (lVar7 == -0x3e44666cf9227280) {
          local_74 = local_9c;
          local_90 = local_a8 + 1;
          uVar3 = uVar13;
          lVar10 = 0x5a2a2324dac7019b;
          in_w9 = uVar8;
          param_3 = bVar5;
          if (*(ulong *)(param_2 + 0x870) <= local_90) {
            lVar10 = 0x878e388eb46bdaa;
          }
        }
        else if (lVar7 == -0x3927ec73d5886853) {
          local_e8 = (long *)(param_2 + local_c0 * 0x10 + 0x78);
          uVar3 = uVar13;
          lVar10 = -0x6b8df44b1228de4a;
          if (*local_e8 != 0) {
            lVar10 = -0x17c5207c218e5500;
          }
        }
        else {
          uVar3 = uVar13;
          param_3 = bVar5;
          if (lVar7 == -0x31ca795f2a8bc98e) {
            DAT_0021f53c = 0;
            iVar2 = FUN_001e17a8(&DAT_0021d370,local_f0);
            bVar1 = iVar2 == 0;
            lVar7 = 0x354dcf5f6ef84848;
            lVar10 = 0x53c6b8d8b64dbbfc;
            goto LAB_0015b220;
          }
        }
        goto LAB_0015b238;
      }
      uVar3 = uVar13;
      lVar10 = -0x7ebd7274c3e69ee4;
      in_w9 = uVar8;
      param_3 = bVar5;
      if (lVar7 == -0x295a5fe648a88e93) goto LAB_0015b238;
      if (lVar7 != -0x283394f5e05146dc) {
        lVar10 = lVar7;
        if (lVar7 == -0x2759b8ddd09fb275) {
          lVar10 = -0x44ca3de9aa1ebd1e;
        }
        goto LAB_0015b238;
      }
      iVar2 = FUN_00212730(0,1,&DAT_0021f53c);
      bVar1 = iVar2 == 0;
      lVar7 = 0x71edf44b1cb10e18;
      lVar10 = 0x7c8e67e9e5221dae;
    }
    else {
      if (lVar7 < -0x1a8c8d0530328c5e) {
        uVar3 = uVar13;
        lVar10 = -0x134572230a7dc119;
        param_3 = bVar5;
        if (((lVar7 != -0x2520125c42fb7d9f) &&
            (lVar10 = -0x77592ce91c6b538, lVar7 != -0x2260206a5b15e0dd)) &&
           (lVar10 = lVar7, lVar7 == -0x1d32c8f64cce709c)) {
LAB_0015c9f4:
          uVar3 = uVar13;
          lVar10 = 0xe2d9235ab2938f7;
          in_w9 = uVar8;
          param_3 = bVar5;
        }
        goto LAB_0015b238;
      }
      if (lVar7 < -0x1a6805c22a8a128c) {
        if (lVar7 == -0x1a8c8d0530328c5e) {
          DAT_0021f5ec = 0;
          lVar7 = FUN_001e238c(*(undefined8 *)(param_2 + 0x10),&DAT_0021d708);
          uVar3 = uVar13;
          lVar10 = -0x1d32c8f64cce709c;
          if (lVar7 != 0) {
            lVar10 = 0x80fd62f3b0d529c;
          }
        }
        else {
          uVar3 = uVar13;
          param_3 = bVar5;
          if (lVar7 == -0x1a7378c02057985e) {
            lVar10 = -0x184c2bb9525e4f41;
            goto LAB_0015d3e4;
          }
        }
        goto LAB_0015b238;
      }
      uVar3 = uVar13;
      lVar10 = -0x31ca795f2a8bc98e;
      in_w9 = uVar8;
      param_3 = bVar5;
      if ((lVar7 == -0x1a6805c22a8a128c) || (lVar10 = lVar7, lVar7 != -0x184c2bb9525e4f41))
      goto LAB_0015b238;
      DAT_0021f5f4 = 0;
      lVar10 = FUN_001e238c(*(undefined8 *)(param_2 + 8),&DAT_0021d718);
      bVar1 = lVar10 == 0;
      lVar7 = -0x570c9540a7181b47;
      lVar10 = -0x2759b8ddd09fb275;
    }
  }
  else if (lVar7 < 0x47a3edbdfa2d2a6f) {
    if (lVar7 < 0x2a8a964b8407acc8) {
      if (lVar7 < 0xea988f1b8dd9ab5) {
        if (lVar7 < 0x878e388eb46bdaa) {
          if (lVar7 == 0x73056bb2ccb4178) {
            DAT_0021f5f0 = 0;
            lVar7 = FUN_001e238c(*(undefined8 *)(param_2 + 0x58),&DAT_0021d710);
            uVar3 = uVar13;
            lVar10 = -0x70146c4a782ca26b;
            if (lVar7 != 0) {
              lVar10 = -0x295a5fe648a88e93;
            }
          }
          else if (lVar7 == 0x80fd62f3b0d529c) {
            local_b8 = true;
LAB_0015d0ec:
            uVar3 = uVar13;
            lVar10 = -0x7cf4d1c4902bdb85;
            in_w9 = uVar8;
            param_3 = bVar5;
          }
          else {
            uVar3 = uVar13;
            param_3 = bVar5;
            if (lVar7 == 0x86a4bce947d3137) {
              lVar10 = 0x4c7a3b65d932e1c8;
            }
          }
          goto LAB_0015b238;
        }
        uVar3 = uVar13;
        lVar10 = -0x7ea213cabcdd2196;
        in_w9 = local_74;
        unaff_100004a6 = local_74;
        param_3 = bVar5;
        if (((lVar7 == 0x878e388eb46bdaa) ||
            (lVar10 = -0x666f422811c5dc38, in_w9 = uVar8, unaff_100004a6 = uVar8,
            lVar7 == 0x9518b21b63c8f58)) || (lVar10 = lVar7, lVar7 != 0xe2d9235ab2938f7))
        goto LAB_0015b238;
        iVar2 = FUN_00212730(0,1,&DAT_0021f5ec);
        bVar1 = iVar2 == 0;
        lVar7 = 0x2103b66c7fbf485b;
        lVar10 = 0x2ecd391c5f752c4f;
      }
      else {
        if (lVar7 < 0x1d3f371e7c901d7c) {
          if (lVar7 == 0xea988f1b8dd9ab5) {
            lVar10 = 0x66c8633b9627a270;
LAB_0015d3e4:
            DAT_0021d720 = DAT_0021d720 ^ 0x70;
            DAT_0021d721 = DAT_0021d721 ^ 0x70;
            DAT_0021d718 = DAT_0021d718 ^ 0x7070707070707070;
            DAT_0021f735 = '\x01';
            uVar3 = uVar13;
            in_w9 = uVar8;
            param_3 = bVar5;
          }
          else if (lVar7 == 0x1b74476fe3ed460d) {
            local_100 = *(ulong *)(param_2 + 0x870);
            local_98 = local_c0 + 1;
            uVar3 = uVar13;
            lVar10 = 0x3aa2ec7c714b4098;
            in_w9 = uVar8;
            local_78 = local_b4;
            param_3 = bVar5;
            if (local_100 <= local_98) {
              lVar10 = 0x1fa749e463e7d188;
            }
          }
          else {
            uVar3 = uVar13;
            param_3 = bVar5;
            if (lVar7 == 0x1d23b6474b32b4fa) {
              iVar2 = FUN_00212730(0,1,&DAT_0021f5f0);
              lVar10 = -0x6823c2eed4847ec2;
              param_3 = bVar4;
              if (iVar2 != 0) {
                lVar10 = 0x5ebbbc258f6ea4a1;
              }
            }
          }
          goto LAB_0015b238;
        }
        if (lVar7 < 0x204deb1e48620f75) {
          if (lVar7 == 0x1d3f371e7c901d7c) {
            DAT_0021f5e0 = 0;
            iVar2 = FUN_001e17a8(&DAT_0021d690,*local_e8);
            bVar4 = iVar2 == 0 | local_c4;
            goto LAB_0015cecc;
          }
          uVar3 = uVar13;
          unaff_10000132 = bVar4;
          if (lVar7 == 0x1fa749e463e7d188) {
            lVar10 = -0x4979314860ec7fc;
            unaff_10000132 = bVar5;
            if ((local_78 & local_100 != 0) == 0) {
              lVar10 = 0x5ad6f50c17cce5b5;
            }
          }
          goto LAB_0015b238;
        }
        if (lVar7 != 0x204deb1e48620f75) {
          uVar3 = uVar13;
          in_w9 = uVar8;
          param_3 = bVar5;
          if (lVar7 == 0x2103b66c7fbf485b) goto LAB_0015c9f4;
          goto LAB_0015b238;
        }
        iVar2 = FUN_00212730(0,1,&DAT_0021f5ec);
        bVar1 = iVar2 == 0;
        lVar7 = -0x13ce592e275f7df4;
        lVar10 = -0xe7d2d395e333dbc;
      }
    }
    else {
      if (lVar7 < 0x399eb740020a506a) {
        if (lVar7 < 0x2f9919370ca5c827) {
          if (lVar7 == 0x2a8a964b8407acc8) {
            iVar2 = FUN_00212730(0,1,&DAT_0021f5e0);
            uVar3 = uVar13;
            lVar10 = -0x7d5e988f71156033;
            if (iVar2 != 0) {
              lVar10 = -0x460202159ae68fff;
            }
          }
          else if (lVar7 == 0x2ecd391c5f752c4f) {
            uVar3 = uVar13;
            lVar10 = -0x2260206a5b15e0dd;
            if (DAT_0021f733 == '\0') {
              lVar10 = 0x399eb740020a506a;
            }
          }
          else {
            uVar3 = uVar13;
            param_3 = bVar5;
            if (lVar7 == 0x2f1d4abc86e9f14a) {
LAB_0015c7ac:
              uVar3 = uVar13;
              lVar10 = 0x41b1d845e42d4ef5;
              in_w9 = uVar8;
              param_3 = bVar5;
            }
          }
        }
        else {
          if (lVar7 == 0x2f9919370ca5c827) goto LAB_0015c99c;
          if (lVar7 == 0x2ff4ea7105468fb1) {
            uVar3 = uVar13;
            lVar10 = -0x2520125c42fb7d9f;
            if (DAT_0021f734 == '\0') {
              lVar10 = 0x7b73821e3df7cc33;
            }
          }
          else {
            uVar3 = uVar13;
            in_w9 = uVar8;
            param_3 = bVar5;
            bVar4 = local_c4;
            if (lVar7 == 0x354dcf5f6ef84848) {
LAB_0015cecc:
              uVar3 = uVar13;
              lVar10 = 0x1b74476fe3ed460d;
              in_w9 = uVar8;
              param_3 = bVar5;
              local_b4 = bVar4;
            }
          }
        }
        goto LAB_0015b238;
      }
      if (lVar7 < 0x41b1d845e42d4ef5) {
        if (lVar7 == 0x399eb740020a506a) {
          lVar10 = -0x77592ce91c6b538;
          goto LAB_0015d544;
        }
        uVar3 = uVar13;
        param_1 = local_98;
        lVar10 = 0x46e6a202339f5196;
        param_3 = local_78;
        unaff_10000132 = local_78;
        if ((lVar7 == 0x3aa2ec7c714b4098) ||
           (param_1 = uVar6, lVar10 = lVar7, param_3 = bVar5, unaff_10000132 = bVar5,
           lVar7 != 0x3d0d050fa6533e4b)) goto LAB_0015b238;
        bVar1 = *(long *)(param_2 + 0x870) == 2;
        lVar10 = -0x4990b717da65dc04;
        lVar7 = -0x60eda6d158846bb9;
      }
      else {
        if (0x46e6a202339f5195 < lVar7) {
          if (lVar7 == 0x46e6a202339f5196) {
            local_f0 = *(long *)(param_2 + uVar6 * 0x10 + 0x70);
            uVar3 = uVar13;
            lVar10 = -0x574030d9be7ee4c;
            in_w9 = uVar8;
            local_c0 = uVar6;
            param_3 = bVar5;
            local_c4 = bVar4;
            if (local_f0 != 0) {
              lVar10 = -0x3927ec73d5886853;
            }
          }
          else {
            uVar3 = uVar13;
            in_w9 = uVar8;
            param_3 = bVar5;
            if (lVar7 == 0x46f98937b23f36d9) {
              DAT_0021d700 = DAT_0021d700 ^ 0x79;
              DAT_0021d701 = DAT_0021d701 ^ 0x79;
              DAT_0021d702 = DAT_0021d702 ^ 0x79;
              DAT_0021d703 = DAT_0021d703 ^ 0x79;
              DAT_0021d704 = DAT_0021d704 ^ 0x79;
              DAT_0021d705 = DAT_0021d705 ^ 0x79;
              _DAT_0021d6e0 = _DAT_0021d6e0 ^ 0x7979797979797979;
              uRam000000000021d6e8 = uRam000000000021d6e8 ^ 0x7979797979797979;
              _DAT_0021d6f0 = _DAT_0021d6f0 ^ 0x7979797979797979;
              uRam000000000021d6f8 = uRam000000000021d6f8 ^ 0x7979797979797979;
              DAT_0021d706 = DAT_0021d706 ^ 0x79;
              DAT_0021f732 = '\x01';
              lVar10 = 0x4c7a3b65d932e1c8;
            }
          }
          goto LAB_0015b238;
        }
        if (lVar7 != 0x41b1d845e42d4ef5) {
          uVar3 = uVar13;
          param_3 = bVar5;
          if (lVar7 == 0x468cf486cb280129) {
            lVar10 = 0x73056bb2ccb4178;
          }
          goto LAB_0015b238;
        }
        iVar2 = FUN_00212730(0,1,&DAT_0021f5e4);
        bVar1 = iVar2 == 0;
        lVar7 = -0x116aee16011f56e4;
        lVar10 = 0x794859eff800607d;
      }
    }
  }
  else {
    if (0x6677755849989d20 < lVar7) {
      if (lVar7 < 0x794859eff800607d) {
        if (lVar7 < 0x6a7cacf5e1f148ff) {
          uVar3 = uVar13;
          lVar10 = -0x1a8c8d0530328c5e;
          param_3 = bVar5;
          if (lVar7 != 0x6677755849989d21) {
            if (lVar7 == 0x66c8633b9627a270) {
              DAT_0021f5f4 = 0;
              lVar7 = FUN_001e238c(*(undefined8 *)(param_2 + 0x30),&DAT_0021d718);
              lVar10 = -0x723383facfe0e0c4;
              param_3 = bVar4;
              if (lVar7 != 0) {
                lVar10 = 0x6a7cacf5e1f148ff;
              }
            }
            else {
              lVar10 = lVar7;
              if (lVar7 == 0x67d2517cf48296c3) {
                DAT_0021f5e4 = 0;
                iVar2 = FUN_001e17a8(&DAT_0021d6c0,local_d8);
                bVar1 = iVar2 == 0;
                lVar7 = -0x6148a2434195ed0b;
                lVar10 = 0x9518b21b63c8f58;
                goto LAB_0015b220;
              }
            }
          }
        }
        else {
          if (lVar7 == 0x6a7cacf5e1f148ff) {
LAB_0015ce0c:
            unaff_100004a6 = 1;
            in_w9 = 1;
            goto LAB_0015ce18;
          }
          uVar3 = uVar13;
          lVar10 = -0x283394f5e05146dc;
          in_w9 = uVar8;
          param_3 = bVar5;
          if ((lVar7 != 0x71edf44b1cb10e18) && (lVar10 = lVar7, lVar7 == 0x78b48b399046b6ad)) {
            lVar10 = 0x4bdf24b6dcedcc60;
            local_f4 = local_b0;
          }
        }
      }
      else if (lVar7 < 0x7c8e67e9e5221dae) {
        if (lVar7 == 0x794859eff800607d) {
          uVar3 = uVar13;
          lVar10 = -0x143008f5b975f26d;
          if (DAT_0021f731 == '\0') {
            lVar10 = -0x108355cb6d2366ca;
          }
        }
        else if (lVar7 == 0x79fbcb38a3bb1eb2) {
          uVar3 = uVar13;
          lVar10 = -0x6a49f2ceaea5d35d;
          if (DAT_0021f735 == '\0') {
            lVar10 = -0x1a7378c02057985e;
          }
        }
        else {
          uVar3 = uVar13;
          param_3 = bVar5;
          if (lVar7 == 0x7b73821e3df7cc33) {
            lVar10 = -0x134572230a7dc119;
LAB_0015cfa0:
            DAT_0021d714 = DAT_0021d714 ^ 0xe9;
            DAT_0021d713 = DAT_0021d713 ^ 0xe9;
            DAT_0021d712 = DAT_0021d712 ^ 0xe9;
            DAT_0021d711 = DAT_0021d711 ^ 0xe9;
            DAT_0021d710 = DAT_0021d710 ^ 0xe9;
            DAT_0021d715 = DAT_0021d715 ^ 0xe9;
            DAT_0021f734 = '\x01';
            uVar3 = uVar13;
            in_w9 = uVar9;
            param_3 = bVar5;
          }
        }
      }
      else if (lVar7 < 0x7dbf46daf659981d) {
        if (lVar7 == 0x7c8e67e9e5221dae) {
          uVar3 = uVar13;
          lVar10 = -0x1a6805c22a8a128c;
          if (DAT_0021f708 == '\0') {
            lVar10 = 0x642650e2034b125;
          }
        }
        else {
          uVar3 = uVar13;
          param_3 = bVar5;
          if (lVar7 == 0x7dbbccefe5607489) {
            local_d0 = (long *)(param_2 + local_a8 * 0x10 + 0x78);
            bVar1 = *local_d0 == 0;
            lVar10 = 0x2f9919370ca5c827;
            lVar7 = 0x2f1d4abc86e9f14a;
            goto LAB_0015b220;
          }
        }
      }
      else {
        if (lVar7 == 0x7dbf46daf659981d) goto LAB_0015ce0c;
        uVar3 = uVar13;
        in_w9 = uVar8;
        param_3 = bVar5;
        if (lVar7 == 0x7f3764f448859757) {
          lVar10 = 0x1d3f371e7c901d7c;
        }
      }
      goto LAB_0015b238;
    }
    if (lVar7 < 0x5a2a2324dac7019b) {
      if (0x4f3a34cbdefd7510 < lVar7) {
        if (lVar7 == 0x4f3a34cbdefd7511) {
          uVar3 = uVar13;
          lVar10 = 0x655923a0ca558f4d;
          if (DAT_0021f735 == '\0') {
            lVar10 = 0xea988f1b8dd9ab5;
          }
        }
        else {
          uVar3 = uVar13;
          lVar10 = 0x2a8a964b8407acc8;
          in_w9 = uVar8;
          param_3 = bVar5;
          if ((lVar7 != 0x53c6b8d8b64dbbfc) && (lVar10 = lVar7, lVar7 == 0x56bd9e5e0f866344)) {
            lVar10 = -0x7ebd7274c3e69ee4;
          }
        }
        goto LAB_0015b238;
      }
      uVar3 = uVar13;
      lVar10 = 0x204deb1e48620f75;
      param_3 = bVar5;
      if (lVar7 == 0x47a3edbdfa2d2a6f) goto LAB_0015b238;
      if (lVar7 != 0x4bdf24b6dcedcc60) {
        lVar10 = lVar7;
        if (lVar7 == 0x4c7a3b65d932e1c8) {
          DAT_0021f5e8 = 0;
          iVar2 = FUN_001e17a8(&DAT_0021d6e0,*local_d0);
          local_9c = iVar2 == 0 | local_ac;
LAB_0015bb78:
          uVar3 = uVar13;
          lVar10 = -0x3e44666cf9227280;
          param_3 = bVar5;
        }
        goto LAB_0015b238;
      }
      iVar2 = FUN_00212730(0,1,&DAT_0021f5f4);
      bVar1 = iVar2 == 0;
      lVar7 = -0x6053b76aa9cc563b;
      lVar10 = 0x4f3a34cbdefd7511;
    }
    else {
      if (lVar7 < 0x5eeacf8fb89c2038) {
        uVar3 = (ulong)local_74;
        in_x10 = local_90;
        lVar10 = -0x8075ddae67817a9;
        param_3 = bVar5;
        if (lVar7 != 0x5a2a2324dac7019b) {
          if (lVar7 == 0x5ad6f50c17cce5b5) goto LAB_0015c99c;
          uVar3 = uVar13;
          in_x10 = uVar11;
          lVar10 = lVar7;
          bVar4 = local_dc;
          if (lVar7 == 0x5ebbbc258f6ea4a1) {
LAB_0015c060:
            uVar3 = uVar13;
            in_x10 = uVar11;
            lVar10 = 0x1d23b6474b32b4fa;
            param_3 = bVar5;
            local_dc = bVar4;
          }
        }
        goto LAB_0015b238;
      }
      if (lVar7 < 0x655923a0ca558f4d) {
        if (lVar7 == 0x5eeacf8fb89c2038) {
          lVar10 = 0x73056bb2ccb4178;
          uVar9 = uVar8;
          goto LAB_0015cfa0;
        }
        uVar3 = uVar13;
        param_3 = bVar5;
        if (lVar7 == 0x64c2fee337ad597d) {
          lVar10 = -0x518331177bf07220;
          goto LAB_0015d3e4;
        }
        goto LAB_0015b238;
      }
      uVar3 = uVar13;
      lVar10 = 0x66c8633b9627a270;
      in_w9 = uVar8;
      param_3 = bVar5;
      if ((lVar7 == 0x655923a0ca558f4d) || (lVar10 = lVar7, lVar7 != 0x65cc84cc1270cdb6))
      goto LAB_0015b238;
      iVar2 = FUN_00212730(0,1,&DAT_0021f5f4);
      bVar1 = iVar2 == 0;
      lVar7 = -0x67c57ea724b7fda9;
      lVar10 = 0x79fbcb38a3bb1eb2;
    }
  }
LAB_0015b220:
  uVar3 = uVar13;
  param_1 = uVar6;
  in_w9 = uVar9;
  unaff_100004a6 = uVar8;
  param_3 = bVar4;
  unaff_10000132 = bVar5;
  if (!bVar1) {
    lVar10 = lVar7;
  }
  goto LAB_0015b238;
}

