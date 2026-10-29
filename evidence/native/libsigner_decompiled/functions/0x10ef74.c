// rea decompile_all
// name: FUN_0010ef74
// address: 0x10ef74
// body: available
// range: 0x10ef74-0x10f977 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10f974 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0010ef74(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long unaff_x20;
  long unaff_x21;
  long lVar12;
  long unaff_x22;
  undefined8 unaff_x23;
  long unaff_x28;
  undefined1 auVar13 [16];
  byte local_13c;
  long local_138;
  undefined4 *local_130;
  long local_128;
  int local_118;
  undefined1 auStack_114 [20];
  undefined1 auStack_100 [124];
  undefined1 auStack_84 [20];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  local_118 = 0;
  auVar13 = FUN_001e16c4();
  lVar1 = -0x3494da7ac01903fa;
  if (auVar13._0_8_ != 0x28) {
    lVar1 = -0x5efdaaaa05774414;
  }
  lVar3 = auVar13._8_8_;
  lVar10 = -0x4d54a68c57c6c7d7;
  lVar4 = param_1 + 0x20;
LAB_0010f0a0:
  lVar11 = lVar4;
  lVar9 = lVar10;
  lVar8 = lVar3;
  lVar3 = lVar8;
  lVar10 = lVar9;
  lVar4 = lVar11;
  if (lVar9 < 0x1908e88881fd4b8) {
    if (lVar9 < -0x5ef1c6c4ad3406e9) {
      if (lVar9 < -0x6c4e6e21fc3109d8) {
        lVar3 = unaff_x22;
        lVar10 = 0xc18376c52d7997c;
        if (lVar9 != -0x7de374e3804addea) {
          if (lVar9 == -0x74a0fd83975bb29d) {
            uVar7 = FUN_00203298(param_1 + 0x240,0x28,auStack_114,0x14);
            lVar9 = 0x766c039d1f7e793a;
            lVar10 = -0x24526db15a59eb6d;
LAB_0010f914:
            lVar3 = lVar8;
            if ((uVar7 & 1) == 0) {
              lVar10 = lVar9;
            }
          }
          else {
            lVar3 = lVar8;
            lVar10 = lVar9;
            if (lVar9 == -0x72e7d823e5b593c3) {
              FUN_002083ac(param_1 + 0x20,unaff_x23);
              *(ulong *)(param_1 + 0x238) = *(ulong *)(param_1 + 0x238) | 1;
              lVar3 = unaff_x21;
              lVar10 = 0xc18376c52d7997c;
            }
          }
        }
        goto LAB_0010f0a0;
      }
      if (lVar9 < -0x67a5fd8e36b48bb4) {
        lVar10 = 0x27a5ffe384dbadcc;
        lVar4 = unaff_x28;
        if ((lVar9 != -0x6c4e6e21fc3109d8) &&
           (lVar10 = lVar9, lVar4 = lVar11, lVar9 == -0x68f444208277a4db)) {
LAB_0010f558:
          lVar3 = unaff_x22;
          lVar10 = 0xc18376c52d7997c;
          lVar4 = lVar11;
        }
        goto LAB_0010f0a0;
      }
      if (lVar9 != -0x67a5fd8e36b48bb4) {
        if (lVar9 == -0x5efdaaaa05774414) {
          lVar12 = 0;
          goto LAB_0010f638;
        }
        goto LAB_0010f0a0;
      }
      local_138 = *(long *)(unaff_x22 + 0x28);
      bVar5 = local_138 == 0;
      lVar10 = 0x65123e08886f988e;
      lVar8 = -0x5ef1c6c4ad3406e9;
    }
    else if (lVar9 < -0x3494da7ac01903fa) {
      if (-0x51c3e0c739d0a19b < lVar9) {
        if (lVar9 == -0x51c3e0c739d0a19a) {
          FUN_001e38f8(auStack_100,0,0x78);
          FUN_001f4848(auStack_100);
          FUN_001f4874(auStack_100,*(undefined8 *)(local_130 + 2),*local_130);
          FUN_001f4c0c(auStack_100,auStack_84);
          iVar6 = FUN_001e3668(auStack_114,auStack_84,0x14);
          lVar10 = -0x7de374e3804addea;
          if (iVar6 != 0) {
            lVar10 = -0x15c1510c8aef715f;
          }
        }
        else if (lVar9 == -0x4d54a68c57c6c7d7) {
          lVar10 = lVar1;
        }
        goto LAB_0010f0a0;
      }
      if (lVar9 == -0x5ef1c6c4ad3406e9) {
        uVar7 = FUN_0010edf4(auStack_114,local_138 + 0x10);
        lVar9 = 0x141117e41a694bd2;
        lVar10 = 0x6d0a3d5f63139421;
        goto LAB_0010f914;
      }
      if (lVar9 != -0x528217abc8310b8d) goto LAB_0010f0a0;
      local_130 = *(undefined4 **)(local_128 + 0x10);
      lVar10 = 0x7c7b2e9101238be;
      bVar5 = local_130 == (undefined4 *)0x0;
      lVar8 = -0x51c3e0c739d0a19a;
    }
    else if (lVar9 < -0x24526db15a59eb6d) {
      if (lVar9 != -0x3494da7ac01903fa) {
        if (lVar9 == -0x2ad17e01cf2bd6a8) {
          lVar10 = 0x83143bad6ce781d;
          if ((local_13c & 1) == 0) {
            lVar10 = 0x1908e88881fd4b8;
          }
        }
        goto LAB_0010f0a0;
      }
      unaff_x22 = FUN_001fda90(&local_118,*(undefined8 *)(param_1 + 0x278));
      bVar5 = local_118 == 0;
      lVar10 = 0x548fc1c84959d43b;
      lVar8 = 0x13c4fd347c136e7f;
    }
    else {
      if (lVar9 != -0x24526db15a59eb6d) {
        if (lVar9 == -0x15c1510c8aef715f) {
LAB_0010f6cc:
          lVar10 = -0x67a5fd8e36b48bb4;
        }
        goto LAB_0010f0a0;
      }
      local_128 = *(long *)(unaff_x22 + 0x38);
      bVar5 = local_128 == 0;
      lVar10 = 0x722ff175841bf512;
      lVar8 = -0x528217abc8310b8d;
      local_13c = bVar5;
    }
LAB_0010f8c8:
    if (!bVar5) {
      lVar10 = lVar8;
    }
    goto LAB_0010f0a0;
  }
  lVar12 = unaff_x22;
  if (lVar9 < 0x3ad7c4eff58bcc67) {
    if (lVar9 < 0x13c4fd347c136e7f) {
      if (lVar9 < 0x83143bad6ce781d) {
        if (lVar9 == 0x1908e88881fd4b8) goto LAB_0010f638;
        if (lVar9 == 0x7c7b2e9101238be) goto LAB_0010f6cc;
      }
      else {
        lVar3 = unaff_x22;
        lVar10 = 0xc18376c52d7997c;
        if ((lVar9 != 0x83143bad6ce781d) &&
           (lVar3 = lVar8, lVar10 = lVar9, lVar9 == 0xc18376c52d7997c)) {
          *(ulong *)(param_1 + 0x238) = *(ulong *)(param_1 + 0x238) | 0x100040000000000;
          FUN_001fde30(lVar8);
          if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
      }
    }
    else if (lVar9 < 0x25b6416ea5aab4b6) {
      if (lVar9 == 0x13c4fd347c136e7f) goto LAB_0010f080;
      if (lVar9 == 0x141117e41a694bd2) {
        unaff_x20 = *(long *)(unaff_x22 + 0x18);
        bVar5 = unaff_x20 == 0;
        lVar8 = 0x7f50ebff22c297c5;
        lVar10 = 0x25b6416ea5aab4b6;
        goto LAB_0010f8c8;
      }
    }
    else {
      if (lVar9 == 0x25b6416ea5aab4b6) {
LAB_0010f638:
        unaff_x23 = 0x2a;
        goto LAB_0010f08c;
      }
      if (lVar9 == 0x27a5ffe384dbadcc) {
        uVar7 = FUN_0010edf4(auStack_114,lVar11 + 0x10);
        lVar10 = -0x68f444208277a4db;
        if ((uVar7 & 1) == 0) {
          lVar10 = 0x7fd4f688afe2e0bc;
        }
      }
    }
    goto LAB_0010f0a0;
  }
  if (lVar9 < 0x722ff175841bf512) {
    if (0x65123e08886f988d < lVar9) {
      if (lVar9 == 0x65123e08886f988e) {
        unaff_x28 = *(long *)(unaff_x22 + 0x18);
        lVar8 = -0x6c4e6e21fc3109d8;
        lVar10 = -0x2ad17e01cf2bd6a8;
        bVar5 = unaff_x28 == 0;
        goto LAB_0010f8c8;
      }
      if (lVar9 == 0x6d0a3d5f63139421) goto LAB_0010f558;
      goto LAB_0010f0a0;
    }
    if (lVar9 != 0x3ad7c4eff58bcc67) {
      if (lVar9 == 0x548fc1c84959d43b) {
        FUN_001ff5c8(&local_118,unaff_x22);
        lVar10 = -0x74a0fd83975bb29d;
        if (local_118 != 0) {
          lVar10 = 0x3ad7c4eff58bcc67;
        }
      }
      goto LAB_0010f0a0;
    }
  }
  else {
    if (0x7f50ebff22c297c4 < lVar9) {
      lVar10 = 0x27a5ffe384dbadcc;
      lVar4 = unaff_x20;
      if ((lVar9 != 0x7f50ebff22c297c5) &&
         (lVar10 = lVar9, lVar4 = lVar11, lVar9 == 0x7fd4f688afe2e0bc)) goto LAB_0010f638;
      goto LAB_0010f0a0;
    }
    lVar10 = -0x67a5fd8e36b48bb4;
    if ((lVar9 == 0x722ff175841bf512) || (lVar10 = lVar9, lVar9 != 0x766c039d1f7e793a))
    goto LAB_0010f0a0;
  }
LAB_0010f080:
  unaff_x23 = 0x38;
LAB_0010f08c:
  lVar10 = -0x72e7d823e5b593c3;
  lVar4 = lVar11;
  unaff_x21 = lVar12;
  goto LAB_0010f0a0;
}

