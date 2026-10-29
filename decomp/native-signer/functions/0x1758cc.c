// rea decompile_all
// name: FUN_001758cc
// address: 0x1758cc
// body: available
// range: 0x1758cc-0x17696b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001758cc(undefined4 *param_1,long *param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  byte unaff_w23;
  long unaff_x25;
  long unaff_x28;
  long local_e0;
  long local_d8;
  long *local_c8;
  undefined4 local_bc;
  long *local_b8;
  long local_b0;
  long *local_a8;
  undefined4 local_9c;
  long local_88;
  undefined4 local_7c;
  long local_78;
  long *local_68;
  
  lVar1 = 0x5a7966877bb5e856;
  if ((param_5 == 0 || param_4 == 0) || param_3 == 0) {
    lVar1 = 0x12f97563fe86189d;
  }
  plVar2 = param_2;
  lVar5 = lVar1;
  lVar8 = -0x65ea49716c78db2d;
LAB_001759b8:
  lVar7 = lVar8;
  lVar9 = lVar5;
  plVar6 = plVar2;
  plVar2 = plVar6;
  lVar5 = lVar9;
  lVar8 = lVar7;
  if (lVar7 < 0x12f97563fe86189d) {
    if (lVar7 < -0x28e14ecfb2aa8ff2) {
      if (-0x5370ef828278883c < lVar7) {
        if (-0x3726a832e592db75 < lVar7) {
          if (lVar7 == -0x3726a832e592db74) {
            (**(code **)(*param_2 + 0x80))(param_2);
            (**(code **)(*param_2 + 0x88))(param_2);
            local_a8 = local_b8;
            local_bc = local_9c;
            lVar8 = -0x2f3336ee1624771d;
          }
          else if (lVar7 == -0x33cadcbd9157ba94) {
            lVar8 = -0x1579c5d94e757e2d;
            local_d8 = unaff_x25;
            if ((unaff_w23 & unaff_x25 != 0) == 0) {
              lVar8 = 0x3d520d52a04eb0a3;
            }
          }
          else if (lVar7 == -0x2f3336ee1624771d) {
            *param_1 = local_bc;
            plVar2 = local_a8;
            lVar5 = unaff_x19;
            lVar8 = 0x3a9f795766717164;
          }
          goto LAB_001759b8;
        }
        lVar8 = 0x12e1be5f2b72ca6f;
        if (lVar7 == -0x5370ef828278883b) goto LAB_001759b8;
        if (lVar7 == -0x52d8f6b8a3da3d9e) {
          unaff_x19 = (**(code **)(*param_2 + 0x538))(param_2,param_5);
          lVar5 = (**(code **)(*param_2 + 0x78))(param_2);
          bVar3 = lVar5 == 0;
          lVar7 = -0x1aa196cea8a824ec;
          lVar8 = 0x6ba687d86db6deec;
        }
        else {
          lVar8 = lVar7;
          if (lVar7 != -0x51134ff119c1308f) goto LAB_001759b8;
          iVar4 = FUN_00212730(0,1,&DAT_0021f828);
          lVar7 = 0x5c464faf1c134413;
          lVar8 = -0x21c0c6636b2aee0b;
          bVar3 = iVar4 == 0;
        }
        goto LAB_00176748;
      }
      if (lVar7 < -0x65ea49716c78db2d) {
        if (lVar7 == -0x6e115ec668cd4595) {
          lVar8 = 0x4ec987089f77069e;
          if (local_c8 != (long *)0x0) {
            lVar8 = -0x601688af67ee5367;
          }
        }
        else if (lVar7 == -0x6df3a92de1c09228) {
          local_a8 = (long *)0x0;
          local_bc = 0x21;
          lVar8 = -0x2f3336ee1624771d;
        }
        else if (lVar7 == -0x6acaf52c4f368fc7) {
          DAT_0021f828 = 0;
          lVar8 = 0x2e5d2c580e521a46;
        }
        goto LAB_001759b8;
      }
      lVar8 = lVar1;
      if (lVar7 == -0x65ea49716c78db2d) goto LAB_001759b8;
      if (lVar7 != -0x6531ea49607ac328) {
        lVar8 = lVar7;
        if (lVar7 == -0x601688af67ee5367) {
          (**(code **)(*param_2 + 0xb8))(param_2,local_c8);
          goto LAB_00176258;
        }
        goto LAB_001759b8;
      }
    }
    else {
      if (lVar7 < -0x13304e214eb4a6b2) {
        if (lVar7 < -0x1aa196cea8a824ec) {
          if (lVar7 == -0x28e14ecfb2aa8ff2) {
            lVar8 = 0x23fbc284d6daefc6;
            if (DAT_0021f9d2 == '\0') {
              lVar8 = 0x14e8afddeb5ba2d8;
            }
          }
          else if (lVar7 == -0x21c0c6636b2aee0b) {
            lVar8 = 0x5d165584104b931b;
            if (DAT_0021f9d3 == '\0') {
              lVar8 = 0x4df7063ff4f72d9f;
            }
          }
          else if (lVar7 == -0x20ffead854ca6e4e) {
            unaff_w23 = 1;
            lVar8 = -0x33cadcbd9157ba94;
            unaff_x25 = unaff_x28;
LAB_00175d10:
            *param_1 = 0x21;
          }
        }
        else if (lVar7 == -0x1aa196cea8a824ec) {
          local_b8 = (long *)0x0;
          local_9c = 0x21;
          lVar8 = -0x3726a832e592db74;
        }
        else if (lVar7 == -0x1579c5d94e757e2d) {
          (**(code **)(*param_2 + 0xb8))(param_2,local_d8);
          lVar8 = 0x24c67f5d9b83fa28;
        }
        else if (lVar7 == -0x14860daff890785c) {
          (**(code **)(*param_2 + 0xb8))(param_2,local_e0);
          lVar8 = -0x6e115ec668cd4595;
        }
        goto LAB_001759b8;
      }
      if (lVar7 < 0x36080c4ea4d3b15) {
        if (lVar7 == -0x13304e214eb4a6b2) {
          lVar8 = -0x20ffead854ca6e4e;
          if (local_78 != 0) {
            lVar8 = -0x52d8f6b8a3da3d9e;
          }
          goto LAB_001759b8;
        }
        if (lVar7 != -0xcdc5aee104269e7) {
          if (lVar7 == 0x21827f7327203db) {
            *param_1 = local_7c;
            lVar8 = -0x33cadcbd9157ba94;
            unaff_x25 = local_88;
            unaff_w23 = param_2 != (long *)0x0;
          }
          goto LAB_001759b8;
        }
      }
      else {
        lVar8 = 0x12e1be5f2b72ca6f;
        if (lVar7 == 0x36080c4ea4d3b15) goto LAB_001759b8;
        if (lVar7 == 0xe418c3fe6fa7e30) {
          plVar2 = (long *)0x0;
          lVar5 = 0;
          lVar8 = 0x3a9f795766717164;
          goto LAB_001759b8;
        }
        lVar8 = lVar7;
        if (lVar7 != 0x12e1be5f2b72ca6f) goto LAB_001759b8;
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
      }
    }
    local_7c = 0x11;
    lVar8 = 0x21827f7327203db;
    local_88 = unaff_x28;
    goto LAB_001759b8;
  }
  if (lVar7 < 0x4f11b5a35da5d5cb) {
    if (lVar7 < 0x3a9f795766717164) {
      if (lVar7 < 0x23fbc284d6daefc6) {
        if (lVar7 == 0x12f97563fe86189d) {
          local_88 = 0;
          local_7c = 3;
          lVar8 = 0x21827f7327203db;
        }
        else {
          lVar8 = -0x51134ff119c1308f;
          if ((lVar7 != 0x13021144eb62c0db) && (lVar8 = lVar7, lVar7 == 0x14e8afddeb5ba2d8)) {
            DAT_0021d9c1 = DAT_0021d9c1 ^ 0xcc;
            DAT_0021d9c2 = DAT_0021d9c2 ^ 0xcc;
            DAT_0021d9c3 = DAT_0021d9c3 ^ 0xcc;
            DAT_0021d9c0 = DAT_0021d9c0 ^ 0xcc;
            DAT_0021f9d2 = '\x01';
            lVar8 = 0x5b9133fd3f5b97f2;
          }
        }
      }
      else if (lVar7 < 0x2e5d2c580e521a46) {
        lVar8 = 0x5b9133fd3f5b97f2;
        if ((lVar7 != 0x23fbc284d6daefc6) && (lVar8 = lVar7, lVar7 == 0x24c67f5d9b83fa28)) {
          return;
        }
      }
      else {
        if (lVar7 == 0x2e5d2c580e521a46) {
          iVar4 = FUN_00212730(0,1,&DAT_0021f824);
          lVar8 = -0x28e14ecfb2aa8ff2;
          lVar9 = 0x67e75d17e2cdd7d4;
          bVar3 = iVar4 == 0;
          goto LAB_001768f4;
        }
        if (lVar7 == 0x366faf7c9bd6c7be) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          lVar8 = 0x4969e3b2df5c1737;
          if (local_78 != 0) {
            lVar8 = 0xe418c3fe6fa7e30;
          }
          goto LAB_00175d10;
        }
      }
      goto LAB_001759b8;
    }
    if (lVar7 < 0x4aec30ca31276d55) {
      if (lVar7 == 0x3a9f795766717164) {
        (**(code **)(*param_2 + 0xb8))(param_2,local_78);
        lVar8 = 0x581147dc809bae3d;
        local_e0 = lVar9;
        local_c8 = plVar6;
        if (lVar9 != 0) {
          lVar8 = -0x14860daff890785c;
        }
        goto LAB_001759b8;
      }
      lVar8 = 0x24c67f5d9b83fa28;
      if ((lVar7 == 0x3d520d52a04eb0a3) || (lVar8 = lVar7, lVar7 != 0x4969e3b2df5c1737))
      goto LAB_001759b8;
    }
    else {
      if (lVar7 == 0x4aec30ca31276d55) {
        lVar8 = -0xcdc5aee104269e7;
        lVar9 = 0x13021144eb62c0db;
        bVar3 = unaff_x28 == 0;
        goto LAB_001759ac;
      }
      if (lVar7 == 0x4df7063ff4f72d9f) {
        _DAT_0021d9d0 = _DAT_0021d9d0 ^ 0xc5c5c5c5c5c5c5c5;
        uRam000000000021d9d8 = uRam000000000021d9d8 ^ 0xc5c5c5c5c5c5c5c5;
        _DAT_0021d9e0 = _DAT_0021d9e0 ^ 0xc5c5c5c5c5c5c5c5;
        uRam000000000021d9e8 = uRam000000000021d9e8 ^ 0xc5c5c5c5c5c5c5c5;
        DAT_0021da08 = DAT_0021da08 ^ 0xc5;
        _DAT_0021d9f0 = _DAT_0021d9f0 ^ 0xc5c5c5c5c5c5c5c5;
        uRam000000000021d9f8 = uRam000000000021d9f8 ^ 0xc5c5c5c5c5c5c5c5;
        DAT_0021da00 = DAT_0021da00 ^ 0xc5c5c5c5c5c5c5c5;
        DAT_0021f9d3 = '\x01';
        lVar8 = -0x6acaf52c4f368fc7;
        goto LAB_001759b8;
      }
      if (lVar7 != 0x4ec987089f77069e) goto LAB_001759b8;
    }
