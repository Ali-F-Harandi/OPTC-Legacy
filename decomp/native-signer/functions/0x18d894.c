// rea decompile_all
// name: FUN_0018d894
// address: 0x18d894
// body: available
// range: 0x18d894-0x18e6a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0018d894(int *param_1,long *param_2,long param_3,long param_4,long *param_5)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long local_b0;
  int local_a4;
  code *local_a0;
  int local_94;
  int local_7c;
  long local_78;
  long local_68;
  
  lVar1 = -0x368aa5e172d1d4ca;
  if (param_3 != 0) {
    lVar1 = 0x7dd7fc86addd1ee1;
  }
  puVar2 = &DAT_0021d8c4;
  if (param_4 != 0) {
    puVar2 = &DAT_0021d990;
  }
  lVar3 = -0x46c086819cc7a59d;
  if (param_4 != 0) {
    lVar3 = -0x17fc42d6e810b0d9;
  }
  lVar4 = -0x291e6dc6c4531137;
LAB_0018d9f0:
  while (lVar6 = lVar4, lVar4 = lVar6, -0x17fc42d6e810b0da < lVar6) {
    if (lVar6 < 0x270226aff9339f1c) {
      if (lVar6 < 0x3fd62cff32aaded) {
        if (lVar6 < -0x618ac82760da4fb) {
          if (lVar6 == -0x17fc42d6e810b0d9) {
            local_b0 = (*local_a0)(param_2,param_3,local_78,param_4);
LAB_0018e650:
            lVar4 = -0x648d4d94cd6a628a;
          }
          else if (lVar6 == -0x6a84446ba960b44) {
            DAT_0021d8c4 = DAT_0021d8c4 ^ 0x9c;
            DAT_0021d8c5 = DAT_0021d8c5 ^ 0x9c;
            DAT_0021d8c6 = DAT_0021d8c6 ^ 0x9c;
            DAT_0021d8c7 = DAT_0021d8c7 ^ 0x9c;
            DAT_0021d8c8 = DAT_0021d8c8 ^ 0x9c;
            DAT_0021f9c6 = '\x01';
            lVar4 = 0x57ced258cdc85286;
          }
        }
        else if (lVar6 == -0x618ac82760da4fb) {
          local_a0 = *(code **)(*param_2 + 0x110);
          lVar4 = lVar3;
        }
        else {
          lVar4 = 0x2150ddd913c0e1d8;
          if ((lVar6 != -0x5b2c373ff38b084) && (lVar4 = lVar6, lVar6 == 0x26850fceadcc7fe)) {
            DAT_0021d990 = DAT_0021d990 ^ 0x2c;
            DAT_0021d991 = DAT_0021d991 ^ 0x2c;
            DAT_0021d992 = DAT_0021d992 ^ 0x2c;
            DAT_0021d994 = DAT_0021d994 ^ 0x2c;
            DAT_0021d995 = DAT_0021d995 ^ 0x2c;
            DAT_0021d996 = DAT_0021d996 ^ 0x2c;
            DAT_0021d993 = DAT_0021d993 ^ 0x2c;
            DAT_0021f9ce = '\x01';
            lVar4 = 0x270dd473f4f78fe2;
          }
        }
      }
      else if (lVar6 < 0x15012e61d93893df) {
        lVar4 = -0x57dd9a2c1d09c0f3;
        if (lVar6 != 0x3fd62cff32aaded) {
          if (lVar6 == 0x108477934ca198f4) {
            local_a4 = 0x11;
            goto LAB_0018e534;
          }
          lVar4 = lVar6;
          if (lVar6 == 0x11b0c6c5b0462373) {
            local_7c = 0x11;
            goto LAB_0018d9dc;
          }
        }
      }
      else if (lVar6 == 0x15012e61d93893df) {
        *param_1 = local_94;
        lVar4 = 0x2150ddd913c0e1d8;
      }
      else if (lVar6 == 0x2150ddd913c0e1d8) {
        *param_5 = 0;
        lVar4 = 0x47b4f938162abdf1;
      }
      else if (lVar6 == 0x247cdab85a7ea4bc) {
        lVar4 = 0x11b0c6c5b0462373;
        if (local_78 != 0) {
          lVar4 = -0x618ac82760da4fb;
        }
      }
    }
    else if (lVar6 < 0x60d0fc447b1ffd87) {
      if (lVar6 < 0x430820f9d90c8d89) {
        lVar4 = -0x2b6a90aa3ab0d2e2;
        if (lVar6 != 0x270226aff9339f1c) {
          if (lVar6 == 0x270dd473f4f78fe2) {
            DAT_0021f814 = 0;
            lVar4 = -0x57dd9a2c1d09c0f3;
          }
          else {
            lVar4 = lVar6;
            if (lVar6 == 0x355e517bcfdf2a36) {
              DAT_0021e054 = DAT_0021e054 ^ 0x58;
              DAT_0021e055 = DAT_0021e055 ^ 0x58;
              DAT_0021e056 = DAT_0021e056 ^ 0x58;
              DAT_0021e058 = DAT_0021e058 ^ 0x58;
              DAT_0021e059 = DAT_0021e059 ^ 0x58;
              DAT_0021e05a = DAT_0021e05a ^ 0x58;
              DAT_0021e057 = DAT_0021e057 ^ 0x58;
              DAT_0021fa03 = '\x01';
              lVar4 = -0x5a52d615aa969f08;
            }
          }
        }
      }
      else {
        lVar4 = 0x270dd473f4f78fe2;
        if (lVar6 != 0x430820f9d90c8d89) {
          if (lVar6 == 0x57ced258cdc85286) {
            DAT_0021f7f4 = 0;
            local_78 = (**(code **)(*param_2 + 0x108))(param_2,local_68,&DAT_0021e054,puVar2);
            lVar6 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar4 = 0x247cdab85a7ea4bc;
            if (lVar6 != 0) {
              lVar4 = 0x108477934ca198f4;
            }
          }
          else {
            lVar4 = lVar6;
            if (lVar6 == 0x47b4f938162abdf1) {
              return;
            }
          }
        }
      }
    }
    else if (lVar6 < 0x6bb5caaedfb44a56) {
      lVar4 = 0x47b4f938162abdf1;
      if (lVar6 != 0x60d0fc447b1ffd87) {
        if (lVar6 == 0x68e9c4fb6656f93b) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          lVar4 = 0x6926480414329710;
          if (local_68 != 0) {
            lVar4 = 0x6bb5caaedfb44a56;
          }
          *param_1 = 0x11;
        }
        else {
          lVar4 = lVar6;
          if (lVar6 == 0x6926480414329710) {
            lVar4 = 0x2150ddd913c0e1d8;
          }
        }
      }
    }
    else {
      lVar4 = -0x5a624ba689a22c86;
      if (lVar6 != 0x6bb5caaedfb44a56) {
        if (lVar6 == 0x79d78e4630444031) {
          local_7c = 0x1b;
          goto LAB_0018d9dc;
        }
        lVar4 = lVar6;
        if (lVar6 == 0x7dd7fc86addd1ee1) {
          local_68 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
          lVar6 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar4 = -0x375f7518222c6a95;
          if (lVar6 != 0) {
            lVar4 = 0x68e9c4fb6656f93b;
          }
        }
      }
    }
  }
  if (lVar6 < -0x5719dffb4694c015) {
    if (lVar6 < -0x5fc2a67fb50bae7c) {
      if (lVar6 < -0x6aeb58d91fbd62aa) {
        lVar4 = 0x57ced258cdc85286;
        if ((lVar6 != -0x79799f3c78abc4cf) && (lVar4 = lVar6, lVar6 == -0x6bd9de011b3b92e1)) {
          lVar4 = -0x79799f3c78abc4cf;
          if (DAT_0021f9c6 == '\0') {
            lVar4 = -0x6a84446ba960b44;
          }
        }
      }
      else {
        lVar4 = -0x5a52d615aa969f08;
        if (lVar6 != -0x6aeb58d91fbd62aa) {
          if (lVar6 == -0x6aa20393cc620055) {
            (**(code **)(*param_2 + 0x80))(param_2);
            (**(code **)(*param_2 + 0x88))(param_2);
            local_7c = local_a4;
LAB_0018d9dc:
            lVar4 = -0x5719dffb4694c015;
          }
          else {
            lVar4 = lVar6;
            if (lVar6 == -0x648d4d94cd6a628a) {
              *param_5 = local_b0;
              lVar6 = (**(code **)(*param_2 + 0x78))(param_2);
              lVar4 = -0x210a06d0da9c789d;
              if (lVar6 != 0) {
                lVar4 = -0x4723b1428f4927a5;
              }
            }
          }
        }
      }
    }
    else if (lVar6 < -0x5a624ba689a22c86) {
      lVar4 = -0x2b6a90aa3ab0d2e2;
      if (lVar6 != -0x5fc2a67fb50bae7c) {
        if (lVar6 == -0x5c6a3741260c5ed9) {
          lVar4 = 0x430820f9d90c8d89;
          if (DAT_0021f9ce == '\0') {
            lVar4 = 0x26850fceadcc7fe;
          }
        }
        else {
          lVar4 = lVar6;
          if (lVar6 == -0x5b1e4a1653dd5b77) {
            iVar5 = FUN_00212730(0,1,&DAT_0021f814);
            lVar4 = -0x5c6a3741260c5ed9;
            if (iVar5 != 0) {
              lVar4 = -0x47ce3145def49431;
            }
          }
        }
      }
    }
    else if (lVar6 == -0x5a624ba689a22c86) {
      (**(code **)(*param_2 + 0xb8))(param_2,local_68);
      lVar4 = 0x60d0fc447b1ffd87;
      if (*param_1 != 0) {
        lVar4 = -0x5b2c373ff38b084;
      }
    }
    else if (lVar6 == -0x5a52d615aa969f08) {
      DAT_0021f8e8 = 0;
      lVar4 = -0x5b1e4a1653dd5b77;
    }
    else if (lVar6 == -0x57dd9a2c1d09c0f3) {
      iVar5 = FUN_00212730(0,1,&DAT_0021f7f4);
      lVar4 = -0x6bd9de011b3b92e1;
      if (iVar5 != 0) {
        lVar4 = 0x3fd62cff32aaded;
      }
    }
    goto LAB_0018d9f0;
  }
  if (lVar6 < -0x375f7518222c6a95) {
    if (-0x47ce3145def49432 < lVar6) {
      lVar4 = -0x5b1e4a1653dd5b77;
      if (lVar6 != -0x47ce3145def49431) {
        if (lVar6 == -0x4723b1428f4927a5) {
          local_a4 = 0x1b;
LAB_0018e534:
          lVar4 = -0x6aa20393cc620055;
        }
        else {
          lVar4 = lVar6;
          if (lVar6 == -0x46c086819cc7a59d) {
            local_b0 = (*local_a0)(param_2,param_3,local_78);
            goto LAB_0018e650;
          }
        }
      }
      goto LAB_0018d9f0;
    }
    if (lVar6 == -0x5719dffb4694c015) {
      *param_1 = local_7c;
      lVar4 = -0x5a624ba689a22c86;
      goto LAB_0018d9f0;
    }
    lVar4 = -0x5a624ba689a22c86;
    if ((lVar6 == -0x4d163ece956987cf) || (lVar4 = lVar6, lVar6 != -0x4c11a3a25645117d))
    goto LAB_0018d9f0;
    local_94 = 0x11;
  }
  else {
    if (-0x2b6a90aa3ab0d2e3 < lVar6) {
      if (lVar6 == -0x2b6a90aa3ab0d2e2) {
        iVar5 = FUN_00212730(0,1,&DAT_0021f8e8);
        lVar4 = -0x341e94ef7a5b4443;
        if (iVar5 != 0) {
          lVar4 = -0x5fc2a67fb50bae7c;
        }
      }
      else {
        lVar4 = lVar1;
        if ((lVar6 != -0x291e6dc6c4531137) && (lVar4 = lVar6, lVar6 == -0x210a06d0da9c789d)) {
          lVar4 = 0x79d78e4630444031;
          if (*param_5 != 0) {
            lVar4 = -0x4d163ece956987cf;
          }
        }
      }
      goto LAB_0018d9f0;
    }
    if (lVar6 == -0x375f7518222c6a95) {
      lVar4 = -0x4c11a3a25645117d;
      if (local_68 != 0) {
        lVar4 = 0x270226aff9339f1c;
      }
      goto LAB_0018d9f0;
    }
    if (lVar6 != -0x368aa5e172d1d4ca) {
      if (lVar6 == -0x341e94ef7a5b4443) {
        lVar4 = -0x6aeb58d91fbd62aa;
        if (DAT_0021fa03 == '\0') {
          lVar4 = 0x355e517bcfdf2a36;
        }
      }
      goto LAB_0018d9f0;
    }
    local_94 = 3;
  }
  lVar4 = 0x15012e61d93893df;
  goto LAB_0018d9f0;
}

