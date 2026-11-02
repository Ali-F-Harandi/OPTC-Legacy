// rea decompile_all
// name: FUN_001580b4
// address: 0x1580b4
// body: available
// range: 0x1580b4-0x159abb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_001580b4(ulong param_1,undefined8 *param_2,byte param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  byte unaff_w23;
  uint uVar9;
  undefined8 *puVar10;
  ulong local_e8;
  long local_e0;
  ulong local_d8;
  long *local_d0;
  long local_c8;
  long *local_c0;
  uint local_b4;
  ulong local_b0;
  ulong local_a8;
  byte local_9c;
  uint local_98;
  byte local_94;
  ulong local_90;
  ulong local_88;
  byte local_78;
  uint local_74;
  
  puVar4 = param_2;
  lVar8 = -0x219f1d7310a93166;
LAB_0015818c:
  bVar5 = param_3;
  lVar7 = lVar8;
  uVar6 = param_1;
  puVar10 = (undefined8 *)((ulong)puVar4 & 0xffffffff);
  uVar9 = (uint)puVar4;
  lVar8 = lVar7;
  puVar4 = puVar10;
  param_1 = uVar6;
  param_3 = bVar5;
  if (lVar7 < -0x1130d2f32d2d91b6) {
    if (lVar7 < -0x421f69e9ce55d2a1) {
      if (lVar7 < -0x59b4ef5aa0f82c3b) {
        if (-0x70181879c4985329 < lVar7) {
          if (lVar7 < -0x6f36000929e87ca6) {
            if (lVar7 == -0x70181879c4985328) {
              lVar8 = 0x1bbf3b3050a5336b;
LAB_00159864:
              _DAT_0021d550 = _DAT_0021d550 ^ 0x5454545454545454;
              uRam000000000021d558 = uRam000000000021d558 ^ 0x5454545454545454;
              _DAT_0021d560 = _DAT_0021d560 ^ 0x5454545454545454;
              uRam000000000021d568 = uRam000000000021d568 ^ 0x5454545454545454;
              DAT_0021f720 = '\x01';
            }
            else if (lVar7 == -0x6f94a5df8b46d11d) {
              iVar3 = FUN_00212730(0,1,&DAT_0021f59c);
              lVar8 = -0x4f59ab9dd3604b0;
              if (iVar3 != 0) {
                lVar8 = 0x5c95ae301369d7d5;
              }
            }
          }
          else if (lVar7 == -0x6f36000929e87ca6) {
            local_d0 = param_2 + local_a8 * 2 + 0xf;
            lVar8 = 0x61e91408396a256b;
            if (*local_d0 != 0) {
              lVar8 = 0x2609bdb66ae8ac10;
            }
          }
          else {
            if (lVar7 == -0x6055edc57f727862) {
              lVar8 = 0x18f8519eef356e56;
              bVar2 = DAT_0021f72c == '\0';
              lVar7 = -0x2068480104f329b7;
              goto LAB_0015817c;
            }
            if (lVar7 == -0x5cf1a895fb76685c) {
              lVar8 = -0x4484759bb16fb8cd;
            }
          }
          goto LAB_0015818c;
        }
        if (lVar7 < -0x7278ef8e6b391f1e) {
          if (lVar7 == -0x7e9075fd4f89805c) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f5cc);
            lVar8 = -0x6055edc57f727862;
            if (iVar3 != 0) {
              lVar8 = -0x7393ac0015ab00bb;
            }
          }
          else if (lVar7 == -0x7393ac0015ab00bb) {
            lVar8 = -0x7e9075fd4f89805c;
          }
          goto LAB_0015818c;
        }
        if (lVar7 != -0x7278ef8e6b391f1e) {
          if (lVar7 == -0x702b1f79f9f5be7d) {
            local_98 = local_b4;
            lVar8 = 0x1293026636160e54;
          }
          goto LAB_0015818c;
        }
      }
      else {
        if (lVar7 < -0x4c4d4f8c10e2eea8) {
          if (lVar7 < -0x4f5708719100d0a4) {
            if (lVar7 == -0x59b4ef5aa0f82c3b) {
              iVar3 = FUN_00212730(0,1,&DAT_0021f5a4);
              lVar8 = -0x1199b3780ef7e083;
              if (iVar3 != 0) {
                lVar8 = 0x6a7e7e63750fb3d5;
              }
            }
            else if (lVar7 == -0x5283b0f67fb1bf5f) {
              lVar8 = -0x49a5d74cd4551f0c;
            }
          }
          else {
            lVar8 = -0x59b4ef5aa0f82c3b;
            if ((lVar7 != -0x4f5708719100d0a4) && (lVar8 = lVar7, lVar7 == -0x4eeb3409b04bb9da)) {
              lVar8 = 0x2b82d0c867cc02ac;
              if (param_2[0x10e] != 2) {
                lVar8 = 0x6c13b679615f29cb;
              }
            }
          }
          goto LAB_0015818c;
        }
        if (-0x4820c0594f56a714 < lVar7) {
          if (lVar7 == -0x4820c0594f56a713) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f598);
            lVar8 = -0x2adcfa31199eb684;
            if (iVar3 != 0) {
              lVar8 = -0x4094cb971b1ad060;
            }
          }
          else if (lVar7 == -0x4484759bb16fb8cd) {
            DAT_0021f5cc = 0;
            iVar3 = FUN_001e17a8(param_2[4],&DAT_0021d630);
            lVar8 = 0x684b6231e2becb9d;
            if (iVar3 != 0) {
              lVar8 = -0x622d47493bc1a1d;
            }
          }
          else if (lVar7 == -0x42cf2ffc2221672e) {
            local_d8 = local_90 + 1;
            lVar8 = 0x6d00c597665ed857;
            local_9c = bVar5;
            if ((ulong)param_2[0x10e] <= local_d8) {
              lVar8 = 0x38fe976141b2235c;
            }
          }
          goto LAB_0015818c;
        }
        if (lVar7 != -0x4c4d4f8c10e2eea8) {
          if (lVar7 == -0x49a5d74cd4551f0c) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f5d0);
            lVar8 = 0x47cabdc223a599a8;
            if (iVar3 != 0) {
              lVar8 = -0x5283b0f67fb1bf5f;
            }
          }
          goto LAB_0015818c;
        }
      }
