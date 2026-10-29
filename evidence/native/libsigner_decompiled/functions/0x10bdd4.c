// rea decompile_all
// name: FUN_0010bdd4
// address: 0x10bdd4
// body: available
// range: 0x10bdd4-0x10dad3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0010bdd4(int *param_1,long *param_2,long param_3,ulong param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long local_b0;
  
  FUN_00170dd0(param_1,param_2,param_4 & 0xffffffff);
  lVar1 = 0x361985fb5d496b76;
  if (param_2 != (long *)0x0) {
    lVar1 = 0x4b73c4e968047988;
  }
  lVar2 = -0x316a2fad8e5725cc;
  if (*param_1 != 0) {
    lVar2 = 0x32f4713bcaf93571;
  }
  lVar4 = 0x31b9d74c89a90fe3;
LAB_0010bf60:
  do {
    while (lVar5 = lVar4, lVar4 = lVar5, lVar5 < -0x17196cb747ef8c5) {
      if (lVar5 < -0x38b0832f7743f2b8) {
        if (lVar5 < -0x56ad058abb7434bf) {
          if (lVar5 < -0x7440f7630005660c) {
            if (lVar5 < -0x797daf6592e4222d) {
              if (lVar5 == -0x7e369e6589ba78e7) {
                lVar4 = 0x39a16bddf8dc82a2;
                if (DAT_0021f18c == '\0') {
                  lVar4 = -0x3cc327df2eecc1c6;
                }
              }
              else {
                lVar4 = -0x6e4a13fb3d707c87;
                if ((lVar5 != -0x7dbc322ed98e3afb) && (lVar4 = lVar5, lVar5 == -0x7ad67c16664e25fa))
                {
                  lVar4 = -0x23395a9e9c848352;
                  if (DAT_0021f18d == '\0') {
                    lVar4 = -0x50e54cd80f265318;
                  }
                }
              }
            }
            else {
              lVar4 = 0x62ccc994e2cb7da3;
              if (((lVar5 != -0x76ca62710947274b) &&
                  (lVar4 = 0x54cc8c62117e2258, lVar5 != -0x7447e788f4d32ac9)) &&
                 (lVar4 = lVar5, lVar5 == -0x797daf6592e4222d)) {
                return;
              }
            }
          }
          else if (lVar5 < -0x5f20efb5b92e6f74) {
            if (lVar5 == -0x7440f7630005660c) {
              lVar4 = 0x4d5d50fcdd4992d2;
              if (DAT_0021f18c == '\0') {
                lVar4 = -0x21c44217ce61bec8;
              }
            }
            else {
              lVar4 = lVar1;
              if ((lVar5 != -0x6e4a13fb3d707c87) && (lVar4 = lVar5, lVar5 == -0x65a31e6327338728)) {
                (**(code **)(*param_2 + 0xb8))(param_2,local_b0);
                lVar4 = 0xf111d00f6a8edda;
              }
            }
          }
          else if (lVar5 == -0x5f20efb5b92e6f74) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f104);
            lVar4 = 0x2352f2d6b10786ab;
            if (iVar3 != 0) {
              lVar4 = -0x12bc87502b2af86e;
            }
          }
          else {
            lVar4 = 0x61d9685814f9d681;
            if ((lVar5 != -0x5eedd7c897c0ed2a) && (lVar4 = lVar5, lVar5 == -0x59bab4f8732095e2)) {
              DAT_0021f10c = 0;
              lVar4 = 0x54cc8c62117e2258;
            }
          }
        }
        else if (lVar5 < -0x4c94198a9ad36397) {
          if (lVar5 < -0x5412c5352f1dc37a) {
            lVar4 = -0x6e4a13fb3d707c87;
            if ((lVar5 != -0x56ad058abb7434bf) && (lVar4 = lVar5, lVar5 == -0x5587caf0ffc9f6c4)) {
              lVar4 = -0x797daf6592e4222d;
            }
          }
          else if (lVar5 == -0x5412c5352f1dc37a) {
            DAT_0021be10 = DAT_0021be10 ^ 0x4343434343434343;
            DAT_0021f18a = '\x01';
            lVar4 = -0x2e5d71d46d443370;
          }
          else {
            if (lVar5 == -0x50e54cd80f265318) {
              lVar4 = -0x359d4e10b3bbbc3c;
              goto LAB_0010d684;
            }
            if (lVar5 == -0x503101e48cc58732) {
              lVar4 = -0x3180ec1dafce7d52;
            }
          }
        }
        else if (lVar5 < -0x400e37f3caa97ab4) {
          if (lVar5 == -0x4c94198a9ad36397) {
            lVar4 = 0x61d9685814f9d681;
            goto LAB_0010d400;
          }
          lVar4 = 0xf111d00f6a8edda;
          if ((lVar5 != -0x429b7b8ddead7976) && (lVar4 = lVar5, lVar5 == -0x405b680ffecd4131)) {
            lVar4 = -0x12e0f8e15901e122;
          }
        }
        else if (lVar5 == -0x400e37f3caa97ab4) {
          DAT_0021be60 = DAT_0021be60 ^ 0xdb;
          DAT_0021be61 = DAT_0021be61 ^ 0xdb;
          DAT_0021be62 = DAT_0021be62 ^ 0xdb;
          DAT_0021be63 = DAT_0021be63 ^ 0xdb;
          DAT_0021be64 = DAT_0021be64 ^ 0xdb;
          DAT_0021f191 = '\x01';
          lVar4 = 0x3cd27908c3b8e652;
        }
        else {
          lVar4 = -0x2e5d71d46d443370;
          if ((lVar5 != -0x3ea1661ac6a1c4db) && (lVar4 = lVar5, lVar5 == -0x3cc327df2eecc1c6)) {
            lVar4 = 0x54c2b837d86711b8;
            goto LAB_0010d704;
          }
        }
      }
      else if (lVar5 < -0x2701f7b957916a96) {
        if (lVar5 < -0x316a2fad8e5725cc) {
          if (lVar5 < -0x359d4e10b3bbbc3c) {
            if (lVar5 == -0x38b0832f7743f2b8) {
              lVar4 = 0x3c2595d6266c5998;
              if (DAT_0021f190 == '\0') {
                lVar4 = 0x4101bf80446bdc20;
              }
            }
            else if (lVar5 == -0x361936ecac8b8986) {
              iVar3 = FUN_00212730(0,1,&DAT_0021f104);
              lVar4 = 0x1b91058c21da9ca7;
              if (iVar3 != 0) {
                lVar4 = -0x17196cb747ef8c5;
              }
            }
          }
          else if (lVar5 == -0x359d4e10b3bbbc3c) {
            DAT_0021f100 = 0;
            FUN_001758cc(param_1,param_2,*(undefined8 *)(param_3 + 0x10),&DAT_0021be38,&DAT_0021be58
                        );
            lVar4 = -0x76ca62710947274b;
            if (*param_1 != 0) {
              lVar4 = -0x7dbc322ed98e3afb;
            }
          }
          else {
            lVar4 = -0x6e4a13fb3d707c87;
            if ((lVar5 != -0x34ce59f19df9112f) && (lVar4 = lVar5, lVar5 == -0x3180ec1dafce7d52)) {
              DAT_0021f100 = 0;
              lVar4 = 0x5ad71f292518d033;
            }
          }
        }
        else if (lVar5 < -0x2e5d71d46d443370) {
          if (lVar5 == -0x316a2fad8e5725cc) {
            FUN_001710a4(param_1,param_2,*(long *)(param_3 + 0x18),0,param_4,param_5);
            lVar4 = 0xc7bf249d1db72b2;
            if (*param_1 != 0) {
              lVar4 = 0x65536dc2a8308acd;
            }
          }
          else if (lVar5 == -0x2ef756f1c7496e5f) {
            DAT_0021f0f4 = 0;
            FUN_001758cc(param_1,param_2,*(undefined8 *)(param_3 + 0x10),&DAT_0021be18,&DAT_0021be54
                        );
            lVar4 = 0x483dcbc36ada42c4;
            if (*param_1 != 0) {
              lVar4 = -0x34ce59f19df9112f;
            }
          }
          else if (lVar5 == -0x2eb8ff3123f5eabc) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f0f0);
            lVar4 = 0x727aabeac1ff5013;
            if (iVar3 != 0) {
              lVar4 = 0x55dcd19dee737a1a;
            }
          }
        }
        else if (lVar5 == -0x2e5d71d46d443370) {
          DAT_0021f0f0 = 0;
          FUN_001758cc(param_1,param_2,*(undefined8 *)(param_3 + 0x10),&DAT_0021be28,&DAT_0021be10);
          lVar4 = 0x53e14c28908eeeeb;
          if (*param_1 != 0) {
            lVar4 = -0x56ad058abb7434bf;
          }
        }
        else {
          lVar4 = 0x5ad71f292518d033;
          if ((lVar5 != -0x2d23be9e4092ee55) && (lVar4 = lVar5, lVar5 == -0x29504ee3cf2d5633)) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f0fc);
            lVar4 = -0x7e369e6589ba78e7;
            if (iVar3 != 0) {
              lVar4 = 0x1db468c64d6a7ed0;
            }
          }
        }
      }
      else if (lVar5 < -0x144ad6ddee249a62) {
        if (lVar5 < -0x22526e95d736601f) {
          if (lVar5 == -0x2701f7b957916a96) {
            lVar4 = 0x1b4ac2f1f22e2589;
            goto LAB_0010bf4c;
          }
          lVar4 = -0x428109008685f48;
          if ((lVar5 != -0x244c08061ede3ca6) && (lVar4 = lVar5, lVar5 == -0x23395a9e9c848352)) {
            lVar4 = -0x359d4e10b3bbbc3c;
          }
        }
        else {
          lVar4 = 0x1b4ac2f1f22e2589;
          if (lVar5 != -0x22526e95d736601f) {
            if (lVar5 == -0x21c44217ce61bec8) {
              lVar4 = -0x4c94198a9ad36397;
LAB_0010d704:
              DAT_0021be36 = DAT_0021be36 ^ 0xbb;
              DAT_0021be35 = DAT_0021be35 ^ 0xbb;
              DAT_0021be34 = DAT_0021be34 ^ 0xbb;
              DAT_0021be33 = DAT_0021be33 ^ 0xbb;
              DAT_0021be32 = DAT_0021be32 ^ 0xbb;
              DAT_0021be31 = DAT_0021be31 ^ 0xbb;
              DAT_0021be30 = DAT_0021be30 ^ 0xbb;
              DAT_0021be28 = DAT_0021be28 ^ 0xbbbbbbbbbbbbbbbb;
              DAT_0021f18c = '\x01';
            }
            else {
              lVar4 = lVar5;
              if (lVar5 == -0x1f81af14a263eaa3) {
                iVar3 = FUN_00212730(0,1,&DAT_0021f100);
                lVar4 = 0x1552bb494d897f7e;
                if (iVar3 != 0) {
                  lVar4 = 0x7ffb850a0e6ed38d;
                }
              }
            }
          }
        }
      }
      else if (lVar5 < -0xf8d0ba03b2e0b85) {
        if (lVar5 == -0x144ad6ddee249a62) {
          DAT_0021f104 = 0;
          FUN_001758cc(param_1,param_2,*(undefined8 *)(param_3 + 0x10),&DAT_0021be48,&DAT_0021be60);
          lVar4 = -0x5587caf0ffc9f6c4;
          if (*param_1 != 0) {
            lVar4 = 0x11389729d7590b94;
          }
        }
        else if (lVar5 == -0x12e0f8e15901e122) {
          iVar3 = FUN_00212730(0,1,&DAT_0021f0f4);
          lVar4 = 0x3485297baf428faf;
          if (iVar3 != 0) {
            lVar4 = -0x405b680ffecd4131;
          }
        }
        else if (lVar5 == -0x12bc87502b2af86e) {
          lVar4 = -0x5f20efb5b92e6f74;
        }
      }
      else if (lVar5 == -0xf8d0ba03b2e0b85) {
        lVar4 = 0x719dbab015af25c6;
        if (DAT_0021f191 == '\0') {
          lVar4 = -0x400e37f3caa97ab4;
        }
      }
      else {
        lVar4 = -0x144ad6ddee249a62;
        if ((lVar5 != -0x73716f9563fa402) && (lVar4 = lVar5, lVar5 == -0x428109008685f48)) {
          iVar3 = FUN_00212730(0,1,&DAT_0021f10c);
          lVar4 = -0x38b0832f7743f2b8;
          if (iVar3 != 0) {
            lVar4 = -0x244c08061ede3ca6;
          }
        }
      }
    }
    if (0x4101bf80446bdc1f < lVar5) {
      if (lVar5 < 0x5ebfca74eead21cf) {
        if (lVar5 < 0x53e14c28908eeeeb) {
          if (lVar5 < 0x4b73c4e968047988) {
            if (lVar5 == 0x4101bf80446bdc20) {
              DAT_0021be58 = DAT_0021be58 ^ 0x2d;
              DAT_0021be59 = DAT_0021be59 ^ 0x2d;
              DAT_0021be5a = DAT_0021be5a ^ 0x2d;
              DAT_0021be5c = DAT_0021be5c ^ 0x2d;
              DAT_0021be5d = DAT_0021be5d ^ 0x2d;
              DAT_0021be5e = DAT_0021be5e ^ 0x2d;
              DAT_0021be5b = DAT_0021be5b ^ 0x2d;
              DAT_0021f190 = '\x01';
              lVar4 = -0x59bab4f8732095e2;
            }
            else if (lVar5 == 0x483dcbc36ada42c4) {
              lVar4 = -0x29504ee3cf2d5633;
            }
          }
          else if (lVar5 == 0x4b73c4e968047988) {
            local_b0 = *(long *)(param_3 + 0x18);
            lVar4 = -0x429b7b8ddead7976;
            if (local_b0 != 0) {
              lVar4 = -0x65a31e6327338728;
            }
          }
          else {
            lVar4 = -0x4c94198a9ad36397;
            if ((lVar5 != 0x4d5d50fcdd4992d2) && (lVar4 = lVar5, lVar5 == 0x5127e420c2beb41f)) {
              lVar4 = 0x3ace195dd3930386;
            }
          }
        }
        else if (lVar5 < 0x55dcd19dee737a1a) {
          lVar4 = -0x428109008685f48;
          if (lVar5 != 0x53e14c28908eeeeb) {
            if (lVar5 == 0x54c2b837d86711b8) {
              lVar4 = -0x2eb8ff3123f5eabc;
LAB_0010d400:
              DAT_0021f0fc = 0;
            }
            else {
              lVar4 = lVar5;
              if (lVar5 == 0x54cc8c62117e2258) {
                iVar3 = FUN_00212730(0,1,&DAT_0021f100);
                lVar4 = -0x7ad67c16664e25fa;
                if (iVar3 != 0) {
                  lVar4 = -0x7447e788f4d32ac9;
                }
              }
            }
          }
        }
        else {
          lVar4 = -0x2eb8ff3123f5eabc;
          if (((lVar5 != 0x55dcd19dee737a1a) &&
              (lVar4 = -0x2ef756f1c7496e5f, lVar5 != 0x57cabee7967ab664)) &&
             (lVar4 = lVar5, lVar5 == 0x5ad71f292518d033)) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f0fc);
            lVar4 = -0x7440f7630005660c;
            if (iVar3 != 0) {
              lVar4 = -0x2d23be9e4092ee55;
            }
          }
        }
        goto LAB_0010bf60;
      }
      if (lVar5 < 0x6bbc6b8cc56478f1) {
        if (lVar5 < 0x6230bf87be098d5d) {
          if (lVar5 == 0x5ebfca74eead21cf) {
            lVar4 = 0x78ac43fddd7c64db;
          }
          else {
            if (lVar5 != 0x5eda44100212fa2c) {
              if (lVar5 == 0x61d9685814f9d681) {
                iVar3 = FUN_00212730(0,1,&DAT_0021f0f4);
                lVar4 = 0x6230bf87be098d5d;
                if (iVar3 != 0) {
                  lVar4 = -0x5eedd7c897c0ed2a;
                }
              }
              goto LAB_0010bf60;
            }
            lVar4 = -0x2ef756f1c7496e5f;
          }
          DAT_0021be18 = DAT_0021be18 ^ 0x7c7c7c7c7c7c7c7c;
          DAT_0021be22 = DAT_0021be22 ^ 0x7c;
          DAT_0021be21 = DAT_0021be21 ^ 0x7c;
          DAT_0021be20 = DAT_0021be20 ^ 0x7c;
          DAT_0021f18b = '\x01';
          goto LAB_0010bf60;
        }
        if (lVar5 == 0x6230bf87be098d5d) {
          lVar4 = 0x7bca060775e09e1e;
          if (DAT_0021f18b == '\0') {
            lVar4 = 0x5ebfca74eead21cf;
          }
        }
        else if (lVar5 == 0x62ccc994e2cb7da3) {
          iVar3 = FUN_00212730(0,1,&DAT_0021f110);
          lVar4 = -0xf8d0ba03b2e0b85;
          if (iVar3 != 0) {
            lVar4 = 0x24e5eef263e81b7c;
          }
        }
        else if (lVar5 == 0x65536dc2a8308acd) {
          lVar4 = -0x6e4a13fb3d707c87;
        }
      }
      else if (lVar5 < 0x78ac43fddd7c64db) {
        if (lVar5 == 0x6bbc6b8cc56478f1) {
          lVar4 = -0x3180ec1dafce7d52;
LAB_0010d684:
          DAT_0021be46 = DAT_0021be46 ^ 0xf0;
          DAT_0021be45 = DAT_0021be45 ^ 0xf0;
          DAT_0021be44 = DAT_0021be44 ^ 0xf0;
          DAT_0021be43 = DAT_0021be43 ^ 0xf0;
          DAT_0021be42 = DAT_0021be42 ^ 0xf0;
          DAT_0021be41 = DAT_0021be41 ^ 0xf0;
          DAT_0021be40 = DAT_0021be40 ^ 0xf0;
          DAT_0021be38 = DAT_0021be38 ^ 0xf0f0f0f0f0f0f0f0;
          DAT_0021f18d = '\x01';
        }
        else {
          lVar4 = 0x3cd27908c3b8e652;
          if ((lVar5 != 0x719dbab015af25c6) && (lVar4 = lVar5, lVar5 == 0x727aabeac1ff5013)) {
            lVar4 = -0x3ea1661ac6a1c4db;
            if (DAT_0021f18a == '\0') {
              lVar4 = -0x5412c5352f1dc37a;
            }
          }
        }
      }
      else if (lVar5 == 0x78ac43fddd7c64db) {
        DAT_0021f0f4 = 0;
        *(undefined8 *)(param_3 + 0x18) = 0;
        FUN_0017696c(param_1,param_2,*(undefined8 *)(param_3 + 0x10),&DAT_0021be18);
        FUN_0017696c(param_1,param_2,*(undefined8 *)(param_3 + 0x10),&DAT_0021be28);
        FUN_0017696c(param_1,param_2,*(undefined8 *)(param_3 + 0x10),&DAT_0021be38);
        FUN_0017696c(param_1,param_2,*(undefined8 *)(param_3 + 0x10),&DAT_0021be48);
        lVar4 = -0x797daf6592e4222d;
      }
      else {
        lVar4 = 0x78ac43fddd7c64db;
        if ((lVar5 != 0x7bca060775e09e1e) && (lVar4 = lVar5, lVar5 == 0x7ffb850a0e6ed38d)) {
          lVar4 = -0x1f81af14a263eaa3;
        }
      }
      goto LAB_0010bf60;
    }
    if (lVar5 < 0x2352f2d6b10786ab) {
      if (lVar5 < 0xf8f9546f45fbb47) {
        if (lVar5 < 0xbccd62a0fc32d) {
          lVar4 = -0x361936ecac8b8986;
          if ((lVar5 != -0x17196cb747ef8c5) && (lVar4 = lVar5, lVar5 == -0x111819a4994f0fa)) {
            lVar4 = 0x27963d1423e000f6;
          }
        }
        else if (lVar5 == 0xbccd62a0fc32d) {
          lVar4 = -0x144ad6ddee249a62;
LAB_0010bf4c:
          DAT_0021be48 = DAT_0021be48 ^ 0x7474747474747474;
          DAT_0021be51 = DAT_0021be51 ^ 0x74;
          DAT_0021be50 = DAT_0021be50 ^ 0x74;
          DAT_0021f18e = '\x01';
        }
        else {
          lVar4 = 0x27963d1423e000f6;
          if ((lVar5 != 0xc7bf249d1db72b2) && (lVar4 = lVar5, lVar5 == 0xf111d00f6a8edda)) {
            lVar4 = -0x5f20efb5b92e6f74;
          }
        }
      }
      else if (lVar5 < 0x1b4ac2f1f22e2589) {
        if (lVar5 == 0xf8f9546f45fbb47) {
          lVar4 = 0x5127e420c2beb41f;
          if (DAT_0021f18f == '\0') {
            lVar4 = 0x3b16db62a3c2f4fb;
          }
        }
        else {
          lVar4 = -0x6e4a13fb3d707c87;
          if ((lVar5 != 0x11389729d7590b94) && (lVar4 = lVar5, lVar5 == 0x1552bb494d897f7e)) {
            lVar4 = -0x503101e48cc58732;
            if (DAT_0021f18d == '\0') {
              lVar4 = 0x6bbc6b8cc56478f1;
            }
          }
        }
      }
      else if (lVar5 == 0x1b4ac2f1f22e2589) {
        DAT_0021f104 = 0;
        lVar4 = -0x1f81af14a263eaa3;
      }
      else if (lVar5 == 0x1b91058c21da9ca7) {
        lVar4 = -0x73716f9563fa402;
        if (DAT_0021f18e == '\0') {
          lVar4 = 0xbccd62a0fc32d;
        }
      }
      else if (lVar5 == 0x1db468c64d6a7ed0) {
        lVar4 = -0x29504ee3cf2d5633;
      }
    }
    else if (lVar5 < 0x361985fb5d496b76) {
      if (lVar5 < 0x31b9d74c89a90fe3) {
        if (lVar5 == 0x2352f2d6b10786ab) {
          lVar4 = -0x22526e95d736601f;
          if (DAT_0021f18e == '\0') {
            lVar4 = -0x2701f7b957916a96;
          }
        }
        else {
          lVar4 = 0x62ccc994e2cb7da3;
          if ((lVar5 != 0x24e5eef263e81b7c) && (lVar4 = lVar5, lVar5 == 0x27963d1423e000f6)) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f108);
            lVar4 = 0xf8f9546f45fbb47;
            if (iVar3 != 0) {
              lVar4 = -0x111819a4994f0fa;
            }
          }
        }
      }
      else {
        lVar4 = lVar2;
        if (((lVar5 != 0x31b9d74c89a90fe3) &&
            (lVar4 = -0x6e4a13fb3d707c87, lVar5 != 0x32f4713bcaf93571)) &&
           (lVar4 = lVar5, lVar5 == 0x3485297baf428faf)) {
          lVar4 = 0x57cabee7967ab664;
          if (DAT_0021f18b == '\0') {
            lVar4 = 0x5eda44100212fa2c;
          }
        }
      }
    }
    else if (lVar5 < 0x3b16db62a3c2f4fb) {
      lVar4 = 0xf111d00f6a8edda;
      if (((lVar5 != 0x361985fb5d496b76) &&
          (lVar4 = 0x54c2b837d86711b8, lVar5 != 0x39a16bddf8dc82a2)) &&
         (lVar4 = lVar5, lVar5 == 0x3ace195dd3930386)) {
        DAT_0021f108 = 0;
        lVar4 = -0x12e0f8e15901e122;
      }
    }
    else if (lVar5 == 0x3b16db62a3c2f4fb) {
      DAT_0021be54 = DAT_0021be54 ^ 0xdb;
      DAT_0021be55 = DAT_0021be55 ^ 0xdb;
      DAT_0021f18f = '\x01';
      lVar4 = 0x3ace195dd3930386;
    }
    else {
      lVar4 = -0x59bab4f8732095e2;
      if ((lVar5 != 0x3c2595d6266c5998) && (lVar4 = lVar5, lVar5 == 0x3cd27908c3b8e652)) {
        DAT_0021f110 = 0;
        lVar4 = -0x361936ecac8b8986;
      }
    }
  } while( true );
}

