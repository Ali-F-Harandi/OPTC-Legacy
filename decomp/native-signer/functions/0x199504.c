// rea decompile_all
// name: FUN_00199504
// address: 0x199504
// body: available
// range: 0x199504-0x19a04b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00199504(int *param_1,long *param_2,long param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int unaff_w22;
  long unaff_x27;
  long local_80;
  int local_78;
  int local_74;
  
  lVar1 = -0x123ccbfda5676598;
  if (param_3 != 0) {
    lVar1 = 0x3dc350042b063a31;
  }
  lVar3 = 0x551be6b2930a170a;
LAB_0019960c:
  do {
    while (lVar4 = lVar3, lVar3 = lVar4, -0x123ccbfda5676599 < lVar4) {
      if (lVar4 < 0x265df0c89296424a) {
        if (lVar4 < -0x20730e5f7ca40ef) {
          if (lVar4 < -0xdb01cb9451425b6) {
            if (lVar4 == -0x123ccbfda5676598) {
              local_74 = 3;
              goto LAB_00199f90;
            }
            if (lVar4 == -0xf01552c0fa0cc6c) {
              *param_1 = unaff_w22;
              lVar3 = 0x265df0c89296424a;
            }
          }
          else if (lVar4 == -0xdb01cb9451425b6) {
            unaff_w22 = 0x1b;
            lVar3 = -0xf01552c0fa0cc6c;
          }
          else if (lVar4 == -0x52baa72955a2e6c) {
            DAT_0021e410 = DAT_0021e410 ^ 0x1e;
            DAT_0021e411 = DAT_0021e411 ^ 0x1e;
            _DAT_0021e400 = _DAT_0021e400 ^ 0x1e1e1e1e1e1e1e1e;
            uRam000000000021e408 = uRam000000000021e408 ^ 0x1e1e1e1e1e1e1e1e;
            DAT_0021fa1e = '\x01';
            lVar3 = 0xcf829476e434ac5;
          }
        }
        else if (lVar4 < 0xcf829476e434ac5) {
          if (lVar4 == -0x20730e5f7ca40ef) {
            iVar2 = FUN_00212730(0,1,&DAT_0021f95c);
            lVar3 = -0x2af42b94c26da979;
            if (iVar2 != 0) {
              lVar3 = -0x6c385ca7d07470f7;
            }
          }
          else if (lVar4 == -0x12b96962316b855) {
            lVar3 = -0xdb01cb9451425b6;
            if (*param_4 != 0) {
              lVar3 = 0x55810e049c3b199b;
            }
          }
        }
        else if (lVar4 == 0xcf829476e434ac5) {
          DAT_0021f95c = 0;
          local_80 = (**(code **)(*param_2 + 0x108))(param_2,unaff_x27,&DAT_0021e400,&DAT_0021e420);
          lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar3 = -0x233d5b9cff31d5c0;
          if (lVar4 != 0) {
            lVar3 = -0x3d326309acf616c3;
          }
        }
        else {
          lVar3 = 0x265df0c89296424a;
          if ((lVar4 != 0x205e572a5fb15ff6) && (lVar3 = lVar4, lVar4 == 0x2561e52f23f8aa11)) {
            local_78 = 0x1b;
LAB_00199ee0:
            lVar3 = -0x1818a37cd931d0c1;
          }
        }
      }
      else if (lVar4 < 0x3dc350042b063a31) {
        if (lVar4 < 0x3549dfe81e4ce5c0) {
          if (lVar4 == 0x265df0c89296424a) {
            (**(code **)(*param_2 + 0xb8))(param_2,unaff_x27);
            lVar3 = -0x131f726233093d6b;
            if (*param_1 != 0) {
              lVar3 = -0x2eea563a725b4f08;
            }
          }
          else if (lVar4 == 0x322e615521ffc765) {
            lVar3 = -0x4f3e3badc8a2b846;
            if (DAT_0021fa1f == '\0') {
              lVar3 = -0x4b8482ee1c8f5151;
            }
          }
        }
        else if (lVar4 == 0x3549dfe81e4ce5c0) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f960);
          lVar3 = 0x322e615521ffc765;
          if (iVar2 != 0) {
            lVar3 = 0x5a0c64ad9216458a;
          }
        }
        else if (lVar4 == 0x3d2649a14878ff8f) {
          *param_4 = 0;
          lVar3 = -0x161598adfc3d89d1;
        }
      }
      else if (lVar4 < 0x551be6b2930a170a) {
        if (lVar4 == 0x3dc350042b063a31) {
          unaff_x27 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
          lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar3 = -0x65215eb17b94cd46;
          if (lVar4 != 0) {
            lVar3 = -0x1ec6deb8d41e8ff1;
          }
        }
        else if (lVar4 == 0x49bd8cb9230e19e9) {
          lVar3 = 0x3d2649a14878ff8f;
        }
      }
      else {
        lVar3 = 0x3549dfe81e4ce5c0;
        if (((lVar4 != 0x5a0c64ad9216458a) &&
            (lVar3 = 0x265df0c89296424a, lVar4 != 0x55810e049c3b199b)) &&
           (lVar3 = lVar4, lVar4 == 0x551be6b2930a170a)) {
          lVar3 = lVar1;
        }
      }
    }
    if (lVar4 < -0x3d326309acf616c3) {
      if (lVar4 < -0x5c2e40d941c67def) {
        if (lVar4 < -0x65215eb17b94cd46) {
          lVar3 = -0x20730e5f7ca40ef;
          if ((lVar4 != -0x6c385ca7d07470f7) && (lVar3 = lVar4, lVar4 == -0x6b79b62fd0694dee)) {
            lVar3 = (**(code **)(*param_2 + 0x110))(param_2,param_3,local_80);
            *param_4 = lVar3;
            lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar3 = -0x12b96962316b855;
            if (lVar4 != 0) {
              lVar3 = 0x2561e52f23f8aa11;
            }
          }
        }
        else if (lVar4 == -0x65215eb17b94cd46) {
          lVar3 = -0x1c82bed67e0e8ce5;
          if (unaff_x27 != 0) {
            lVar3 = -0x5c2e40d941c67def;
          }
        }
        else if (lVar4 == -0x60bca5866b97db68) {
          unaff_w22 = 0x11;
          lVar3 = -0xf01552c0fa0cc6c;
        }
      }
      else if (lVar4 < -0x4b8482ee1c8f5151) {
        lVar3 = 0x3549dfe81e4ce5c0;
        if ((lVar4 != -0x5c2e40d941c67def) && (lVar3 = lVar4, lVar4 == -0x4f3e3badc8a2b846)) {
          lVar3 = -0x42908efb1e7a682a;
        }
      }
      else if (lVar4 == -0x4b8482ee1c8f5151) {
        _DAT_0021e420 = _DAT_0021e420 ^ 0x9090909090909090;
        uRam000000000021e428 = uRam000000000021e428 ^ 0x9090909090909090;
        _DAT_0021e430 = _DAT_0021e430 ^ 0x9090909090909090;
        uRam000000000021e438 = uRam000000000021e438 ^ 0x9090909090909090;
        DAT_0021fa1f = '\x01';
        lVar3 = -0x42908efb1e7a682a;
      }
      else if (lVar4 == -0x42d8fed53bfa6155) {
        *param_1 = local_74;
        lVar3 = 0x3d2649a14878ff8f;
      }
      else if (lVar4 == -0x42908efb1e7a682a) {
        DAT_0021f960 = 0;
        lVar3 = -0x20730e5f7ca40ef;
      }
      goto LAB_0019960c;
    }
    if (lVar4 < -0x1c82bed67e0e8ce5) {
      if (lVar4 < -0x2af42b94c26da979) {
        if (lVar4 == -0x3d326309acf616c3) {
          local_78 = 0x11;
          goto LAB_00199ee0;
        }
        if (lVar4 == -0x2eea563a725b4f08) {
          lVar3 = 0x3d2649a14878ff8f;
        }
      }
      else if (lVar4 == -0x2af42b94c26da979) {
        lVar3 = -0x1462c49031921a27;
        if (DAT_0021fa1e == '\0') {
          lVar3 = -0x52baa72955a2e6c;
        }
      }
      else if (lVar4 == -0x233d5b9cff31d5c0) {
        lVar3 = -0x60bca5866b97db68;
        if (local_80 != 0) {
          lVar3 = -0x6b79b62fd0694dee;
        }
      }
      else if (lVar4 == -0x1ec6deb8d41e8ff1) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        lVar3 = 0x49bd8cb9230e19e9;
        if (unaff_x27 != 0) {
          lVar3 = 0x205e572a5fb15ff6;
        }
        *param_1 = 0x11;
      }
    }
    else if (lVar4 < -0x161598adfc3d89d1) {
      if (lVar4 == -0x1c82bed67e0e8ce5) {
        local_74 = 0x11;
LAB_00199f90:
        lVar3 = -0x42d8fed53bfa6155;
      }
      else if (lVar4 == -0x1818a37cd931d0c1) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        lVar3 = -0xf01552c0fa0cc6c;
        unaff_w22 = local_78;
      }
    }
    else {
      lVar3 = 0xcf829476e434ac5;
      if (((lVar4 != -0x1462c49031921a27) &&
          (lVar3 = -0x161598adfc3d89d1, lVar4 != -0x131f726233093d6b)) &&
         (lVar3 = lVar4, lVar4 == -0x161598adfc3d89d1)) {
        return;
      }
    }
  } while( true );
}

