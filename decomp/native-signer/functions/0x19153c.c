// rea decompile_all
// name: FUN_0019153c
// address: 0x19153c
// body: available
// range: 0x19153c-0x19237b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0019153c(int *param_1,long *param_2,long param_3,long param_4,undefined4 param_5,
                 long *param_6)

{
  long lVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x25;
  long local_c0;
  long local_b0;
  int local_a4;
  long local_98;
  int local_8c;
  int local_7c;
  long local_78;
  long local_68;
  
  lVar1 = 0x6429008ef59692fe;
  if (param_4 == 0 || param_3 == 0) {
    lVar1 = 0x361162fa99986d3c;
  }
  lVar3 = lVar1;
  lVar6 = -0x4e299df62a7cac77;
LAB_00191648:
  do {
    lVar8 = lVar6;
    lVar7 = lVar3;
    lVar6 = lVar8;
    lVar3 = lVar7;
    if (0x7be06a5e8f3e514 < lVar8) {
      if (0x533a416780d3c554 < lVar8) {
        if (lVar8 < 0x6429008ef59692fe) {
          if (0x57e9a4a0af4641bc < lVar8) {
            if (lVar8 == 0x57e9a4a0af4641bd) {
              *param_1 = local_a4;
              lVar6 = 0x47b7536cc82d3da1;
            }
            else {
              if (lVar8 == 0x5df2e381f57d0c3d) {
                local_78 = 0;
                local_7c = 0x11;
                goto LAB_001921e4;
              }
              if (lVar8 == 0x63366f9b130dac94) {
                lVar6 = 0x7d805792497b81d6;
              }
            }
            goto LAB_00191648;
          }
          lVar3 = unaff_x25;
          lVar6 = -0x2ef5dc14607801bd;
          if ((lVar8 == 0x533a416780d3c555) ||
             (lVar3 = lVar7, lVar6 = lVar8, lVar8 != 0x55183fdd1ababed4)) goto LAB_00191648;
          lVar6 = 0x7f495c43d9bfe479;
          lVar8 = 0x2b7a8afa235a4085;
          cVar2 = DAT_0021fa08;
        }
        else {
          if (lVar8 < 0x7854f9396bb107a0) {
            if (lVar8 == 0x6429008ef59692fe) {
              local_68 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
              lVar7 = (**(code **)(*param_2 + 0x78))(param_2);
              lVar6 = 0x77d3a46d4bf10f6f;
              if (lVar7 != 0) {
                lVar6 = 0x359a91a576f35a55;
              }
            }
            else {
              lVar6 = 0x47b7536cc82d3da1;
              if ((lVar8 != 0x6c506d2637e611ba) && (lVar6 = lVar8, lVar8 == 0x77d3a46d4bf10f6f)) {
                bVar4 = local_68 == 0;
                lVar6 = 0x2bb3b80d6cc13f4;
                lVar7 = -0xce2353fa3c0de74;
                goto LAB_00191640;
              }
            }
            goto LAB_00191648;
          }
          if (lVar8 != 0x7854f9396bb107a0) {
            if (lVar8 == 0x7d805792497b81d6) {
              DAT_0021f908 = 0;
              lVar6 = -0x6ca1699278fbc407;
            }
            else if (lVar8 == 0x7f495c43d9bfe479) {
              lVar6 = 0x1a3f0d6dc6e8ddd;
            }
            goto LAB_00191648;
          }
          lVar6 = 0x63366f9b130dac94;
          lVar8 = -0x4c9065780aea359c;
          cVar2 = DAT_0021fa09;
        }
        lVar3 = lVar7;
        if (cVar2 == '\0') {
          lVar6 = lVar8;
        }
        goto LAB_00191648;
      }
      if (lVar8 < 0x2928fe110bd1eabb) {
        if (lVar8 < 0x13dbd2f4a45142f5) {
          if (lVar8 == 0x7be06a5e8f3e515) {
            *param_1 = local_7c;
            lVar3 = local_78;
            lVar6 = -0x2ef5dc14607801bd;
          }
          else if (lVar8 == 0xf7154abbfda6d5d) {
            (**(code **)(*param_2 + 0x80))(param_2);
            (**(code **)(*param_2 + 0x88))(param_2);
            local_78 = local_98;
            local_7c = local_8c;
            lVar6 = 0x7be06a5e8f3e515;
          }
        }
        else if (lVar8 == 0x13dbd2f4a45142f5) {
          local_8c = 0x21;
LAB_00192318:
          lVar6 = 0xf7154abbfda6d5d;
          local_98 = unaff_x25;
        }
        else if (lVar8 == 0x13fd2d0a2ed478ca) {
          lVar3 = 0;
          lVar6 = -0x2ef5dc14607801bd;
        }
        else if (lVar8 == 0x14036979895103a6) {
          lVar6 = (**(code **)(*param_2 + 0x110))(param_2,param_3,local_b0,unaff_x25,param_5);
          *param_6 = lVar6;
          lVar7 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar6 = -0x4eaa9e97fc9ab0fd;
          if (lVar7 != 0) {
            lVar6 = -0x789fa15714512d95;
          }
        }
      }
      else if (lVar8 < 0x361162fa99986d3c) {
        if (lVar8 == 0x2928fe110bd1eabb) {
          (**(code **)(*param_2 + 0xb8))(param_2,local_c0);
          lVar6 = -0x695144aef4351566;
        }
        else if (lVar8 == 0x2b7a8afa235a4085) {
          DAT_0021e110 = DAT_0021e110 ^ 0xe2;
          DAT_0021e111 = DAT_0021e111 ^ 0xe2;
          DAT_0021e112 = DAT_0021e112 ^ 0xe2;
          DAT_0021e113 = DAT_0021e113 ^ 0xe2;
          DAT_0021e114 = DAT_0021e114 ^ 0xe2;
          _DAT_0021e100 = _DAT_0021e100 ^ 0xe2e2e2e2e2e2e2e2;
          uRam000000000021e108 = uRam000000000021e108 ^ 0xe2e2e2e2e2e2e2e2;
          DAT_0021fa08 = '\x01';
          lVar6 = 0x1a3f0d6dc6e8ddd;
        }
        else if (lVar8 == 0x359a91a576f35a55) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          lVar6 = 0x6c506d2637e611ba;
          if (local_68 != 0) {
            lVar6 = 0x13fd2d0a2ed478ca;
          }
          *param_1 = 0x11;
        }
      }
      else if (lVar8 == 0x361162fa99986d3c) {
        local_a4 = 3;
LAB_00192248:
        lVar6 = 0x57e9a4a0af4641bd;
      }
      else {
        lVar6 = 0x47b7536cc82d3da1;
        if ((lVar8 != 0x3f0bd45daa6221b4) && (lVar6 = lVar8, lVar8 == 0x47b7536cc82d3da1)) {
          *param_6 = 0;
          lVar6 = -0x846555cac12492d;
        }
      }
      goto LAB_00191648;
    }
    if (-0x4deb3b7cb6b14d40 < lVar8) {
      if (lVar8 < -0xce2353fa3c0de74) {
        if (lVar8 < -0x3d1bfd2f6117f838) {
          lVar6 = -0x846555cac12492d;
          if ((lVar8 != -0x4deb3b7cb6b14d3f) && (lVar6 = lVar8, lVar8 == -0x4c9065780aea359c)) {
            _DAT_0021e120 = _DAT_0021e120 ^ 0x9e9e9e9e9e9e9e9e;
            uRam000000000021e128 = uRam000000000021e128 ^ 0x9e9e9e9e9e9e9e9e;
            _DAT_0021e130 = _DAT_0021e130 ^ 0x9e9e9e9e9e9e9e9e;
            uRam000000000021e138 = uRam000000000021e138 ^ 0x9e9e9e9e9e9e9e9e;
            DAT_0021e158 = DAT_0021e158 ^ 0x9e;
            _DAT_0021e140 = _DAT_0021e140 ^ 0x9e9e9e9e9e9e9e9e;
            uRam000000000021e148 = uRam000000000021e148 ^ 0x9e9e9e9e9e9e9e9e;
            DAT_0021e150 = DAT_0021e150 ^ 0x9e9e9e9e9e9e9e9e;
            DAT_0021fa09 = '\x01';
            lVar6 = 0x7d805792497b81d6;
          }
        }
        else {
          lVar6 = -0x6ca1699278fbc407;
          if (lVar8 != -0x3d1bfd2f6117f838) {
            if (lVar8 == -0x2ef5dc14607801bd) {
              (**(code **)(*param_2 + 0xb8))(param_2,local_68);
              lVar6 = -0x5e837daa99845b8d;
              local_c0 = lVar7;
              if (lVar7 != 0) {
                lVar6 = 0x2928fe110bd1eabb;
              }
            }
            else {
              lVar6 = lVar8;
              if (lVar8 == -0x1d97edce4aabe65f) {
                local_7c = 0x1b;
                local_78 = unaff_x25;
LAB_001921e4:
                lVar6 = 0x7be06a5e8f3e515;
              }
            }
          }
        }
      }
      else if (lVar8 < -0x34730b978f0510e) {
        lVar6 = -0x6c45fd41b9b9e9b0;
        if (lVar8 != -0xce2353fa3c0de74) {
          if (lVar8 == -0x951b8beaaf9633d) {
            unaff_x25 = (**(code **)(*param_2 + 0x538))(param_2,param_4);
            lVar7 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar6 = -0x689f984316d27398;
            if (lVar7 != 0) {
              lVar6 = 0x13dbd2f4a45142f5;
            }
          }
          else {
            lVar6 = lVar8;
            if (lVar8 == -0x846555cac12492d) {
              return;
            }
          }
        }
      }
      else {
        if (lVar8 == -0x34730b978f0510e) {
          bVar4 = local_b0 == 0;
          lVar6 = 0x5df2e381f57d0c3d;
          lVar7 = -0x951b8beaaf9633d;
          goto LAB_00191640;
        }
        if (lVar8 == 0x1a3f0d6dc6e8ddd) {
          DAT_0021f904 = 0;
          local_b0 = (**(code **)(*param_2 + 0x108))(param_2,local_68,&DAT_0021e100,&DAT_0021e120);
          lVar7 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar6 = -0x34730b978f0510e;
          if (lVar7 != 0) {
            lVar6 = -0x759693278ea668ee;
          }
        }
        else if (lVar8 == 0x2bb3b80d6cc13f4) {
          local_a4 = 0x11;
          goto LAB_00192248;
        }
      }
      goto LAB_00191648;
    }
    if (-0x695144aef4351567 < lVar8) {
      if (lVar8 < -0x5e837daa99845b8d) {
        if (lVar8 == -0x695144aef4351566) {
          lVar6 = -0x4deb3b7cb6b14d3f;
          bVar4 = *param_1 == 0;
          lVar7 = 0x3f0bd45daa6221b4;
        }
        else {
          if (lVar8 != -0x689f984316d27398) {
            if (lVar8 == -0x60389851741e0b7f) {
              local_7c = 0x21;
              local_78 = unaff_x25;
              goto LAB_001921e4;
            }
            goto LAB_00191648;
          }
          lVar7 = 0x14036979895103a6;
          lVar6 = -0x60389851741e0b7f;
          bVar4 = unaff_x25 == 0;
        }
      }
      else {
        lVar6 = -0x695144aef4351566;
        if (lVar8 == -0x5e837daa99845b8d) goto LAB_00191648;
        if (lVar8 != -0x4eaa9e97fc9ab0fd) {
          lVar6 = lVar8;
          if (lVar8 == -0x4e299df62a7cac77) {
            lVar6 = lVar1;
          }
          goto LAB_00191648;
        }
        lVar6 = -0x1d97edce4aabe65f;
        bVar4 = *param_6 == 0;
        lVar7 = 0x533a416780d3c555;
      }
LAB_00191640:
      if (!bVar4) {
        lVar6 = lVar7;
      }
      goto LAB_00191648;
    }
    if (lVar8 < -0x6ca1699278fbc407) {
      if (lVar8 == -0x789fa15714512d95) {
        local_8c = 0x1b;
        goto LAB_00192318;
      }
      if (lVar8 == -0x759693278ea668ee) {
        local_98 = 0;
        local_8c = 0x11;
        lVar6 = 0xf7154abbfda6d5d;
      }
    }
    else if (lVar8 == -0x6ca1699278fbc407) {
      iVar5 = FUN_00212730(0,1,&DAT_0021f904);
      lVar6 = 0x55183fdd1ababed4;
      if (iVar5 != 0) {
        lVar6 = -0x3d1bfd2f6117f838;
      }
    }
    else if (lVar8 == -0x6c45fd41b9b9e9b0) {
      iVar5 = FUN_00212730(0,1,&DAT_0021f908);
      lVar6 = 0x7854f9396bb107a0;
      if (iVar5 != 0) {
        lVar6 = -0x6b6c9ed4099e253b;
      }
    }
    else if (lVar8 == -0x6b6c9ed4099e253b) {
      lVar6 = -0x6c45fd41b9b9e9b0;
    }
  } while( true );
}

