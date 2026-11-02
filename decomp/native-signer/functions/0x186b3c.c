// rea decompile_all
// name: FUN_00186b3c
// address: 0x186b3c
// body: available
// range: 0x186b3c-0x187a97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00186b3c(int *param_1,long *param_2,long param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x23;
  long local_b8;
  long local_b0;
  int local_a4;
  long local_98;
  long local_90;
  int local_84;
  int local_74;
  long local_68;
  
  lVar1 = -0x7cc52ca8c83ce441;
  if (param_3 != 0) {
    lVar1 = -0x2348c62440cf0103;
  }
  lVar4 = 0x75dc6b5f9cabc466;
LAB_00186c48:
  while (lVar3 = lVar4, lVar4 = lVar3, 0x1b5b4f4a3f58ee4a < lVar3) {
    if (lVar3 < 0x4ddb09f816eaddf9) {
      if (lVar3 < 0x395b3e8842789284) {
        if (lVar3 < 0x32bd9012a6e79e28) {
          if (lVar3 < 0x25c043a1e458bb2f) {
            lVar4 = 0x57f94ec4e30fce80;
            if ((lVar3 != 0x1b5b4f4a3f58ee4b) && (lVar4 = lVar3, lVar3 == 0x1f900fe147600228)) {
              iVar2 = FUN_00212730(0,1,&DAT_0021f8c8);
              lVar4 = -0x7368917e5ab1285c;
              if (iVar2 != 0) {
                lVar4 = -0x73fb90b6486c7c6f;
              }
            }
          }
          else if (lVar3 == 0x30537398dff57f51) {
            iVar2 = FUN_00212730(0,1,&DAT_0021f804);
            lVar4 = 0x3cc122309fddaed8;
            if (iVar2 != 0) {
              lVar4 = -0x283dec2459e3b2cb;
            }
          }
          else if (lVar3 == 0x25c043a1e458bb2f) {
            return;
          }
        }
        else if (lVar3 == 0x32bd9012a6e79e28) {
          local_98 = 0;
          local_84 = 0x11;
          lVar4 = 0x7ad06382c76d8907;
        }
        else {
          lVar4 = 0x5df1c66c6b17ba94;
          if ((lVar3 != 0x3367fb9f654e23cb) && (lVar4 = lVar3, lVar3 == 0x376d3c2c3dfb1bd9)) {
            lVar4 = 0x25c043a1e458bb2f;
          }
        }
      }
      else if (lVar3 < 0x4792129cec6a567a) {
        if (lVar3 == 0x395b3e8842789284) {
          local_90 = local_68;
          *param_1 = local_74;
          lVar4 = -0x4990598d15cc4d49;
        }
        else if (lVar3 == 0x3a0c73e3397b09e4) {
          DAT_0021d920 = DAT_0021d920 ^ 0x53;
          DAT_0021d921 = DAT_0021d921 ^ 0x53;
          DAT_0021d922 = DAT_0021d922 ^ 0x53;
          DAT_0021d923 = DAT_0021d923 ^ 0x53;
          DAT_0021d918 = DAT_0021d918 ^ 0x5353535353535353;
          DAT_0021f9ca = '\x01';
          lVar4 = 0x6dbfb2d035773ff3;
        }
        else if (lVar3 == 0x3cc122309fddaed8) {
          lVar4 = -0x3500764870e243e8;
          if (DAT_0021f9ca == '\0') {
            lVar4 = 0x3a0c73e3397b09e4;
          }
        }
      }
      else if (lVar3 == 0x4792129cec6a567a) {
        DAT_0021df60 = DAT_0021df60 ^ 0x11;
        _DAT_0021df50 = _DAT_0021df50 ^ 0x1111111111111111;
        uRam000000000021df58 = uRam000000000021df58 ^ 0x1111111111111111;
        DAT_0021f9fa = '\x01';
        lVar4 = 0x5df1c66c6b17ba94;
      }
      else {
        lVar4 = 0x6ab76382404d8c7c;
        if ((lVar3 != 0x48eb73ef44c24496) && (lVar4 = lVar3, lVar3 == 0x4930e5ff59a63d98)) {
          lVar4 = 0x57f94ec4e30fce80;
        }
      }
    }
    else if (lVar3 < 0x6dbfb2d035773ff3) {
      if (lVar3 < 0x5df1c66c6b17ba94) {
        if (lVar3 == 0x4ddb09f816eaddf9) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f8c4);
          lVar4 = -0x7a7b772342a3a9f1;
          if (iVar2 != 0) {
            lVar4 = -0x1e698f547628a824;
          }
        }
        else if (lVar3 == 0x4e4bff83aab105c0) {
          DAT_0021df90 = DAT_0021df90 ^ 0x3f;
          DAT_0021df91 = DAT_0021df91 ^ 0x3f;
          DAT_0021df92 = DAT_0021df92 ^ 0x3f;
          DAT_0021df94 = DAT_0021df94 ^ 0x3f;
          DAT_0021df95 = DAT_0021df95 ^ 0x3f;
          DAT_0021df96 = DAT_0021df96 ^ 0x3f;
          DAT_0021df93 = DAT_0021df93 ^ 0x3f;
          _DAT_0021df70 = _DAT_0021df70 ^ 0x3f3f3f3f3f3f3f3f;
          uRam000000000021df78 = uRam000000000021df78 ^ 0x3f3f3f3f3f3f3f3f;
          _DAT_0021df80 = _DAT_0021df80 ^ 0x3f3f3f3f3f3f3f3f;
          uRam000000000021df88 = uRam000000000021df88 ^ 0x3f3f3f3f3f3f3f3f;
          DAT_0021f9fb = '\x01';
          lVar4 = -0x3b82eeb7afdae721;
        }
        else if (lVar3 == 0x57f94ec4e30fce80) {
          *param_4 = 0;
          lVar4 = 0x25c043a1e458bb2f;
        }
      }
      else if (lVar3 == 0x5df1c66c6b17ba94) {
        DAT_0021f8c4 = 0;
        unaff_x23 = (**(code **)(*param_2 + 0x30))(param_2,&DAT_0021df50);
        lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar4 = 0x7592808094afd113;
        if (lVar3 != 0) {
          lVar4 = -0x6290c84f81b1c63a;
        }
      }
      else if (lVar3 == 0x6564ad592c761b30) {
        local_a4 = 0x11;
LAB_0018792c:
        lVar4 = -0x646a880db18ebfa8;
      }
      else if (lVar3 == 0x6ab76382404d8c7c) {
        lVar4 = 0x376d3c2c3dfb1bd9;
        if (*param_1 != 0) {
          lVar4 = 0x1b5b4f4a3f58ee4b;
        }
      }
    }
    else if (lVar3 < 0x75dc6b5f9cabc466) {
      if (lVar3 == 0x6dbfb2d035773ff3) {
        DAT_0021f804 = 0;
        local_b0 = (**(code **)(*param_2 + 0x388))(param_2,unaff_x23,&DAT_0021d918,&DAT_0021df70);
        lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar4 = 0x70052c10865bca47;
        if (lVar3 != 0) {
          lVar4 = 0x32bd9012a6e79e28;
        }
      }
      else if (lVar3 == 0x70052c10865bca47) {
        lVar4 = -0x436ee720be00bd32;
        if (local_b0 != 0) {
          lVar4 = -0x246c429bd19b5c0d;
        }
      }
      else if (lVar3 == 0x7592808094afd113) {
        lVar4 = 0x6564ad592c761b30;
        if (unaff_x23 != 0) {
          lVar4 = -0x1700f82a3079e6ec;
        }
      }
    }
    else if (lVar3 == 0x7ad06382c76d8907) {
      (**(code **)(*param_2 + 0x80))(param_2);
      (**(code **)(*param_2 + 0x88))(param_2);
      local_68 = local_98;
      local_74 = local_84;
LAB_00187a20:
      lVar4 = 0x395b3e8842789284;
    }
    else {
      lVar4 = -0x3b82eeb7afdae721;
      if ((lVar3 != 0x7952b2681778921a) && (lVar4 = lVar3, lVar3 == 0x75dc6b5f9cabc466)) {
        lVar4 = lVar1;
      }
    }
  }
  if (lVar3 < -0x36216984911a0b50) {
    if (lVar3 < -0x5ff5d3a8940dc152) {
      if (lVar3 < -0x7368917e5ab1285c) {
        if (lVar3 == -0x7cc52ca8c83ce441) {
          local_a4 = 3;
          goto LAB_0018792c;
        }
        if (lVar3 == -0x7a7b772342a3a9f1) {
          lVar4 = 0x3367fb9f654e23cb;
          if (DAT_0021f9fa == '\0') {
            lVar4 = 0x4792129cec6a567a;
          }
        }
        else if (lVar3 == -0x73fb90b6486c7c6f) {
          lVar4 = 0x1f900fe147600228;
        }
      }
      else if (lVar3 == -0x7368917e5ab1285c) {
        lVar4 = 0x7952b2681778921a;
        if (DAT_0021f9fb == '\0') {
          lVar4 = 0x4e4bff83aab105c0;
        }
      }
      else if (lVar3 == -0x646a880db18ebfa8) {
        *param_1 = local_a4;
        lVar4 = 0x57f94ec4e30fce80;
      }
      else if (lVar3 == -0x6290c84f81b1c63a) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        lVar4 = 0x4930e5ff59a63d98;
        if (unaff_x23 != 0) {
          lVar4 = -0x2b5ce874daacfbb7;
        }
        *param_1 = 0x11;
      }
      goto LAB_00186c48;
    }
    if (-0x4990598d15cc4d4a < lVar3) {
      if (lVar3 == -0x4990598d15cc4d49) {
        (**(code **)(*param_2 + 0xb8))(param_2,unaff_x23);
        local_b8 = local_90;
        lVar4 = 0x48eb73ef44c24496;
        if (local_90 != 0) {
          lVar4 = -0xd96ed9de873c94f;
        }
      }
      else {
        if (lVar3 == -0x436ee720be00bd32) {
          local_68 = 0;
          local_74 = 0x11;
          goto LAB_00187a20;
        }
        if (lVar3 == -0x3b82eeb7afdae721) {
          DAT_0021f8c8 = 0;
          lVar4 = 0x30537398dff57f51;
        }
      }
      goto LAB_00186c48;
    }
    if (lVar3 == -0x5ff5d3a8940dc152) {
      lVar4 = (**(code **)(*param_2 + 0x390))(param_2,unaff_x23,local_b0,unaff_x20);
      *param_4 = lVar4;
      lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
      lVar4 = -0x160b35ef5ce6a3ed;
      if (lVar3 != 0) {
        lVar4 = 0x163b21dc9aaeda16;
      }
      goto LAB_00186c48;
    }
    if (lVar3 == -0x5f57a4c7f9e48340) {
      local_74 = 0x21;
      goto LAB_001877cc;
    }
    if (lVar3 != -0x5184569a1b4e3e2c) goto LAB_00186c48;
    local_84 = 0x21;
  }
  else {
    if (lVar3 < -0x2348c62440cf0103) {
      if (lVar3 < -0x2b5ce874daacfbb7) {
        if (lVar3 == -0x36216984911a0b50) {
          lVar4 = -0x5f57a4c7f9e48340;
          if (unaff_x20 != 0) {
            lVar4 = -0x5ff5d3a8940dc152;
          }
        }
        else {
          lVar4 = 0x6dbfb2d035773ff3;
          if ((lVar3 != -0x3500764870e243e8) && (lVar4 = lVar3, lVar3 == -0x3463af09068d8d71)) {
            local_74 = 0x14;
LAB_001877cc:
            lVar4 = 0x395b3e8842789284;
            local_68 = unaff_x20;
          }
        }
      }
      else if (lVar3 == -0x2b5ce874daacfbb7) {
        local_90 = 0;
        lVar4 = -0x4990598d15cc4d49;
      }
      else {
        lVar4 = 0x30537398dff57f51;
        if ((lVar3 != -0x283dec2459e3b2cb) && (lVar4 = lVar3, lVar3 == -0x246c429bd19b5c0d)) {
          unaff_x20 = (**(code **)(*param_2 + 0x538))(param_2,param_3);
          lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar4 = -0x36216984911a0b50;
          if (lVar3 != 0) {
            lVar4 = -0x5184569a1b4e3e2c;
          }
        }
      }
      goto LAB_00186c48;
    }
    if (lVar3 < -0x160b35ef5ce6a3ed) {
      lVar4 = 0x4ddb09f816eaddf9;
      if (((lVar3 != -0x2348c62440cf0103) && (lVar3 != -0x1e698f547628a824)) &&
         (lVar4 = lVar3, lVar3 == -0x1700f82a3079e6ec)) {
        lVar4 = 0x1f900fe147600228;
      }
      goto LAB_00186c48;
    }
    if (lVar3 < 0x163b21dc9aaeda16) {
      if (lVar3 == -0x160b35ef5ce6a3ed) {
        lVar4 = -0x3463af09068d8d71;
        if (*param_4 != 0) {
          lVar4 = 0x1aec64e8cfbc4e87;
        }
      }
      else if (lVar3 == -0xd96ed9de873c94f) {
        (**(code **)(*param_2 + 0xb8))(param_2,local_b8);
        lVar4 = 0x6ab76382404d8c7c;
      }
      goto LAB_00186c48;
    }
    if (lVar3 != 0x163b21dc9aaeda16) {
      if (lVar3 == 0x1aec64e8cfbc4e87) {
        lVar4 = -0x4990598d15cc4d49;
        local_90 = unaff_x20;
      }
      goto LAB_00186c48;
    }
    local_84 = 0x14;
  }
  lVar4 = 0x7ad06382c76d8907;
  local_98 = unaff_x20;
  goto LAB_00186c48;
}

