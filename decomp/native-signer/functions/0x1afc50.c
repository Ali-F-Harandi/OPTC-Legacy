// rea decompile_all
// name: FUN_001afc50
// address: 0x1afc50
// body: available
// range: 0x1afc50-0x1b041f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1b041c to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001afc50(undefined8 *param_1,char *param_2,undefined1 *param_3)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong in_x11;
  ulong uVar8;
  ulong unaff_x19;
  undefined8 *unaff_x22;
  char *unaff_x25;
  char *unaff_x27;
  ulong unaff_x28;
  ulong local_1c0;
  ulong local_1b8;
  ulong local_1b0;
  undefined8 *local_1a0;
  size_t local_198;
  long lStack_190;
  char *local_188;
  undefined8 *local_180;
  ulong local_178;
  ulong local_170;
  ulong local_160;
  long local_158;
  undefined4 local_14c;
  char local_140 [208];
  ulong local_70;
  
  local_178 = 0;
  local_170 = 0;
  lVar1 = tpidr_el0;
  local_70 = *(ulong *)(lVar1 + 0x28);
  uVar2 = local_70;
  puVar7 = (undefined1 *)0xfbc60408ae501f9e;
  local_188 = param_2;
  local_180 = param_1;
LAB_001afcfc:
  uVar8 = in_x11;
  puVar6 = puVar7;
  uVar5 = uVar2;
  uVar2 = uVar5;
  puVar7 = puVar6;
  in_x11 = uVar8;
  if (-0x439fbf751afe063 < (long)puVar6) {
    if (0x5aba0b6a880053f7 < (long)puVar6) {
      if ((long)puVar6 < 0x67be2c6e2af44868) {
        puVar7 = (undefined1 *)0xaf48e395b2299f45;
        in_x11 = unaff_x28;
        if (puVar6 != (undefined1 *)0x5aba0b6a880053f8) {
          if (puVar6 == (undefined1 *)0x635f31928f91aac5) {
            unaff_x19 = local_1c0 + 1;
            puVar7 = (undefined1 *)0xec0931088cffa169;
            bVar3 = unaff_x19 == local_1b0;
            puVar6 = (undefined1 *)0xae2afb10eb6df44e;
            goto LAB_001b031c;
          }
          puVar7 = puVar6;
          in_x11 = uVar8;
          if (puVar6 == (undefined1 *)0x66d97625bdcfaa84) {
            local_158 = unaff_x22[5];
            local_1b8 = local_178;
            puVar7 = (undefined1 *)0xaf48e395b2299f45;
            in_x11 = 0;
          }
        }
      }
      else if (puVar6 == (undefined1 *)0x67be2c6e2af44868) {
        local_170 = (ulong)*(uint *)(unaff_x22 + 2);
        puVar7 = (undefined1 *)0xa65336067b959657;
        if (*(uint *)(unaff_x22 + 2) != 0) {
          puVar7 = (undefined1 *)0xf2bc86cfcf60b6d9;
        }
      }
      else {
        puVar7 = (undefined1 *)0x8d9cde8a92cc3625;
        if ((puVar6 != (undefined1 *)0x79de56917a785edc) &&
           (puVar7 = puVar6, puVar6 == (undefined1 *)0x70aaef16e8748d67)) {
          if (*(ulong *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return local_14c;
        }
      }
      goto LAB_001afcfc;
    }
    if ((long)puVar6 < 0x205d1929c40a5522) {
      puVar7 = (undefined1 *)0xd4f46c31434e6776;
      if (puVar6 != (undefined1 *)0xfbc60408ae501f9e) {
        if (puVar6 == (undefined1 *)0xfd0967b6e414afde) {
          local_188 = unaff_x25 + 1;
          local_180 = local_1a0;
        }
        else {
          puVar7 = puVar6;
          if (puVar6 == (undefined1 *)0x1f2c3b62b1679b) {
            local_14c = 0;
            *param_3 = 0;
            puVar7 = (undefined1 *)0x70aaef16e8748d67;
          }
        }
      }
      goto LAB_001afcfc;
    }
    if (puVar6 != (undefined1 *)0x205d1929c40a5522) {
      if (puVar6 == (undefined1 *)0x236d10b4e1dc5a1e) {
        local_1a0 = (undefined8 *)(lStack_190 + uVar5 * 0x30);
        iVar4 = strncmp((char *)*local_1a0,unaff_x27,local_198);
        puVar7 = (undefined1 *)0xfd0967b6e414afde;
        local_1c0 = uVar5;
        if (iVar4 != 0) {
          puVar7 = (undefined1 *)0x635f31928f91aac5;
        }
      }
      else if (puVar6 == (undefined1 *)0x4dc5ede807dc3016) goto LAB_001b0198;
      goto LAB_001afcfc;
    }
    local_178 = (ulong)*(uint *)(unaff_x22 + 4);
    bVar3 = *(uint *)(unaff_x22 + 4) == 0;
    puVar7 = (undefined1 *)0x79de56917a785edc;
    puVar6 = (undefined1 *)0x66d97625bdcfaa84;
LAB_001b031c:
    in_x11 = uVar8;
    if (!bVar3) {
      puVar7 = puVar6;
    }
    goto LAB_001afcfc;
  }
  if ((long)puVar6 < -0x3b36a94381d4e3a6) {
    if (-0x59acc9f9846a69aa < (long)puVar6) {
      puVar7 = (undefined1 *)0x8d9cde8a92cc3625;
      if (((puVar6 != (undefined1 *)0xa65336067b959657) &&
          (uVar2 = unaff_x19, puVar7 = (undefined1 *)0x236d10b4e1dc5a1e,
          puVar6 != (undefined1 *)0xae2afb10eb6df44e)) &&
         (uVar2 = uVar5, puVar7 = puVar6, puVar6 == (undefined1 *)0xaf48e395b2299f45)) {
        iVar4 = strcmp(*(char **)(local_158 + uVar8 * 0x30),unaff_x27);
        puVar7 = (undefined1 *)0x939eea0b05eec05c;
        local_160 = uVar8;
        if (iVar4 != 0) {
          puVar7 = (undefined1 *)0x926de49d3b08a3c9;
        }
      }
      goto LAB_001afcfc;
    }
    if (puVar6 != (undefined1 *)0x8d9cde8a92cc3625) {
      if (puVar6 == (undefined1 *)0x926de49d3b08a3c9) {
        unaff_x28 = local_160 + 1;
        puVar7 = (undefined1 *)0x4dc5ede807dc3016;
        bVar3 = unaff_x28 == local_1b8;
        puVar6 = (undefined1 *)0x5aba0b6a880053f8;
        goto LAB_001b031c;
      }
      if (puVar6 != (undefined1 *)0x939eea0b05eec05c) goto LAB_001afcfc;
      puVar7 = &DAT_c4c956bc7e2b1c5a;
      bVar3 = *(long *)(local_158 + (local_160 & 0xffffffff) * 0x30 + 8) == 0;
      puVar6 = (undefined1 *)0xf7b3adcf918810f6;
      goto LAB_001b031c;
    }
  }
  else {
    if ((long)puVar6 < -0xd437930309f4927) {
      puVar7 = (undefined1 *)0x8d9cde8a92cc3625;
      if (puVar6 != &DAT_c4c956bc7e2b1c5a) {
        if (puVar6 == (undefined1 *)0xd4f46c31434e6776) {
          unaff_x25 = strchr(local_188,0x2e);
          puVar7 = (undefined1 *)0x205d1929c40a5522;
          unaff_x22 = local_180;
          unaff_x27 = local_188;
          if (unaff_x25 != (char *)0x0) {
            puVar7 = (undefined1 *)0x67be2c6e2af44868;
          }
        }
        else {
          puVar7 = puVar6;
          if (puVar6 == (undefined1 *)0xec0931088cffa169) {
LAB_001b0198:
            puVar7 = (undefined1 *)0x8d9cde8a92cc3625;
          }
        }
      }
      goto LAB_001afcfc;
    }
    if (puVar6 == (undefined1 *)0xf2bc86cfcf60b6d9) {
      lStack_190 = unaff_x22[3];
      local_198 = (long)unaff_x25 - (long)unaff_x27;
      local_1b0 = local_170;
      uVar2 = 0;
      puVar7 = (undefined1 *)0x236d10b4e1dc5a1e;
      goto LAB_001afcfc;
    }
    if (puVar6 != (undefined1 *)0xf57a82b25c35fe2a) {
      if (puVar6 == (undefined1 *)0xf7b3adcf918810f6) {
        local_140[0xc0] = '\0';
        local_140[0xc1] = '\0';
        local_140[0xc2] = '\0';
        local_140[0xc3] = '\0';
        local_140[0xc4] = '\0';
        local_140[0xc5] = '\0';
        local_140[0xc6] = '\0';
        local_140[199] = '\0';
        local_140[8] = '\0';
        local_140[9] = '\0';
        local_140[10] = '\0';
        local_140[0xb] = '\0';
        local_140[0xc] = '\0';
        local_140[0xd] = '\0';
        local_140[0xe] = '\0';
        local_140[0xf] = '\0';
        local_140[0] = '\0';
        local_140[1] = '\0';
        local_140[2] = '\0';
        local_140[3] = '\0';
        local_140[4] = '\0';
        local_140[5] = '\0';
        local_140[6] = '\0';
        local_140[7] = '\0';
        local_140[0x18] = '\0';
        local_140[0x19] = '\0';
        local_140[0x1a] = '\0';
        local_140[0x1b] = '\0';
        local_140[0x1c] = '\0';
        local_140[0x1d] = '\0';
        local_140[0x1e] = '\0';
        local_140[0x1f] = '\0';
        local_140[0x10] = '\0';
        local_140[0x11] = '\0';
        local_140[0x12] = '\0';
        local_140[0x13] = '\0';
        local_140[0x14] = '\0';
        local_140[0x15] = '\0';
        local_140[0x16] = '\0';
        local_140[0x17] = '\0';
        local_140[0x28] = '\0';
        local_140[0x29] = '\0';
        local_140[0x2a] = '\0';
        local_140[0x2b] = '\0';
        local_140[0x2c] = '\0';
        local_140[0x2d] = '\0';
        local_140[0x2e] = '\0';
        local_140[0x2f] = '\0';
        local_140[0x20] = '\0';
        local_140[0x21] = '\0';
        local_140[0x22] = '\0';
        local_140[0x23] = '\0';
        local_140[0x24] = '\0';
        local_140[0x25] = '\0';
        local_140[0x26] = '\0';
        local_140[0x27] = '\0';
        local_140[0x38] = '\0';
        local_140[0x39] = '\0';
        local_140[0x3a] = '\0';
        local_140[0x3b] = '\0';
        local_140[0x3c] = '\0';
        local_140[0x3d] = '\0';
        local_140[0x3e] = '\0';
        local_140[0x3f] = '\0';
        local_140[0x30] = '\0';
        local_140[0x31] = '\0';
        local_140[0x32] = '\0';
        local_140[0x33] = '\0';
        local_140[0x34] = '\0';
        local_140[0x35] = '\0';
        local_140[0x36] = '\0';
        local_140[0x37] = '\0';
        local_140[0x48] = '\0';
        local_140[0x49] = '\0';
        local_140[0x4a] = '\0';
        local_140[0x4b] = '\0';
        local_140[0x4c] = '\0';
        local_140[0x4d] = '\0';
        local_140[0x4e] = '\0';
        local_140[0x4f] = '\0';
        local_140[0x40] = '\0';
        local_140[0x41] = '\0';
        local_140[0x42] = '\0';
        local_140[0x43] = '\0';
        local_140[0x44] = '\0';
        local_140[0x45] = '\0';
        local_140[0x46] = '\0';
        local_140[0x47] = '\0';
        local_140[0x58] = '\0';
        local_140[0x59] = '\0';
        local_140[0x5a] = '\0';
        local_140[0x5b] = '\0';
        local_140[0x5c] = '\0';
        local_140[0x5d] = '\0';
        local_140[0x5e] = '\0';
        local_140[0x5f] = '\0';
        local_140[0x50] = '\0';
        local_140[0x51] = '\0';
        local_140[0x52] = '\0';
        local_140[0x53] = '\0';
        local_140[0x54] = '\0';
        local_140[0x55] = '\0';
        local_140[0x56] = '\0';
        local_140[0x57] = '\0';
        local_140[0x68] = '\0';
        local_140[0x69] = '\0';
        local_140[0x6a] = '\0';
        local_140[0x6b] = '\0';
        local_140[0x6c] = '\0';
        local_140[0x6d] = '\0';
        local_140[0x6e] = '\0';
        local_140[0x6f] = '\0';
        local_140[0x60] = '\0';
        local_140[0x61] = '\0';
        local_140[0x62] = '\0';
        local_140[99] = '\0';
        local_140[100] = '\0';
        local_140[0x65] = '\0';
        local_140[0x66] = '\0';
        local_140[0x67] = '\0';
        local_140[0x78] = '\0';
        local_140[0x79] = '\0';
        local_140[0x7a] = '\0';
        local_140[0x7b] = '\0';
        local_140[0x7c] = '\0';
        local_140[0x7d] = '\0';
        local_140[0x7e] = '\0';
        local_140[0x7f] = '\0';
        local_140[0x70] = '\0';
        local_140[0x71] = '\0';
        local_140[0x72] = '\0';
        local_140[0x73] = '\0';
        local_140[0x74] = '\0';
        local_140[0x75] = '\0';
        local_140[0x76] = '\0';
        local_140[0x77] = '\0';
        local_140[0x88] = '\0';
        local_140[0x89] = '\0';
        local_140[0x8a] = '\0';
        local_140[0x8b] = '\0';
        local_140[0x8c] = '\0';
        local_140[0x8d] = '\0';
        local_140[0x8e] = '\0';
        local_140[0x8f] = '\0';
        local_140[0x80] = '\0';
        local_140[0x81] = '\0';
        local_140[0x82] = '\0';
        local_140[0x83] = '\0';
        local_140[0x84] = '\0';
        local_140[0x85] = '\0';
        local_140[0x86] = '\0';
        local_140[0x87] = '\0';
        local_140[0x98] = '\0';
        local_140[0x99] = '\0';
        local_140[0x9a] = '\0';
        local_140[0x9b] = '\0';
        local_140[0x9c] = '\0';
        local_140[0x9d] = '\0';
        local_140[0x9e] = '\0';
        local_140[0x9f] = '\0';
        local_140[0x90] = '\0';
        local_140[0x91] = '\0';
        local_140[0x92] = '\0';
        local_140[0x93] = '\0';
        local_140[0x94] = '\0';
        local_140[0x95] = '\0';
        local_140[0x96] = '\0';
        local_140[0x97] = '\0';
        local_140[0xa8] = '\0';
        local_140[0xa9] = '\0';
        local_140[0xaa] = '\0';
        local_140[0xab] = '\0';
        local_140[0xac] = '\0';
        local_140[0xad] = '\0';
        local_140[0xae] = '\0';
        local_140[0xaf] = '\0';
        local_140[0xa0] = '\0';
        local_140[0xa1] = '\0';
        local_140[0xa2] = '\0';
        local_140[0xa3] = '\0';
        local_140[0xa4] = '\0';
        local_140[0xa5] = '\0';
        local_140[0xa6] = '\0';
        local_140[0xa7] = '\0';
        local_140[0xb8] = '\0';
        local_140[0xb9] = '\0';
        local_140[0xba] = '\0';
        local_140[0xbb] = '\0';
        local_140[0xbc] = '\0';
        local_140[0xbd] = '\0';
        local_140[0xbe] = '\0';
        local_140[0xbf] = '\0';
        local_140[0xb0] = '\0';
        local_140[0xb1] = '\0';
        local_140[0xb2] = '\0';
        local_140[0xb3] = '\0';
        local_140[0xb4] = '\0';
        local_140[0xb5] = '\0';
        local_140[0xb6] = '\0';
        local_140[0xb7] = '\0';
        FUN_001b0420(local_140);
        iVar4 = access(local_140,4);
        puVar7 = (undefined1 *)0xf57a82b25c35fe2a;
        if (iVar4 != 0) {
          puVar7 = (undefined1 *)0x1f2c3b62b1679b;
        }
      }
      goto LAB_001afcfc;
    }
  }
  local_14c = __system_property_get(param_2,param_3);
  puVar7 = (undefined1 *)0x70aaef16e8748d67;
  goto LAB_001afcfc;
}

