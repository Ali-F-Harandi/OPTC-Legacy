// rea decompile_all
// name: FUN_001fe014
// address: 0x1fe014
// body: available
// range: 0x1fe014-0x1ff5c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1ff5c4 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001fe014(int *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  undefined8 *puVar12;
  long *plVar13;
  int local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  int local_94;
  long local_90;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar9 = *param_2;
  plVar1 = param_2 + 2;
  local_84 = 0;
  local_90 = 0;
  local_78 = 0;
  uStack_70 = 0;
  puVar6 = param_2;
  plVar7 = plVar1;
  lVar10 = 0x32f4713bcaf93571;
LAB_001fe12c:
  lVar8 = lVar10;
  plVar13 = (long *)((ulong)plVar7 & 0xffffffff);
  puVar12 = (undefined8 *)((ulong)puVar6 & 0xffffffff);
  uVar11 = (uint)puVar6;
  puVar6 = puVar12;
  lVar10 = lVar8;
  if (lVar8 < -0x12e0f8e15901e122) {
    if (-0x3cc327df2eecc1c7 < lVar8) {
      if (-0x2e5d71d46d443371 < lVar8) {
        if (lVar8 < -0x244c08061ede3ca6) {
          if (lVar8 < -0x29504ee3cf2d5633) {
            if (lVar8 == -0x2e5d71d46d443370) {
              uVar5 = FUN_001f4fdc(param_1,&local_84,4,1,*param_2);
              bVar3 = (uVar5 & 1) == 0;
              lVar8 = -0x56ad058abb7434bf;
              lVar10 = 0x53e14c28908eeeeb;
              goto LAB_001fe124;
            }
            plVar7 = plVar13;
            if (lVar8 == -0x2d23be9e4092ee55) {
              lVar10 = -0x29504ee3cf2d5633;
            }
          }
          else if (lVar8 == -0x29504ee3cf2d5633) {
            DAT_0021fb08 = 0;
            iVar4 = FUN_001e3668(&DAT_0021ef00,&local_7c,4);
            local_a8 = local_b0 - 1;
            plVar7 = plVar13;
            lVar10 = -0x3cc327df2eecc1c6;
            if (local_a8 < 0xfffeffec || iVar4 == 0) {
              lVar10 = 0x1db468c64d6a7ed0;
            }
          }
          else {
            plVar7 = plVar13;
            if (lVar8 == -0x2701f7b957916a96) goto LAB_001ff1e0;
          }
        }
        else if (lVar8 < -0x1f81af14a263eaa3) {
          if (lVar8 == -0x244c08061ede3ca6) {
            uVar5 = FUN_001f4fdc(param_1,(long)&local_84 + 4,4,1,*param_2);
            bVar3 = (uVar5 & 1) == 0;
            lVar10 = -0x59bab4f8732095e2;
            lVar8 = 0x4101bf80446bdc20;
            goto LAB_001ff50c;
          }
          plVar7 = plVar13;
          if (lVar8 == -0x21c44217ce61bec8) {
            lVar10 = -0x4c94198a9ad36397;
            if (DAT_0021fb12 == '\0') {
              lVar10 = -0x50e54cd80f265318;
            }
          }
        }
        else if (lVar8 == -0x1f81af14a263eaa3) {
          local_94 = 6;
LAB_001ff3a8:
          plVar7 = plVar13;
          lVar10 = 0x6bbc6b8cc56478f1;
        }
        else {
          plVar7 = plVar13;
          if (lVar8 == -0x144ad6ddee249a62) {
            DAT_0021fb10 = 0;
            iVar4 = FUN_001e3668(&DAT_0021ef10,&local_78,0x10);
            lVar10 = -0x5587caf0ffc9f6c4;
            if (iVar4 != 0) {
              lVar10 = 0x11389729d7590b94;
            }
          }
        }
        goto LAB_001fe12c;
      }
      if (lVar8 < -0x3180ec1dafce7d52) {
        if (lVar8 < -0x359d4e10b3bbbc3c) {
          puVar6 = (undefined8 *)(ulong)local_a8;
          plVar7 = plVar13;
          lVar10 = 0x3ace195dd3930386;
          if ((lVar8 == -0x3cc327df2eecc1c6) ||
             (puVar6 = puVar12, lVar10 = lVar8, lVar8 != -0x361936ecac8b8986)) goto LAB_001fe12c;
          iVar4 = FUN_00212730(0,1,&DAT_0021fb10);
          bVar3 = iVar4 == 0;
          lVar8 = -0x17196cb747ef8c5;
          lVar10 = 0x61d9685814f9d681;
        }
        else {
          if (lVar8 != -0x359d4e10b3bbbc3c) {
            plVar7 = plVar13;
            if (lVar8 == -0x34ce59f19df9112f) {
              lVar10 = -0x2ef756f1c7496e5f;
            }
            goto LAB_001fe12c;
          }
          DAT_0021fb0c = 0;
          iVar4 = FUN_001e3668(&DAT_0021ef04,(long)&local_84 + 4,4);
          bVar3 = iVar4 == 0;
          lVar8 = -0x7dbc322ed98e3afb;
          lVar10 = -0x76ca62710947274b;
        }
LAB_001ff584:
        puVar6 = puVar12;
        plVar7 = plVar13;
        if (!bVar3) {
          lVar10 = lVar8;
        }
        goto LAB_001fe12c;
      }
      if (lVar8 < -0x2ef756f1c7496e5f) {
        plVar7 = plVar13;
        lVar10 = 0x54c2b837d86711b8;
        if ((lVar8 != -0x316a2fad8e5725cc) && (lVar10 = lVar8, lVar8 == -0x3180ec1dafce7d52)) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
      }
      else {
        if (lVar8 == -0x2ef756f1c7496e5f) {
          iVar4 = FUN_00212730(0,1,&DAT_0021fb08);
          lVar8 = -0x34ce59f19df9112f;
          lVar10 = 0x5ad71f292518d033;
          bVar3 = iVar4 == 0;
          goto LAB_001ff584;
        }
        plVar7 = plVar13;
        if (lVar8 == -0x2eb8ff3123f5eabc) goto LAB_001ff1e0;
      }
      goto LAB_001fe12c;
    }
    if (lVar8 < -0x56ad058abb7434bf) {
      if (lVar8 < -0x65a31e6327338728) {
        if (lVar8 < -0x7447e788f4d32ac9) {
          if (lVar8 == -0x7dbc322ed98e3afb) {
            local_94 = 3;
            goto LAB_001ff3a8;
          }
          plVar7 = plVar13;
          if (lVar8 == -0x76ca62710947274b) {
            uVar5 = FUN_001f50ec(param_1,*param_2,0xffffffffffffffec,1);
            bVar3 = (uVar5 & 1) == 0;
            lVar8 = 0x62ccc994e2cb7da3;
            lVar10 = 0x24e5eef263e81b7c;
            goto LAB_001fe124;
          }
          goto LAB_001fe12c;
        }
        plVar7 = plVar13;
        lVar10 = 0x54cc8c62117e2258;
        if ((lVar8 == -0x7447e788f4d32ac9) || (lVar10 = lVar8, lVar8 != -0x6e4a13fb3d707c87))
        goto LAB_001fe12c;
      }
      else {
        if (-0x5eedd7c897c0ed2b < lVar8) {
          plVar7 = plVar13;
          lVar10 = -0x144ad6ddee249a62;
          if ((lVar8 != -0x5eedd7c897c0ed2a) && (lVar10 = lVar8, lVar8 == -0x59bab4f8732095e2)) {
            lVar10 = 0x54cc8c62117e2258;
          }
          goto LAB_001fe12c;
        }
        plVar7 = plVar13;
        lVar10 = -0x3180ec1dafce7d52;
        if ((lVar8 == -0x65a31e6327338728) || (lVar10 = lVar8, lVar8 != -0x5f20efb5b92e6f74))
        goto LAB_001fe12c;
      }
LAB_001ff1e0:
      plVar7 = plVar13;
      lVar10 = -0x3180ec1dafce7d52;
      goto LAB_001fe12c;
    }
    if (-0x4c94198a9ad36398 < lVar8) {
      if (lVar8 < -0x405b680ffecd4131) {
        plVar7 = plVar13;
        lVar10 = -0x359d4e10b3bbbc3c;
        if ((lVar8 != -0x4c94198a9ad36397) && (lVar10 = lVar8, lVar8 == -0x429b7b8ddead7976)) {
          uVar5 = FUN_001f4fdc(param_1,plVar1,8,1,*param_2);
          bVar3 = (uVar5 & 1) == 0;
          lVar8 = -0x65a31e6327338728;
          lVar10 = 0xf111d00f6a8edda;
          goto LAB_001fe124;
        }
      }
      else {
        plVar7 = (long *)(ulong)local_ac;
        lVar10 = 0xc7bf249d1db72b2;
        if ((lVar8 != -0x405b680ffecd4131) &&
           (plVar7 = plVar13, lVar10 = lVar8, lVar8 == -0x400e37f3caa97ab4)) goto LAB_001ff1e0;
      }
      goto LAB_001fe12c;
    }
    if (-0x5412c5352f1dc37b < lVar8) {
      plVar7 = plVar13;
      lVar10 = -0x3180ec1dafce7d52;
      if ((lVar8 != -0x5412c5352f1dc37a) && (lVar10 = lVar8, lVar8 == -0x50e54cd80f265318)) {
        DAT_0021ef05 = DAT_0021ef05 ^ 0xc0;
        DAT_0021ef06 = DAT_0021ef06 ^ 0xc0;
        DAT_0021ef07 = DAT_0021ef07 ^ 0xc0;
        DAT_0021ef04 = DAT_0021ef04 ^ 0xc0;
        DAT_0021fb12 = '\x01';
        lVar10 = -0x359d4e10b3bbbc3c;
      }
      goto LAB_001fe12c;
    }
    plVar7 = plVar13;
    lVar10 = -0x3180ec1dafce7d52;
    if ((lVar8 == -0x56ad058abb7434bf) || (lVar10 = lVar8, lVar8 != -0x5587caf0ffc9f6c4))
    goto LAB_001fe12c;
    uVar5 = FUN_001f50ec(param_1,*param_2,0xffffffffffffffe8,1);
    bVar3 = (uVar5 & 1) == 0;
    lVar8 = -0x6e4a13fb3d707c87;
    lVar10 = 0x361985fb5d496b76;
  }
  else {
    iVar4 = (int)plVar7;
    if (lVar8 < 0x3b16db62a3c2f4fb) {
      if (lVar8 < 0x11389729d7590b94) {
        if (lVar8 < -0x111819a4994f0fa) {
          if (-0x428109008685f49 < lVar8) {
            plVar7 = plVar13;
            lVar10 = -0x3180ec1dafce7d52;
            if ((lVar8 != -0x428109008685f48) && (lVar10 = lVar8, lVar8 == -0x17196cb747ef8c5))
            goto LAB_001fee24;
            goto LAB_001fe12c;
          }
          plVar7 = plVar13;
          lVar10 = 0x54c2b837d86711b8;
          if ((lVar8 == -0x12e0f8e15901e122) || (lVar10 = lVar8, lVar8 != -0x12bc87502b2af86e))
          goto LAB_001fe12c;
          uVar5 = FUN_001f4fdc(param_1,&local_90,8,1,*param_2);
          bVar3 = (uVar5 & 1) == 0;
          lVar8 = -0x2701f7b957916a96;
          lVar10 = 0x1b4ac2f1f22e2589;
        }
        else {
          if (lVar8 < 0xc7bf249d1db72b2) {
            plVar7 = plVar13;
            lVar10 = 0x54c2b837d86711b8;
            if ((lVar8 != -0x111819a4994f0fa) && (lVar10 = lVar8, lVar8 == 0xbccd62a0fc32d)) {
              _DAT_0021ef10 = _DAT_0021ef10 ^ 0x8a8a8a8a8a8a8a8a;
              uRam000000000021ef18 = uRam000000000021ef18 ^ 0x8a8a8a8a8a8a8a8a;
              DAT_0021fb13 = '\x01';
              lVar10 = -0x144ad6ddee249a62;
            }
            goto LAB_001fe12c;
          }
          if (lVar8 == 0xc7bf249d1db72b2) {
            local_7c = 0;
            uVar5 = FUN_001f4fdc(param_1,&local_7c,4,1,uVar9);
            plVar7 = plVar13;
            lVar10 = 0x5eda44100212fa2c;
            local_b0 = iVar4;
            if ((uVar5 & 1) == 0) {
              lVar10 = 0x27963d1423e000f6;
            }
            goto LAB_001fe12c;
          }
          plVar7 = plVar13;
          if (lVar8 != 0xf111d00f6a8edda) goto LAB_001fe12c;
          uVar5 = FUN_001f50ec(param_1,*param_2,8 - param_2[2],1);
          bVar3 = (uVar5 & 1) == 0;
          lVar8 = -0x5f20efb5b92e6f74;
          lVar10 = -0x12bc87502b2af86e;
        }
      }
      else if (lVar8 < 0x27963d1423e000f6) {
        if (lVar8 < 0x1db468c64d6a7ed0) {
          if (lVar8 == 0x11389729d7590b94) {
            local_94 = 5;
            goto LAB_001ff3a8;
          }
          plVar7 = plVar13;
          if (lVar8 == 0x1b4ac2f1f22e2589) {
            bVar3 = *plVar1 == local_90;
            lVar8 = -0x1f81af14a263eaa3;
            lVar10 = 0x7ffb850a0e6ed38d;
            goto LAB_001ff4c4;
          }
          goto LAB_001fe12c;
        }
        plVar7 = plVar13;
        lVar10 = 0x54c2b837d86711b8;
        if ((lVar8 == 0x1db468c64d6a7ed0) || (lVar10 = lVar8, lVar8 != 0x24e5eef263e81b7c))
        goto LAB_001fe12c;
        uVar5 = FUN_001f4fdc(param_1,&local_78,0x10,1,*param_2);
        bVar3 = (uVar5 & 1) == 0;
        lVar8 = -0x400e37f3caa97ab4;
        lVar10 = 0x3cd27908c3b8e652;
      }
      else {
        if (0x361985fb5d496b75 < lVar8) {
          if (lVar8 == 0x361985fb5d496b76) {
            uVar5 = FUN_001f51e8(param_1,*param_2,param_2 + 1);
            lVar10 = -0x429b7b8ddead7976;
            lVar8 = 0x4b73c4e968047988;
            bVar3 = (uVar5 & 1) == 0;
LAB_001ff50c:
            plVar7 = plVar13;
            if (bVar3) {
              lVar10 = lVar8;
            }
          }
          else {
            plVar7 = plVar13;
            if (lVar8 == 0x3ace195dd3930386) {
              uVar5 = FUN_001f50ec(param_1,uVar9,(long)(int)uVar11,2);
              lVar10 = -0x405b680ffecd4131;
              local_ac = uVar11;
              if ((uVar5 & 1) == 0) {
                lVar10 = -0x12e0f8e15901e122;
              }
            }
          }
          goto LAB_001fe12c;
        }
        if (lVar8 == 0x27963d1423e000f6) {
          local_a4 = local_b0 - 1;
          plVar7 = plVar13;
          lVar10 = 0x3b16db62a3c2f4fb;
          if (local_a4 < 0xfffeffec) {
            lVar10 = -0x111819a4994f0fa;
          }
          goto LAB_001fe12c;
        }
        plVar7 = plVar13;
        if (lVar8 != 0x32f4713bcaf93571) goto LAB_001fe12c;
        uVar5 = FUN_001f50ec(param_1,uVar9,0xffffffffffffffea,2);
        lVar8 = -0x316a2fad8e5725cc;
        lVar10 = 0x65536dc2a8308acd;
        bVar3 = (uVar5 & 1) == 0;
      }
    }
    else {
      if (lVar8 < 0x55dcd19dee737a1a) {
        if (lVar8 < 0x4b73c4e968047988) {
          if (lVar8 < 0x4101bf80446bdc20) {
            puVar6 = (undefined8 *)(ulong)local_a4;
            plVar7 = plVar13;
            lVar10 = 0x3ace195dd3930386;
            if ((lVar8 != 0x3b16db62a3c2f4fb) &&
               (puVar6 = puVar12, lVar10 = lVar8, lVar8 == 0x3cd27908c3b8e652)) {
LAB_001fee24:
              puVar6 = puVar12;
              plVar7 = plVar13;
              lVar10 = -0x361936ecac8b8986;
            }
          }
          else {
            plVar7 = plVar13;
            lVar10 = -0x3180ec1dafce7d52;
            if ((lVar8 != 0x4101bf80446bdc20) && (lVar10 = lVar8, lVar8 == 0x483dcbc36ada42c4)) {
              DAT_0021ef01 = DAT_0021ef01 ^ 0x61;
              DAT_0021ef02 = DAT_0021ef02 ^ 0x61;
              DAT_0021ef03 = DAT_0021ef03 ^ 0x61;
              DAT_0021ef00 = DAT_0021ef00 ^ 0x61;
              DAT_0021fb11 = '\x01';
              lVar10 = -0x29504ee3cf2d5633;
            }
          }
        }
        else if (lVar8 < 0x54c2b837d86711b8) {
          plVar7 = plVar13;
          lVar10 = -0x3180ec1dafce7d52;
          if ((lVar8 != 0x4b73c4e968047988) && (lVar10 = lVar8, lVar8 == 0x53e14c28908eeeeb)) {
            uVar5 = FUN_001f50ec(param_1,*param_2,local_84 & 0xffffffff,0);
            bVar3 = (uVar5 & 1) == 0;
            lVar10 = -0x244c08061ede3ca6;
            lVar8 = -0x428109008685f48;
            goto LAB_001ff50c;
          }
        }
        else if (lVar8 == 0x54c2b837d86711b8) {
          bVar3 = *param_1 == 0;
          lVar10 = 0x55dcd19dee737a1a;
          lVar8 = -0x2eb8ff3123f5eabc;
LAB_001ff4c4:
          plVar7 = plVar13;
          if (!bVar3) {
            lVar10 = lVar8;
          }
        }
        else {
          plVar7 = plVar13;
          if (lVar8 == 0x54cc8c62117e2258) {
            iVar4 = FUN_00212730(0,1,&DAT_0021fb0c);
            bVar3 = iVar4 == 0;
            lVar8 = -0x7447e788f4d32ac9;
            lVar10 = -0x21c44217ce61bec8;
            goto LAB_001ff584;
          }
        }
        goto LAB_001fe12c;
      }
      if (0x62ccc994e2cb7da2 < lVar8) {
        if (lVar8 < 0x6bbc6b8cc56478f1) {
          plVar7 = plVar13;
          lVar10 = -0x3180ec1dafce7d52;
          if ((lVar8 != 0x62ccc994e2cb7da3) && (lVar10 = lVar8, lVar8 == 0x65536dc2a8308acd)) {
            plVar7 = (long *)0xffffffea;
            lVar10 = 0xc7bf249d1db72b2;
          }
        }
        else if (lVar8 == 0x6bbc6b8cc56478f1) {
          *param_1 = local_94;
          plVar7 = plVar13;
          lVar10 = -0x3180ec1dafce7d52;
        }
        else {
          plVar7 = plVar13;
          if (lVar8 == 0x7ffb850a0e6ed38d) goto LAB_001ff1e0;
        }
        goto LAB_001fe12c;
      }
      if (0x5eda44100212fa2b < lVar8) {
        plVar7 = plVar13;
        lVar10 = -0x2ef756f1c7496e5f;
        if ((lVar8 != 0x5eda44100212fa2c) && (lVar10 = lVar8, lVar8 == 0x61d9685814f9d681)) {
          lVar10 = -0x5eedd7c897c0ed2a;
          if (DAT_0021fb13 == '\0') {
            lVar10 = 0xbccd62a0fc32d;
          }
        }
        goto LAB_001fe12c;
      }
      if (lVar8 != 0x55dcd19dee737a1a) {
        plVar7 = plVar13;
        if (lVar8 == 0x5ad71f292518d033) {
          lVar10 = -0x2d23be9e4092ee55;
          if (DAT_0021fb11 == '\0') {
            lVar10 = 0x483dcbc36ada42c4;
          }
        }
        goto LAB_001fe12c;
      }
      uVar5 = FUN_001f50ec(param_1,*param_2,0xc,1);
      bVar3 = (uVar5 & 1) == 0;
      lVar8 = -0x5412c5352f1dc37a;
      lVar10 = -0x2e5d71d46d443370;
    }
  }
LAB_001fe124:
  plVar7 = plVar13;
  if (bVar3) {
    lVar10 = lVar8;
  }
  goto LAB_001fe12c;
}

