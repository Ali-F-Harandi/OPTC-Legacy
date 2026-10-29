// rea decompile_all
// name: FUN_0017d96c
// address: 0x17d96c
// body: available
// range: 0x17d96c-0x17e4ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0017d96c(int *param_1,long *param_2,long param_3,long *param_4)

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
  
  lVar1 = 0x5a7a8231d437adb4;
  if (param_3 != 0) {
    lVar1 = -0x2c5f1c337757982d;
  }
  lVar3 = 0x26c3a23cbeeb6222;
LAB_0017da70:
  while (lVar4 = lVar3, lVar3 = lVar4, -0x85ccf70df60aaa3 < lVar4) {
    if (lVar4 < 0x235a65fff5abe9b6) {
      if (lVar4 < 0xa20615309cffb23) {
        if (lVar4 < -0x1dfcbefb1c4629d) {
          if (lVar4 == -0x85ccf70df60aaa2) {
            local_88 = 0x11;
            goto LAB_0017e3e4;
          }
          if (lVar4 == -0x3ef82a2f333d7c7) {
            lVar3 = 0xa20615309cffb23;
            if (unaff_x27 != 0) {
              lVar3 = -0x19d0964c94255740;
            }
          }
        }
        else if (lVar4 == -0x1dfcbefb1c4629d) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          lVar3 = 0x463e75a9121552c7;
          if (unaff_x27 != 0) {
            lVar3 = -0x26a752ef496f019f;
          }
          *param_1 = 0x11;
        }
        else if (lVar4 == -0x109acc223444f06) {
          *param_1 = local_84;
          lVar3 = 0x404919e289992c5c;
        }
        else if (lVar4 == 0x57baa8288e3b571) {
          return;
        }
      }
      else if (lVar4 < 0x181a50fb70e21de9) {
        if (lVar4 == 0xa20615309cffb23) {
          local_84 = 0x11;
LAB_0017e3a0:
          lVar3 = -0x109acc223444f06;
        }
        else if (lVar4 == 0xad7aef6c6ca3f7e) {
          lVar3 = 0x57baa8288e3b571;
        }
      }
      else {
        lVar3 = -0x754284874b1dca1c;
        if (lVar4 != 0x181a50fb70e21de9) {
          if (lVar4 == 0x18bf94b6068e3e2f) {
            *param_1 = local_74;
            lVar3 = -0x34dc70f496529431;
          }
          else {
            lVar3 = lVar4;
            if (lVar4 == 0x230839c40ecdc0b4) {
              iVar2 = FUN_00212730(0,1,&DAT_0021f870);
              lVar3 = -0x1cd7edc4156ccd1b;
              if (iVar2 != 0) {
                lVar3 = -0x7f8996eb0ce6b4fc;
              }
            }
          }
        }
      }
    }
    else if (lVar4 < 0x48593633f15458b8) {
      if (lVar4 < 0x404919e289992c5c) {
        if (lVar4 == 0x235a65fff5abe9b6) {
          DAT_0021f870 = 0;
          lVar3 = -0x754284874b1dca1c;
        }
        else if (lVar4 == 0x26c3a23cbeeb6222) {
          lVar3 = lVar1;
        }
      }
      else if (lVar4 == 0x404919e289992c5c) {
        *param_4 = 0;
        lVar3 = 0x57baa8288e3b571;
      }
      else if (lVar4 == 0x463e75a9121552c7) {
        lVar3 = 0x404919e289992c5c;
      }
    }
    else if (lVar4 < 0x5bd2bf8a7f474658) {
      if (lVar4 == 0x48593633f15458b8) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        local_74 = local_88;
        goto LAB_0017da5c;
      }
      if (lVar4 == 0x5a7a8231d437adb4) {
        local_84 = 3;
        goto LAB_0017e3a0;
      }
    }
    else if (lVar4 == 0x5bd2bf8a7f474658) {
      DAT_0021dc98 = DAT_0021dc98 ^ 0x55;
      DAT_0021dc99 = DAT_0021dc99 ^ 0x55;
      _DAT_0021dc80 = _DAT_0021dc80 ^ 0x5555555555555555;
      uRam000000000021dc88 = uRam000000000021dc88 ^ 0x5555555555555555;
      DAT_0021dc90 = DAT_0021dc90 ^ 0x5555555555555555;
      DAT_0021f9e5 = '\x01';
      lVar3 = 0x235a65fff5abe9b6;
    }
    else if (lVar4 == 0x7338f0dc0f0da651) {
      lVar3 = -0x27824d6000b4ed03;
      if (*param_4 != 0) {
        lVar3 = -0x5c705efcf08c8797;
      }
    }
    else if (lVar4 == 0x7686cf23951b1170) {
      lVar3 = 0x235a65fff5abe9b6;
    }
  }
  if (lVar4 < -0x360879df266284cb) {
    if (-0x5c705efcf08c8798 < lVar4) {
      if (lVar4 < -0x4eaa2dffa68633e5) {
        lVar3 = -0x34dc70f496529431;
        if ((lVar4 != -0x5c705efcf08c8797) && (lVar3 = lVar4, lVar4 == -0x52c695b63541a536)) {
          local_88 = 0x1b;
LAB_0017e3e4:
          lVar3 = 0x48593633f15458b8;
        }
      }
      else if (lVar4 == -0x4eaa2dffa68633e5) {
        lVar3 = (**(code **)(*param_2 + 0x110))(param_2,param_3,local_90);
        *param_4 = lVar3;
        lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar3 = 0x7338f0dc0f0da651;
        if (lVar4 != 0) {
          lVar3 = -0x52c695b63541a536;
        }
      }
      else if (lVar4 == -0x4c6d05ef267c9b72) {
        lVar3 = -0x6b52f809cfa2162d;
        if (local_90 != 0) {
          lVar3 = -0x4eaa2dffa68633e5;
        }
      }
      else if (lVar4 == -0x3c821466fea7a33a) {
        lVar3 = 0x404919e289992c5c;
      }
      goto LAB_0017da70;
    }
    if (lVar4 < -0x6b52f809cfa2162d) {
      lVar3 = 0x230839c40ecdc0b4;
      if ((lVar4 != -0x7f8996eb0ce6b4fc) && (lVar3 = lVar4, lVar4 == -0x754284874b1dca1c)) {
        iVar2 = FUN_00212730(0,1,&DAT_0021f86c);
        lVar3 = -0x612be10389bc53aa;
        if (iVar2 != 0) {
          lVar3 = 0x181a50fb70e21de9;
        }
      }
      goto LAB_0017da70;
    }
    if (lVar4 != -0x6b52f809cfa2162d) {
      if (lVar4 == -0x612be10389bc53aa) {
        lVar3 = -0x360879df266284cb;
        if (DAT_0021f9e4 == '\0') {
          lVar3 = -0x1117fc2bb64012c4;
        }
      }
      goto LAB_0017da70;
    }
    local_74 = 0x11;
  }
  else {
    if (-0x26a752ef496f01a0 < lVar4) {
      if (lVar4 < -0x1cd7edc4156ccd1b) {
        lVar3 = -0x34dc70f496529431;
        if ((lVar4 != -0x26a752ef496f019f) && (lVar3 = lVar4, lVar4 == -0x2466dc5cb7a7144e)) {
          DAT_0021f86c = 0;
          local_90 = (**(code **)(*param_2 + 0x108))(param_2,unaff_x27,&DAT_0021dc70,&DAT_0021dc80);
          lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar3 = -0x4c6d05ef267c9b72;
          if (lVar4 != 0) {
            lVar3 = -0x85ccf70df60aaa2;
          }
        }
      }
      else if (lVar4 == -0x1cd7edc4156ccd1b) {
        lVar3 = 0x7686cf23951b1170;
        if (DAT_0021f9e5 == '\0') {
          lVar3 = 0x5bd2bf8a7f474658;
        }
      }
      else {
        lVar3 = 0x230839c40ecdc0b4;
        if ((lVar4 != -0x19d0964c94255740) && (lVar3 = lVar4, lVar4 == -0x1117fc2bb64012c4)) {
          _DAT_0021dc70 = _DAT_0021dc70 ^ 0x8787878787878787;
          uRam000000000021dc78 = uRam000000000021dc78 ^ 0x8787878787878787;
          DAT_0021f9e4 = '\x01';
          lVar3 = -0x2466dc5cb7a7144e;
        }
      }
      goto LAB_0017da70;
    }
    if (lVar4 < -0x2c5f1c337757982d) {
      lVar3 = -0x2466dc5cb7a7144e;
      if ((lVar4 != -0x360879df266284cb) && (lVar3 = lVar4, lVar4 == -0x34dc70f496529431)) {
        (**(code **)(*param_2 + 0xb8))(param_2,unaff_x27);
        lVar3 = 0xad7aef6c6ca3f7e;
        if (*param_1 != 0) {
          lVar3 = -0x3c821466fea7a33a;
        }
      }
      goto LAB_0017da70;
    }
    if (lVar4 == -0x2c5f1c337757982d) {
      unaff_x27 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
      lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
      lVar3 = -0x3ef82a2f333d7c7;
      if (lVar4 != 0) {
        lVar3 = -0x1dfcbefb1c4629d;
      }
      goto LAB_0017da70;
    }
    if (lVar4 != -0x27824d6000b4ed03) goto LAB_0017da70;
    local_74 = 0x1b;
  }
LAB_0017da5c:
  lVar3 = 0x18bf94b6068e3e2f;
  goto LAB_0017da70;
}

