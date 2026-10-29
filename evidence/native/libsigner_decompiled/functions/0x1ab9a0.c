// rea decompile_all
// name: FUN_001ab9a0
// address: 0x1ab9a0
// body: available
// range: 0x1ab9a0-0x1acd73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1acd70 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_001ab9a0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  FILE *unaff_x25;
  undefined8 *local_4d8;
  undefined8 *puStack_4d0;
  long local_4c8;
  void *local_4b8;
  undefined8 *local_4b0;
  undefined8 *local_4a8;
  uint local_49c;
  undefined8 *local_498;
  uint local_484;
  undefined8 *local_480;
  long local_478;
  char acStack_470 [1024];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  lVar1 = -0x244c08061ede3ca6;
  if (param_3 != 0) {
    lVar1 = 0x4101bf80446bdc20;
  }
  puVar3 = param_1;
  puVar4 = param_2;
  lVar13 = -0x428109008685f48;
LAB_001abacc:
  lVar12 = lVar13;
  puVar10 = puVar4;
  puVar11 = puVar3;
  lVar13 = lVar12;
  puVar3 = puVar11;
  puVar4 = puVar10;
  if (lVar12 < -0x73716f9563fa402) {
    if (lVar12 < -0x4c94198a9ad36397) {
      if (lVar12 < -0x65a31e6327338728) {
        if (lVar12 < -0x76ca62710947274b) {
          if (lVar12 < -0x7ad67c16664e25fa) {
            if (lVar12 == -0x7e369e6589ba78e7) {
              local_484 = 1;
              *puStack_4d0 = local_4d8;
              puStack_4d0[1] = local_4b8;
              *param_2 = puStack_4d0;
              lVar13 = 0x39a16bddf8dc82a2;
            }
            else if (lVar12 == -0x7dbc322ed98e3afb) {
              local_4b8 = calloc(0x400,8);
              bVar5 = local_4b8 == (void *)0x0;
              lVar12 = 0x62ccc994e2cb7da3;
              lVar13 = -0x76ca62710947274b;
              goto LAB_001abac4;
            }
          }
          else {
            lVar13 = -0x50e54cd80f265318;
            if ((lVar12 != -0x7ad67c16664e25fa) &&
               (puVar11 = local_4b0, lVar13 = lVar12, lVar12 == -0x797daf6592e4222d)) {
LAB_001ac8cc:
              lVar13 = -0x3ea1661ac6a1c4db;
              local_4a8 = puVar11;
            }
          }
        }
        else if (lVar12 < -0x7440f7630005660c) {
          if (lVar12 == -0x76ca62710947274b) goto LAB_001ac8ec;
          if (lVar12 == -0x7447e788f4d32ac9) {
            DAT_0021e7ac = ~DAT_0021e7ac;
            DAT_0021e7ad = ~DAT_0021e7ad;
            DAT_0021fa83 = '\x01';
            lVar13 = -0x50e54cd80f265318;
          }
        }
        else {
          if (lVar12 == -0x6e4a13fb3d707c87) {
            DAT_0021fa78 = 0;
            iVar6 = FUN_001e2ed0(acStack_470,&DAT_0021e7b0);
            bVar5 = iVar6 == 0;
            lVar12 = 0x4b73c4e968047988;
            lVar13 = 0x361985fb5d496b76;
            goto LAB_001abac4;
          }
          if (lVar12 == -0x7440f7630005660c) {
            if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            return local_49c & 1;
          }
        }
        goto LAB_001abacc;
      }
      if (lVar12 < -0x59bab4f8732095e2) {
        lVar13 = -0x429b7b8ddead7976;
        if (lVar12 == -0x65a31e6327338728) goto LAB_001abacc;
        if (lVar12 != -0x5f20efb5b92e6f74) {
          lVar13 = lVar12;
          if (lVar12 == -0x5eedd7c897c0ed2a) {
            local_4c8 = local_478;
            lVar13 = 0x5ebfca74eead21cf;
            if (local_478 != 0) {
              lVar13 = 0x78ac43fddd7c64db;
            }
          }
          goto LAB_001abacc;
        }
        DAT_0021fa7c = 0;
        iVar6 = FUN_001e2ed0(acStack_470,&DAT_0021e7b4);
        bVar5 = iVar6 == 0;
        lVar12 = -0x2701f7b957916a96;
        lVar13 = -0x12bc87502b2af86e;
      }
      else {
        if (-0x50e54cd80f265319 < lVar12) {
          if (lVar12 == -0x50e54cd80f265318) {
            DAT_0021fa74 = 0;
            unaff_x25 = (FILE *)FUN_001f3978(param_3,&DAT_0021e7ac);
            bVar5 = unaff_x25 == (FILE *)0x0;
            lVar12 = -0x7dbc322ed98e3afb;
            lVar13 = -0x359d4e10b3bbbc3c;
            goto LAB_001abac4;
          }
          if (lVar12 == -0x503101e48cc58732) {
            lVar13 = 0x1b91058c21da9ca7;
            bVar5 = DAT_0021fa85 == '\0';
            lVar12 = 0xf111d00f6a8edda;
            goto LAB_001acd00;
          }
          goto LAB_001abacc;
        }
        if (lVar12 != -0x59bab4f8732095e2) {
          if (lVar12 == -0x5587caf0ffc9f6c4) {
            DAT_0021e7b0 = DAT_0021e7b0 ^ 0x1d;
            DAT_0021e7b1 = DAT_0021e7b1 ^ 0x1d;
            DAT_0021fa84 = '\x01';
            lVar13 = -0x6e4a13fb3d707c87;
          }
          goto LAB_001abacc;
        }
        iVar6 = FUN_00212730(0,1,&DAT_0021fa74);
        bVar5 = iVar6 == 0;
        lVar12 = 0x54cc8c62117e2258;
        lVar13 = 0x4d5d50fcdd4992d2;
      }
    }
    else {
      if (-0x2d23be9e4092ee56 < lVar12) {
        if (lVar12 < -0x21c44217ce61bec8) {
          if (-0x244c08061ede3ca7 < lVar12) {
            if (lVar12 == -0x244c08061ede3ca6) {
              local_49c = 0;
              *(undefined4 *)param_1 = 3;
              lVar13 = -0x7440f7630005660c;
            }
            else if (lVar12 == -0x23395a9e9c848352) {
              lVar13 = 0x1552bb494d897f7e;
              bVar5 = DAT_0021fa84 == '\0';
              lVar12 = -0x5587caf0ffc9f6c4;
LAB_001acd00:
              if (bVar5) {
                lVar13 = lVar12;
              }
            }
            goto LAB_001abacc;
          }
          lVar13 = -0x361936ecac8b8986;
          if ((lVar12 == -0x2d23be9e4092ee55) || (lVar13 = lVar12, lVar12 != -0x2701f7b957916a96))
          goto LAB_001abacc;
        }
        else {
          if (-0x144ad6ddee249a63 < lVar12) {
            if (lVar12 == -0x144ad6ddee249a62) {
              iVar6 = FUN_00212730(0,1,&DAT_0021fa78);
              lVar13 = -0x23395a9e9c848352;
              lVar12 = 0x11389729d7590b94;
              bVar5 = iVar6 == 0;
              goto LAB_001acc60;
            }
            if (lVar12 == -0x12bc87502b2af86e) goto LAB_001ac560;
            goto LAB_001abacc;
          }
          puVar4 = local_480;
          lVar13 = 0x6230bf87be098d5d;
          if ((lVar12 == -0x21c44217ce61bec8) ||
             (puVar4 = puVar10, lVar13 = lVar12, lVar12 != -0x1f81af14a263eaa3)) goto LAB_001abacc;
        }
        puVar4 = puVar10;
        lVar13 = 0x1b4ac2f1f22e2589;
        goto LAB_001abacc;
      }
      if (lVar12 < -0x3ea1661ac6a1c4db) {
        if (lVar12 == -0x4c94198a9ad36397) {
          local_478 = 0;
          uVar8 = FUN_001aa348(param_1,acStack_470,&local_478);
          lVar13 = -0x5eedd7c897c0ed2a;
          if ((uVar8 & 1) == 0) {
            lVar13 = 0x61d9685814f9d681;
          }
        }
        else {
          if (lVar12 == -0x429b7b8ddead7976) {
            iVar6 = FUN_00212730(0,1,&DAT_0021fa7c);
            bVar5 = iVar6 == 0;
            lVar12 = -0x65a31e6327338728;
            lVar13 = -0x503101e48cc58732;
            goto LAB_001abac4;
          }
          if (lVar12 == -0x400e37f3caa97ab4) {
            puVar11 = (undefined8 *)0x0;
            goto LAB_001acbf0;
          }
        }
        goto LAB_001abacc;
      }
      if (-0x359d4e10b3bbbc3d < lVar12) {
        if (lVar12 == -0x359d4e10b3bbbc3c) {
          local_49c = 1;
          goto LAB_001acc78;
        }
        if (lVar12 == -0x3180ec1dafce7d52) goto LAB_001ac560;
        goto LAB_001abacc;
      }
      if (lVar12 == -0x3ea1661ac6a1c4db) {
        pcVar9 = fgets(acStack_470,0x400,unaff_x25);
        lVar13 = 0x57cabee7967ab664;
        if (pcVar9 != (char *)0x0) {
          lVar13 = 0x3485297baf428faf;
        }
        local_498 = local_4a8;
        goto LAB_001abacc;
      }
      if (lVar12 != -0x361936ecac8b8986) goto LAB_001abacc;
      lVar7 = FUN_001e16c4(acStack_470);
      lVar12 = 0xbccd62a0fc32d;
      lVar13 = -0x17196cb747ef8c5;
      bVar5 = lVar7 == 0;
    }
  }
  else {
    if (lVar12 < 0x4101bf80446bdc20) {
      if (lVar12 < 0x1b4ac2f1f22e2589) {
        if (0xbccd62a0fc32c < lVar12) {
          if (lVar12 < 0x11389729d7590b94) {
            lVar13 = -0x144ad6ddee249a62;
            if ((lVar12 != 0xbccd62a0fc32d) && (lVar13 = lVar12, lVar12 == 0xf111d00f6a8edda)) {
              DAT_0021e7b4 = DAT_0021e7b4 ^ 0x6d;
              DAT_0021e7b5 = DAT_0021e7b5 ^ 0x6d;
              DAT_0021fa85 = '\x01';
              lVar13 = -0x5f20efb5b92e6f74;
            }
          }
          else {
            lVar13 = -0x144ad6ddee249a62;
            if ((lVar12 != 0x11389729d7590b94) && (lVar13 = lVar12, lVar12 == 0x1552bb494d897f7e)) {
              lVar13 = -0x6e4a13fb3d707c87;
            }
          }
          goto LAB_001abacc;
        }
        if (lVar12 == -0x73716f9563fa402) {
          lVar13 = 0x2352f2d6b10786ab;
          bVar5 = DAT_0021fa86 == '\0';
          lVar12 = 0x7ffb850a0e6ed38d;
          goto LAB_001acd00;
        }
        lVar13 = lVar1;
        if ((lVar12 == -0x428109008685f48) || (lVar13 = lVar12, lVar12 != -0x17196cb747ef8c5))
        goto LAB_001abacc;
      }
      else {
        if (lVar12 < 0x3485297baf428faf) {
          if (lVar12 < 0x2352f2d6b10786ab) {
            if (lVar12 == 0x1b4ac2f1f22e2589) {
              iVar6 = FUN_00212730(0,1,&DAT_0021fa80);
              bVar5 = iVar6 == 0;
              lVar12 = -0x1f81af14a263eaa3;
              lVar13 = -0x73716f9563fa402;
              goto LAB_001abac4;
            }
            if (lVar12 == 0x1b91058c21da9ca7) {
              lVar13 = -0x5f20efb5b92e6f74;
            }
          }
          else {
            lVar13 = 0x6bbc6b8cc56478f1;
            if ((lVar12 != 0x2352f2d6b10786ab) && (lVar13 = lVar12, lVar12 == 0x24e5eef263e81b7c)) {
              puVar3 = (undefined8 *)0x0;
              lVar13 = 0x3cd27908c3b8e652;
            }
          }
          goto LAB_001abacc;
        }
        if (0x39a16bddf8dc82a1 < lVar12) {
          if (lVar12 == 0x39a16bddf8dc82a2) {
            fclose(unaff_x25);
            local_49c = local_484;
LAB_001acc78:
            lVar13 = -0x7440f7630005660c;
          }
          else if (lVar12 == 0x3cd27908c3b8e652) {
            lVar13 = -0x361936ecac8b8986;
            local_480 = puVar11;
          }
          goto LAB_001abacc;
        }
        puVar3 = local_498;
        lVar13 = 0x3cd27908c3b8e652;
        if ((lVar12 == 0x3485297baf428faf) ||
           (puVar3 = puVar11, lVar13 = lVar12, lVar12 != 0x361985fb5d496b76)) goto LAB_001abacc;
      }
LAB_001ac560:
      puVar3 = puVar11;
      lVar13 = 0x5ad71f292518d033;
      goto LAB_001abacc;
    }
    if (lVar12 < 0x61d9685814f9d681) {
      if (lVar12 < 0x54cc8c62117e2258) {
        lVar13 = -0x59bab4f8732095e2;
        if (((lVar12 != 0x4101bf80446bdc20) &&
            (lVar13 = -0x429b7b8ddead7976, lVar12 != 0x4b73c4e968047988)) &&
           (lVar13 = lVar12, lVar12 == 0x4d5d50fcdd4992d2)) {
          lVar13 = -0x7ad67c16664e25fa;
          if (DAT_0021fa83 == '\0') {
            lVar13 = -0x7447e788f4d32ac9;
          }
        }
        goto LAB_001abacc;
      }
      if (lVar12 < 0x5ad71f292518d033) {
        lVar13 = -0x59bab4f8732095e2;
        if ((lVar12 != 0x54cc8c62117e2258) &&
           (puVar11 = local_498, lVar13 = lVar12, lVar12 == 0x57cabee7967ab664)) goto LAB_001acbf0;
        goto LAB_001abacc;
      }
      if (lVar12 != 0x5ad71f292518d033) {
        puVar11 = local_480;
        if (lVar12 == 0x5ebfca74eead21cf) goto LAB_001ac8cc;
        goto LAB_001abacc;
      }
      pcVar9 = fgets(acStack_470,0x400,unaff_x25);
      bVar5 = pcVar9 == (char *)0x0;
      lVar12 = -0x2d23be9e4092ee55;
      lVar13 = -0x21c44217ce61bec8;
    }
    else {
      if (0x727aabeac1ff5012 < lVar12) {
        if (lVar12 < 0x7bca060775e09e1e) {
          puVar11 = local_4b0;
          if (lVar12 == 0x727aabeac1ff5013) {
LAB_001acbf0:
            puVar4 = puVar11;
            lVar13 = 0x6230bf87be098d5d;
          }
          else if (lVar12 == 0x78ac43fddd7c64db) {
            local_4b0 = (undefined8 *)((long)local_480 + 1);
            lVar13 = 0x727aabeac1ff5013;
            if (local_4b0 < (undefined8 *)0x400) {
              lVar13 = -0x797daf6592e4222d;
            }
            *(long *)((long)local_4b8 + (long)local_480 * 8) = local_4c8;
          }
        }
        else if (lVar12 == 0x7bca060775e09e1e) {
LAB_001ac8ec:
          local_484 = 0;
          *(undefined4 *)param_1 = 2;
          lVar13 = 0x39a16bddf8dc82a2;
        }
        else if (lVar12 == 0x7ffb850a0e6ed38d) {
          DAT_0021e7b8 = DAT_0021e7b8 ^ 0xf;
          DAT_0021e7ba = DAT_0021e7ba ^ 0xf;
          DAT_0021e7b9 = DAT_0021e7b9 ^ 0xf;
          DAT_0021fa86 = '\x01';
          lVar13 = 0x6bbc6b8cc56478f1;
        }
        goto LAB_001abacc;
      }
      if (lVar12 < 0x62ccc994e2cb7da3) {
        if (lVar12 == 0x61d9685814f9d681) {
          local_484 = 0;
          lVar13 = 0x39a16bddf8dc82a2;
        }
        else if (lVar12 == 0x6230bf87be098d5d) {
          puStack_4d0 = calloc(1,0x10);
          lVar13 = 0x7bca060775e09e1e;
          local_4d8 = puVar10;
          if (puStack_4d0 != (undefined8 *)0x0) {
            lVar13 = -0x7e369e6589ba78e7;
          }
        }
        goto LAB_001abacc;
      }
      if (lVar12 == 0x62ccc994e2cb7da3) {
        memset(acStack_470,0,0x400);
        fgets(acStack_470,0x400,unaff_x25);
        pcVar9 = fgets(acStack_470,0x400,unaff_x25);
        bVar5 = pcVar9 == (char *)0x0;
        lVar13 = -0x400e37f3caa97ab4;
        lVar12 = 0x24e5eef263e81b7c;
LAB_001acc60:
        if (!bVar5) {
          lVar13 = lVar12;
        }
        goto LAB_001abacc;
      }
      if (lVar12 != 0x6bbc6b8cc56478f1) goto LAB_001abacc;
      DAT_0021fa80 = 0;
      iVar6 = FUN_001e2ed0(acStack_470,&DAT_0021e7b8);
      bVar5 = iVar6 == 0;
      lVar12 = -0x4c94198a9ad36397;
      lVar13 = -0x3180ec1dafce7d52;
    }
  }
LAB_001abac4:
  if (!bVar5) {
    lVar13 = lVar12;
  }
  goto LAB_001abacc;
}

