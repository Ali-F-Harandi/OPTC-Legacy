// rea decompile_all
// name: FUN_00188f08
// address: 0x188f08
// body: available
// range: 0x188f08-0x189a4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00188f08(int *param_1,long *param_2,long param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x27;
  long local_90;
  int local_88;
  int local_84;
  int local_74;
  
  lVar1 = -0x54e9be1f1777f7dd;
  if (param_3 != 0) {
    lVar1 = 0x6eb5c68fa75595fa;
  }
  lVar3 = 0xf2dc5b03450f24e;
LAB_0018900c:
  while (lVar4 = lVar3, lVar3 = lVar4, -0x1cfc9480f6cf5f4 < lVar4) {
    if (lVar4 < 0x26786d387123267c) {
      if (lVar4 < 0xf2dc5b03450f24e) {
        if (lVar4 < 0xb753b922fcbc12a) {
          lVar3 = -0x457122a82ec7029f;
          if ((lVar4 != -0x1cfc9480f6cf5f3) && (lVar3 = lVar4, lVar4 == 0x3177db33ce154e5)) {
            lVar3 = 0x3566d0551bef7412;
            if (DAT_0021f9c6 == '\0') {
              lVar3 = -0x4fc708d50990ccec;
            }
          }
        }
        else if (lVar4 == 0xb753b922fcbc12a) {
          DAT_0021d988 = DAT_0021d988 ^ 0xb9b9b9b9b9b9b9b9;
          DAT_0021f9cd = '\x01';
          lVar3 = -0x1a6f90379157b251;
        }
        else if (lVar4 == 0xbf7705b22c59245) {
          lVar3 = -0x562e8781ba89f5e4;
          if (unaff_x27 != 0) {
            lVar3 = 0x50743118d2d985f0;
          }
        }
      }
      else if (lVar4 < 0x13c817d32be76879) {
        lVar3 = lVar1;
        if ((lVar4 != 0xf2dc5b03450f24e) && (lVar3 = lVar4, lVar4 == 0x1022bd810cccdf04)) {
          lVar3 = -0x1a6f90379157b251;
        }
      }
      else {
        lVar3 = 0x7b91c9e5bfa87b6c;
        if (lVar4 != 0x13c817d32be76879) {
          if (lVar4 == 0x223aad313b039649) {
            local_74 = 0x27;
            goto LAB_00188ff8;
          }
          lVar3 = lVar4;
          if (lVar4 == 0x23f4540d480a156e) {
            lVar3 = -0x5c4426f3749195ad;
          }
        }
      }
    }
    else if (lVar4 < 0x50743118d2d985f0) {
      if (lVar4 < 0x317bded53e61b6e5) {
        if (lVar4 == 0x26786d387123267c) {
          lVar3 = (**(code **)(*param_2 + 0x110))(param_2,param_3,local_90);
          *param_4 = lVar3;
          lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar3 = 0x5cf9af05cb0d7345;
          if (lVar4 != 0) {
            lVar3 = -0x41e66b439b923c0b;
          }
        }
        else if (lVar4 == 0x2f40a79c06d86749) {
          lVar3 = -0x6b9547eed49dc57a;
          if (local_90 != 0) {
            lVar3 = 0x26786d387123267c;
          }
        }
      }
      else if (lVar4 == 0x317bded53e61b6e5) {
        *param_1 = local_84;
        lVar3 = -0x5c4426f3749195ad;
      }
      else {
        lVar3 = 0x5ded9a2423b0f354;
        if ((lVar4 != 0x3566d0551bef7412) && (lVar3 = lVar4, lVar4 == 0x478bb03e8335ed58)) {
          local_88 = 0x11;
          goto LAB_0018946c;
        }
      }
    }
    else if (lVar4 < 0x5ded9a2423b0f354) {
      lVar3 = -0x2d054a64c1586b88;
      if ((lVar4 != 0x50743118d2d985f0) && (lVar3 = lVar4, lVar4 == 0x5cf9af05cb0d7345)) {
        lVar3 = 0x223aad313b039649;
        if (*param_4 != 0) {
          lVar3 = -0xcb25e3cf5c5d1c2;
        }
      }
    }
    else if (lVar4 == 0x5ded9a2423b0f354) {
      DAT_0021f7f4 = 0;
      local_90 = (**(code **)(*param_2 + 0x108))(param_2,unaff_x27,&DAT_0021d988,&DAT_0021d8c4);
      lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
      lVar3 = 0x2f40a79c06d86749;
      if (lVar4 != 0) {
        lVar3 = 0x478bb03e8335ed58;
      }
    }
    else if (lVar4 == 0x6eb5c68fa75595fa) {
      unaff_x27 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
      lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
      lVar3 = 0xbf7705b22c59245;
      if (lVar4 != 0) {
        lVar3 = -0x35341ab3a5d92113;
      }
    }
    else if (lVar4 == 0x7b91c9e5bfa87b6c) {
      return;
    }
  }
  if (lVar4 < -0x42ae6dd5b623a2ae) {
    if (-0x50994f47f3a48333 < lVar4) {
      if (lVar4 < -0x4b96d5fba611650a) {
        lVar3 = -0x2d054a64c1586b88;
        if ((lVar4 != -0x50994f47f3a48332) && (lVar3 = lVar4, lVar4 == -0x4fc708d50990ccec)) {
          DAT_0021d8c4 = DAT_0021d8c4 ^ 0x9c;
          DAT_0021d8c5 = DAT_0021d8c5 ^ 0x9c;
          DAT_0021d8c6 = DAT_0021d8c6 ^ 0x9c;
          DAT_0021d8c7 = DAT_0021d8c7 ^ 0x9c;
          DAT_0021d8c8 = DAT_0021d8c8 ^ 0x9c;
          DAT_0021f9c6 = '\x01';
          lVar3 = 0x5ded9a2423b0f354;
        }
      }
      else if (lVar4 == -0x4b96d5fba611650a) {
        *param_1 = local_74;
        lVar3 = -0x3d2d47febb83d7a7;
      }
      else {
        lVar3 = -0x5c4426f3749195ad;
        if ((lVar4 != -0x4ad51e0bef7de66c) && (lVar3 = lVar4, lVar4 == -0x457122a82ec7029f)) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f7f4);
          lVar3 = 0x3177db33ce154e5;
          if (iVar2 != 0) {
            lVar3 = -0x1cfc9480f6cf5f3;
          }
        }
      }
      goto LAB_0018900c;
    }
    if (-0x562e8781ba89f5e5 < lVar4) {
      if (lVar4 == -0x562e8781ba89f5e4) {
        local_84 = 0x11;
      }
      else {
        if (lVar4 != -0x54e9be1f1777f7dd) goto LAB_0018900c;
        local_84 = 3;
      }
      lVar3 = 0x317bded53e61b6e5;
      goto LAB_0018900c;
    }
    if (lVar4 != -0x6b9547eed49dc57a) {
      if (lVar4 == -0x5c4426f3749195ad) {
        *param_4 = 0;
        lVar3 = 0x7b91c9e5bfa87b6c;
      }
      goto LAB_0018900c;
    }
    local_74 = 0x11;
  }
  else {
    if (lVar4 < -0x32183a452afd59c6) {
      if (lVar4 < -0x3d2d47febb83d7a7) {
        lVar3 = -0x3d2d47febb83d7a7;
        if ((lVar4 != -0x42ae6dd5b623a2ae) && (lVar3 = lVar4, lVar4 == -0x41e66b439b923c0b)) {
          local_88 = 0x27;
LAB_0018946c:
          lVar3 = -0x252681a442b27e48;
        }
      }
      else if (lVar4 == -0x3d2d47febb83d7a7) {
        (**(code **)(*param_2 + 0xb8))(param_2,unaff_x27);
        lVar3 = 0x13c817d32be76879;
        if (*param_1 != 0) {
          lVar3 = -0x4ad51e0bef7de66c;
        }
      }
      else if (lVar4 == -0x35341ab3a5d92113) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        lVar3 = 0x23f4540d480a156e;
        if (unaff_x27 != 0) {
          lVar3 = -0x42ae6dd5b623a2ae;
        }
        *param_1 = 0x11;
      }
      goto LAB_0018900c;
    }
    if (lVar4 < -0x252681a442b27e48) {
      if (lVar4 == -0x32183a452afd59c6) {
        lVar3 = 0x1022bd810cccdf04;
        if (DAT_0021f9cd == '\0') {
          lVar3 = 0xb753b922fcbc12a;
        }
      }
      else if (lVar4 == -0x2d054a64c1586b88) {
        iVar2 = FUN_00212730(0,1,&DAT_0021f810);
        lVar3 = -0x32183a452afd59c6;
        if (iVar2 != 0) {
          lVar3 = -0x50994f47f3a48332;
        }
      }
      goto LAB_0018900c;
    }
    if (lVar4 != -0x252681a442b27e48) {
      if (lVar4 == -0x1a6f90379157b251) {
        DAT_0021f810 = 0;
        lVar3 = -0x457122a82ec7029f;
      }
      else if (lVar4 == -0xcb25e3cf5c5d1c2) {
        lVar3 = -0x3d2d47febb83d7a7;
      }
      goto LAB_0018900c;
    }
    (**(code **)(*param_2 + 0x80))(param_2);
    (**(code **)(*param_2 + 0x88))(param_2);
    local_74 = local_88;
  }
LAB_00188ff8:
  lVar3 = -0x4b96d5fba611650a;
  goto LAB_0018900c;
}

