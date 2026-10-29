// rea decompile_all
// name: FUN_0013a038
// address: 0x13a038
// body: available
// range: 0x13a038-0x13c393 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0013a038(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  uint local_94;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar1 = -0x726a1b4e727ced10;
  if (lVar4 != 0) {
    lVar1 = -0x2fde4a2e0e7ee9b1;
  }
  lVar5 = 0xbcdbf79823a62d5;
LAB_0013a1a8:
  lVar3 = lVar5;
  lVar5 = lVar3;
  if (-0x6a84446ba960b45 < lVar3) {
    if (lVar3 < 0x309be47c902efe01) {
      if (lVar3 < 0x15012e61d93893df) {
        if (lVar3 < 0x518558a6e709487) {
          if (lVar3 < -0x1ebe24b5dde71a7) {
            lVar5 = -0x648d4d94cd6a628a;
            if (lVar3 != -0x6a84446ba960b44) {
              if (lVar3 == -0x618ac82760da4fb) {
                DAT_0021f434 = 0;
                iVar2 = FUN_001e1c70(local_b8,&DAT_0021cfc0,local_a8);
                lVar5 = -0x46c086819cc7a59d;
                if (iVar2 != 0) {
                  lVar5 = -0x17fc42d6e810b0d9;
                }
              }
              else {
                lVar5 = lVar3;
                if (lVar3 == -0x5b2c373ff38b084) {
                  lVar5 = 0x15012e61d93893df;
                }
              }
            }
          }
          else if (lVar3 < 0x3fd62cff32aaded) {
            if (lVar3 == -0x1ebe24b5dde71a7) {
              lVar5 = 0x76c9285310b1bfee;
              if (DAT_0021f6c5 == '\0') {
                lVar5 = 0x1369debc8df28a00;
              }
            }
            else if (lVar3 == 0x26850fceadcc7fe) {
              iVar2 = FUN_00212730(0,1,&DAT_0021f434);
              lVar5 = 0x699690ac9466f1d5;
              if (iVar2 != 0) {
                lVar5 = 0x270dd473f4f78fe2;
              }
            }
          }
          else if (lVar3 == 0x3fd62cff32aaded) {
            DAT_0021f434 = 0;
            lVar3 = FUN_001e16c4(&DAT_0021cfc0);
            lVar5 = 0x57ced258cdc85286;
            if (lVar3 != local_a8) {
              lVar5 = -0x6a84446ba960b44;
            }
          }
          else if (lVar3 == 0x48f5d9219641c8f) {
            lVar5 = -0x7977feb6284f9313;
          }
        }
        else if (lVar3 < 0x108477934ca198f4) {
          lVar5 = -0x7977feb6284f9313;
          if (lVar3 != 0x518558a6e709487) {
            if (lVar3 == 0x57196b76580b349) {
              DAT_0021f43c = 0;
              iVar2 = FUN_001e1c70(local_c0,&DAT_0021d000,local_b0);
              lVar5 = -0x37bf67e87564fa00;
              if (iVar2 != 0) {
                lVar5 = 0x33b201f32e8e27c9;
              }
            }
            else {
              lVar5 = lVar3;
              if (lVar3 == 0xbcdbf79823a62d5) {
                lVar5 = lVar1;
              }
            }
          }
        }
        else if (lVar3 < 0x11faa86c0d9270ce) {
          if (lVar3 == 0x108477934ca198f4) {
            iVar2 = FUN_00212730(0,1,&DAT_0021f434);
            lVar5 = -0x3fe37f86e044b8b3;
            if (iVar2 != 0) {
              lVar5 = 0x247cdab85a7ea4bc;
            }
          }
          else if (lVar3 == 0x11b0c6c5b0462373) {
            lVar5 = -0x618ac82760da4fb;
LAB_0013c1f8:
            DAT_0021cfd0 = DAT_0021cfd0 ^ 0x6161616161616161;
            uRam000000000021cfc8 = uRam000000000021cfc8 ^ 0x6161616161616161;
            _DAT_0021cfc0 = _DAT_0021cfc0 ^ 0x6161616161616161;
            DAT_0021cfd9 = DAT_0021cfd9 ^ 0x61;
            DAT_0021cfd8 = DAT_0021cfd8 ^ 0x61;
            DAT_0021f6c6 = '\x01';
          }
        }
        else {
          if (lVar3 == 0x11faa86c0d9270ce) goto LAB_0013a190;
          if (lVar3 == 0x1369debc8df28a00) {
            lVar5 = 0x1ff1445dd06d10bf;
            goto LAB_0013ba58;
          }
        }
      }
      else if (lVar3 < 0x247cdab85a7ea4bc) {
        if (lVar3 < 0x1f7e5cef63ae91f3) {
          if (lVar3 < 0x1b2779a63ff90a9e) {
            if (lVar3 == 0x15012e61d93893df) {
              local_c0 = *(long *)(param_1 + 0x20);
              lVar5 = 0x2150ddd913c0e1d8;
              if (local_c0 != 0) {
                lVar5 = 0x47b4f938162abdf1;
              }
            }
            else if (lVar3 == 0x152c4648dd0209d6) {
              return local_94 & 1;
            }
          }
          else {
            lVar5 = 0x57196b76580b349;
            if ((lVar3 != 0x1b2779a63ff90a9e) && (lVar5 = lVar3, lVar3 == 0x1c4ee7792617f77d)) {
              lVar5 = 0x75dc0a2d02d07853;
              if (DAT_0021f6c4 == '\0') {
                lVar5 = -0x4e68f673c8eae86a;
              }
            }
          }
        }
        else if (lVar3 < 0x2150ddd913c0e1d8) {
          lVar5 = -0xb110c8706761653;
          if ((lVar3 != 0x1f7e5cef63ae91f3) && (lVar5 = lVar3, lVar3 == 0x1ff1445dd06d10bf)) {
            DAT_0021f430 = 0;
            lVar3 = FUN_001e16c4(&DAT_0021cfa8);
            lVar5 = -0x291e6dc6c4531137;
            if (lVar3 != local_a0) {
              lVar5 = 0x26c9c0d43754aced;
            }
          }
        }
        else {
          if (lVar3 == 0x2150ddd913c0e1d8) goto LAB_0013b594;
          if (lVar3 == 0x22c1d03ea2215c1b) {
            lVar5 = -0x9695c9bfa406593;
          }
        }
      }
      else if (lVar3 < 0x270dd473f4f78fe2) {
        lVar5 = 0x108477934ca198f4;
        if (((lVar3 != 0x247cdab85a7ea4bc) &&
            (lVar5 = -0x5fc2a67fb50bae7c, lVar3 != 0x26c9c0d43754aced)) &&
           (lVar5 = lVar3, lVar3 == 0x270226aff9339f1c)) {
          lVar5 = -0x5fc2a67fb50bae7c;
        }
      }
      else if (lVar3 < 0x2b3aca66c2adb052) {
        lVar5 = 0x26850fceadcc7fe;
        if ((lVar3 != 0x270dd473f4f78fe2) && (lVar5 = lVar3, lVar3 == 0x28715ec84f62fe61)) {
          lVar5 = -0x3103df6b5484e873;
          if (DAT_0021f6c7 == '\0') {
            lVar5 = -0x4d163ece956987cf;
          }
        }
      }
      else if (lVar3 == 0x2b3aca66c2adb052) {
        iVar2 = FUN_00212730(0,1,&DAT_0021f430);
        lVar5 = -0x1ebe24b5dde71a7;
        if (iVar2 != 0) {
          lVar5 = -0x19096ecec9e363f5;
        }
      }
      else if (lVar3 == 0x2e32b43e5a944883) {
        lVar5 = -0x78308f54c29df569;
      }
    }
    else {
      if (lVar3 < 0x63be2b258d25bfb5) {
        if (lVar3 < 0x47b4f938162abdf1) {
          if (lVar3 < 0x35218a7b0c15bbac) {
            lVar5 = 0x63be2b258d25bfb5;
            if (lVar3 != 0x309be47c902efe01) {
              if (lVar3 == 0x320dc3f95e3981ef) {
                lVar5 = -0x625b19841a34718f;
LAB_0013bec8:
                DAT_0021cfa0 = DAT_0021cfa0 ^ 0xb0b0b0b0b0b0b0b;
                DAT_0021f6c4 = '\x01';
              }
              else {
                lVar5 = lVar3;
                if (lVar3 == 0x33b201f32e8e27c9) {
                  lVar5 = 0x518558a6e709487;
                }
              }
            }
            goto LAB_0013a1a8;
          }
          if (0x3a8c282b046ae893 < lVar3) {
            lVar5 = -0x78308f54c29df569;
            if ((lVar3 != 0x3a8c282b046ae894) && (lVar5 = lVar3, lVar3 == 0x430820f9d90c8d89)) {
              lVar5 = -0x5c6a3741260c5ed9;
            }
            goto LAB_0013a1a8;
          }
          if (lVar3 != 0x35218a7b0c15bbac) {
            if (lVar3 == 0x355e517bcfdf2a36) {
              lVar5 = 0x15012e61d93893df;
            }
            goto LAB_0013a1a8;
          }
          lVar5 = -0x271a79da635fd003;
        }
        else {
          if (0x569359db88b7db39 < lVar3) {
            if (lVar3 < 0x592e18e318d186e5) {
              if (lVar3 == 0x569359db88b7db3a) {
                lVar5 = 0x57196b76580b349;
                goto LAB_0013bdc0;
              }
              if (lVar3 == 0x57ced258cdc85286) {
                lVar5 = 0x108477934ca198f4;
              }
            }
            else {
              lVar5 = -0x4c11a3a25645117d;
              if ((lVar3 != 0x592e18e318d186e5) && (lVar5 = lVar3, lVar3 == 0x60d0fc447b1ffd87))
              goto LAB_0013a190;
            }
            goto LAB_0013a1a8;
          }
          if (lVar3 == 0x47b4f938162abdf1) {
            local_b0 = FUN_001e16c4(local_c0);
            lVar5 = -0x6bd9de011b3b92e1;
            if (local_b0 != 0) {
              lVar5 = -0x79799f3c78abc4cf;
            }
            goto LAB_0013a1a8;
          }
          if (lVar3 == 0x4c74fff5806c6c1c) {
            iVar2 = FUN_00212730(0,1,&DAT_0021f42c);
            lVar5 = -0x55c131ac1e8abcf7;
            if (iVar2 != 0) {
              lVar5 = 0x78ee802b8aa2b01a;
            }
            goto LAB_0013a1a8;
          }
          if (lVar3 != 0x519e6f958aa306ab) goto LAB_0013a1a8;
          lVar5 = -0x9695c9bfa406593;
        }
        DAT_0021d01e = DAT_0021d01e ^ 0x6d;
        DAT_0021d01d = DAT_0021d01d ^ 0x6d;
        DAT_0021d01c = DAT_0021d01c ^ 0x6d;
        DAT_0021d01b = DAT_0021d01b ^ 0x6d;
        DAT_0021d01a = DAT_0021d01a ^ 0x6d;
        DAT_0021d019 = DAT_0021d019 ^ 0x6d;
        DAT_0021d018 = DAT_0021d018 ^ 0x6d;
        DAT_0021d010 = DAT_0021d010 ^ 0x6d6d6d6d6d6d6d6d;
        DAT_0021f6c9 = '\x01';
        goto LAB_0013a1a8;
      }
      if (lVar3 < 0x70b8c9173e81aeff) {
        if (lVar3 < 0x6909be1db095571d) {
          if (lVar3 == 0x63be2b258d25bfb5) {
            iVar2 = FUN_00212730(0,1,&DAT_0021f42c);
            lVar5 = 0x1c4ee7792617f77d;
            if (iVar2 != 0) {
              lVar5 = -0x2828e7703f56ea5a;
            }
          }
          else {
            if (lVar3 == 0x665a87b7424ea791) goto LAB_0013b594;
            if (lVar3 == 0x68e9c4fb6656f93b) {
              lVar5 = 0x15012e61d93893df;
            }
          }
        }
        else if (lVar3 < 0x699690ac9466f1d5) {
          if (lVar3 == 0x6909be1db095571d) {
            lVar5 = 0x1b2779a63ff90a9e;
            if (DAT_0021f6c8 == '\0') {
              lVar5 = 0x569359db88b7db3a;
            }
          }
          else if (lVar3 == 0x6926480414329710) {
            iVar2 = FUN_00212730(0,1,&DAT_0021f438);
            lVar5 = -0x767e871b2012785e;
            if (iVar2 != 0) {
              lVar5 = -0x6aa20393cc620055;
            }
          }
        }
        else if (lVar3 == 0x699690ac9466f1d5) {
          lVar5 = -0x6e7c5b485ee17cc8;
          if (DAT_0021f6c6 == '\0') {
            lVar5 = -0x57dd9a2c1d09c0f3;
          }
        }
        else if (lVar3 == 0x6bb5caaedfb44a56) {
          lVar5 = 0x6926480414329710;
        }
      }
      else if (lVar3 < 0x78ee802b8aa2b01a) {
        if (lVar3 < 0x76c9285310b1bfee) {
          if (lVar3 == 0x70b8c9173e81aeff) {
            lVar5 = -0x54acd627d032b29e;
            if (DAT_0021f6c8 == '\0') {
              lVar5 = -0x341e94ef7a5b4443;
            }
          }
          else if (lVar3 == 0x75dc0a2d02d07853) {
            lVar5 = -0x1e45cb9e2390601b;
          }
        }
        else {
          lVar5 = 0x1ff1445dd06d10bf;
          if ((lVar3 != 0x76c9285310b1bfee) && (lVar5 = lVar3, lVar3 == 0x77ee05b53276736d)) {
            lVar5 = 0x22c1d03ea2215c1b;
            if (DAT_0021f6c9 == '\0') {
              lVar5 = 0x519e6f958aa306ab;
            }
          }
        }
      }
      else if (lVar3 < 0x7a4aeef9bb8028cb) {
        lVar5 = 0x4c74fff5806c6c1c;
        if ((lVar3 != 0x78ee802b8aa2b01a) && (lVar5 = lVar3, lVar3 == 0x79d78e4630444031)) {
          DAT_0021f438 = 0;
          lVar3 = FUN_001e16c4(&DAT_0021cfe0);
          lVar5 = 0x6bb5caaedfb44a56;
          if (lVar3 != local_a8) {
            lVar5 = 0x68e9c4fb6656f93b;
          }
        }
      }
      else {
        lVar5 = 0x4c74fff5806c6c1c;
        if ((lVar3 != 0x7a4aeef9bb8028cb) && (lVar5 = lVar3, lVar3 == 0x7dd7fc86addd1ee1)) {
          lVar5 = -0x368aa5e172d1d4ca;
        }
      }
    }
    goto LAB_0013a1a8;
  }
  if (-0x4723b1428f4927a6 < lVar3) {
    if (lVar3 < -0x2b6a90aa3ab0d2e2) {
      if (-0x3fe37f86e044b8b4 < lVar3) {
        if (lVar3 < -0x368aa5e172d1d4ca) {
          if (lVar3 == -0x3fe37f86e044b8b3) {
            lVar5 = -0x457ff8ad0b7cd09a;
            if (DAT_0021f6c6 == '\0') {
              lVar5 = 0x11b0c6c5b0462373;
            }
          }
          else {
            lVar5 = 0x11faa86c0d9270ce;
            if ((lVar3 != -0x37bf67e87564fa00) && (lVar5 = lVar3, lVar3 == -0x375f7518222c6a95)) {
              lVar5 = -0x4c11a3a25645117d;
LAB_0013ba58:
              DAT_0021cfb3 = DAT_0021cfb3 ^ 0xa5;
              DAT_0021cfb2 = DAT_0021cfb2 ^ 0xa5;
              DAT_0021cfb1 = DAT_0021cfb1 ^ 0xa5;
              DAT_0021cfb0 = DAT_0021cfb0 ^ 0xa5;
              DAT_0021cfa8 = DAT_0021cfa8 ^ 0xa5a5a5a5a5a5a5a5;
              DAT_0021f6c5 = '\x01';
            }
          }
        }
        else if (lVar3 < -0x3103df6b5484e873) {
          if (lVar3 == -0x368aa5e172d1d4ca) {
            iVar2 = FUN_00212730(0,1,&DAT_0021f430);
            lVar5 = -0x2a6d75822584bc5c;
            if (iVar2 != 0) {
              lVar5 = 0x7dd7fc86addd1ee1;
            }
          }
          else if (lVar3 == -0x341e94ef7a5b4443) {
            lVar5 = -0x6aeb58d91fbd62aa;
LAB_0013bdc0:
            DAT_0021d00b = DAT_0021d00b ^ 0x65;
            DAT_0021d00a = DAT_0021d00a ^ 0x65;
            DAT_0021d009 = DAT_0021d009 ^ 0x65;
            DAT_0021d008 = DAT_0021d008 ^ 0x65;
            DAT_0021d000 = DAT_0021d000 ^ 0x6565656565656565;
            DAT_0021f6c8 = '\x01';
          }
        }
        else {
          lVar5 = 0x79d78e4630444031;
          if ((lVar3 != -0x3103df6b5484e873) && (lVar5 = lVar3, lVar3 == -0x2fde4a2e0e7ee9b1)) {
            local_a0 = FUN_001e16c4(lVar4);
            lVar5 = -0x122be623403bb9bf;
            if (local_a0 != 0) {
              lVar5 = 0x7a4aeef9bb8028cb;
            }
          }
        }
        goto LAB_0013a1a8;
      }
      if (-0x433eba306204cb02 < lVar3) {
        if (lVar3 < -0x403e3b44e0ee251c) {
          lVar5 = -0x59f39cb721bbb66e;
          if ((lVar3 != -0x433eba306204cb01) && (lVar5 = lVar3, lVar3 == -0x42695403fb73e624)) {
            lVar5 = -0x271a79da635fd003;
          }
        }
        else {
          lVar5 = 0x518558a6e709487;
          if ((lVar3 != -0x403e3b44e0ee251c) && (lVar5 = lVar3, lVar3 == -0x40337ee37fda7022)) {
            lVar5 = -0x42695403fb73e624;
            if (DAT_0021f6c9 == '\0') {
              lVar5 = 0x35218a7b0c15bbac;
            }
          }
        }
        goto LAB_0013a1a8;
      }
      if (lVar3 == -0x4723b1428f4927a5) {
        iVar2 = FUN_00212730(0,1,&DAT_0021f438);
        lVar5 = 0x28715ec84f62fe61;
        if (iVar2 != 0) {
          lVar5 = -0x210a06d0da9c789d;
        }
        goto LAB_0013a1a8;
      }
      if (lVar3 != -0x46c086819cc7a59d) {
        if (lVar3 == -0x457ff8ad0b7cd09a) {
          lVar5 = -0x618ac82760da4fb;
        }
        goto LAB_0013a1a8;
      }
    }
    else {
      if (-0x1dd02cdcdc50fab6 < lVar3) {
        if (lVar3 < -0x17fc42d6e810b0d9) {
          if (lVar3 < -0x1a19f2a673a7adf0) {
            lVar5 = -0x59f39cb721bbb66e;
            if ((lVar3 != -0x1dd02cdcdc50fab5) && (lVar5 = lVar3, lVar3 == -0x1a21e7b68b9ca32e)) {
              lVar5 = -0x5a624ba689a22c86;
            }
          }
          else {
            lVar5 = -0x625b19841a34718f;
            if ((lVar3 != -0x1a19f2a673a7adf0) && (lVar5 = lVar3, lVar3 == -0x19096ecec9e363f5)) {
              lVar5 = 0x2b3aca66c2adb052;
            }
          }
        }
        else if (lVar3 < -0xb110c8706761653) {
          lVar5 = -0x648d4d94cd6a628a;
          if ((lVar3 != -0x17fc42d6e810b0d9) && (lVar5 = lVar3, lVar3 == -0x122be623403bb9bf)) {
            lVar5 = -0x5fc2a67fb50bae7c;
          }
        }
        else if (lVar3 == -0xb110c8706761653) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f43c);
          lVar5 = 0x6909be1db095571d;
          if (iVar2 != 0) {
            lVar5 = 0x1f7e5cef63ae91f3;
          }
        }
        else if (lVar3 == -0x9695c9bfa406593) {
          DAT_0021f440 = 0;
          iVar2 = FUN_001e1c70(local_c0,&DAT_0021d010,local_b0);
          lVar5 = -0x515fda2498152fe5;
          if (iVar2 != 0) {
            lVar5 = -0x59007367243a666b;
          }
        }
        goto LAB_0013a1a8;
      }
      if (-0x2828e7703f56ea5b < lVar3) {
        if (lVar3 < -0x210a06d0da9c789d) {
          lVar5 = 0x63be2b258d25bfb5;
          if ((lVar3 != -0x2828e7703f56ea5a) && (lVar5 = lVar3, lVar3 == -0x271a79da635fd003)) {
            DAT_0021f440 = 0;
            lVar3 = FUN_001e16c4(&DAT_0021d010);
            lVar5 = -0x433eba306204cb01;
            if (lVar3 != local_b0) {
              lVar5 = 0x665a87b7424ea791;
            }
          }
        }
        else {
          lVar5 = -0x4723b1428f4927a5;
          if ((lVar3 != -0x210a06d0da9c789d) && (lVar5 = lVar3, lVar3 == -0x1e45cb9e2390601b)) {
            DAT_0021f42c = 0;
            iVar2 = FUN_001e1c70(lVar4,&DAT_0021cfa0,local_a0);
            lVar5 = -0x525ce671aa84376c;
            if (iVar2 != 0) {
              lVar5 = 0x2e32b43e5a944883;
            }
          }
        }
        goto LAB_0013a1a8;
      }
      if (lVar3 != -0x2b6a90aa3ab0d2e2) {
        if (lVar3 == -0x2a6d75822584bc5c) {
          lVar5 = 0x592e18e318d186e5;
          if (DAT_0021f6c5 == '\0') {
            lVar5 = -0x375f7518222c6a95;
          }
        }
        else if (lVar3 == -0x291e6dc6c4531137) {
          lVar5 = -0x368aa5e172d1d4ca;
        }
        goto LAB_0013a1a8;
      }
    }