LAB_00176258:
    lVar8 = -0x33cadcbd9157ba94;
    unaff_x25 = unaff_x28;
    unaff_w23 = 1;
    goto LAB_001759b8;
  }
  if (0x67e75d17e2cdd7d3 < lVar7) {
    if (lVar7 < 0x6fec28429a53861a) {
      lVar8 = 0x2e5d2c580e521a46;
      if (lVar7 != 0x67e75d17e2cdd7d4) {
        if (lVar7 == 0x6ba687d86db6deec) {
          bVar3 = unaff_x19 == 0;
          lVar8 = -0x6df3a92de1c09228;
          lVar9 = 0x7823e529026ef05b;
LAB_001759ac:
          if (!bVar3) {
            lVar8 = lVar9;
          }
        }
        else {
          lVar8 = lVar7;
          if (lVar7 == 0x6e6e1c8720089005) {
            local_b8 = local_68;
            local_9c = 0x1b;
            lVar8 = -0x3726a832e592db74;
          }
        }
      }
      goto LAB_001759b8;
    }
    if (lVar7 == 0x6fec28429a53861a) {
      local_78 = (**(code **)(*param_2 + 0x538))(param_2,param_4);
      lVar8 = (**(code **)(*param_2 + 0x78))(param_2);
      bVar3 = lVar8 == 0;
      lVar8 = -0x13304e214eb4a6b2;
      lVar9 = 0x366faf7c9bd6c7be;
    }
    else {
      if (lVar7 == 0x750b035df70dfd6b) {
        bVar3 = local_b0 == 0;
        lVar9 = 0x6fec28429a53861a;
        lVar8 = -0x6531ea49607ac328;
        goto LAB_001759ac;
      }
      if (lVar7 != 0x7823e529026ef05b) goto LAB_001759b8;
      local_68 = (long *)(**(code **)(*param_2 + 0x110))
                                   (param_2,param_3,local_b0,local_78,unaff_x19);
      lVar8 = (**(code **)(*param_2 + 0x78))(param_2);
      bVar3 = lVar8 == 0;
      lVar8 = 0x4f11b5a35da5d5cb;
      lVar9 = 0x6e6e1c8720089005;
    }
LAB_001768f4:
    if (!bVar3) {
      lVar8 = lVar9;
    }
    goto LAB_001759b8;
  }
  if (lVar7 < 0x5b9133fd3f5b97f2) {
    plVar2 = local_68;
    lVar5 = unaff_x19;
    lVar8 = 0x3a9f795766717164;
    if (((lVar7 != 0x4f11b5a35da5d5cb) &&
        (plVar2 = plVar6, lVar5 = lVar9, lVar8 = -0x6e115ec668cd4595, lVar7 != 0x581147dc809bae3d))
       && (lVar8 = lVar7, lVar7 == 0x5a7966877bb5e856)) {
      unaff_x28 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
      lVar5 = (**(code **)(*param_2 + 0x78))(param_2);
      bVar3 = lVar5 == 0;
      lVar7 = 0x36080c4ea4d3b15;
      lVar8 = 0x4aec30ca31276d55;
      goto LAB_00176748;
    }
    goto LAB_001759b8;
  }
  if (lVar7 != 0x5b9133fd3f5b97f2) {
    lVar8 = -0x51134ff119c1308f;
    if ((lVar7 != 0x5c464faf1c134413) && (lVar8 = lVar7, lVar7 == 0x5d165584104b931b)) {
      lVar8 = -0x6acaf52c4f368fc7;
    }
    goto LAB_001759b8;
  }
  DAT_0021f824 = 0;
  local_b0 = (**(code **)(*param_2 + 0x108))(param_2,unaff_x28,&DAT_0021d9c0,&DAT_0021d9d0);
  lVar5 = (**(code **)(*param_2 + 0x78))(param_2);
  bVar3 = lVar5 == 0;
  lVar7 = -0x5370ef828278883b;
  lVar8 = 0x750b035df70dfd6b;
LAB_00176748:
  plVar2 = plVar6;
  lVar5 = lVar9;
  if (!bVar3) {
    lVar8 = lVar7;
  }
  goto LAB_001759b8;
}

