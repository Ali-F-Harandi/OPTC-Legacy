// rea decompile_all
// name: FUN_00112f78
// address: 0x112f78
// body: available
// range: 0x112f78-0x116467 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x116464 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00112f78(float param_1,int *param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  float *pfVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float unaff_s15;
  undefined1 auStack_f0 [8];
  long local_e8;
  long local_e0;
  int *local_d8;
  long local_d0;
  float *local_c8;
  undefined8 local_c0;
  float *local_b8;
  float *local_b0;
  long local_a8;
  
  local_e8 = tpidr_el0;
  local_a8 = *(long *)(local_e8 + 0x28);
  local_e0 = param_5 + 0x20;
  pfVar1 = (float *)auStack_f0;
  lVar7 = 0x7c1ab6a8596fe588;
  local_d8 = param_2;
  local_d0 = param_5;
  local_c0 = param_3;
LAB_001130c0:
  fVar8 = param_1;
  lVar6 = lVar7;
  lVar5 = local_d0;
  lVar7 = lVar6;
  param_1 = fVar8;
  if (lVar6 < 0x3bb1d6c9375a841) {
    if (lVar6 < -0x3112e6c842caa298) {
      if (lVar6 < -0x584a77e86318ca40) {
        if (-0x6eedfdb6a612334a < lVar6) {
          if (lVar6 < -0x688f0c6a303d33c9) {
            if (lVar6 < -0x6df3a92de1c09228) {
              if (lVar6 == -0x6eedfdb6a6123349) {
                DAT_0021bec0 = DAT_0021bec0 ^ 0x97;
                DAT_0021bec1 = DAT_0021bec1 ^ 0x97;
                DAT_0021bec2 = DAT_0021bec2 ^ 0x97;
                DAT_0021beb8 = DAT_0021beb8 ^ 0x9797979797979797;
                DAT_0021f197 = '\x01';
                lVar7 = -0x7fd1a15b5060645a;
              }
              else if (lVar6 == -0x6e115ec668cd4595) {
                iVar3 = FUN_00212730(0,1,&DAT_0021f144);
                lVar7 = 0x7ad01f4ce7fcfd0;
                if (iVar3 != 0) {
                  lVar7 = 0x4ec987089f77069e;
                }
              }
            }
            else if (lVar6 == -0x6df3a92de1c09228) {
              DAT_0021bf40 = DAT_0021bf40 ^ 0xacacacacacacacac;
              DAT_0021f1a2 = '\x01';
              lVar7 = 0x7823e529026ef05b;
            }
            else {
              lVar7 = -0x3d74c5be586ed41;
              param_1 = unaff_s15;
              if ((lVar6 != -0x6d88891aa2376f3c) &&
                 (lVar7 = lVar6, param_1 = fVar8, lVar6 == -0x6acaf52c4f368fc7)) {
                iVar3 = FUN_00212730(0,1,&DAT_0021f160);
                lVar7 = -0x4d4dcbd80fd19894;
                if (iVar3 != 0) {
                  lVar7 = 0x2e5d2c580e521a46;
                }
              }
            }
          }
          else if (lVar6 < -0x6531ea49607ac328) {
            lVar7 = 0x5f09e106069dc7a6;
            if ((lVar6 != -0x688f0c6a303d33c9) && (lVar7 = lVar6, lVar6 == -0x65ea49716c78db2d)) {
              DAT_0021bfa8 = DAT_0021bfa8 ^ 0x55;
              DAT_0021bfa9 = DAT_0021bfa9 ^ 0x55;
              _DAT_0021bf90 = _DAT_0021bf90 ^ 0x5555555555555555;
              uRam000000000021bf98 = uRam000000000021bf98 ^ 0x5555555555555555;
              DAT_0021bfa0 = DAT_0021bfa0 ^ 0x5555555555555555;
              DAT_0021f1a8 = '\x01';
              lVar7 = 0x12f97563fe86189d;
            }
          }
          else if (lVar6 == -0x6531ea49607ac328) {
            DAT_0021f15c = 0;
            lVar7 = 0x6fec28429a53861a;
          }
          else if (lVar6 == -0x601688af67ee5367) {
            DAT_0021bf10 = DAT_0021bf10 ^ 0x5c;
            DAT_0021bf11 = DAT_0021bf11 ^ 0x5c;
            DAT_0021bf08 = DAT_0021bf08 ^ 0x5c5c5c5c5c5c5c5c;
            DAT_0021f19e = '\x01';
            lVar7 = -0x33cadcbd9157ba94;
          }
          else if (lVar6 == -0x5f8afb0e1bcf47ac) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f120);
            lVar7 = -0x1fb42f4afc2a4561;
            if (iVar3 != 0) {
              lVar7 = 0x9db9300eb2a7174;
            }
          }
          goto LAB_001130c0;
        }
        if (lVar6 < -0x77727add0cfc4ea3) {
          if (lVar6 < -0x7af53ec599aae46c) {
            if (lVar6 == -0x7fd1a15b5060645a) {
              DAT_0021f128 = 0;
              lVar7 = 0x34d64510914e178a;
            }
            else if (lVar6 == -0x7cc507180b3b4de2) {
              DAT_0021be88 = DAT_0021be88 ^ 0x2222222222222222;
              DAT_0021f193 = '\x01';
              lVar7 = 0x3d9a23bfc527f297;
            }
            goto LAB_001130c0;
          }
          if (lVar6 == -0x7af53ec599aae46c) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f11c);
            lVar7 = -0x250717f80b2e0d24;
            if (iVar3 != 0) {
              lVar7 = -0x2f47a56bc1eb9a76;
            }
            goto LAB_001130c0;
          }
          if (lVar6 != -0x78b1e6d77f15432a) goto LAB_001130c0;
          lVar7 = -0x49aaab148acb89d3;
          bVar2 = DAT_0021f192 == '\0';
          lVar5 = -0x3112e6c842caa298;
        }
        else {
          if (lVar6 < -0x707c1fafe32329c8) {
            lVar7 = -0x47fe715cf647cc47;
            if ((lVar6 != -0x77727add0cfc4ea3) && (lVar7 = lVar6, lVar6 == -0x73e8f5c018ea657d)) {
              iVar3 = FUN_00212730(0,1,&DAT_0021f114);
              lVar7 = -0x78b1e6d77f15432a;
              if (iVar3 != 0) {
                lVar7 = -0x29b395e2de609121;
              }
            }
            goto LAB_001130c0;
          }
          if (lVar6 == -0x707c1fafe32329c8) {
            DAT_0021beec = DAT_0021beec ^ 0xa5;
            DAT_0021beed = DAT_0021beed ^ 0xa5;
            DAT_0021bef0 = DAT_0021bef0 ^ 0xa5;
            DAT_0021beee = DAT_0021beee ^ 0xa5;
            DAT_0021beef = DAT_0021beef ^ 0xa5;
            DAT_0021bef1 = DAT_0021bef1 ^ 0xa5;
            DAT_0021f19b = '\x01';
            lVar7 = 0x69eee68980841545;
            goto LAB_001130c0;
          }
          if (lVar6 == -0x702101e1bc06872a) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f130);
            lVar7 = 0x2d2505df37d70c06;
            if (iVar3 != 0) {
              lVar7 = -0x2b8072ef26bb75e0;
            }
            goto LAB_001130c0;
          }
          if (lVar6 != -0x6f8d7fffc25548a2) goto LAB_001130c0;
          lVar7 = 0x2eb1b3fa991fd0c3;
          bVar2 = DAT_0021f1a0 == '\0';
          lVar5 = 0x4969e3b2df5c1737;
        }
      }
      else if (lVar6 < -0x49aaab148acb89d3) {
        if (lVar6 < -0x509477aabdb8c18b) {
          if (lVar6 < -0x52d8f6b8a3da3d9e) {
            lVar7 = -0x7fd1a15b5060645a;
            if ((lVar6 != -0x584a77e86318ca40) && (lVar7 = lVar6, lVar6 == -0x5370ef828278883b)) {
              lVar7 = 0x5b9133fd3f5b97f2;
            }
          }
          else if (lVar6 == -0x52d8f6b8a3da3d9e) {
            DAT_0021f158 = 0;
            lVar7 = -0x1aa196cea8a824ec;
          }
          else {
            lVar7 = 0x65731e0d60addaaa;
            if ((lVar6 != -0x51299b355fbf8ed8) && (lVar7 = lVar6, lVar6 == -0x51134ff119c1308f)) {
              lVar7 = 0x13021144eb62c0db;
            }
          }
          goto LAB_001130c0;
        }
        if (lVar6 < -0x4d4dcbd80fd19894) {
          if (lVar6 == -0x509477aabdb8c18b) {
            lVar5 = 0x5d165584104b931b;
            bVar2 = DAT_0021f19c == '\0';
            lVar7 = -0x77727add0cfc4ea3;
            goto LAB_0011634c;
          }
          if (lVar6 != -0x4fb630b9d3e5e263) goto LAB_001130c0;
          lVar7 = -0x584a77e86318ca40;
          bVar2 = DAT_0021f197 == '\0';
          lVar5 = -0x6eedfdb6a6123349;
        }
        else {
          if (lVar6 != -0x4d4dcbd80fd19894) {
            lVar7 = 0x3d9a23bfc527f297;
            if ((lVar6 != -0x4bcf27f8b1692c9f) && (lVar7 = lVar6, lVar6 == -0x4a22762196dcf52b)) {
              lVar7 = 0xa75b20cda966d6f;
              bVar2 = DAT_0021f1a6 == '\0';
              lVar5 = 0x5c464faf1c134413;
              goto LAB_001130b8;
            }
            goto LAB_001130c0;
          }
          lVar7 = 0x938f423e0738fad;
          bVar2 = DAT_0021f1a5 == '\0';
          lVar5 = 0x67e75d17e2cdd7d4;
        }
      }
      else {
        if (lVar6 < -0x387c63e2c119ecd0) {
          if (lVar6 < -0x4689100bf65fd0ad) {
            lVar7 = 0x458dd5089ea47cbf;
            if ((lVar6 != -0x49aaab148acb89d3) && (lVar7 = lVar6, lVar6 == -0x47fe715cf647cc47)) {
              DAT_0021f13c = 0;
              lVar7 = -0x2cc49f4395b2f43b;
            }
          }
          else {
            lVar7 = 0x78c4c1a5edb48036;
            if (((lVar6 != -0x4689100bf65fd0ad) &&
                (lVar7 = 0x21827f7327203db, lVar6 != -0x44f265b911991ae8)) &&
               (lVar7 = lVar6, lVar6 == -0x428a0360f09cf896)) {
              uVar4 = FUN_00162e20(local_c0,local_c8,0x18);
              lVar7 = 0x475137ed6151bf62;
              if ((uVar4 & 1) == 0) {
                lVar7 = 0x6948821d17121736;
              }
            }
          }
          goto LAB_001130c0;
        }
        if (lVar6 < -0x36e4cdbc7cc71415) {
          if (lVar6 == -0x387c63e2c119ecd0) {
            DAT_0021bec8 = DAT_0021bec8 ^ 0x5151515151515151;
            DAT_0021f198 = '\x01';
            lVar7 = 0x659bc0912b2dc829;
          }
          else if (lVar6 == -0x3726a832e592db74) {
            DAT_0021f14c = 0;
            lVar7 = -0x2f3336ee1624771d;
          }
          goto LAB_001130c0;
        }
        if (lVar6 != -0x36e4cdbc7cc71415) {
          if (lVar6 == -0x345385a5acf579a7) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f118);
            lVar7 = 0x6972f83ab6de3be2;
            if (iVar3 != 0) {
              lVar7 = 0x53b3370187e80d89;
            }
          }
          else if (lVar6 == -0x33cadcbd9157ba94) {
            DAT_0021f144 = 0;
            lVar7 = 0x3d520d52a04eb0a3;
          }
          goto LAB_001130c0;
        }
        lVar7 = 0x445951b18d5b174b;
        bVar2 = DAT_0021f1a4 == '\0';
        lVar5 = 0x750b035df70dfd6b;
      }
    }
    else if (lVar6 < -0x1ae8faa2f14c4ad8) {
      if (lVar6 < -0x250717f80b2e0d24) {
        if (lVar6 < -0x2b8072ef26bb75e0) {
          if (lVar6 < -0x2f3336ee1624771d) {
            if (lVar6 == -0x3112e6c842caa298) {
              DAT_0021be80 = DAT_0021be80 ^ 0x3c;
              DAT_0021be78 = DAT_0021be78 ^ 0x3c3c3c3c3c3c3c3c;
              DAT_0021f192 = '\x01';
              lVar7 = 0x458dd5089ea47cbf;
            }
            else if (lVar6 == -0x2f47a56bc1eb9a76) {
              lVar7 = -0x7af53ec599aae46c;
            }
          }
          else if (lVar6 == -0x2f3336ee1624771d) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f148);
            lVar7 = 0x279ec6686ef78dc7;
            if (iVar3 != 0) {
              lVar7 = 0x3a9f795766717164;
            }
          }
          else if (lVar6 == -0x2cc49f4395b2f43b) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f138);
            lVar7 = 0x2b4cb855a4e2ca81;
            if (iVar3 != 0) {
              lVar7 = 0x2eb2cb94985f61db;
            }
          }
        }
        else if (lVar6 < -0x29b395e2de609121) {
          lVar7 = -0x702101e1bc06872a;
          if ((lVar6 != -0x2b8072ef26bb75e0) && (lVar7 = lVar6, lVar6 == -0x29c67e336c47e1dc)) {
            FUN_00208494(local_e0,*(ulong *)local_b0);
            *(ulong *)(local_d0 + 0x238) = *(ulong *)(local_d0 + 0x238) | 1;
            lVar7 = 0xb3b33d71d8d6f20;
          }
        }
        else {
          lVar7 = -0x73e8f5c018ea657d;
          if (lVar6 != -0x29b395e2de609121) {
            if (lVar6 == -0x28e14ecfb2aa8ff2) {
              DAT_0021f140 = 0;
              lVar7 = 0x23fbc284d6daefc6;
            }
            else {
              lVar7 = lVar6;
              if (lVar6 == -0x26779b83f38bb8da) {
                DAT_0021bfb8 = DAT_0021bfb8 ^ 0x7c;
                DAT_0021bfb9 = DAT_0021bfb9 ^ 0x7c;
                DAT_0021bfb0 = DAT_0021bfb0 ^ 0x7c7c7c7c7c7c7c7c;
                DAT_0021f1a9 = '\x01';
                lVar7 = 0x4943753bf51688fc;
              }
            }
          }
        }
        goto LAB_001130c0;
      }
      if (lVar6 < -0x21c0c6636b2aee0b) {
        if (-0x23d4600e691b7300 < lVar6) {
          lVar7 = -0xde1e96acf5ef97a;
          if (((lVar6 != -0x23d4600e691b72ff) &&
              (lVar7 = 0x7823e529026ef05b, lVar6 != -0x22f14540dee57f60)) &&
             (lVar7 = lVar6, lVar6 == -0x21d3b6805e25ceaa)) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f16c);
            lVar7 = 0x43e0716434a8db96;
            if (iVar3 != 0) {
              lVar7 = 0x6902adc5eda669f4;
            }
          }
          goto LAB_001130c0;
        }
        if (lVar6 != -0x250717f80b2e0d24) {
          if (lVar6 == -0x248efbab039ee777) {
            lVar7 = -0x33cadcbd9157ba94;
          }
          goto LAB_001130c0;
        }
        lVar7 = 0x127621f9d64210bf;
        bVar2 = DAT_0021f194 == '\0';
        lVar5 = 0x28f3b4fe78a29dfd;
      }
      else {
        if (lVar6 < -0x1fb42f4afc2a4561) {
          lVar7 = 0x23fbc284d6daefc6;
          if ((lVar6 != -0x21c0c6636b2aee0b) && (lVar7 = lVar6, lVar6 == -0x20ffead854ca6e4e)) {
            DAT_0021bf50 = DAT_0021bf50 ^ 0x7b;
            DAT_0021bf51 = DAT_0021bf51 ^ 0x7b;
            DAT_0021bf52 = DAT_0021bf52 ^ 0x7b;
            DAT_0021bf53 = DAT_0021bf53 ^ 0x7b;
            DAT_0021bf54 = DAT_0021bf54 ^ 0x7b;
            DAT_0021bf48 = DAT_0021bf48 ^ 0x7b7b7b7b7b7b7b7b;
            DAT_0021f1a3 = '\x01';
            lVar7 = -0x52d8f6b8a3da3d9e;
          }
          goto LAB_001130c0;
        }
        if (lVar6 == -0x1fb42f4afc2a4561) {
          lVar5 = 0x3bb1d6c9375a841;
          bVar2 = DAT_0021f195 == '\0';
          lVar7 = -0x688f0c6a303d33c9;
          goto LAB_0011634c;
        }
        if (lVar6 == -0x1f2e54b4da8689dd) {
          iVar3 = FUN_00212730(0,1,&DAT_0021f134);
          lVar7 = 0x791c5ebca78797be;
          if (iVar3 != 0) {
            lVar7 = 0x5f42b99ecf1d09fd;
          }
          goto LAB_001130c0;
        }
        if (lVar6 != -0x1b60f53f68465216) goto LAB_001130c0;
        lVar7 = 0x7a7015a18fa67589;
        bVar2 = DAT_0021f1a9 == '\0';
        lVar5 = -0x26779b83f38bb8da;
      }
    }
    else {
      if (lVar6 < -0x1444b5cce6f35eae) {
        if (lVar6 < -0x187ef1717a6bec1a) {
          if (lVar6 < -0x1aa196cea8a824ec) {
            lVar7 = -0x14860daff890785c;
            if ((lVar6 != -0x1ae8faa2f14c4ad8) && (lVar7 = lVar6, lVar6 == -0x1aae3d37372759c8)) {
              lVar5 = -0x187ef1717a6bec1a;
              bVar2 = DAT_0021f196 == '\0';
              lVar7 = -0x51299b355fbf8ed8;
              goto LAB_0011634c;
            }
          }
          else if (lVar6 == -0x1aa196cea8a824ec) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f154);
            lVar7 = 0x162b6d1217ca8b80;
            if (iVar3 != 0) {
              lVar7 = 0x6ba687d86db6deec;
            }
          }
          else {
            lVar7 = 0xb3b33d71d8d6f20;
            if ((lVar6 != -0x1a8475fc33e49a53) && (lVar7 = lVar6, lVar6 == -0x18b4a505155ad4de)) {
              lVar7 = 0x722c2ae06bb40e9c;
            }
          }
        }
        else if (lVar6 < -0x1579c5d94e757e2d) {
          if (lVar6 == -0x187ef1717a6bec1a) {
            DAT_0021beb0 = DAT_0021beb0 ^ 0xa6;
            DAT_0021beb1 = DAT_0021beb1 ^ 0xa6;
            DAT_0021beb2 = DAT_0021beb2 ^ 0xa6;
            DAT_0021beb3 = DAT_0021beb3 ^ 0xa6;
            DAT_0021beb4 = DAT_0021beb4 ^ 0xa6;
            DAT_0021beb5 = DAT_0021beb5 ^ 0xa6;
            DAT_0021beb6 = DAT_0021beb6 ^ 0xa6;
            DAT_0021f196 = '\x01';
            lVar7 = 0x65731e0d60addaaa;
          }
          else if (lVar6 == -0x17d49f96ba8f222c) {
            lVar7 = 0x52c814419a3e3185;
          }
        }
        else {
          lVar7 = 0x3d520d52a04eb0a3;
          if (lVar6 != -0x1579c5d94e757e2d) {
            if (lVar6 == -0x14cc1a46edce974e) {
              DAT_0021bed8 = DAT_0021bed8 ^ 0xba;
              DAT_0021bed9 = DAT_0021bed9 ^ 0xba;
              DAT_0021beda = DAT_0021beda ^ 0xba;
              DAT_0021bed0 = DAT_0021bed0 ^ 0xbabababababababa;
              DAT_0021f199 = '\x01';
              lVar7 = 0x1de6a73eeda120cb;
            }
            else {
              lVar7 = lVar6;
              if (lVar6 == -0x14860daff890785c) {
                DAT_0021f148 = 0;
                lVar7 = -0x6e115ec668cd4595;
              }
            }
          }
        }
        goto LAB_001130c0;
      }
      if (lVar6 < -0x3d74c5be586ed41) {
        if (lVar6 < -0xde1e96acf5ef97a) {
          lVar7 = 0x12f97563fe86189d;
          if ((lVar6 != -0x1444b5cce6f35eae) && (lVar7 = lVar6, lVar6 == -0x13304e214eb4a6b2)) {
            lVar7 = 0x6fec28429a53861a;
          }
        }
        else if (lVar6 == -0xde1e96acf5ef97a) {
          DAT_0021f134 = 0;
          lVar7 = -0x702101e1bc06872a;
        }
        else if (lVar6 == -0xcdc5aee104269e7) {
          DAT_0021f168 = 0;
          lVar7 = 0x13021144eb62c0db;
        }
        else if (lVar6 == -0x3e1b758c85bc171) {
          lVar7 = -0x3d74c5be586ed41;
          fVar9 = unaff_s15 + (1.0 - unaff_s15) * 0.8;
          uVar4 = *(ulong *)local_b0 | 0x2000000;
          fVar8 = fVar9;
          goto LAB_00115c74;
        }
        goto LAB_001130c0;
      }
      if (lVar6 < 0x21827f7327203db) {
        if (lVar6 == -0x3d74c5be586ed41) {
          lVar7 = 0x63bbcc091317fb15;
          if (0.8 <= fVar8) {
            lVar7 = -0x29c67e336c47e1dc;
          }
        }
        else if (lVar6 == -0x32d703b40f5d730) {
          lVar7 = -0x52d8f6b8a3da3d9e;
        }
        goto LAB_001130c0;
      }
      if (lVar6 == 0x21827f7327203db) {
        DAT_0021f150 = 0;
        lVar7 = 0x366faf7c9bd6c7be;
        goto LAB_001130c0;
      }
      if (lVar6 != 0x34635787a9c7ccb) {
        if (lVar6 == 0x36080c4ea4d3b15) {
          lVar7 = 0x5a7966877bb5e856;
        }
        goto LAB_001130c0;
      }
      lVar7 = -0x32d703b40f5d730;
      bVar2 = DAT_0021f1a3 == '\0';
      lVar5 = -0x20ffead854ca6e4e;
    }
  }
  else {
    if (0x475137ed6151bf61 < lVar6) {
      if (lVar6 < 0x5f42b99ecf1d09fd) {
        if (lVar6 < 0x52c814419a3e3185) {
          if (lVar6 < 0x4aec30ca31276d55) {
            if (lVar6 < 0x4969e3b2df5c1737) {
              if (lVar6 == 0x475137ed6151bf62) {
                lVar7 = 0x42d35ffe0640f9e7;
                uVar4 = *(ulong *)local_b0 | 0x1000;
                fVar9 = *local_b8 + (1.0 - *local_b8) * 0.8;
LAB_00115c74:
                *local_b8 = fVar9;
                *(ulong *)local_b0 = uVar4;
                param_1 = fVar8;
              }
              else if (lVar6 == 0x4943753bf51688fc) {
                DAT_0021f170 = 0;
                lVar7 = -0x21d3b6805e25ceaa;
              }
            }
            else if (lVar6 == 0x4969e3b2df5c1737) {
              DAT_0021bf30 = DAT_0021bf30 ^ 0x4d;
              DAT_0021bf28 = DAT_0021bf28 ^ 0x4d4d4d4d4d4d4d4d;
              DAT_0021f1a0 = '\x01';
              lVar7 = -0x3726a832e592db74;
            }
            else if (lVar6 == 0x4a846006da9a83ad) {
              lVar7 = -0x28e14ecfb2aa8ff2;
            }
          }
          else if (lVar6 < 0x4df7063ff4f72d9f) {
            if (lVar6 == 0x4aec30ca31276d55) {
              DAT_0021bf80 = DAT_0021bf80 ^ 1;
              DAT_0021bf81 = DAT_0021bf81 ^ 1;
              DAT_0021bf82 = DAT_0021bf82 ^ 1;
              DAT_0021bf78 = DAT_0021bf78 ^ 0x101010101010101;
              DAT_0021f1a7 = '\x01';
              lVar7 = -0xcdc5aee104269e7;
            }
            else if (lVar6 == 0x4d6661f53ed8cd69) {
              DAT_0021bee8 = DAT_0021bee8 ^ 0x16;
              DAT_0021bee9 = DAT_0021bee9 ^ 0x16;
              DAT_0021bee0 = DAT_0021bee0 ^ 0x1616161616161616;
              DAT_0021f19a = '\x01';
              lVar7 = -0xde1e96acf5ef97a;
            }
          }
          else if (lVar6 == 0x4df7063ff4f72d9f) {
            DAT_0021f164 = 0;
            lVar7 = -0x6acaf52c4f368fc7;
          }
          else {
            lVar7 = -0x6e115ec668cd4595;
            if ((lVar6 != 0x4ec987089f77069e) && (lVar7 = lVar6, lVar6 == 0x4f11b5a35da5d5cb)) {
              lVar7 = 0x6e6e1c8720089005;
            }
          }
          goto LAB_001130c0;
        }
        if (0x5b9133fd3f5b97f1 < lVar6) {
          if (lVar6 < 0x5d165584104b931b) {
            if (lVar6 == 0x5b9133fd3f5b97f2) {
              iVar3 = FUN_00212730(0,1,&DAT_0021f15c);
              lVar7 = -0x36e4cdbc7cc71415;
              if (iVar3 != 0) {
                lVar7 = -0x5370ef828278883b;
              }
            }
            else if (lVar6 == 0x5c464faf1c134413) {
              DAT_0021bf70 = DAT_0021bf70 ^ 0x41;
              DAT_0021bf71 = DAT_0021bf71 ^ 0x41;
              DAT_0021bf68 = DAT_0021bf68 ^ 0x4141414141414141;
              DAT_0021f1a6 = '\x01';
              lVar7 = 0x4df7063ff4f72d9f;
            }
          }
          else if (lVar6 == 0x5d165584104b931b) {
            DAT_0021bef8 = DAT_0021bef8 ^ 0xe6e6e6e6e6e6e6e6;
            DAT_0021f19c = '\x01';
            lVar7 = -0x47fe715cf647cc47;
          }
          else {
            lVar7 = 0x34d64510914e178a;
            if ((lVar6 != 0x5d226faf8da10c63) && (lVar7 = lVar6, lVar6 == 0x5f09e106069dc7a6)) {
              DAT_0021f120 = 0;
              lVar7 = -0x7af53ec599aae46c;
            }
          }
          goto LAB_001130c0;
        }
        if (lVar6 < 0x581147dc809bae3d) {
          if (lVar6 == 0x52c814419a3e3185) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f12c);
            lVar7 = 0x10b777a2e53bf464;
            if (iVar3 != 0) {
              lVar7 = -0x17d49f96ba8f222c;
            }
          }
          else if (lVar6 == 0x53b3370187e80d89) {
            lVar7 = -0x345385a5acf579a7;
          }
          goto LAB_001130c0;
        }
        if (lVar6 == 0x581147dc809bae3d) {
          DAT_0021bf20 = DAT_0021bf20 ^ 0x84;
          DAT_0021bf18 = DAT_0021bf18 ^ 0x8484848484848484;
          DAT_0021f19f = '\x01';
          lVar7 = -0x14860daff890785c;
          goto LAB_001130c0;
        }
        if (lVar6 != 0x5a56e7690d0d7c54) {
          if (lVar6 == 0x5a7966877bb5e856) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f168);
            lVar7 = 0x481cca618a76367;
            if (iVar3 != 0) {
              lVar7 = 0x36080c4ea4d3b15;
            }
          }
          goto LAB_001130c0;
        }
        lVar5 = 0x12e1be5f2b72ca6f;
        bVar2 = DAT_0021f1a1 == '\0';
        lVar7 = -0x44f265b911991ae8;
      }
      else {
        if (lVar6 < 0x6ba687d86db6deec) {
          if (lVar6 < 0x6902adc5eda669f4) {
            if (lVar6 < 0x65731e0d60addaaa) {
              lVar7 = -0x1f2e54b4da8689dd;
              if ((lVar6 != 0x5f42b99ecf1d09fd) && (lVar7 = lVar6, lVar6 == 0x63bbcc091317fb15)) {
                lVar7 = 0xb3b33d71d8d6f20;
              }
            }
            else if (lVar6 == 0x65731e0d60addaaa) {
              DAT_0021f124 = 0;
              lVar7 = -0x5f8afb0e1bcf47ac;
            }
            else if (lVar6 == 0x659bc0912b2dc829) {
              DAT_0021f12c = 0;
              lVar7 = 0x722c2ae06bb40e9c;
            }
            else if (lVar6 == 0x67e75d17e2cdd7d4) {
              DAT_0021bf60 = DAT_0021bf60 ^ 0xe;
              DAT_0021bf61 = DAT_0021bf61 ^ 0xe;
              DAT_0021bf62 = DAT_0021bf62 ^ 0xe;
              DAT_0021bf63 = DAT_0021bf63 ^ 0xe;
              DAT_0021bf64 = DAT_0021bf64 ^ 0xe;
              DAT_0021bf65 = DAT_0021bf65 ^ 0xe;
              DAT_0021bf66 = DAT_0021bf66 ^ 0xe;
              DAT_0021f1a5 = '\x01';
              lVar7 = 0x14e8afddeb5ba2d8;
            }
          }
          else if (lVar6 < 0x6972f83ab6de3be2) {
            lVar7 = -0x21d3b6805e25ceaa;
            if ((lVar6 != 0x6902adc5eda669f4) && (lVar7 = lVar6, lVar6 == 0x6948821d17121736)) {
              lVar7 = 0x42d35ffe0640f9e7;
            }
          }
          else {
            if (lVar6 == 0x6972f83ab6de3be2) {
              lVar7 = -0x4bcf27f8b1692c9f;
              bVar2 = DAT_0021f193 == '\0';
              lVar5 = -0x7cc507180b3b4de2;
              goto LAB_001130b8;
            }
            if (lVar6 == 0x69eee68980841545) {
              DAT_0021f138 = 0;
              lVar7 = -0x1f2e54b4da8689dd;
            }
            else if (lVar6 == 0x6b1c8496500da436) {
              DAT_0021f11c = 0;
              lVar7 = -0x345385a5acf579a7;
            }
          }
          goto LAB_001130c0;
        }
        if (lVar6 < 0x7823e529026ef05b) {
          if (lVar6 < 0x6fec28429a53861a) {
            lVar7 = -0x1aa196cea8a824ec;
            if ((lVar6 != 0x6ba687d86db6deec) && (lVar7 = lVar6, lVar6 == 0x6e6e1c8720089005)) {
              iVar3 = FUN_00212730(0,1,&DAT_0021f150);
              lVar7 = 0x5a56e7690d0d7c54;
              if (iVar3 != 0) {
                lVar7 = 0x4f11b5a35da5d5cb;
              }
            }
          }
          else if (lVar6 == 0x6fec28429a53861a) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f158);
            lVar7 = 0x34635787a9c7ccb;
            if (iVar3 != 0) {
              lVar7 = -0x13304e214eb4a6b2;
            }
          }
          else if (lVar6 == 0x722c2ae06bb40e9c) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f128);
            lVar7 = -0x4fb630b9d3e5e263;
            if (iVar3 != 0) {
              lVar7 = -0x18b4a505155ad4de;
            }
          }
          else if (lVar6 == 0x750b035df70dfd6b) {
            DAT_0021bf58 = DAT_0021bf58 ^ 0x1111111111111111;
            DAT_0021f1a4 = '\x01';
            lVar7 = -0x6531ea49607ac328;
          }
          goto LAB_001130c0;
        }
        if (lVar6 < 0x791c5ebca78797be) {
          if (lVar6 == 0x7823e529026ef05b) {
            DAT_0021f154 = 0;
            lVar7 = 0x6e6e1c8720089005;
          }
          else if (lVar6 == 0x78c4c1a5edb48036) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f170);
            lVar7 = -0x1b60f53f68465216;
            if (iVar3 != 0) {
              lVar7 = -0x4689100bf65fd0ad;
            }
          }
          goto LAB_001130c0;
        }
        if (lVar6 != 0x791c5ebca78797be) {
          lVar7 = 0x4943753bf51688fc;
          if ((lVar6 != 0x7a7015a18fa67589) && (lVar7 = lVar6, lVar6 == 0x7c1ab6a8596fe588)) {
            lVar7 = 0x78c4c1a5edb48036;
          }
          goto LAB_001130c0;
        }
        lVar5 = 0x4d6661f53ed8cd69;
        bVar2 = DAT_0021f19a == '\0';
        lVar7 = -0x23d4600e691b72ff;
      }