LAB_0013a190:
    local_94 = 1;
    lVar5 = 0x152c4648dd0209d6;
    goto LAB_0013a1a8;
  }
  if (lVar3 < -0x5b1e4a1653dd5b77) {
    if (lVar3 < -0x6bd9de011b3b92e1) {
      if (lVar3 < -0x77f907de888bf9fc) {
        lVar5 = -0x5c6a3741260c5ed9;
        if (lVar3 != -0x79799f3c78abc4cf) {
          if (lVar3 == -0x7977feb6284f9313) {
            iVar2 = FUN_00212730(0,1,&DAT_0021f440);
            lVar5 = -0x40337ee37fda7022;
            if (iVar2 != 0) {
              lVar5 = 0x48f5d9219641c8f;
            }
          }
          else {
            lVar5 = lVar3;
            if (lVar3 == -0x78308f54c29df569) {
              lVar5 = 0x2b3aca66c2adb052;
            }
          }
        }
      }
      else if (lVar3 < -0x726a1b4e727ced10) {
        lVar5 = -0xb110c8706761653;
        if ((lVar3 != -0x77f907de888bf9fc) && (lVar5 = lVar3, lVar3 == -0x767e871b2012785e)) {
          lVar5 = -0x1a21e7b68b9ca32e;
          if (DAT_0021f6c7 == '\0') {
            lVar5 = -0x5719dffb4694c015;
          }
        }
      }
      else {
        lVar5 = -0x5fc2a67fb50bae7c;
        if ((lVar3 != -0x726a1b4e727ced10) && (lVar5 = lVar3, lVar3 == -0x6e7c5b485ee17cc8)) {
          lVar5 = 0x3fd62cff32aaded;
        }
      }
      goto LAB_0013a1a8;
    }
    if (-0x648d4d94cd6a628b < lVar3) {
      if (lVar3 < -0x5fc2a67fb50bae7c) {
        lVar5 = -0x4723b1428f4927a5;
        if ((lVar3 != -0x648d4d94cd6a628a) && (lVar5 = lVar3, lVar3 == -0x625b19841a34718f)) {
          DAT_0021f42c = 0;
          lVar3 = FUN_001e16c4(&DAT_0021cfa0);
          lVar5 = 0x309be47c902efe01;
          if (lVar3 != local_a0) {
            lVar5 = 0x3a8c282b046ae894;
          }
        }
      }
      else if (lVar3 == -0x5fc2a67fb50bae7c) {
        local_b8 = *(long *)(param_1 + 0x18);
        lVar5 = 0x355e517bcfdf2a36;
        if (local_b8 != 0) {
          lVar5 = -0x5a52d615aa969f08;
        }
      }
      else if (lVar3 == -0x5c6a3741260c5ed9) {
        iVar2 = FUN_00212730(0,1,&DAT_0021f43c);
        lVar5 = 0x70b8c9173e81aeff;
        if (iVar2 != 0) {
          lVar5 = 0x430820f9d90c8d89;
        }
      }
      goto LAB_0013a1a8;
    }
    if (lVar3 != -0x6bd9de011b3b92e1) {
      if (lVar3 == -0x6aeb58d91fbd62aa) {
        DAT_0021f43c = 0;
        lVar3 = FUN_001e16c4(&DAT_0021d000);
        lVar5 = -0x77f907de888bf9fc;
        if (lVar3 != local_b0) {
          lVar5 = -0x403e3b44e0ee251c;
        }
      }
      else if (lVar3 == -0x6aa20393cc620055) {
        lVar5 = 0x6926480414329710;
      }
      goto LAB_0013a1a8;
    }
  }
  else {
    if (-0x55c131ac1e8abcf8 < lVar3) {
      if (lVar3 < -0x4e68f673c8eae86a) {
        if (lVar3 < -0x525ce671aa84376c) {
          if (lVar3 == -0x55c131ac1e8abcf7) {
            lVar5 = -0x1a19f2a673a7adf0;
            if (DAT_0021f6c4 == '\0') {
              lVar5 = 0x320dc3f95e3981ef;
            }
          }
          else if (lVar3 == -0x54acd627d032b29e) {
            lVar5 = -0x6aeb58d91fbd62aa;
          }
        }
        else {
          if (lVar3 == -0x525ce671aa84376c) goto LAB_0013a190;
          if (lVar3 == -0x515fda2498152fe5) {
            lVar5 = 0x11faa86c0d9270ce;
          }
        }
      }
      else if (lVar3 < -0x4c11a3a25645117d) {
        if (lVar3 == -0x4e68f673c8eae86a) {
          lVar5 = -0x1e45cb9e2390601b;
          goto LAB_0013bec8;
        }
        if (lVar3 == -0x4d163ece956987cf) {
          lVar5 = 0x79d78e4630444031;
LAB_0013b7b4:
          DAT_0021cffc = DAT_0021cffc ^ 0xe1;
          DAT_0021cffb = DAT_0021cffb ^ 0xe1;
          DAT_0021cffa = DAT_0021cffa ^ 0xe1;
          DAT_0021cff9 = DAT_0021cff9 ^ 0xe1;
          DAT_0021cff8 = DAT_0021cff8 ^ 0xe1;
          uRam000000000021cfe8 = uRam000000000021cfe8 ^ 0xe1e1e1e1e1e1e1e1;
          _DAT_0021cfe0 = _DAT_0021cfe0 ^ 0xe1e1e1e1e1e1e1e1;
          DAT_0021cff0 = DAT_0021cff0 ^ 0xe1e1e1e1e1e1e1e1;
          DAT_0021f6c7 = '\x01';
        }
      }
      else if (lVar3 == -0x4c11a3a25645117d) {
        DAT_0021f430 = 0;
        iVar2 = FUN_001e1c70(lVar4,&DAT_0021cfa8,local_a0);
        lVar5 = -0x2b6a90aa3ab0d2e2;
        if (iVar2 != 0) {
          lVar5 = 0x270226aff9339f1c;
        }
      }
      else if (lVar3 == -0x47ce3145def49431) {
        lVar5 = 0x26850fceadcc7fe;
      }
      goto LAB_0013a1a8;
    }
    if (lVar3 < -0x59f39cb721bbb66e) {
      lVar5 = 0x15012e61d93893df;
      if (lVar3 != -0x5b1e4a1653dd5b77) {
        if (lVar3 == -0x5a624ba689a22c86) {
          DAT_0021f438 = 0;
          iVar2 = FUN_001e1c70(local_b8,&DAT_0021cfe0,local_a8);
          lVar5 = 0x60d0fc447b1ffd87;
          if (iVar2 != 0) {
            lVar5 = -0x5b2c373ff38b084;
          }
        }
        else {
          lVar5 = lVar3;
          if (lVar3 == -0x5a52d615aa969f08) {
            local_a8 = FUN_001e16c4(local_b8);
            lVar5 = -0x5b1e4a1653dd5b77;
            if (local_a8 != 0) {
              lVar5 = -0x47ce3145def49431;
            }
          }
        }
      }
      goto LAB_0013a1a8;
    }
    if (-0x57dd9a2c1d09c0f4 < lVar3) {
      if (lVar3 == -0x57dd9a2c1d09c0f3) {
        lVar5 = 0x3fd62cff32aaded;
        goto LAB_0013c1f8;
      }
      if (lVar3 == -0x5719dffb4694c015) {
        lVar5 = -0x5a624ba689a22c86;
        goto LAB_0013b7b4;
      }
      goto LAB_0013a1a8;
    }
    if (lVar3 == -0x59f39cb721bbb66e) {
      iVar2 = FUN_00212730(0,1,&DAT_0021f440);
      lVar5 = 0x77ee05b53276736d;
      if (iVar2 != 0) {
        lVar5 = -0x1dd02cdcdc50fab5;
      }
      goto LAB_0013a1a8;
    }
    if (lVar3 != -0x59007367243a666b) goto LAB_0013a1a8;
  }
LAB_0013b594:
  local_94 = 0;
  lVar5 = 0x152c4648dd0209d6;
  goto LAB_0013a1a8;
}

