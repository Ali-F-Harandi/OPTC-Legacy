// rea decompile_all
// name: FUN_0017f8f0
// address: 0x17f8f0
// body: available
// range: 0x17f8f0-0x18033b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0017f8f0(undefined4 *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x27;
  undefined4 local_8c;
  long local_88;
  undefined4 local_7c;
  
  lVar1 = 0x7bbf3290a3bc5a2f;
  if (param_4 == 0 || param_3 == 0) {
    lVar1 = -0x5480fe589d508df0;
  }
  lVar4 = 0x247512c793575b34;
LAB_0017fa0c:
  lVar3 = lVar4;
  lVar4 = lVar3;
  if (lVar3 < 0x2077d8723f4314a0) {
    if (lVar3 < -0x316b119d7dea7f62) {
      if (lVar3 < -0x5480fe589d508df0) {
        if (lVar3 < -0x5964a74c68451110) {
          if (lVar3 == -0x70a23fb5a0725721) {
            (**(code **)(*param_2 + 0x1e8))(param_2,param_3,local_88,param_4);
            lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar4 = 0x51c95b8e3d1b7c94;
            if (lVar3 != 0) {
              lVar4 = 0x47fe4156e210931d;
            }
          }
          else if (lVar3 == -0x5c0c11588661d249) {
            lVar4 = -0x3d00e7c1a98d544d;
LAB_001801fc:
            *param_1 = 0x11;
          }
        }
        else if (lVar3 == -0x5964a74c68451110) {
          DAT_0021f87c = 0;
          local_88 = (**(code **)(*param_2 + 0x108))(param_2,unaff_x27,&DAT_0021dd08,&DAT_0021dd20);
          lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar4 = 0x4b2f2529a6695fc3;
          if (lVar3 != 0) {
            lVar4 = 0x691fd7f9e13e9c08;
          }
        }
        else if (lVar3 == -0x58fa3929d0f15b5a) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f87c);
          lVar4 = 0x14abf41aa72e58d3;
          if (iVar2 != 0) {
            lVar4 = -0x22dcfaa1db405ca6;
          }
        }
      }
      else if (lVar3 < -0x50186e19765a8581) {
        if (lVar3 == -0x5480fe589d508df0) {
          *param_1 = 3;
          lVar4 = -0x3d00e7c1a98d544d;
        }
        else if (lVar3 == -0x51f060a20b57c52e) {
          lVar4 = -0x5964a74c68451110;
        }
      }
      else {
        lVar4 = -0x2db74f82ca284b0f;
        if ((lVar3 != -0x50186e19765a8581) && (lVar4 = lVar3, lVar3 == -0x3d00e7c1a98d544d)) {
          return;
        }
      }
    }
    else {
      if (-0x22dcfaa1db405ca7 < lVar3) {
        if (lVar3 < -0x3e0f6839649389f) {
          lVar4 = -0x58fa3929d0f15b5a;
          if ((lVar3 == -0x22dcfaa1db405ca6) || (lVar4 = lVar3, lVar3 != -0xe6608d400fabd55))
          goto LAB_0017fa0c;
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          local_8c = local_7c;
        }
        else {
          if (lVar3 != -0x3e0f6839649389f) {
            if (lVar3 == 0x14abf41aa72e58d3) {
              lVar4 = -0x51f060a20b57c52e;
              if (DAT_0021f9e8 == '\0') {
                lVar4 = 0x764654ed26e32a74;
              }
            }
            goto LAB_0017fa0c;
          }
          local_8c = 0x11;
        }
        lVar4 = -0x316b119d7dea7f62;
        goto LAB_0017fa0c;
      }
      if (lVar3 < -0x2db74f82ca284b0f) {
        if (lVar3 == -0x316b119d7dea7f62) {
          *param_1 = local_8c;
          lVar4 = 0x7a372565a97c8dc0;
        }
        else if (lVar3 == -0x2f39b43f64b97746) {
          lVar4 = -0x5c0c11588661d249;
          if (unaff_x27 != 0) {
            lVar4 = 0x6cc07a61ed36bcff;
          }
        }
      }
      else if (lVar3 == -0x2db74f82ca284b0f) {
        iVar2 = FUN_00212730(0,1,&DAT_0021f880);
        lVar4 = 0x72955fd62f07f398;
        if (iVar2 != 0) {
          lVar4 = -0x50186e19765a8581;
        }
      }
      else if (lVar3 == -0x2d142fbed4e63f1e) {
        DAT_0021dd48 = DAT_0021dd48 ^ 0xc1;
        DAT_0021dd49 = DAT_0021dd49 ^ 0xc1;
        DAT_0021dd4a = DAT_0021dd4a ^ 0xc1;
        DAT_0021dd4b = DAT_0021dd4b ^ 0xc1;
        DAT_0021dd4c = DAT_0021dd4c ^ 0xc1;
        DAT_0021dd4d = DAT_0021dd4d ^ 0xc1;
        DAT_0021dd4e = DAT_0021dd4e ^ 0xc1;
        _DAT_0021dd20 = _DAT_0021dd20 ^ 0xc1c1c1c1c1c1c1c1;
        uRam000000000021dd28 = uRam000000000021dd28 ^ 0xc1c1c1c1c1c1c1c1;
        _DAT_0021dd30 = _DAT_0021dd30 ^ 0xc1c1c1c1c1c1c1c1;
        uRam000000000021dd38 = uRam000000000021dd38 ^ 0xc1c1c1c1c1c1c1c1;
        DAT_0021dd40 = DAT_0021dd40 ^ 0xc1c1c1c1c1c1c1c1;
        DAT_0021f9e9 = '\x01';
        lVar4 = 0x2ff59f659a6b122a;
      }
    }
    goto LAB_0017fa0c;
  }
  if (lVar3 < 0x51c95b8e3d1b7c94) {
    if (lVar3 < 0x376acc1cf306ad21) {
      lVar4 = 0x2ff59f659a6b122a;
      if (((lVar3 != 0x2077d8723f4314a0) && (lVar4 = lVar1, lVar3 != 0x247512c793575b34)) &&
         (lVar4 = lVar3, lVar3 == 0x2ff59f659a6b122a)) {
        DAT_0021f880 = 0;
        lVar4 = -0x58fa3929d0f15b5a;
      }
      goto LAB_0017fa0c;
    }
    if (0x49ac3a6a4504c81f < lVar3) {
      lVar4 = 0x7a372565a97c8dc0;
      if ((lVar3 != 0x49ac3a6a4504c820) && (lVar4 = lVar3, lVar3 == 0x4b2f2529a6695fc3)) {
        lVar4 = -0x3e0f6839649389f;
        if (local_88 != 0) {
          lVar4 = -0x70a23fb5a0725721;
        }
      }
      goto LAB_0017fa0c;
    }
    if (lVar3 == 0x376acc1cf306ad21) {
      (**(code **)(*param_2 + 0x80))(param_2);
      (**(code **)(*param_2 + 0x88))(param_2);
      lVar4 = 0x6f6c4a39061350c1;
      if (unaff_x27 != 0) {
        lVar4 = 0x49ac3a6a4504c820;
      }
      goto LAB_001801fc;
    }
    if (lVar3 != 0x47fe4156e210931d) goto LAB_0017fa0c;
    local_7c = 0x1b;
  }
  else {
    if (0x72955fd62f07f397 < lVar3) {
      if (lVar3 < 0x7a372565a97c8dc0) {
        if (lVar3 == 0x72955fd62f07f398) {
          lVar4 = 0x2077d8723f4314a0;
          if (DAT_0021f9e9 == '\0') {
            lVar4 = -0x2d142fbed4e63f1e;
          }
        }
        else if (lVar3 == 0x764654ed26e32a74) {
          DAT_0021dd10 = DAT_0021dd10 ^ 0xa2;
          DAT_0021dd12 = DAT_0021dd12 ^ 0xa2;
          DAT_0021dd11 = DAT_0021dd11 ^ 0xa2;
          DAT_0021dd08 = DAT_0021dd08 ^ 0xa2a2a2a2a2a2a2a2;
          DAT_0021f9e8 = '\x01';
          lVar4 = -0x5964a74c68451110;
        }
      }
      else if (lVar3 == 0x7a372565a97c8dc0) {
        (**(code **)(*param_2 + 0xb8))(param_2,unaff_x27);
        lVar4 = -0x3d00e7c1a98d544d;
      }
      else if (lVar3 == 0x7bbf3290a3bc5a2f) {
        unaff_x27 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
        lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar4 = -0x2f39b43f64b97746;
        if (lVar3 != 0) {
          lVar4 = 0x376acc1cf306ad21;
        }
      }
      goto LAB_0017fa0c;
    }
    if (0x6cc07a61ed36bcfe < lVar3) {
      lVar4 = -0x2db74f82ca284b0f;
      if ((lVar3 != 0x6cc07a61ed36bcff) && (lVar4 = lVar3, lVar3 == 0x6f6c4a39061350c1)) {
        lVar4 = -0x3d00e7c1a98d544d;
      }
      goto LAB_0017fa0c;
    }
    lVar4 = 0x7a372565a97c8dc0;
    if ((lVar3 == 0x51c95b8e3d1b7c94) || (lVar4 = lVar3, lVar3 != 0x691fd7f9e13e9c08))
    goto LAB_0017fa0c;
    local_7c = 0x11;
  }
  lVar4 = -0xe6608d400fabd55;
  goto LAB_0017fa0c;
}

