// rea decompile_all
// name: FUN_0017a9a4
// address: 0x17a9a4
// body: available
// range: 0x17a9a4-0x17b6a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0017a9a4(undefined4 *param_1,long *param_2,long param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x25;
  long unaff_x28;
  long local_d8;
  long local_c0;
  long local_b8;
  long local_b0;
  undefined4 local_a4;
  long local_a0;
  long local_98;
  undefined4 local_8c;
  long local_88;
  undefined4 local_7c;
  
  lVar1 = 0x2b5387362988d12e;
  if (param_3 != 0) {
    lVar1 = -0x4d9f8c3bbc73dc5;
  }
  lVar4 = 0x516001ab3b518ec4;
LAB_0017aab0:
  while (lVar3 = lVar4, lVar4 = lVar3, lVar3 < 0x1b2059ac6c9842f) {
    if (lVar3 < -0x3e2ffff5ca645444) {
      if (lVar3 < -0x552fa67ac2892b22) {
        if (lVar3 < -0x6040195d60536efc) {
          lVar4 = -0x592bcae7d590fc8d;
          if ((lVar3 != -0x670bf0433937c828) && (lVar4 = lVar3, lVar3 == -0x6141532fd00a50be)) {
            local_98 = 0;
            local_7c = 0x11;
            lVar4 = -0x3e2ffff5ca645444;
          }
        }
        else if (lVar3 == -0x6040195d60536efc) {
          unaff_x19 = (**(code **)(*param_2 + 0x580))(param_2,param_4);
          lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar4 = 0x6981fe660bc7544d;
          if (lVar3 != 0) {
            lVar4 = 0x5485df2a4ff004cd;
          }
        }
        else if (lVar3 == -0x5a4e52a497a1edfd) {
          lVar4 = -0x552fa67ac2892b22;
LAB_0017b42c:
          *param_1 = 0x11;
        }
        else if (lVar3 == -0x592bcae7d590fc8d) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f850);
          lVar4 = 0x68a8ec28bf33d61d;
          if (iVar2 != 0) {
            lVar4 = -0x670bf0433937c828;
          }
        }
      }
      else if (lVar3 < -0x479fb4e052341ead) {
        if (lVar3 == -0x53b5e3f20bb42b48) {
          local_a4 = 0x1b;
          local_b0 = local_b8;
          lVar4 = 0x1a5858dea0284c2e;
          local_c0 = unaff_x19;
        }
        else {
          lVar4 = -0x552fa67ac2892b22;
          if ((lVar3 != -0x4e3d9425464273c7) && (lVar4 = lVar3, lVar3 == -0x552fa67ac2892b22)) {
            return;
          }
        }
      }
      else {
        lVar4 = 0x62a421dce498d63f;
        if ((lVar3 != -0x479fb4e052341ead) && (lVar4 = lVar3, lVar3 == -0x4379695484f3b9ed)) {
          (**(code **)(*param_2 + 0xb8))(param_2,local_d8);
          lVar4 = -0x552fa67ac2892b22;
        }
      }
    }
    else if (lVar3 < -0x16363b2ce2336309) {
      if (lVar3 < -0x247c48d24182b04d) {
        if (lVar3 == -0x3e2ffff5ca645444) {
          local_b0 = *param_2;
          local_c0 = local_98;
          local_a4 = local_7c;
          lVar4 = 0x1a5858dea0284c2e;
        }
        else if (lVar3 == -0x3470ec699c7f9eb9) {
          (**(code **)(*param_2 + 0x680))(param_2,unaff_x19,0,param_4,param_5);
          lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
          local_b8 = *param_2;
          lVar4 = 0x1b2059ac6c9842f;
          if (lVar3 != 0) {
            lVar4 = -0x53b5e3f20bb42b48;
          }
        }
      }
      else if (lVar3 == -0x247c48d24182b04d) {
        _DAT_0021db30 = _DAT_0021db30 ^ 0x4747474747474747;
        uRam000000000021db38 = uRam000000000021db38 ^ 0x4747474747474747;
        s________G_0021db40._0_8_ = s________G_0021db40._0_8_ ^ 0x4747474747474747;
        DAT_0021f9dd = '\x01';
        lVar4 = 0x62a421dce498d63f;
      }
      else {
        lVar4 = 0x17159aef89473706;
        if ((lVar3 != -0x21facd943851a124) && (lVar4 = lVar3, lVar3 == -0x17b058e69a58c2eb)) {
          *param_1 = local_8c;
          lVar4 = 0x3084a77f8ccecb77;
          unaff_x25 = local_88;
        }
      }
    }
    else if (lVar3 < -0xdb04fae0bc9b54) {
      if (lVar3 == -0x16363b2ce2336309) {
        lVar4 = 0xb1e98d3e0a413a8;
        if (DAT_0021f9de == '\0') {
          lVar4 = 0x4c76874860a3d3ae;
        }
      }
      else if (lVar3 == -0x4d9f8c3bbc73dc5) {
        unaff_x28 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
        lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar4 = 0x5777173fc1efbe1d;
        if (lVar3 != 0) {
          lVar4 = 0x2ee01fa48395221f;
        }
      }
    }
    else {
      lVar4 = 0x17159aef89473706;
      if (lVar3 != -0xdb04fae0bc9b54) {
        if (lVar3 == 0x4ae95f42ffb5d) {
          local_8c = 0x1b;
          lVar4 = -0x17b058e69a58c2eb;
          local_88 = unaff_x19;
        }
        else {
          lVar4 = lVar3;
          if (lVar3 == 0x8b1b4901ef83a7) {
            unaff_x25 = 0;
            lVar4 = 0x3084a77f8ccecb77;
          }
        }
      }
    }
  }
  if (0x4c76874860a3d3ad < lVar3) {
    if (lVar3 < 0x5777173fc1efbe1d) {
      if (lVar3 < 0x519d6b467110aa8d) {
        if (lVar3 == 0x4c76874860a3d3ae) {
          _s_I__H__0021db50 = _s_I__H__0021db50 ^ 0x6161616161616161;
          uRam000000000021db58 = uRam000000000021db58 ^ 0x6161616161616161;
          DAT_0021db88 = DAT_0021db88 ^ 0x61;
          DAT_0021db89 = DAT_0021db89 ^ 0x61;
          _DAT_0021db60 = _DAT_0021db60 ^ 0x6161616161616161;
          uRam000000000021db68 = uRam000000000021db68 ^ 0x6161616161616161;
          DAT_0021db8a = DAT_0021db8a ^ 0x61;
          DAT_0021db8b = DAT_0021db8b ^ 0x61;
          _DAT_0021db70 = _DAT_0021db70 ^ 0x6161616161616161;
          uRam000000000021db78 = uRam000000000021db78 ^ 0x6161616161616161;
          DAT_0021db80 = DAT_0021db80 ^ 0x6161616161616161;
          DAT_0021f9de = '\x01';
          lVar4 = 0x564e4570920a34cd;
        }
        else if (lVar3 == 0x516001ab3b518ec4) {
          lVar4 = lVar1;
        }
        goto LAB_0017aab0;
      }
      lVar4 = -0x552fa67ac2892b22;
      if (lVar3 == 0x519d6b467110aa8d) goto LAB_0017aab0;
      if (lVar3 != 0x5485df2a4ff004cd) {
        lVar4 = lVar3;
        if (lVar3 == 0x564e4570920a34cd) {
          DAT_0021f854 = 0;
          lVar4 = -0x592bcae7d590fc8d;
        }
        goto LAB_0017aab0;
      }
    }
    else {
      if (lVar3 < 0x68a8ec28bf33d61d) {
        if (lVar3 == 0x5777173fc1efbe1d) {
          lVar4 = -0x5a4e52a497a1edfd;
          if (unaff_x28 != 0) {
            lVar4 = -0xdb04fae0bc9b54;
          }
        }
        else if (lVar3 == 0x62a421dce498d63f) {
          DAT_0021f850 = 0;
          local_a0 = (**(code **)(*param_2 + 0x108))
                               (param_2,unaff_x28,&DAT_0021db30,s_I__H__0021db50);
          lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar4 = 0x2c5fba45f07f5deb;
          if (lVar3 != 0) {
            lVar4 = -0x6141532fd00a50be;
          }
        }
        goto LAB_0017aab0;
      }
      if (lVar3 == 0x68a8ec28bf33d61d) {
        lVar4 = -0x479fb4e052341ead;
        if (DAT_0021f9dd == '\0') {
          lVar4 = -0x247c48d24182b04d;
        }
        goto LAB_0017aab0;
      }
      if (lVar3 == 0x6981fe660bc7544d) {
        lVar4 = 0x4ae95f42ffb5d;
        if (unaff_x19 != 0) {
          lVar4 = -0x3470ec699c7f9eb9;
        }
        goto LAB_0017aab0;
      }
      if (lVar3 != 0x6f3c6f97b14b7d86) goto LAB_0017aab0;
    }
    local_7c = 0x1b;
    lVar4 = -0x3e2ffff5ca645444;
    local_98 = unaff_x19;
    goto LAB_0017aab0;
  }
  if (lVar3 < 0x2b5387362988d12e) {
    if (lVar3 < 0xb1e98d3e0a413a8) {
      if (lVar3 == 0x1b2059ac6c9842f) {
        (**(code **)(local_b8 + 0x110))(param_2,param_3,local_a0,unaff_x19);
        lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar4 = 0x8fe7a66682c8a04;
        if (lVar3 != 0) {
          lVar4 = 0x6f3c6f97b14b7d86;
        }
      }
      else if (lVar3 == 0x8fe7a66682c8a04) {
        lVar4 = 0x3084a77f8ccecb77;
        unaff_x25 = unaff_x19;
      }
      goto LAB_0017aab0;
    }
    lVar4 = 0x564e4570920a34cd;
    if (lVar3 == 0xb1e98d3e0a413a8) goto LAB_0017aab0;
    if (lVar3 == 0x17159aef89473706) {
      iVar2 = FUN_00212730(0,1,&DAT_0021f854);
      lVar4 = -0x16363b2ce2336309;
      if (iVar2 != 0) {
        lVar4 = -0x21facd943851a124;
      }
      goto LAB_0017aab0;
    }
    lVar4 = lVar3;
    if (lVar3 != 0x1a5858dea0284c2e) goto LAB_0017aab0;
    (**(code **)(local_b0 + 0x80))(param_2);
    (**(code **)(*param_2 + 0x88))(param_2);
    local_88 = local_c0;
    local_8c = local_a4;
  }
  else {
    if (lVar3 < 0x2ee01fa48395221f) {
      if (lVar3 == 0x2b5387362988d12e) {
        *param_1 = 3;
        lVar4 = -0x552fa67ac2892b22;
      }
      else if (lVar3 == 0x2c5fba45f07f5deb) {
        lVar4 = 0x35dd32dfb4a6e12b;
        if (local_a0 != 0) {
          lVar4 = -0x6040195d60536efc;
        }
      }
      goto LAB_0017aab0;
    }
    if (lVar3 == 0x2ee01fa48395221f) {
      (**(code **)(*param_2 + 0x80))(param_2);
      (**(code **)(*param_2 + 0x88))(param_2);
      lVar4 = -0x4e3d9425464273c7;
      if (unaff_x28 != 0) {
        lVar4 = 0x8b1b4901ef83a7;
      }
      goto LAB_0017b42c;
    }
    if (lVar3 == 0x3084a77f8ccecb77) {
      (**(code **)(*param_2 + 0xb8))(param_2,unaff_x28);
      lVar4 = 0x519d6b467110aa8d;
      local_d8 = unaff_x25;
      if (unaff_x25 != 0) {
        lVar4 = -0x4379695484f3b9ed;
      }
      goto LAB_0017aab0;
    }
    if (lVar3 != 0x35dd32dfb4a6e12b) goto LAB_0017aab0;
    local_8c = 0x11;
    local_88 = 0;
  }
  lVar4 = -0x17b058e69a58c2eb;
  goto LAB_0017aab0;
}

