// rea decompile_all
// name: FUN_00111024
// address: 0x111024
// body: available
// range: 0x111024-0x112f77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x112f74 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00111024(undefined8 param_1,int *param_2,undefined8 param_3,double *param_4)

{
  double *pdVar1;
  double *pdVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  double unaff_d8;
  double unaff_d9;
  double unaff_d10;
  double unaff_d11;
  double unaff_d12;
  double unaff_d13;
  double unaff_d14;
  double unaff_d15;
  double local_a18;
  double local_a10;
  double local_a08;
  uint local_9f4;
  ushort local_9dc [2];
  long local_9d8;
  long local_9d0;
  long local_9c8;
  long local_9c0;
  long local_9b8;
  long local_9b0;
  long local_9a8;
  long local_9a0;
  long local_998;
  long local_990;
  long local_988;
  long local_980;
  long local_978;
  long local_970;
  long local_968;
  long local_960;
  long local_958;
  long local_950;
  long local_948;
  long local_940;
  long local_938;
  long local_930;
  undefined1 auStack_928 [2168];
  long local_b0;
  
  lVar4 = tpidr_el0;
  local_b0 = *(long *)(lVar4 + 0x28);
  local_9dc[0] = 0;
  memset(auStack_928,0,0x878);
  iVar5 = FUN_00166a6c(param_1,param_3,auStack_928);
  lVar3 = -0x19fe551b65af4a47;
  if (iVar5 != 0) {
    lVar3 = -0x28ee212cd644d530;
  }
  pdVar1 = param_4 + 4;
  pdVar2 = param_4 + 1;
  *param_2 = iVar5;
  lVar8 = -0x6bd26373b69e2212;
LAB_00111174:
  lVar7 = lVar8;
  lVar8 = lVar7;
  if (lVar7 < -0x4b1348ce8c76ace) {
    if (-0x3b6e0fe4a7713ec7 < lVar7) {
      if (lVar7 < -0x1c5b2ab53e093884) {
        if (lVar7 < -0x2d6c703c376e87a2) {
          if (lVar7 < -0x3142dac40f10d563) {
            if (lVar7 == -0x3b6e0fe4a7713ec6) {
              lVar8 = -0x7d966677c36dcece;
              if (*(char *)pdVar2 != '\0') {
                lVar8 = 0x3c1d6e269c73b2c4;
              }
            }
            else if (lVar7 == -0x342c3064ebb3f072) {
              lVar8 = -0x6879c2958cba2e8;
              if (*(char *)pdVar2 != '\0') {
                lVar8 = 0x144b21bcbeb71cd5;
              }
            }
            else if (lVar7 == -0x32d8232145aea952) {
              *param_4 = unaff_d13;
              lVar8 = 0x4ee6d1fabee14214;
            }
          }
          else {
            lVar8 = -0x342c3064ebb3f072;
            if (lVar7 != -0x3142dac40f10d563) {
              if (lVar7 == -0x3136ee56265a3c6f) {
                lVar8 = -0x6342739c006cfe70;
                if (*(char *)pdVar2 != '\0') {
                  lVar8 = 0x642e33ff2599bd5c;
                }
              }
              else {
                lVar8 = lVar7;
                if (lVar7 == -0x30c47c559a45f485) {
                  lVar8 = 0x187cf29d06d6bd9e;
                }
              }
            }
          }
        }
        else if (lVar7 < -0x24d3583348e9211e) {
          if (lVar7 == -0x2d6c703c376e87a2) {
            *param_4 = unaff_d8;
            lVar8 = -0x405792201464f5f7;
          }
          else if (lVar7 == -0x2d4673f83300de4f) {
            local_9d8 = 0;
            local_9d0 = 0;
            FUN_001f3abc(0,&local_9d8);
            local_a08 = (double)local_9d0 / 1000000.0 + (double)local_9d8 * 1000.0;
            lVar8 = -0x10f63700d782bf54;
            if (local_a08 - *param_4 <= 15000.0) {
              lVar8 = -0x5a6daaf505e6129c;
            }
          }
          else if (lVar7 == -0x28ee212cd644d530) {
LAB_0011231c:
            local_9f4 = 0;
            lVar8 = -0x58b7102d8e8f33c;
          }
        }
        else if (lVar7 < -0x21b4e69c14fe541b) {
          lVar8 = -0x1c5b2ab53e093884;
          if ((lVar7 != -0x24d3583348e9211e) && (lVar8 = lVar7, lVar7 == -0x22076b5cc3122b5b)) {
            lVar8 = 0x6e518c29e4d03e45;
            if (*(char *)pdVar2 != '\0') {
              lVar8 = 0x6288b31db4af0d0;
            }
          }
        }
        else {
          lVar8 = -0x6d49a2ba3fc929dc;
          if ((lVar7 != -0x21b4e69c14fe541b) && (lVar8 = lVar7, lVar7 == -0x1ea2d9a9bfdbcb59)) {
            local_948 = 0;
            local_940 = 0;
            FUN_001f3abc(0,&local_948);
            unaff_d9 = (double)local_940 / 1000000.0 + (double)local_948 * 1000.0;
            lVar8 = -0x7035e9702086dbee;
            if (unaff_d9 - *param_4 <= 15000.0) {
              lVar8 = -0xae6bb07eec7bcf3;
            }
          }
        }
      }
      else if (lVar7 < -0xf42ba585e897368) {
        if (lVar7 < -0x1583528f277a144d) {
          if (lVar7 == -0x1c5b2ab53e093884) {
            *param_4 = unaff_d11;
            lVar8 = 0x47a378886e13f5f;
          }
          else if (lVar7 == -0x19fe551b65af4a47) {
            FUN_0011e7e0(local_9dc);
            lVar8 = -0x30c47c559a45f485;
            if (local_9dc[0] != 0) {
              lVar8 = 0x20737e34b7c0d799;
            }
          }
          else if (lVar7 == -0x18f68c823630c7e6) {
            lVar8 = -0x2d6c703c376e87a2;
          }
        }
        else if (lVar7 == -0x1583528f277a144d) {
          FUN_002083ac(pdVar1,0x2c);
          param_4[0x47] = (double)((ulong)param_4[0x47] | 1);
          lVar8 = 0xc1c2badab0be0de;
        }
        else {
          if (lVar7 == -0x10f63700d782bf54) {
            lVar8 = 0x40a7395875650256;
            goto LAB_0011116c;
          }
          if (lVar7 == -0xf9c92c752203283) {
            lVar8 = 0xc418a6cc8b6f1ff;
          }
        }
      }
      else if (lVar7 < -0xae6bb07eec7bcf3) {
        lVar8 = 0x39090bd7ea11745f;
        if (lVar7 != -0xf42ba585e897368) {
          if (lVar7 == -0xc85aa91f443b941) {
            lVar8 = -0x2d6c703c376e87a2;
            goto LAB_0011116c;
          }
          lVar8 = lVar7;
          if (lVar7 == -0xb9bd60ca14c8c3d) {
            *param_4 = unaff_d15;
            lVar8 = 0x39090bd7ea11745f;
          }
        }
      }
      else if (lVar7 < -0x58b7102d8e8f33c) {
        lVar8 = -0x74091218846a5104;
        if ((lVar7 != -0xae6bb07eec7bcf3) && (lVar8 = lVar7, lVar7 == -0x6879c2958cba2e8)) {
          local_978 = 0;
          local_970 = 0;
          FUN_001f3abc(0,&local_978);
          unaff_d14 = (double)local_970 / 1000000.0 + (double)local_978 * 1000.0;
          lVar8 = 0x51c02d96c2cc98f2;
          if (unaff_d14 - *param_4 <= 15000.0) {
            lVar8 = 0x18fdc9591ff1c480;
          }
        }
      }
      else if (lVar7 == -0x5278110e52f4ac4) {
        local_968 = 0;
        local_960 = 0;
        FUN_001f3abc(0,&local_968);
        unaff_d15 = (double)local_960 / 1000000.0 + (double)local_968 * 1000.0;
        lVar8 = -0x567b613dcbd338db;
        if (unaff_d15 - *param_4 <= 15000.0) {
          lVar8 = 0x6af93846531afc11;
        }
      }
      else if (lVar7 == -0x58b7102d8e8f33c) {
        param_4[0x47] = (double)((ulong)param_4[0x47] | 0x1181c000010e);
        FUN_00162e08(param_4);
        param_4[0x47] = (double)((ulong)param_4[0x47] | 0x202001000);
        FUN_0016acc8(auStack_928);
        if (*(long *)(lVar4 + 0x28) == local_b0) {
          return local_9f4 & 1;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      goto LAB_00111174;
    }
    if (lVar7 < -0x61e598ced63c221e) {
      if (-0x6d49a2ba3fc929dd < lVar7) {
        if (lVar7 < -0x67a01045c33eebde) {
          if (lVar7 == -0x6d49a2ba3fc929dc) {
            uVar6 = FUN_00112f78(param_2,auStack_928);
            lVar8 = -0x3136ee56265a3c6f;
            if ((uVar6 & 1) == 0) {
              lVar8 = -0x6dbe0b3d2d7a9ff1;
            }
          }
          else {
            lVar8 = lVar3;
            if ((lVar7 != -0x6bd26373b69e2212) && (lVar8 = lVar7, lVar7 == -0x691837bae57ac643)) {
              local_9dc[0] = 0;
              FUN_0012712c(local_9dc);
              lVar8 = 0x4c688c2b3b180e1;
              if (local_9dc[0] != 0) {
                lVar8 = -0x4c71e68197f00951;
              }
            }
          }
        }
        else if (lVar7 == -0x67a01045c33eebde) {
          FUN_002083ac(pdVar1,0x27);
          param_4[0x47] = (double)((ulong)param_4[0x47] | 1);
          lVar8 = -0x342c3064ebb3f072;
        }
        else if (lVar7 == -0x6342739c006cfe70) {
          local_938 = 0;
          local_930 = 0;
          FUN_001f3abc(0,&local_938);
          unaff_d10 = (double)local_930 / 1000000.0 + (double)local_938 * 1000.0;
          lVar8 = 0x61612b56ba58e895;
          if (unaff_d10 - *param_4 <= 15000.0) {
            lVar8 = 0x4ecc90aa236ea5b3;
          }
        }
        else if (lVar7 == -0x63395203aad93369) {
          lVar8 = -0x32d8232145aea952;
          goto LAB_0011116c;
        }
        goto LAB_00111174;
      }
      if (lVar7 < -0x7035e9702086dbee) {
        if (lVar7 == -0x7d966677c36dcece) {
          local_9a8 = 0;
          local_9a0 = 0;
          FUN_001f3abc(0,&local_9a8);
          unaff_d11 = (double)local_9a0 / 1000000.0 + (double)local_9a8 * 1000.0;
          lVar8 = 0x7a1d336c9fe8990f;
          if (unaff_d11 - *param_4 <= 15000.0) {
            lVar8 = -0x24d3583348e9211e;
          }
        }
        else if (lVar7 == -0x74091218846a5104) {
          *param_4 = unaff_d9;
          lVar8 = -0x6d49a2ba3fc929dc;
        }
        else if (lVar7 == -0x7353f89f407630c4) {
          lVar8 = -0x5d2b6741d85f7410;
        }
        goto LAB_00111174;
      }
      if (lVar7 != -0x7035e9702086dbee) {
        if (lVar7 == -0x6dbe0b3d2d7a9ff1) goto LAB_0011231c;
        if (lVar7 == -0x6dba2dd18d641b5c) {
          lVar8 = -0x32d8232145aea952;
        }
        goto LAB_00111174;
      }
      lVar8 = -0x74091218846a5104;
    }
    else {
      if (-0x552bac5ad212f1d0 < lVar7) {
        if (lVar7 < -0x41ecdb8468f6741d) {
          lVar8 = 0x64a4671c7146738b;
          if (lVar7 != -0x552bac5ad212f1cf) {
            if (lVar7 == -0x4d93c90d4c4e8cc5) {
              *param_4 = local_a10;
              lVar8 = -0x691837bae57ac643;
            }
            else {
              lVar8 = lVar7;
              if (lVar7 == -0x4c71e68197f00951) {
                FUN_002083ac(pdVar1,3);
                param_4[0x47] = (double)((ulong)param_4[0x47] | 1);
                lVar8 = 0x9e148cc4f502246;
              }
            }
          }
        }
        else if (lVar7 < -0x405792201464f5f7) {
          if (lVar7 == -0x41ecdb8468f6741d) {
            FUN_002083ac(pdVar1,0x1f);
            param_4[0x47] = (double)((ulong)param_4[0x47] | 1);
            lVar8 = -0x3c3e86bf5c07f00;
          }
          else if (lVar7 == -0x41df0b638b763578) {
            lVar8 = -0x22076b5cc3122b5b;
          }
        }
        else if (lVar7 == -0x405792201464f5f7) {
          local_9dc[0] = 0;
          FUN_001226d0(local_9dc);
          lVar8 = 0x525d1afddf019d;
          if (local_9dc[0] != 0) {
            lVar8 = -0x41ecdb8468f6741d;
          }
        }
        else if (lVar7 == -0x3eef45067d3bf338) {
          local_9b8 = 0;
          local_9b0 = 0;
          FUN_001f3abc(0,&local_9b8);
          local_a18 = (double)local_9b0 / 1000000.0 + (double)local_9b8 * 1000.0;
          lVar8 = 0x14f4c2a3fc87591b;
          if (local_a18 - *param_4 <= 15000.0) {
            lVar8 = -0xf9c92c752203283;
          }
        }
        goto LAB_00111174;
      }
      if (lVar7 < -0x5aa64ba1dacf22c5) {
        lVar8 = -0x4d93c90d4c4e8cc5;
        if (lVar7 != -0x61e598ced63c221e) {
          if (lVar7 == -0x5e0244a9590fe586) {
            uVar6 = FUN_0016521c(auStack_928);
            lVar8 = 0x24abbbfc5d2aac7f;
            if ((uVar6 & 1) == 0) {
              lVar8 = -0x552bac5ad212f1cf;
            }
          }
          else {
            lVar8 = lVar7;
            if (lVar7 == -0x5d2b6741d85f7410) {
              local_9dc[0] = 0;
              FUN_0011f648(local_9dc);
              lVar8 = 0x74a731b62b0290ae;
              if (local_9dc[0] < 3) {
                lVar8 = 0x70d6ef9c84f56d26;
              }
            }
          }
        }
        goto LAB_00111174;
      }
      if (lVar7 == -0x5aa64ba1dacf22c5) {
        *param_4 = unaff_d10;
        lVar8 = 0x472980666c6a03ea;
        goto LAB_00111174;
      }
      lVar8 = 0x40a7395875650256;
      if ((lVar7 == -0x5a6daaf505e6129c) || (lVar8 = lVar7, lVar7 != -0x567b613dcbd338db))
      goto LAB_00111174;
      lVar8 = -0xb9bd60ca14c8c3d;
    }
  }
  else if (lVar7 < 0x40a7395875650256) {
    if (lVar7 < 0x144b21bcbeb71cd5) {
      if (lVar7 < 0x6288b31db4af0d0) {
        if (0x525d1afddf019c < lVar7) {
          lVar8 = -0x3c3e86bf5c07f00;
          if (lVar7 != 0x525d1afddf019d) {
            if (lVar7 == 0x47a378886e13f5f) {
              uVar6 = FUN_00130194(param_1);
              lVar8 = 0x6298686b9f6b9f24;
              if ((uVar6 & 1) == 0) {
                lVar8 = -0x41df0b638b763578;
              }
            }
            else {
              lVar8 = lVar7;
              if (lVar7 == 0x4c688c2b3b180e1) {
                lVar8 = 0x9e148cc4f502246;
              }
            }
          }
          goto LAB_00111174;
        }
        if (lVar7 == -0x4b1348ce8c76ace) {
          lVar8 = 0x7cb93cf37aea7cf9;
          if (*(char *)pdVar2 != '\0') {
            lVar8 = 0x747d75e5c403e07e;
          }
          goto LAB_00111174;
        }
        if (lVar7 != -0x41f7f0095884c7b) {
          if (lVar7 == -0x3c3e86bf5c07f00) {
            lVar8 = -0x1ea2d9a9bfdbcb59;
            if (*(char *)pdVar2 != '\0') {
              lVar8 = -0x21b4e69c14fe541b;
            }
          }
          goto LAB_00111174;
        }
        lVar8 = 0x632d2718836e34f1;
      }
      else {
        if (0xc1c2badab0be0dd < lVar7) {
          if (lVar7 == 0xc1c2badab0be0de) {
            lVar8 = 0x7cdba208eacd72d0;
            if (*(char *)pdVar2 != '\0') {
              lVar8 = 0x7b3d77c4935dca95;
            }
          }
          else if (lVar7 == 0xc418a6cc8b6f1ff) {
            *param_4 = local_a18;
            lVar8 = 0x3dce80f3d755ea8b;
          }
          else if (lVar7 == 0x10778cda4c5f8a73) {
            lVar8 = -0x691837bae57ac643;
          }
          goto LAB_00111174;
        }
        lVar8 = 0x7b7e2b085a916946;
        if (lVar7 == 0x6288b31db4af0d0) goto LAB_00111174;
        if (lVar7 == 0x9e148cc4f502246) {
          lVar8 = -0x3eef45067d3bf338;
          if (*(char *)pdVar2 != '\0') {
            lVar8 = 0x51c7910840e8eaee;
          }
          goto LAB_00111174;
        }
        lVar8 = lVar7;
        if (lVar7 != 0xc11c3ec18b1aa40) goto LAB_00111174;
        lVar8 = -0x4d93c90d4c4e8cc5;
      }
    }
    else {
      if (0x24abbbfc5d2aac7e < lVar7) {
        if (lVar7 < 0x39090bd7ea11745f) {
          if (lVar7 == 0x24abbbfc5d2aac7f) {
            FUN_002083ac(pdVar1,0x20);
            param_4[0x47] = (double)((ulong)param_4[0x47] | 1);
            lVar8 = 0x64a4671c7146738b;
          }
          else {
            lVar8 = -0x4b1348ce8c76ace;
            if ((lVar7 != 0x2ba48ce703af72ba) && (lVar8 = lVar7, lVar7 == 0x2d2fed4469d16fde)) {
              lVar8 = 0x632d2718836e34f1;
            }
          }
        }
        else if (lVar7 < 0x3dce80f3d755ea8b) {
          if (lVar7 == 0x39090bd7ea11745f) {
            local_9dc[0] = 0;
            FUN_001268cc(local_9dc);
            lVar8 = 0x2ba48ce703af72ba;
            if (local_9dc[0] != 0) {
              lVar8 = 0x706b8823a049caa0;
            }
          }
          else if (lVar7 == 0x3c1d6e269c73b2c4) {
            lVar8 = 0x47a378886e13f5f;
          }
        }
        else if (lVar7 == 0x3dce80f3d755ea8b) {
          local_9dc[0] = 0;
          FUN_00129b64(param_1,local_9dc);
          lVar8 = 0x3e722c767da45809;
          if (local_9dc[0] < 6) {
            lVar8 = 0x731bafea6ffaf9d2;
          }
        }
        else if (lVar7 == 0x3e722c767da45809) {
          FUN_002083ac(pdVar1,8);
          param_4[0x47] = (double)((ulong)param_4[0x47] | 1);
          lVar8 = -0x3b6e0fe4a7713ec6;
        }
        goto LAB_00111174;
      }
      if (0x187cf29d06d6bd9d < lVar7) {
        if (lVar7 == 0x187cf29d06d6bd9e) {
          lVar8 = -0x2d4673f83300de4f;
          if (*(char *)pdVar2 != '\0') {
            lVar8 = -0x7353f89f407630c4;
          }
        }
        else {
          lVar8 = 0x521b22f75783dd1d;
          if ((lVar7 != 0x18fdc9591ff1c480) && (lVar8 = lVar7, lVar7 == 0x20737e34b7c0d799)) {
            FUN_002083ac(pdVar1,1);
            param_4[0x47] = (double)((ulong)param_4[0x47] | 1);
            lVar8 = 0x187cf29d06d6bd9e;
          }
        }
        goto LAB_00111174;
      }
      lVar8 = -0x5e0244a9590fe586;
      if (lVar7 == 0x144b21bcbeb71cd5) goto LAB_00111174;
      if (lVar7 != 0x14f4c2a3fc87591b) {
        lVar8 = lVar7;
        if (lVar7 == 0x15491d2b22f9328e) {
          local_9c8 = 0;
          local_9c0 = 0;
          FUN_001f3abc(0,&local_9c8);
          local_a10 = (double)local_9c0 / 1000000.0 + (double)local_9c8 * 1000.0;
          lVar8 = 0xc11c3ec18b1aa40;
          if (local_a10 - *param_4 <= 15000.0) {
            lVar8 = -0x61e598ced63c221e;
          }
        }
        goto LAB_00111174;
      }
      lVar8 = 0xc418a6cc8b6f1ff;
    }
  }
  else if (lVar7 < 0x68a258a9cce7e66b) {
    if (lVar7 < 0x521b22f75783dd1d) {
      if (lVar7 < 0x4ee6d1fabee14214) {
        if (lVar7 == 0x40a7395875650256) {
          *param_4 = local_a08;
          lVar8 = -0x5d2b6741d85f7410;
        }
        else if (lVar7 == 0x472980666c6a03ea) {
          FUN_00116468(auStack_928,param_4);
          local_9f4 = 1;
          lVar8 = -0x58b7102d8e8f33c;
        }
        else if (lVar7 == 0x4ecc90aa236ea5b3) {
          lVar8 = -0x5aa64ba1dacf22c5;
        }
        goto LAB_00111174;
      }
      if (lVar7 == 0x4ee6d1fabee14214) {
        local_9dc[0] = 0;
        FUN_001318f4(param_1,local_9dc);
        lVar8 = -0x67a01045c33eebde;
        if (local_9dc[0] < 6) {
          lVar8 = -0x3142dac40f10d563;
        }
        goto LAB_00111174;
      }
      if (lVar7 != 0x51c02d96c2cc98f2) {
        if (lVar7 == 0x51c7910840e8eaee) {
          lVar8 = 0x3dce80f3d755ea8b;
        }
        goto LAB_00111174;
      }
      lVar8 = 0x521b22f75783dd1d;
    }
    else {
      if (0x6298686b9f6b9f23 < lVar7) {
        if (lVar7 < 0x642e33ff2599bd5c) {
          if (lVar7 == 0x6298686b9f6b9f24) {
            FUN_002083ac(pdVar1,0x28);
            param_4[0x47] = (double)((ulong)param_4[0x47] | 1);
            lVar8 = -0x22076b5cc3122b5b;
          }
          else if (lVar7 == 0x632d2718836e34f1) {
            *param_4 = unaff_d12;
            lVar8 = 0x7b7e2b085a916946;
          }
        }
        else {
          lVar8 = 0x472980666c6a03ea;
          if ((lVar7 != 0x642e33ff2599bd5c) && (lVar8 = lVar7, lVar7 == 0x64a4671c7146738b)) {
            lVar8 = -0x5278110e52f4ac4;
            if (*(char *)pdVar2 != '\0') {
              lVar8 = -0xf42ba585e897368;
            }
          }
        }
        goto LAB_00111174;
      }
      if (lVar7 == 0x521b22f75783dd1d) {
        *param_4 = unaff_d14;
        lVar8 = -0x5e0244a9590fe586;
        goto LAB_00111174;
      }
      if (lVar7 == 0x5be851ffc25e1a72) {
        lVar8 = 0x15491d2b22f9328e;
        if (*(char *)pdVar2 != '\0') {
          lVar8 = 0x10778cda4c5f8a73;
        }
        goto LAB_00111174;
      }
      if (lVar7 != 0x61612b56ba58e895) goto LAB_00111174;
      lVar8 = -0x5aa64ba1dacf22c5;
    }
  }
  else {
    if (lVar7 < 0x747d75e5c403e07e) {
      if (lVar7 < 0x706b8823a049caa0) {
        lVar8 = 0xc1c2badab0be0de;
        if (((lVar7 != 0x68a258a9cce7e66b) &&
            (lVar8 = -0xb9bd60ca14c8c3d, lVar7 != 0x6af93846531afc11)) &&
           (lVar8 = lVar7, lVar7 == 0x6e518c29e4d03e45)) {
          local_998 = 0;
          local_990 = 0;
          FUN_001f3abc(0,&local_998);
          unaff_d12 = (double)local_990 / 1000000.0 + (double)local_998 * 1000.0;
          lVar8 = -0x41f7f0095884c7b;
          if (unaff_d12 - *param_4 <= 15000.0) {
            lVar8 = 0x2d2fed4469d16fde;
          }
        }
      }
      else if (lVar7 == 0x706b8823a049caa0) {
        FUN_002083ac(pdVar1,0x1e);
        param_4[0x47] = (double)((ulong)param_4[0x47] | 1);
        lVar8 = -0x4b1348ce8c76ace;
      }
      else {
        lVar8 = 0x5be851ffc25e1a72;
        if ((lVar7 != 0x70d6ef9c84f56d26) && (lVar8 = lVar7, lVar7 == 0x731bafea6ffaf9d2)) {
          lVar8 = -0x3b6e0fe4a7713ec6;
        }
      }
      goto LAB_00111174;
    }
    if (0x7b3d77c4935dca94 < lVar7) {
      if (lVar7 < 0x7cb93cf37aea7cf9) {
        lVar8 = 0x4ee6d1fabee14214;
        if ((lVar7 != 0x7b3d77c4935dca95) && (lVar8 = lVar7, lVar7 == 0x7b7e2b085a916946)) {
          uVar6 = FUN_0013089c(param_1);
          lVar8 = -0x1583528f277a144d;
          if ((uVar6 & 1) == 0) {
            lVar8 = 0x68a258a9cce7e66b;
          }
        }
      }
      else if (lVar7 == 0x7cb93cf37aea7cf9) {
        local_958 = 0;
        local_950 = 0;
        FUN_001f3abc(0,&local_958);
        unaff_d8 = (double)local_950 / 1000000.0 + (double)local_958 * 1000.0;
        lVar8 = -0xc85aa91f443b941;
        if (unaff_d8 - *param_4 <= 15000.0) {
          lVar8 = -0x18f68c823630c7e6;
        }
      }
      else if (lVar7 == 0x7cdba208eacd72d0) {
        local_988 = 0;
        local_980 = 0;
        FUN_001f3abc(0,&local_988);
        unaff_d13 = (double)local_980 / 1000000.0 + (double)local_988 * 1000.0;
        lVar8 = -0x63395203aad93369;
        if (unaff_d13 - *param_4 <= 15000.0) {
          lVar8 = -0x6dba2dd18d641b5c;
        }
      }
      goto LAB_00111174;
    }
    lVar8 = -0x405792201464f5f7;
    if (lVar7 == 0x747d75e5c403e07e) goto LAB_00111174;
    if (lVar7 == 0x74a731b62b0290ae) {
      FUN_002083ac(pdVar1,2);
      param_4[0x47] = (double)((ulong)param_4[0x47] | 1);
      lVar8 = 0x5be851ffc25e1a72;
      goto LAB_00111174;
    }
    lVar8 = lVar7;
    if (lVar7 != 0x7a1d336c9fe8990f) goto LAB_00111174;
    lVar8 = -0x1c5b2ab53e093884;
  }
LAB_0011116c:
  *(char *)pdVar2 = '\x01';
  goto LAB_00111174;
}

