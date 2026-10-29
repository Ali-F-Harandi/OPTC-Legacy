// rea decompile_all
// name: FUN_0017e4ac
// address: 0x17e4ac
// body: available
// range: 0x17e4ac-0x17f8ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0017e4ac(int *param_1,long *param_2,long param_3,long param_4,long *param_5)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x21;
  long *unaff_x24;
  long local_e0;
  long *local_d0;
  long local_c8;
  int local_bc;
  long local_a8;
  long *local_a0;
  int local_94;
  long *local_90;
  int local_84;
  long local_80;
  long local_78;
  
  lVar1 = 0x59297a35bbd835d1;
  if (param_4 == 0 || param_3 == 0) {
    lVar1 = -0x615ed7b9f53ad6c;
  }
  plVar2 = param_2;
  lVar3 = lVar1;
  lVar7 = 0x2237fe77884b290;
LAB_0017e598:
  while (lVar8 = lVar7, lVar9 = lVar3, plVar6 = plVar2, lVar7 = lVar8, plVar2 = plVar6,
        lVar3 = lVar9, 0x441d9a5d50b75e8 < lVar8) {
    if (lVar8 < 0x57c7abc3240175e8) {
      if (lVar8 < 0x2dbc4040678434c0) {
        if (lVar8 < 0x12307e9c3b7f1fe2) {
          plVar2 = unaff_x24;
          lVar3 = unaff_x21;
          lVar7 = -0x4b8d90a9e74b16c3;
          if (((lVar8 != 0x441d9a5d50b75e9) &&
              (plVar2 = plVar6, lVar3 = lVar9, lVar7 = 0x5e2a911104009fc1,
              lVar8 != 0x45d825d96e9007b)) && (lVar7 = lVar8, lVar8 == 0xcbe129d977a9c9b)) {
            *param_1 = local_84;
            plVar2 = local_90;
            lVar3 = local_80;
            lVar7 = -0x4b8d90a9e74b16c3;
          }
        }
        else if (lVar8 < 0x185df96b4748bc1e) {
          if (lVar8 == 0x12307e9c3b7f1fe2) {
            plVar2 = (long *)0x0;
            lVar3 = 0;
            lVar7 = -0x4b8d90a9e74b16c3;
          }
          else if (lVar8 == 0x16b7e11e22c9a791) {
LAB_0017ed58:
            lVar7 = -0x7d2591ecac2de57;
          }
        }
        else if (lVar8 == 0x185df96b4748bc1e) {
          (**(code **)(*param_2 + 0xb8))(param_2,local_d0);
          lVar7 = 0x5e2a911104009fc1;
        }
        else if (lVar8 == 0x1fac05b121d3bfea) {
          local_84 = 0x21;
          goto LAB_0017f268;
        }
      }
      else if (lVar8 < 0x3cc2b002c31debd9) {
        if (lVar8 == 0x2dbc4040678434c0) {
          DAT_0021dcb9 = DAT_0021dcb9 ^ 0x33;
          DAT_0021dcba = DAT_0021dcba ^ 0x33;
          DAT_0021dcb8 = DAT_0021dcb8 ^ 0x33;
          DAT_0021dcbb = DAT_0021dcbb ^ 0x33;
          DAT_0021dcbd = DAT_0021dcbd ^ 0x33;
          DAT_0021dcbe = DAT_0021dcbe ^ 0x33;
          _DAT_0021dca0 = _DAT_0021dca0 ^ 0x3333333333333333;
          uRam000000000021dca8 = uRam000000000021dca8 ^ 0x3333333333333333;
          DAT_0021dcbc = DAT_0021dcbc ^ 0x33;
          DAT_0021dcb0 = DAT_0021dcb0 ^ 0x3333333333333333;
          DAT_0021f9e6 = '\x01';
          lVar7 = 0x56def783efe8a5f9;
        }
        else if (lVar8 == 0x30501dca498a3b0c) {
          lVar7 = 0x1fac05b121d3bfea;
          if (unaff_x24 != (long *)0x0) {
            lVar7 = -0xd09624d72293f80;
          }
        }
        else if (lVar8 == 0x37ea9d36fbf80e9c) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          lVar7 = -0x3b4a46ae7fe063db;
          if (local_78 != 0) {
            lVar7 = 0x12307e9c3b7f1fe2;
          }
          *param_1 = 0x11;
        }
      }
      else if (lVar8 < 0x44c0c2ad58c6ebb7) {
        if (lVar8 == 0x3cc2b002c31debd9) {
          bVar4 = local_78 == 0;
          lVar9 = 0x16b7e11e22c9a791;
          lVar7 = -0x57d79804f455e507;
LAB_0017e58c:
          if (!bVar4) {
            lVar7 = lVar9;
          }
        }
        else if (lVar8 == 0x43a6abb0150d99f6) {
          *param_1 = local_bc;
          lVar7 = 0x65160d13dfc5774e;
        }
      }
      else {
        lVar7 = 0x65160d13dfc5774e;
        if ((lVar8 != 0x44c0c2ad58c6ebb7) && (lVar7 = lVar8, lVar8 == 0x56def783efe8a5f9)) {
          DAT_0021f874 = 0;
          local_78 = (**(code **)(*param_2 + 0x30))(param_2,&DAT_0021dca0);
          lVar7 = (**(code **)(*param_2 + 0x78))(param_2);
          bVar4 = lVar7 == 0;
          lVar9 = 0x37ea9d36fbf80e9c;
          lVar7 = 0x3cc2b002c31debd9;
          goto LAB_0017f768;
        }
      }
    }
    else if (lVar8 < 0x6e6a2ebf85da81dd) {
      if (lVar8 < 0x64e712ef5aeab8d7) {
        if (lVar8 < 0x5ae53e00920b7bff) {
          if (lVar8 == 0x57c7abc3240175e8) {
            DAT_0021f878 = 0;
            lVar7 = -0x1de63f4c41c3910d;
          }
          else if (lVar8 == 0x59297a35bbd835d1) {
            lVar7 = -0x536c8c3d617b5f6d;
          }
        }
        else {
          if (lVar8 == 0x5ae53e00920b7bff) {
            (**(code **)(*param_2 + 0xb8))(param_2,local_e0);
            goto LAB_0017f7e4;
          }
          if (lVar8 == 0x5e2a911104009fc1) {
            lVar9 = 0x44c0c2ad58c6ebb7;
            bVar4 = *param_1 == 0;
            lVar7 = -0x56878dbe0525fc4a;
            goto LAB_0017e58c;
          }
        }
      }
      else if (lVar8 < 0x6658bc9e471d531f) {
        if (lVar8 == 0x64e712ef5aeab8d7) {
          lVar7 = 0x7b799c101741d414;
          if (DAT_0021f9e6 == '\0') {
            lVar7 = 0x2dbc4040678434c0;
          }
        }
        else if (lVar8 == 0x65160d13dfc5774e) {
          *param_5 = 0;
          lVar7 = 0x6658bc9e471d531f;
        }
      }
      else {
        lVar7 = 0x57c7abc3240175e8;
        if ((lVar8 != 0x6a0ef01e0da8d877) && (lVar7 = lVar8, lVar8 == 0x6658bc9e471d531f)) {
          return;
        }
      }
    }
    else if (lVar8 < 0x7aa16fa1319352fb) {
      if (lVar8 == 0x6e6a2ebf85da81dd) {
        bVar4 = local_d0 == (long *)0x0;
        lVar9 = 0x185df96b4748bc1e;
        lVar7 = 0x45d825d96e9007b;
        goto LAB_0017e58c;
      }
      if (lVar8 == 0x724733215e62f77c) {
        DAT_0021dd01 = DAT_0021dd01 ^ 0x31;
        DAT_0021dd00 = DAT_0021dd00 ^ 0x31;
        DAT_0021dd04 = DAT_0021dd04 ^ 0x31;
        DAT_0021dd03 = DAT_0021dd03 ^ 0x31;
        _DAT_0021dcc0 = _DAT_0021dcc0 ^ 0x3131313131313131;
        uRam000000000021dcc8 = uRam000000000021dcc8 ^ 0x3131313131313131;
        _DAT_0021dcd0 = _DAT_0021dcd0 ^ 0x3131313131313131;
        uRam000000000021dcd8 = uRam000000000021dcd8 ^ 0x3131313131313131;
        DAT_0021dd02 = DAT_0021dd02 ^ 0x31;
        DAT_0021dd06 = DAT_0021dd06 ^ 0x31;
        DAT_0021dd05 = DAT_0021dd05 ^ 0x31;
        _DAT_0021dce0 = _DAT_0021dce0 ^ 0x3131313131313131;
        uRam000000000021dce8 = uRam000000000021dce8 ^ 0x3131313131313131;
        _DAT_0021dcf0 = _DAT_0021dcf0 ^ 0x3131313131313131;
        uRam000000000021dcf8 = uRam000000000021dcf8 ^ 0x3131313131313131;
        DAT_0021f9e7 = '\x01';
        lVar7 = 0x57c7abc3240175e8;
      }
      else if (lVar8 == 0x750970a731313d02) goto LAB_0017ed58;
    }
    else if (lVar8 < 0x7b799c101741d414) {
      if (lVar8 == 0x7aa16fa1319352fb) {
        local_94 = 0x21;
        goto LAB_0017f384;
      }
      if (lVar8 == 0x7b2dd2934db1ef30) {
        local_84 = 0x11;
        local_80 = 0;
LAB_0017f43c:
        local_90 = (long *)0x0;
        lVar7 = 0xcbe129d977a9c9b;
      }
    }
    else {
      lVar7 = 0x56def783efe8a5f9;
      if ((lVar8 != 0x7b799c101741d414) && (lVar7 = lVar8, lVar8 == 0x7fa34a781a3a0cc7)) {
        lVar7 = 0x6a0ef01e0da8d877;
        if (DAT_0021f9e7 == '\0') {
          lVar7 = 0x724733215e62f77c;
        }
      }
    }
  }
  if (lVar8 < -0x25720dbae0493687) {
    if (lVar8 < -0x536c8c3d617b5f6d) {
      if (-0x61e9cf887c48ca5f < lVar8) {
        if (lVar8 < -0x56878dbe0525fc4a) {
          lVar7 = -0x1de63f4c41c3910d;
          if ((lVar8 != -0x61e9cf887c48ca5e) && (lVar7 = lVar8, lVar8 == -0x57d79804f455e507)) {
            local_bc = 0x11;
LAB_0017f3dc:
            lVar7 = 0x43a6abb0150d99f6;
          }
        }
        else {
          lVar7 = 0x6658bc9e471d531f;
          if ((lVar8 != -0x56878dbe0525fc4a) && (lVar7 = lVar8, lVar8 == -0x557f2d8ac002ee5b)) {
            local_94 = 0x1b;
LAB_0017f384:
            lVar7 = -0x18e861f5c93196cb;
            local_a8 = unaff_x21;
            local_a0 = unaff_x24;
          }
        }
        goto LAB_0017e598;
      }
      if (lVar8 == -0x6c061ec308f77f51) {
        local_84 = 0x21;
        local_80 = unaff_x21;
        goto LAB_0017f43c;
      }
      if (lVar8 != -0x69c6745f582f292f) {
        if (lVar8 == -0x652449358ac69ca6) {
          lVar7 = 0x7b2dd2934db1ef30;
          if (local_c8 != 0) {
            lVar7 = -0xaa7a11fd303e835;
          }
        }
        goto LAB_0017e598;
      }
      unaff_x24 = (long *)(**(code **)(*param_2 + 0x538))(param_2,param_4);
      lVar7 = (**(code **)(*param_2 + 0x78))(param_2);
      bVar4 = lVar7 == 0;
      lVar9 = 0x7aa16fa1319352fb;
      lVar7 = 0x30501dca498a3b0c;
    }
    else {
      if (-0x3e6fd36519f6428a < lVar8) {
        if (lVar8 < -0x3086b63447e9b432) {
          if (lVar8 == -0x3e6fd36519f64289) {
            lVar7 = -0x6c061ec308f77f51;
            lVar9 = -0x69c6745f582f292f;
            bVar4 = unaff_x21 == 0;
            goto LAB_0017e58c;
          }
          if (lVar8 == -0x3b4a46ae7fe063db) {
            lVar7 = 0x65160d13dfc5774e;
          }
        }
        else if (lVar8 == -0x3086b63447e9b432) {
          DAT_0021d920 = DAT_0021d920 ^ 0x53;
          DAT_0021d921 = DAT_0021d921 ^ 0x53;
          DAT_0021d922 = DAT_0021d922 ^ 0x53;
          DAT_0021d923 = DAT_0021d923 ^ 0x53;
          DAT_0021d918 = DAT_0021d918 ^ 0x5353535353535353;
          DAT_0021f9ca = '\x01';
          lVar7 = -0x1591e3279f7c32c1;
        }
        else if (lVar8 == -0x2e24d05a79008641) {
LAB_0017f7e4:
          lVar7 = 0x6e6a2ebf85da81dd;
        }
        goto LAB_0017e598;
      }
      if (lVar8 != -0x536c8c3d617b5f6d) {
        if (lVar8 == -0x4b8d90a9e74b16c3) {
          (**(code **)(*param_2 + 0xb8))(param_2,local_78);
          lVar7 = -0x2e24d05a79008641;
          local_e0 = lVar9;
          local_d0 = plVar6;
          if (lVar9 != 0) {
            lVar7 = 0x5ae53e00920b7bff;
          }
        }
        else if (lVar8 == -0x42a7ee31d751e849) {
          lVar7 = -0x1591e3279f7c32c1;
        }
        goto LAB_0017e598;
      }
      iVar5 = FUN_00212730(0,1,&DAT_0021f874);
      lVar9 = -0x22e0cca1d78b5b33;
      lVar7 = 0x64e712ef5aeab8d7;
      bVar4 = iVar5 == 0;
    }
  }
  else if (lVar8 < -0xd09624d72293f80) {
    if (-0x18e861f5c93196cc < lVar8) {
      if (lVar8 < -0xefd732dabacd85f) {
        if (lVar8 == -0x18e861f5c93196cb) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          local_90 = local_a0;
          local_80 = local_a8;
          local_84 = local_94;
          lVar7 = 0xcbe129d977a9c9b;
        }
        else if (lVar8 == -0x1591e3279f7c32c1) {
          DAT_0021f804 = 0;
          local_c8 = (**(code **)(*param_2 + 0x388))(param_2,local_78,&DAT_0021d918,&DAT_0021dcc0);
          lVar9 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar7 = -0x652449358ac69ca6;
          lVar8 = -0xd22d2ce2116ed27;
LAB_0017f7c4:
          if (lVar9 != 0) {
            lVar7 = lVar8;
          }
        }
      }
      else if (lVar8 == -0xefd732dabacd85f) {
        local_a0 = (long *)0x0;
        local_94 = 0x21;
        lVar7 = -0x18e861f5c93196cb;
        local_a8 = unaff_x21;
      }
      else if (lVar8 == -0xd22d2ce2116ed27) {
        local_a8 = 0;
        local_a0 = (long *)0x0;
        local_94 = 0x11;
        lVar7 = -0x18e861f5c93196cb;
      }
      goto LAB_0017e598;
    }
    if (lVar8 == -0x25720dbae0493687) {
      lVar7 = 0x39907d73a374a63;
      if (*param_5 != 0) {
        lVar7 = 0x441d9a5d50b75e9;
      }
      goto LAB_0017e598;
    }
    lVar7 = -0x536c8c3d617b5f6d;
    if ((lVar8 == -0x22e0cca1d78b5b33) || (lVar7 = lVar8, lVar8 != -0x1de63f4c41c3910d))
    goto LAB_0017e598;
    iVar5 = FUN_00212730(0,1,&DAT_0021f804);
    bVar4 = iVar5 == 0;
    lVar9 = -0x61e9cf887c48ca5e;
    lVar7 = -0x3837e77210006d6;
  }
  else {
    if (-0x615ed7b9f53ad6d < lVar8) {
      if (lVar8 < 0x2237fe77884b290) {
        if (lVar8 == -0x615ed7b9f53ad6c) {
          local_bc = 3;
          goto LAB_0017f3dc;
        }
        if (lVar8 == -0x3837e77210006d6) {
          lVar7 = -0x42a7ee31d751e849;
          if (DAT_0021f9ca == '\0') {
            lVar7 = -0x3086b63447e9b432;
          }
        }
      }
      else {
        lVar7 = lVar1;
        if ((lVar8 != 0x2237fe77884b290) && (lVar7 = lVar8, lVar8 == 0x39907d73a374a63)) {
          local_84 = 0x1b;
LAB_0017f268:
          lVar7 = 0xcbe129d977a9c9b;
          local_90 = unaff_x24;
          local_80 = unaff_x21;
        }
      }
      goto LAB_0017e598;
    }
    if (lVar8 == -0xd09624d72293f80) {
      lVar7 = (**(code **)(*param_2 + 0x390))(param_2,local_78,local_c8,unaff_x21,unaff_x24);
      *param_5 = lVar7;
      lVar7 = (**(code **)(*param_2 + 0x78))(param_2);
      bVar4 = lVar7 == 0;
      lVar9 = -0x557f2d8ac002ee5b;
      lVar7 = -0x25720dbae0493687;
    }
    else {
      if (lVar8 == -0xaa7a11fd303e835) {
        unaff_x21 = (**(code **)(*param_2 + 0x538))(param_2,param_3);
        lVar9 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar7 = -0x3e6fd36519f64289;
        lVar8 = -0xefd732dabacd85f;
        goto LAB_0017f7c4;
      }
      if (lVar8 != -0x7d2591ecac2de57) goto LAB_0017e598;
      iVar5 = FUN_00212730(0,1,&DAT_0021f878);
      bVar4 = iVar5 == 0;
      lVar9 = 0x750970a731313d02;
      lVar7 = 0x7fa34a781a3a0cc7;
    }
  }
LAB_0017f768:
  if (!bVar4) {
    lVar7 = lVar9;
  }
  goto LAB_0017e598;
}