LAB_0011634c:
      if (bVar2) {
        lVar7 = lVar5;
      }
      goto LAB_001130c0;
    }
    if (lVar6 < 0x279ec6686ef78dc7) {
      if (0x12e1be5f2b72ca6e < lVar6) {
        if (lVar6 < 0x1c1c310a228ac2a9) {
          if (lVar6 < 0x13021144eb62c0db) {
            if (lVar6 == 0x12e1be5f2b72ca6f) {
              DAT_0021bf38 = DAT_0021bf38 ^ 0x9f9f9f9f9f9f9f9f;
              DAT_0021f1a1 = '\x01';
              lVar7 = 0x21827f7327203db;
            }
            else if (lVar6 == 0x12f97563fe86189d) {
              DAT_0021f16c = 0;
              lVar7 = 0x5a7966877bb5e856;
            }
          }
          else if (lVar6 == 0x13021144eb62c0db) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f164);
            lVar7 = -0x4a22762196dcf52b;
            if (iVar3 != 0) {
              lVar7 = -0x51134ff119c1308f;
            }
          }
          else if (lVar6 == 0x14e8afddeb5ba2d8) {
            DAT_0021f160 = 0;
            lVar7 = 0x5b9133fd3f5b97f2;
          }
          else if (lVar6 == 0x162b6d1217ca8b80) {
            lVar7 = -0x22f14540dee57f60;
            bVar2 = DAT_0021f1a2 == '\0';
            lVar5 = -0x6df3a92de1c09228;
            goto LAB_001130b8;
          }
        }
        else if (lVar6 < 0x1ed7d5e602d25831) {
          lVar7 = 0x69eee68980841545;
          if ((lVar6 != 0x1c1c310a228ac2a9) && (lVar7 = lVar6, lVar6 == 0x1de6a73eeda120cb)) {
            DAT_0021f130 = 0;
            lVar7 = 0x52c814419a3e3185;
          }
        }
        else {
          if (lVar6 == 0x1ed7d5e602d25831) {
            lVar5 = 0x24c67f5d9b83fa28;
            bVar2 = DAT_0021f19d == '\0';
            lVar7 = 0x4a846006da9a83ad;
            goto LAB_0011634c;
          }
          if (lVar6 == 0x23fbc284d6daefc6) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f13c);
            lVar7 = -0x509477aabdb8c18b;
            if (iVar3 != 0) {
              lVar7 = -0x21c0c6636b2aee0b;
            }
          }
          else if (lVar6 == 0x24c67f5d9b83fa28) {
            DAT_0021bf00 = DAT_0021bf00 ^ 0xd4d4d4d4d4d4d4d4;
            DAT_0021f19d = '\x01';
            lVar7 = -0x28e14ecfb2aa8ff2;
          }
        }
        goto LAB_001130c0;
      }
      if (0xa75b20cda966d6e < lVar6) {
        if (lVar6 < 0x10b777a2e53bf464) {
          lVar7 = 0x4df7063ff4f72d9f;
          if (((lVar6 != 0xa75b20cda966d6f) &&
              (lVar7 = 0x366faf7c9bd6c7be, lVar6 != 0xe418c3fe6fa7e30)) &&
             (lVar7 = lVar6, lVar6 == 0xb3b33d71d8d6f20)) {
            FUN_00162e08(local_d0);
            *(ulong *)(lVar5 + 0x238) = *(ulong *)(lVar5 + 0x238) | 0x2001000;
            if (*(long *)(local_e8 + 0x28) == local_a8) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail(*local_d8 == 0);
          }
        }
        else {
          if (lVar6 == 0x10b777a2e53bf464) {
            lVar7 = 0x4226403d663a6810;
            bVar2 = DAT_0021f198 == '\0';
            lVar5 = -0x387c63e2c119ecd0;
            goto LAB_001130b8;
          }
          if (lVar6 == 0x127621f9d64210bf) {
            lVar7 = 0x6b1c8496500da436;
          }
        }
        goto LAB_001130c0;
      }
      if (lVar6 < 0x7ad01f4ce7fcfd0) {
        if (lVar6 == 0x3bb1d6c9375a841) {
          DAT_0021bea8 = DAT_0021bea8 ^ 0xde;
          DAT_0021bea9 = DAT_0021bea9 ^ 0xde;
          DAT_0021beaa = DAT_0021beaa ^ 0xde;
          DAT_0021beab = DAT_0021beab ^ 0xde;
          DAT_0021bead = DAT_0021bead ^ 0xde;
          DAT_0021beac = DAT_0021beac ^ 0xde;
          DAT_0021beae = DAT_0021beae ^ 0xde;
          DAT_0021bea0 = DAT_0021bea0 ^ 0xdededededededede;
          DAT_0021f195 = '\x01';
          lVar7 = 0x5f09e106069dc7a6;
        }
        else if (lVar6 == 0x481cca618a76367) {
          lVar7 = 0x2a013c5b8fe43319;
          bVar2 = DAT_0021f1a7 == '\0';
          lVar5 = 0x4aec30ca31276d55;
          goto LAB_001130b8;
        }
        goto LAB_001130c0;
      }
      if (lVar6 != 0x7ad01f4ce7fcfd0) {
        lVar7 = 0x14e8afddeb5ba2d8;
        if ((lVar6 != 0x938f423e0738fad) && (lVar7 = lVar6, lVar6 == 0x9db9300eb2a7174)) {
          lVar7 = -0x5f8afb0e1bcf47ac;
        }
        goto LAB_001130c0;
      }
      lVar7 = -0x248efbab039ee777;
      bVar2 = DAT_0021f19e == '\0';
      lVar5 = -0x601688af67ee5367;
    }
    else if (lVar6 < 0x34d64510914e178a) {
      if (lVar6 < 0x2b4cb855a4e2ca81) {
        if (lVar6 < 0x2a013c5b8fe43319) {
          if (lVar6 == 0x279ec6686ef78dc7) {
            lVar5 = 0x581147dc809bae3d;
            bVar2 = DAT_0021f19f == '\0';
            lVar7 = -0x1ae8faa2f14c4ad8;
            goto LAB_0011634c;
          }
          if (lVar6 == 0x28f3b4fe78a29dfd) {
            DAT_0021be98 = DAT_0021be98 ^ 0xb4;
            DAT_0021be99 = DAT_0021be99 ^ 0xb4;
            DAT_0021be9a = DAT_0021be9a ^ 0xb4;
            DAT_0021be9b = DAT_0021be9b ^ 0xb4;
            DAT_0021be9c = DAT_0021be9c ^ 0xb4;
            DAT_0021be9d = DAT_0021be9d ^ 0xb4;
            DAT_0021be90 = DAT_0021be90 ^ 0xb4b4b4b4b4b4b4b4;
            DAT_0021f194 = '\x01';
            lVar7 = 0x6b1c8496500da436;
          }
        }
        else {
          lVar7 = -0xcdc5aee104269e7;
          if ((lVar6 != 0x2a013c5b8fe43319) && (lVar7 = lVar6, lVar6 == 0x2a8e14484c7eb6ff)) {
            lVar7 = 0x1de6a73eeda120cb;
          }
        }
        goto LAB_001130c0;
      }
      if (0x2e5d2c580e521a45 < lVar6) {
        lVar7 = -0x6acaf52c4f368fc7;
        if (((lVar6 != 0x2e5d2c580e521a46) &&
            (lVar7 = -0x3726a832e592db74, lVar6 != 0x2eb1b3fa991fd0c3)) &&
           (lVar7 = lVar6, lVar6 == 0x2eb2cb94985f61db)) {
          lVar7 = -0x2cc49f4395b2f43b;
        }
        goto LAB_001130c0;
      }
      if (lVar6 == 0x2b4cb855a4e2ca81) {
        lVar7 = 0x1c1c310a228ac2a9;
        bVar2 = DAT_0021f19b == '\0';
        lVar5 = -0x707c1fafe32329c8;
      }
      else {
        if (lVar6 != 0x2d2505df37d70c06) goto LAB_001130c0;
        lVar7 = 0x2a8e14484c7eb6ff;
        bVar2 = DAT_0021f199 == '\0';
        lVar5 = -0x14cc1a46edce974e;
      }
    }
    else {
      if (lVar6 < 0x4226403d663a6810) {
        if (lVar6 < 0x3a9f795766717164) {
          if (lVar6 == 0x34d64510914e178a) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f124);
            lVar7 = -0x1aae3d37372759c8;
            if (iVar3 != 0) {
              lVar7 = 0x5d226faf8da10c63;
            }
          }
          else if (lVar6 == 0x366faf7c9bd6c7be) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f14c);
            lVar7 = -0x6f8d7fffc25548a2;
            if (iVar3 != 0) {
              lVar7 = 0xe418c3fe6fa7e30;
            }
          }
        }
        else {
          lVar7 = -0x2f3336ee1624771d;
          if (lVar6 != 0x3a9f795766717164) {
            if (lVar6 == 0x3d520d52a04eb0a3) {
              iVar3 = FUN_00212730(0,1,&DAT_0021f140);
              lVar7 = 0x1ed7d5e602d25831;
              if (iVar3 != 0) {
                lVar7 = -0x1579c5d94e757e2d;
              }
            }
            else {
              lVar7 = lVar6;
              if (lVar6 == 0x3d9a23bfc527f297) {
                DAT_0021f118 = 0;
                lVar7 = -0x73e8f5c018ea657d;
              }
            }
          }
        }
        goto LAB_001130c0;
      }
      if (lVar6 < 0x43e0716434a8db96) {
        lVar7 = 0x659bc0912b2dc829;
        if ((lVar6 != 0x4226403d663a6810) && (lVar7 = lVar6, lVar6 == 0x42d35ffe0640f9e7)) {
          uVar4 = FUN_00164b7c(local_c0,local_c8,0x18);
          lVar7 = -0x3e1b758c85bc171;
          if ((uVar4 & 1) == 0) {
            lVar7 = -0x6d88891aa2376f3c;
          }
          unaff_s15 = *local_b8;
        }
        goto LAB_001130c0;
      }
      if (lVar6 != 0x43e0716434a8db96) {
        lVar7 = -0x6531ea49607ac328;
        if ((lVar6 != 0x445951b18d5b174b) && (lVar7 = lVar6, lVar6 == 0x458dd5089ea47cbf)) {
          DAT_0021f114 = 0;
          local_c8 = pfVar1 + -0x30;
          local_b0 = pfVar1 + -0x34;
          pfVar1[-0x34] = 0.0;
          pfVar1[-0x33] = 0.0;
          pfVar1[-0x38] = 0.0;
          *(ulong **)(pfVar1 + -0x30) = &DAT_0021be78;
          *(ulong **)(pfVar1 + -0x2e) = &DAT_0021be88;
          *(ulong **)(pfVar1 + -0x2c) = &DAT_0021be90;
          *(ulong **)(pfVar1 + -0x2a) = &DAT_0021bea0;
          *(byte **)(pfVar1 + -0x28) = &DAT_0021beb0;
          *(ulong **)(pfVar1 + -0x26) = &DAT_0021beb8;
          *(ulong **)(pfVar1 + -0x24) = &DAT_0021bec8;
          *(ulong **)(pfVar1 + -0x22) = &DAT_0021bed0;
          *(ulong **)(pfVar1 + -0x20) = &DAT_0021bee0;
          *(byte **)(pfVar1 + -0x1e) = &DAT_0021beec;
          *(ulong **)(pfVar1 + -0x1c) = &DAT_0021bef8;
          *(ulong **)(pfVar1 + -0x1a) = &DAT_0021bf00;
          *(ulong **)(pfVar1 + -0x18) = &DAT_0021bf08;
          *(ulong **)(pfVar1 + -0x16) = &DAT_0021bf18;
          *(ulong **)(pfVar1 + -0x14) = &DAT_0021bf28;
          *(ulong **)(pfVar1 + -0x12) = &DAT_0021bf38;
          *(ulong **)(pfVar1 + -0x10) = &DAT_0021bf40;
          *(ulong **)(pfVar1 + -0xe) = &DAT_0021bf48;
          *(ulong **)(pfVar1 + -0xc) = &DAT_0021bf58;
          *(byte **)(pfVar1 + -10) = &DAT_0021bf60;
          *(ulong **)(pfVar1 + -8) = &DAT_0021bf68;
          *(ulong **)(pfVar1 + -6) = &DAT_0021bf78;
          *(undefined **)(pfVar1 + -4) = &DAT_0021bf90;
          *(ulong **)(pfVar1 + -2) = &DAT_0021bfb0;
          local_b8 = pfVar1 + -0x38;
          iVar3 = FUN_0015ee58(local_c0);
          lVar7 = -0x428a0360f09cf896;
          if (iVar3 != 0) {
            lVar7 = -0x1a8475fc33e49a53;
          }
          *local_d8 = iVar3;
          pfVar1 = pfVar1 + -0x38;
        }
        goto LAB_001130c0;
      }
      lVar7 = -0x1444b5cce6f35eae;
      bVar2 = DAT_0021f1a8 == '\0';
      lVar5 = -0x65ea49716c78db2d;
    }
  }
LAB_001130b8:
  if (bVar2) {
    lVar7 = lVar5;
  }
  goto LAB_001130c0;
}