LAB_00159338:
      unaff_w23 = 0;
LAB_0015933c:
      lVar8 = 0x4e04f502844818aa;
      goto LAB_0015818c;
    }
    if (lVar7 < -0x2434c846269f3e1c) {
      if (lVar7 < -0x324845dafe0e86d5) {
        if (lVar7 < -0x3bbb5f0fa6df2815) {
          if (lVar7 == -0x421f69e9ce55d2a1) {
            DAT_0021f598 = 0;
            iVar3 = FUN_001e17a8(&DAT_0021d530,local_e0);
            lVar8 = -0x228dbcba2e262c27;
            if (iVar3 != 0) {
              lVar8 = -0x702b1f79f9f5be7d;
            }
          }
          else if (lVar7 == -0x4094cb971b1ad060) {
LAB_00159064:
            lVar8 = -0x4820c0594f56a713;
          }
        }
        else if (lVar7 == -0x3bbb5f0fa6df2815) {
          DAT_0021d548 = DAT_0021d548 ^ 0xcf;
          DAT_0021d549 = DAT_0021d549 ^ 0xcf;
          DAT_0021d54a = DAT_0021d54a ^ 0xcf;
          _DAT_0021d530 = _DAT_0021d530 ^ 0xcfcfcfcfcfcfcfcf;
          uRam000000000021d538 = uRam000000000021d538 ^ 0xcfcfcfcfcfcfcfcf;
          DAT_0021d54b = DAT_0021d54b ^ 0xcf;
          DAT_0021d54c = DAT_0021d54c ^ 0xcf;
          DAT_0021d54d = DAT_0021d54d ^ 0xcf;
          DAT_0021d540 = DAT_0021d540 ^ 0xcfcfcfcfcfcfcfcf;
          DAT_0021f71f = '\x01';
          lVar8 = -0x421f69e9ce55d2a1;
        }
        else if (lVar7 == -0x37f4112f35d986f0) {
          DAT_0021f5d0 = 0;
          lVar8 = FUN_001e238c(param_2[3],&DAT_0021d63c);
          bVar2 = lVar8 == 0;
          lVar8 = -0x4eeb3409b04bb9da;
          lVar7 = -0x2434c846269f3e1c;
LAB_001592d4:
          if (!bVar2) {
            lVar8 = lVar7;
          }
        }
      }
      else if (lVar7 < -0x2695292362763d53) {
        if (lVar7 == -0x324845dafe0e86d5) {
          lVar7 = 0x26f416b1d8bfc626;
          lVar8 = -0x5cf1a895fb76685c;
          cVar1 = DAT_0021f72c;
LAB_001598b0:
          if (cVar1 == '\0') {
            lVar8 = lVar7;
          }
        }
        else if (lVar7 == -0x2adcfa31199eb684) {
          lVar8 = -0x19a36b68df246f85;
          if (DAT_0021f71f == '\0') {
            lVar8 = -0x3bbb5f0fa6df2815;
          }
        }
      }
      else {
        puVar4 = (undefined8 *)(ulong)local_74;
        param_1 = local_88;
        lVar8 = 0x44a170d57a000962;
        if (((lVar7 != -0x2695292362763d53) &&
            (puVar4 = puVar10, param_1 = uVar6, lVar8 = -0x42cf2ffc2221672e, param_3 = local_78,
            lVar7 != -0x25bb902262c36bae)) &&
           (lVar8 = lVar7, param_3 = bVar5, lVar7 == -0x244d7271bf5d4c95)) {
          iVar3 = FUN_00212730(0,1,&DAT_0021f59c);
          lVar8 = -0xd85b9a44aa3d586;
          if (iVar3 != 0) {
            lVar8 = 0x1ecf9bbef6b87c54;
          }
        }
      }
      goto LAB_0015818c;
    }
    if (lVar7 < -0x1a86b41c74001cce) {
      if (lVar7 < -0x228dbcba2e262c27) {
        if (lVar7 == -0x2434c846269f3e1c) goto LAB_00158d30;
        if (lVar7 == -0x242cac8044ef1224) {
          DAT_0021d5a8 = DAT_0021d5a8 ^ 0xec;
          DAT_0021d5a9 = DAT_0021d5a9 ^ 0xec;
          DAT_0021d5aa = DAT_0021d5aa ^ 0xec;
          _DAT_0021d590 = _DAT_0021d590 ^ 0xecececececececec;
          uRam000000000021d598 = uRam000000000021d598 ^ 0xecececececececec;
          DAT_0021d5ab = DAT_0021d5ab ^ 0xec;
          DAT_0021d5a0 = DAT_0021d5a0 ^ 0xecececececececec;
          DAT_0021f722 = '\x01';
          lVar8 = 0x492e6428f16c1761;
        }
      }
      else {
        lVar8 = -0x244d7271bf5d4c95;
        if (((lVar7 != -0x228dbcba2e262c27) &&
            (lVar8 = -0x7e9075fd4f89805c, lVar7 != -0x219f1d7310a93166)) &&
           (lVar8 = lVar7, lVar7 == -0x2068480104f329b7)) {
          lVar8 = 0x21d9a68f539c5840;
LAB_001595f4:
          DAT_0021d638 = DAT_0021d638 ^ 0x8e;
          DAT_0021d630 = DAT_0021d630 ^ 0x8e8e8e8e8e8e8e8e;
          DAT_0021f72c = '\x01';
        }
      }
      goto LAB_0015818c;
    }
    if (lVar7 < -0x19a36b68df246f85) {
      lVar8 = 0x168ac1f3f4e6130e;
      if ((lVar7 != -0x1a86b41c74001cce) && (lVar8 = lVar7, lVar7 == -0x1a233c080d8bb4c2)) {
        lVar8 = -0x37f4112f35d986f0;
      }
      goto LAB_0015818c;
    }
    lVar8 = -0x421f69e9ce55d2a1;
    if (lVar7 == -0x19a36b68df246f85) goto LAB_0015818c;
    if (lVar7 == -0x18cb84b16c21f490) {
      lVar8 = 0x286341de16586ad8;
      if ((local_74 & local_e8 != 0) == 0) {
        lVar8 = -0x4c4d4f8c10e2eea8;
      }
      goto LAB_0015818c;
    }
    lVar8 = lVar7;
    if (lVar7 != -0x1199b3780ef7e083) goto LAB_0015818c;
    lVar8 = 0x72e4de433559a14c;
    bVar2 = DAT_0021f722 == '\0';
    lVar7 = -0x242cac8044ef1224;
  }
  else {
    if (0x32a35e03fd47a402 < lVar7) {
      if (lVar7 < 0x64d2fb53f9b4c5ad) {
        if (lVar7 < 0x492e6428f16c1761) {
          if (lVar7 < 0x3fe2ec65c74f37eb) {
            if (lVar7 == 0x32a35e03fd47a403) {
              DAT_0021f59c = 0;
              iVar3 = FUN_001e17a8(&DAT_0021d550,*local_d0);
              local_98 = iVar3 == 0 | local_b4;
              lVar8 = 0x1293026636160e54;
            }
            else if (lVar7 == 0x38fe976141b2235c) {
              lVar8 = 0x4e04f502844818aa;
              unaff_w23 = local_9c;
            }
          }
          else {
            lVar8 = 0x1bbf3b3050a5336b;
            if (lVar7 != 0x3fe2ec65c74f37eb) {
              if (lVar7 == 0x44a170d57a000962) {
                local_e0 = param_2[uVar6 * 2 + 0xe];
                lVar8 = 0x64d2fb53f9b4c5ad;
                local_b4 = uVar9;
                local_a8 = uVar6;
                if (local_e0 != 0) {
                  lVar8 = -0x6f36000929e87ca6;
                }
              }
              else {
                lVar8 = lVar7;
                if (lVar7 == 0x47cabdc223a599a8) {
                  lVar7 = 0x6c1ff5c367f7ea62;
                  lVar8 = -0x1a233c080d8bb4c2;
                  cVar1 = DAT_0021f72d;
                  goto LAB_001598b0;
                }
              }
            }
          }
        }
        else if (lVar7 < 0x5c95ae301369d7d5) {
          if (lVar7 == 0x492e6428f16c1761) {
            DAT_0021f5a4 = 0;
            iVar3 = FUN_001e17a8(&DAT_0021d590,local_c8);
            lVar8 = 0x71c817147d678390;
            if (iVar3 != 0) {
              lVar8 = -0x25bb902262c36bae;
            }
          }
          else {
            if (lVar7 == 0x5421e8cd43431142) {
              lVar8 = 0x32a35e03fd47a403;
              goto LAB_00159864;
            }
            if (lVar7 == 0x4e04f502844818aa) {
              return unaff_w23 & 1;
            }
          }
        }
        else {
          lVar8 = -0x6f94a5df8b46d11d;
          if ((lVar7 != 0x5c95ae301369d7d5) && (lVar8 = lVar7, lVar7 == 0x61e91408396a256b))
          goto LAB_00159338;
        }
        goto LAB_0015818c;
      }
      if (0x6c1ff5c367f7ea61 < lVar7) {
        if (lVar7 < 0x71c817147d678390) {
          if (lVar7 == 0x6c1ff5c367f7ea62) {
            DAT_0021d63d = DAT_0021d63d ^ 0x57;
            DAT_0021d63c = DAT_0021d63c ^ 0x57;
            DAT_0021d63e = DAT_0021d63e ^ 0x57;
            DAT_0021d63f = DAT_0021d63f ^ 0x57;
            DAT_0021d640 = DAT_0021d640 ^ 0x57;
            DAT_0021d641 = DAT_0021d641 ^ 0x57;
            DAT_0021f72d = '\x01';
            lVar8 = -0x37f4112f35d986f0;
          }
          else if (lVar7 == 0x6d00c597665ed857) {
            local_b0 = local_d8;
            lVar8 = -0x1130d2f32d2d91b6;
            local_94 = local_9c;
          }
        }
        else {
          lVar8 = -0x6f94a5df8b46d11d;
          if (((lVar7 != 0x71c817147d678390) &&
              (lVar8 = 0x492e6428f16c1761, lVar7 != 0x72e4de433559a14c)) &&
             (lVar8 = lVar7, lVar7 == 0x75e402e173e5ea3d)) {
LAB_00158d30:
            unaff_w23 = 1;
            goto LAB_0015933c;
          }
        }
        goto LAB_0015818c;
      }
      if (0x6a7e7e63750fb3d4 < lVar7) {
        lVar8 = -0x59b4ef5aa0f82c3b;
        if ((lVar7 != 0x6a7e7e63750fb3d5) && (lVar8 = lVar7, lVar7 == 0x6c13b679615f29cb))
        goto LAB_00159338;
        goto LAB_0015818c;
      }
      if (lVar7 != 0x64d2fb53f9b4c5ad) {
        if (lVar7 == 0x684b6231e2becb9d) goto LAB_00158d30;
        goto LAB_0015818c;
      }
      goto LAB_00159338;
    }
    if (0x18f8519eef356e55 < lVar7) {
      if (lVar7 < 0x21d9a68f539c5840) {
        if (lVar7 < 0x1bbf3b3050a5336b) {
          lVar8 = 0x21d9a68f539c5840;
          if ((lVar7 != 0x18f8519eef356e56) && (lVar8 = lVar7, lVar7 == 0x196368d72d066445))
          goto LAB_00159338;
        }
        else if (lVar7 == 0x1bbf3b3050a5336b) {
          DAT_0021f59c = 0;
          iVar3 = FUN_001e17a8(&DAT_0021d550,*local_c0);
          lVar8 = -0x42cf2ffc2221672e;
          param_3 = iVar3 == 0 | local_78;
        }
        else if (lVar7 == 0x1ecf9bbef6b87c54) {
          lVar8 = -0x244d7271bf5d4c95;
        }
      }
      else if (lVar7 < 0x26f416b1d8bfc626) {
        if (lVar7 == 0x21d9a68f539c5840) {
          DAT_0021f5cc = 0;
          iVar3 = FUN_001e17a8(*param_2,&DAT_0021d630);
          lVar8 = 0x75e402e173e5ea3d;
          if (iVar3 != 0) {
            lVar8 = -0x138de621353a3db;
          }
        }
        else if (lVar7 == 0x2609bdb66ae8ac10) goto LAB_00159064;
      }
      else {
        if (lVar7 == 0x26f416b1d8bfc626) {
          lVar8 = -0x4484759bb16fb8cd;
          goto LAB_001595f4;
        }
        if (lVar7 == 0x286341de16586ad8) {
          local_94 = 0;
          local_b0 = 0;
          lVar8 = -0x1130d2f32d2d91b6;
        }
        else if (lVar7 == 0x2b82d0c867cc02ac) {
          puVar4 = (undefined8 *)0x0;
          param_1 = 0;
          lVar8 = 0x44a170d57a000962;
        }
      }
      goto LAB_0015818c;
    }
    if (-0x138de621353a3dc < lVar7) {
      if (lVar7 < 0xa1765feaddb5c79) {
        lVar8 = 0x168ac1f3f4e6130e;
        if ((lVar7 != -0x138de621353a3db) && (lVar8 = lVar7, lVar7 == 0x2320589387325b6)) {
          local_c0 = param_2 + local_90 * 2 + 0xf;
          lVar8 = 0x196368d72d066445;
          if (*local_c0 != 0) {
            lVar8 = -0x4f5708719100d0a4;
          }
        }
      }
      else {
        lVar8 = 0x32a35e03fd47a403;
        if (lVar7 != 0xa1765feaddb5c79) {
          if (lVar7 == 0x1293026636160e54) {
            local_e8 = param_2[0x10e];
            local_88 = local_a8 + 1;
            lVar8 = -0x2695292362763d53;
            if (local_e8 <= local_88) {
              lVar8 = -0x18cb84b16c21f490;
            }
            local_74 = local_98;
          }
          else {
            lVar8 = lVar7;
            if (lVar7 == 0x168ac1f3f4e6130e) {
              iVar3 = FUN_00212730(0,1,&DAT_0021f5cc);
              lVar8 = -0x324845dafe0e86d5;
              lVar7 = -0x1a86b41c74001cce;
              bVar2 = iVar3 == 0;
              goto LAB_001592d4;
            }
          }
        }
      }
      goto LAB_0015818c;
    }
    if (-0x622d47493bc1a1e < lVar7) {
      lVar8 = -0x49a5d74cd4551f0c;
      if ((lVar7 != -0x622d47493bc1a1d) && (lVar8 = lVar7, lVar7 == -0x4f59ab9dd3604b0)) {
        lVar8 = 0x3fe2ec65c74f37eb;
        bVar2 = DAT_0021f720 == '\0';
        lVar7 = -0x70181879c4985328;
        goto LAB_0015817c;
      }
      goto LAB_0015818c;
    }
    if (lVar7 == -0x1130d2f32d2d91b6) {
      local_90 = local_b0;
      local_c8 = param_2[local_b0 * 2 + 0xe];
      lVar8 = -0x7278ef8e6b391f1e;
      local_78 = local_94;
      if (local_c8 != 0) {
        lVar8 = 0x2320589387325b6;
      }
      goto LAB_0015818c;
    }
    if (lVar7 != -0xd85b9a44aa3d586) goto LAB_0015818c;
    lVar8 = 0xa1765feaddb5c79;
    bVar2 = DAT_0021f720 == '\0';
    lVar7 = 0x5421e8cd43431142;
  }
LAB_0015817c:
  if (bVar2) {
    lVar8 = lVar7;
  }
  goto LAB_0015818c;
}

