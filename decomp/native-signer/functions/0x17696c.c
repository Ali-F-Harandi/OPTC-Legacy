// rea decompile_all
// name: FUN_0017696c
// address: 0x17696c
// body: available
// range: 0x17696c-0x1776fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0017696c(undefined4 *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  byte unaff_w22;
  long unaff_x27;
  long unaff_x28;
  long local_b0;
  long local_a8;
  long local_90;
  long local_80;
  undefined4 local_74;
  long local_70;
  long local_68;
  
  lVar1 = 0x2eb2cb94985f61db;
  if (param_4 == 0 || param_3 == 0) {
    lVar1 = -0x2cc49f4395b2f43b;
  }
  lVar2 = lVar1;
  lVar5 = -0x47fe715cf647cc47;
LAB_00176a58:
  while (lVar6 = lVar5, lVar4 = lVar2, lVar2 = lVar4, lVar5 = lVar6, lVar6 < -0x14cc1a46edce974e) {
    if (lVar6 < -0x345385a5acf579a7) {
      if (lVar6 < -0x702101e1bc06872a) {
        if (lVar6 < -0x73e8f5c018ea657d) {
          if (lVar6 == -0x7fd1a15b5060645a) {
            unaff_w22 = 1;
            lVar5 = 0x6b1c8496500da436;
            unaff_x28 = unaff_x27;
            goto LAB_001774e0;
          }
          if (lVar6 == -0x7af53ec599aae46c) {
            (**(code **)(*param_2 + 0xb8))(param_2,local_70);
            lVar5 = -0x2f47a56bc1eb9a76;
            local_b0 = lVar4;
            if (lVar4 != 0) {
              lVar5 = 0x28f3b4fe78a29dfd;
            }
          }
          else if (lVar6 == -0x7cc507180b3b4de2) {
            return;
          }
        }
        else {
          lVar5 = -0x17d49f96ba8f222c;
          if ((lVar6 != -0x73e8f5c018ea657d) && (lVar5 = lVar6, lVar6 == -0x707c1fafe32329c8))
          goto LAB_00177254;
        }
      }
      else if (lVar6 < -0x5f8afb0e1bcf47ac) {
        if (lVar6 == -0x702101e1bc06872a) {
          DAT_0021da40 = DAT_0021da40 ^ 0x75;
          DAT_0021da41 = DAT_0021da41 ^ 0x75;
          DAT_0021da42 = DAT_0021da42 ^ 0x75;
          DAT_0021da43 = DAT_0021da43 ^ 0x75;
          DAT_0021da44 = DAT_0021da44 ^ 0x75;
          DAT_0021da45 = DAT_0021da45 ^ 0x75;
          _DAT_0021da20 = _DAT_0021da20 ^ 0x7575757575757575;
          uRam000000000021da28 = uRam000000000021da28 ^ 0x7575757575757575;
          DAT_0021da46 = DAT_0021da46 ^ 0x75;
          DAT_0021f9d5 = '\x01';
          _DAT_0021da30 = _DAT_0021da30 ^ 0x7575757575757575;
          uRam000000000021da38 = uRam000000000021da38 ^ 0x7575757575757575;
          lVar5 = -0x2b8072ef26bb75e0;
        }
        else if (lVar6 == -0x6eedfdb6a6123349) {
          lVar6 = 0x34d64510914e178a;
          lVar5 = -0x7fd1a15b5060645a;
          lVar4 = local_70;
LAB_0017747c:
          if (lVar4 != 0) {
            lVar5 = lVar6;
          }
        }
      }
      else if (lVar6 == -0x5f8afb0e1bcf47ac) {
        *param_1 = local_74;
        lVar5 = 0x6b1c8496500da436;
        unaff_x28 = local_80;
        unaff_w22 = param_2 != (long *)0x0;
      }
      else {
        lVar5 = lVar1;
        if ((lVar6 != -0x47fe715cf647cc47) && (lVar5 = lVar6, lVar6 == -0x387c63e2c119ecd0)) {
LAB_00177254:
          lVar5 = 0x65731e0d60addaaa;
        }
      }
    }
    else if (lVar6 < -0x29b395e2de609121) {
      if (lVar6 < -0x2f47a56bc1eb9a76) {
        lVar5 = -0x7cc507180b3b4de2;
        if ((lVar6 != -0x345385a5acf579a7) && (lVar5 = lVar6, lVar6 == -0x3112e6c842caa298)) {
          lVar5 = -0x2b8072ef26bb75e0;
        }
      }
      else if (lVar6 == -0x2f47a56bc1eb9a76) {
LAB_00176a3c:
        lVar2 = lVar4;
        lVar5 = 0x6b1c8496500da436;
        unaff_x28 = unaff_x27;
        unaff_w22 = 1;
      }
      else if (lVar6 == -0x2cc49f4395b2f43b) {
        local_80 = 0;
        local_74 = 3;
        lVar5 = -0x5f8afb0e1bcf47ac;
      }
      else if (lVar6 == -0x2b8072ef26bb75e0) {
        DAT_0021f830 = 0;
        lVar5 = -0x14cc1a46edce974e;
      }
    }
    else if (lVar6 < -0x18b4a505155ad4de) {
      if (lVar6 == -0x29b395e2de609121) {
        lVar5 = -0x3112e6c842caa298;
        if (DAT_0021f9d5 == '\0') {
          lVar5 = -0x702101e1bc06872a;
        }
      }
      else if (lVar6 == -0x1f2e54b4da8689dd) goto LAB_00177698;
    }
    else if (lVar6 == -0x18b4a505155ad4de) {
      local_70 = (**(code **)(*param_2 + 0x538))(param_2,param_4);
      lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
      lVar5 = -0x6eedfdb6a6123349;
      if (lVar4 != 0) {
        lVar5 = 0x9db9300eb2a7174;
      }
    }
    else if (lVar6 == -0x187ef1717a6bec1a) {
      (**(code **)(*param_2 + 0x80))(param_2);
      (**(code **)(*param_2 + 0x88))(param_2);
      *param_1 = 0x1b;
      lVar2 = local_68;
      lVar5 = -0x7af53ec599aae46c;
    }
    else if (lVar6 == -0x17d49f96ba8f222c) {
      DAT_0021f82c = 0;
      local_90 = (**(code **)(*param_2 + 0x108))(param_2,unaff_x27,&DAT_0021da0c,&DAT_0021da20);
      lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
      lVar5 = 0x659bc0912b2dc829;
      if (lVar4 != 0) {
        lVar5 = -0x387c63e2c119ecd0;
      }
    }
  }
  if (lVar6 < 0x52c814419a3e3185) {
    if (0x28f3b4fe78a29dfc < lVar6) {
      if (lVar6 < 0x34d64510914e178a) {
        if (lVar6 == 0x28f3b4fe78a29dfd) {
          (**(code **)(*param_2 + 0xb8))(param_2,local_b0);
          goto LAB_00176a3c;
        }
        if (lVar6 == 0x2eb2cb94985f61db) {
          unaff_x27 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
          lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar5 = 0x69eee68980841545;
          if (lVar4 != 0) {
            lVar5 = -0x707c1fafe32329c8;
          }
        }
      }
      else if (lVar6 == 0x34d64510914e178a) {
        local_68 = (**(code **)(*param_2 + 0x110))(param_2,param_3,local_90,local_70);
        lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar5 = 0x5d226faf8da10c63;
        if (lVar4 != 0) {
          lVar5 = -0x187ef1717a6bec1a;
        }
      }
      else if (lVar6 == 0x3d9a23bfc527f297) {
        lVar5 = -0x73e8f5c018ea657d;
        if (DAT_0021f9d4 == '\0') {
          lVar5 = 0x52c814419a3e3185;
        }
      }
      else if (lVar6 == 0x4d6661f53ed8cd69) {
        iVar3 = FUN_00212730(0,1,&DAT_0021f830);
        lVar5 = -0x29b395e2de609121;
        if (iVar3 != 0) {
          lVar5 = -0xde1e96acf5ef97a;
        }
      }
      goto LAB_00176a58;
    }
    if (0x3bb1d6c9375a840 < lVar6) {
      if (lVar6 == 0x3bb1d6c9375a841) {
        lVar2 = 0;
        lVar5 = -0x7af53ec599aae46c;
      }
      else if (lVar6 == 0x9db9300eb2a7174) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        lVar5 = 0x5f09e106069dc7a6;
        if (local_70 != 0) {
          lVar5 = 0x3bb1d6c9375a841;
        }
LAB_001774e0:
        *param_1 = 0x21;
      }
      else if (lVar6 == 0x1de6a73eeda120cb) {
        lVar5 = -0x14cc1a46edce974e;
      }
      goto LAB_00176a58;
    }
    if (lVar6 == -0x14cc1a46edce974e) {
      iVar3 = FUN_00212730(0,1,&DAT_0021f82c);
      lVar5 = 0x3d9a23bfc527f297;
      if (iVar3 != 0) {
        lVar5 = 0x1de6a73eeda120cb;
      }
      goto LAB_00176a58;
    }
    if (lVar6 != -0xde1e96acf5ef97a) goto LAB_00176a58;
  }
  else {
    if (0x65731e0d60addaa9 < lVar6) {
      if (lVar6 < 0x69eee68980841545) {
        if (lVar6 != 0x65731e0d60addaaa) {
          if (lVar6 == 0x659bc0912b2dc829) {
            lVar5 = 0x722c2ae06bb40e9c;
            if (local_90 != 0) {
              lVar5 = -0x18b4a505155ad4de;
            }
          }
          goto LAB_00176a58;
        }
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
      }
      else {
        if (lVar6 == 0x69eee68980841545) {
          lVar5 = -0x1f2e54b4da8689dd;
          lVar6 = 0x5f42b99ecf1d09fd;
          lVar4 = unaff_x27;
          goto LAB_0017747c;
        }
        if (lVar6 == 0x6b1c8496500da436) {
          lVar5 = 0x53b3370187e80d89;
          local_a8 = unaff_x28;
          if ((unaff_w22 & unaff_x28 != 0) == 0) {
            lVar5 = -0x345385a5acf579a7;
          }
          goto LAB_00176a58;
        }
        if (lVar6 != 0x722c2ae06bb40e9c) goto LAB_00176a58;
      }
LAB_00177698:
      local_74 = 0x11;
      lVar5 = -0x5f8afb0e1bcf47ac;
      local_80 = unaff_x27;
      goto LAB_00176a58;
    }
    if (lVar6 < 0x5d226faf8da10c63) {
      if (lVar6 == 0x52c814419a3e3185) {
        DAT_0021da0d = DAT_0021da0d ^ 0x4c;
        DAT_0021da0c = DAT_0021da0c ^ 0x4c;
        DAT_0021da0e = DAT_0021da0e ^ 0x4c;
        DAT_0021da0f = DAT_0021da0f ^ 0x4c;
        DAT_0021da10 = DAT_0021da10 ^ 0x4c;
        DAT_0021da12 = DAT_0021da12 ^ 0x4c;
        DAT_0021da11 = DAT_0021da11 ^ 0x4c;
        DAT_0021f9d4 = '\x01';
        lVar5 = -0x17d49f96ba8f222c;
      }
      else if (lVar6 == 0x53b3370187e80d89) {
        (**(code **)(*param_2 + 0xb8))(param_2,local_a8);
        lVar5 = -0x7cc507180b3b4de2;
      }
      goto LAB_00176a58;
    }
    lVar2 = local_68;
    lVar5 = -0x7af53ec599aae46c;
    if (lVar6 == 0x5d226faf8da10c63) goto LAB_00176a58;
    if (lVar6 == 0x5f09e106069dc7a6) goto LAB_00176a3c;
    lVar2 = lVar4;
    lVar5 = lVar6;
    if (lVar6 != 0x5f42b99ecf1d09fd) goto LAB_00176a58;
  }
  lVar2 = lVar4;
  lVar5 = 0x4d6661f53ed8cd69;
  goto LAB_00176a58;
}

