// rea decompile_all
// name: FUN_0018117c
// address: 0x18117c
// body: available
// range: 0x18117c-0x1821ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0018117c(int *param_1,long *param_2,long param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  long local_c0;
  long local_b8;
  int local_ac;
  long local_a0;
  int local_94;
  int local_84;
  long local_80;
  long local_78;
  
  lVar1 = 0x7911c11cca00963a;
  if (param_3 != 0) {
    lVar1 = 0x1025ee6ff9ba96d6;
  }
  lVar2 = lVar1;
  lVar6 = 0x4b39b2c3428d9a46;
LAB_00181280:
  while (lVar7 = lVar6, lVar5 = lVar2, lVar6 = lVar7, lVar2 = lVar5, 0x1a55ce8c23c8c0b3 < lVar7) {
    if (lVar7 < 0x50f0df46b7b58366) {
      if (lVar7 < 0x3a6c70104bd02c54) {
        if (lVar7 < 0x2a5cd955cec1984e) {
          if (lVar7 == 0x1a55ce8c23c8c0b4) {
            (**(code **)(*param_2 + 0xb8))(param_2,local_78);
            lVar6 = 0x6470604c4b80fa6b;
            local_c0 = lVar5;
            if (lVar5 != 0) {
              lVar6 = -0x6f94c64abcaf757e;
            }
          }
          else {
            lVar6 = -0x5c96f222397d01e;
            if ((lVar7 != 0x20e28591e6816f39) && (lVar6 = lVar7, lVar7 == 0x263c985aebcf8746)) {
              *param_1 = local_ac;
              lVar6 = -0x520b46a94cb5dced;
            }
          }
        }
        else if (lVar7 == 0x2a5cd955cec1984e) {
          iVar4 = FUN_00212730(0,1,&DAT_0021f890);
          lVar6 = -0x4bcd0d339289515d;
          if (iVar4 != 0) {
            lVar6 = -0xb0a342a0a30b8d5;
          }
        }
        else if (lVar7 == 0x358a77dfff6b8627) {
          iVar4 = FUN_00212730(0,1,&DAT_0021f804);
          lVar6 = 0x3a6c70104bd02c54;
          if (iVar4 != 0) {
            lVar6 = 0x43607c335a359f49;
          }
        }
        else if (lVar7 == 0x3a2dde023315a29f) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          local_80 = local_a0;
          local_84 = local_94;
          lVar6 = 0x17e81e8402442ee4;
        }
      }
      else if (lVar7 < 0x4c5d1678c64f7f82) {
        if (lVar7 == 0x3a6c70104bd02c54) {
          lVar6 = 0x7467563dffb622a9;
          bVar3 = DAT_0021f9ca == '\0';
          lVar5 = 0x72faaff1a9ce5774;
          goto LAB_00182170;
        }
        lVar6 = 0x358a77dfff6b8627;
        if ((lVar7 != 0x43607c335a359f49) && (lVar6 = lVar7, lVar7 == 0x4b39b2c3428d9a46)) {
          lVar6 = lVar1;
        }
      }
      else {
        if (lVar7 == 0x4c5d1678c64f7f82) {
          bVar3 = local_b8 == 0;
          lVar6 = 0x173d6f565b9dbeb7;
          lVar5 = -0x54ce595ec8d9b919;
          goto LAB_00181278;
        }
        lVar6 = 0x2a5cd955cec1984e;
        if ((lVar7 != 0x4d730209ff7c01ef) && (lVar6 = lVar7, lVar7 == 0x4de68fcd8d8bb4ac)) {
          lVar2 = 0;
          lVar6 = 0x1a55ce8c23c8c0b4;
        }
      }
    }
    else if (lVar7 < 0x6470604c4b80fa6b) {
      if (lVar7 < 0x5ab159c7a48faee4) {
        if (lVar7 < 0x5808b3f2945da450) {
          if (lVar7 == 0x50f0df46b7b58366) {
            DAT_0021f804 = 0;
            local_b8 = (**(code **)(*param_2 + 0x388))(param_2,local_78,&DAT_0021d918,&DAT_0021ddd0)
            ;
            lVar5 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar6 = 0x4c5d1678c64f7f82;
            if (lVar5 != 0) {
              lVar6 = 0x7b7c2780ea5ac895;
            }
          }
          else if (lVar7 == 0x562880e9cfa347ff) {
            local_94 = 0x21;
            goto LAB_00181a18;
          }
        }
        else {
          lVar6 = -0x4d3eb90b44b5c4e;
          if ((lVar7 != 0x58d00b9c91e999ec) && (lVar6 = lVar7, lVar7 == 0x5808b3f2945da450)) {
            return;
          }
        }
      }
      else {
        lVar2 = unaff_x20;
        lVar6 = 0x1a55ce8c23c8c0b4;
        if (((lVar7 != 0x5ab159c7a48faee4) &&
            (lVar2 = lVar5, lVar6 = -0x4da0b14374d11173, lVar7 != 0x63cd280170834625)) &&
           (lVar6 = lVar7, lVar7 == 0x646b53d029c41f15)) {
          local_84 = 0x15;
          local_80 = unaff_x20;
          goto LAB_00181864;
        }
      }
    }
    else if (lVar7 < 0x7467563dffb622a9) {
      lVar6 = -0x5d5cb27c61202e55;
      if (lVar7 != 0x6470604c4b80fa6b) {
        if (lVar7 == 0x72faaff1a9ce5774) {
          DAT_0021d920 = DAT_0021d920 ^ 0x53;
          DAT_0021d921 = DAT_0021d921 ^ 0x53;
          DAT_0021d922 = DAT_0021d922 ^ 0x53;
          DAT_0021d923 = DAT_0021d923 ^ 0x53;
          DAT_0021d918 = DAT_0021d918 ^ 0x5353535353535353;
          DAT_0021f9ca = '\x01';
          lVar6 = 0x50f0df46b7b58366;
        }
        else {
          lVar6 = lVar7;
          if (lVar7 == 0x73c5593a30d75260) {
            lVar6 = 0x58d00b9c91e999ec;
            bVar3 = DAT_0021f9ec == '\0';
            lVar5 = -0x5b9dc9d29b3f84e1;
LAB_00182170:
            if (bVar3) {
              lVar6 = lVar5;
            }
          }
        }
      }
    }
    else {
      lVar6 = 0x50f0df46b7b58366;
      if (lVar7 != 0x7467563dffb622a9) {
        if (lVar7 == 0x7911c11cca00963a) {
          local_ac = 3;
          goto LAB_00182104;
        }
        lVar6 = lVar7;
        if (lVar7 == 0x7b7c2780ea5ac895) {
          local_a0 = 0;
          local_94 = 0x11;
          lVar6 = 0x3a2dde023315a29f;
        }
      }
    }
  }
  if (-0x1fa65aa0c38f1ce7 < lVar7) {
    if (lVar7 < -0x4d3eb90b44b5c4e) {
      if (-0xb0a342a0a30b8d6 < lVar7) {
        lVar6 = 0x2a5cd955cec1984e;
        if (lVar7 != -0xb0a342a0a30b8d5) {
          if (lVar7 == -0x5c96f222397d01e) {
            iVar4 = FUN_00212730(0,1,&DAT_0021f88c);
            lVar6 = 0x73c5593a30d75260;
            if (iVar4 != 0) {
              lVar6 = 0x20e28591e6816f39;
            }
          }
          else {
            lVar6 = lVar7;
            if (lVar7 == -0x5c6e1ac561874dd) {
              local_94 = 0x15;
LAB_00181a18:
              lVar6 = 0x3a2dde023315a29f;
              local_a0 = unaff_x20;
            }
          }
        }
        goto LAB_00181280;
      }
      if (lVar7 == -0x1fa65aa0c38f1ce6) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        lVar6 = 0x595f48e008d0488;
        if (local_78 != 0) {
          lVar6 = 0x4de68fcd8d8bb4ac;
        }
        *param_1 = 0x11;
        goto LAB_00181280;
      }
      if (lVar7 == -0x1f99dc14788c094a) {
        lVar5 = -0x6d488e375e46e850;
        lVar6 = -0xbd3ec96aa326155;
        bVar3 = unaff_x20 == 0;
        goto LAB_00181278;
      }
      if (lVar7 != -0xbd3ec96aa326155) goto LAB_00181280;
      local_84 = 0x21;
      local_80 = unaff_x20;
    }
    else {
      if (lVar7 < 0x1025ee6ff9ba96d6) {
        if (lVar7 == -0x4d3eb90b44b5c4e) {
          DAT_0021f88c = 0;
          local_78 = (**(code **)(*param_2 + 0x30))(param_2,&DAT_0021ddb0);
          lVar5 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar6 = -0x75258739fc8d4bd6;
          if (lVar5 != 0) {
            lVar6 = -0x1fa65aa0c38f1ce6;
          }
        }
        else {
          lVar6 = -0x520b46a94cb5dced;
          if ((lVar7 != 0x595f48e008d0488) && (lVar6 = lVar7, lVar7 == 0x85ae5a0f26fdf1c)) {
            local_ac = 0x11;
LAB_00182104:
            lVar6 = 0x263c985aebcf8746;
          }
        }
        goto LAB_00181280;
      }
      if (0x17e81e8402442ee3 < lVar7) {
        if (lVar7 == 0x17e81e8402442ee4) {
          *param_1 = local_84;
          lVar2 = local_80;
          lVar6 = 0x1a55ce8c23c8c0b4;
        }
        else if (lVar7 == 0x18139e254339c829) {
          lVar6 = -0x520b46a94cb5dced;
        }
        goto LAB_00181280;
      }
      lVar6 = -0x5c96f222397d01e;
      if ((lVar7 == 0x1025ee6ff9ba96d6) || (lVar6 = lVar7, lVar7 != 0x173d6f565b9dbeb7))
      goto LAB_00181280;
      local_80 = 0;
      local_84 = 0x11;
    }
LAB_00181864:
    lVar2 = lVar5;
    lVar6 = 0x17e81e8402442ee4;
    goto LAB_00181280;
  }
  if (lVar7 < -0x5b9dc9d29b3f84e1) {
    if (-0x692480724dd609af < lVar7) {
      if (lVar7 == -0x692480724dd609ae) {
        DAT_0021ddf9 = DAT_0021ddf9 ^ 0xa3;
        DAT_0021ddf8 = DAT_0021ddf8 ^ 0xa3;
        DAT_0021ddfa = DAT_0021ddfa ^ 0xa3;
        DAT_0021ddfc = DAT_0021ddfc ^ 0xa3;
        _DAT_0021ddd0 = _DAT_0021ddd0 ^ 0xa3a3a3a3a3a3a3a3;
        uRam000000000021ddd8 = uRam000000000021ddd8 ^ 0xa3a3a3a3a3a3a3a3;
        DAT_0021ddfb = DAT_0021ddfb ^ 0xa3;
        _DAT_0021dde0 = _DAT_0021dde0 ^ 0xa3a3a3a3a3a3a3a3;
        uRam000000000021dde8 = uRam000000000021dde8 ^ 0xa3a3a3a3a3a3a3a3;
        DAT_0021ddf0 = DAT_0021ddf0 ^ 0xa3a3a3a3a3a3a3a3;
        DAT_0021f9ed = '\x01';
        lVar6 = -0x4da0b14374d11173;
      }
      else {
        lVar6 = 0x5808b3f2945da450;
        if ((lVar7 != -0x64a1acccc4343965) && (lVar6 = lVar7, lVar7 == -0x5d5cb27c61202e55)) {
          lVar6 = -0x64a1acccc4343965;
          if (*param_1 != 0) {
            lVar6 = 0x18139e254339c829;
          }
        }
      }
      goto LAB_00181280;
    }
    if (lVar7 != -0x75258739fc8d4bd6) {
      if (lVar7 == -0x6f94c64abcaf757e) {
        (**(code **)(*param_2 + 0xb8))(param_2,local_c0);
        lVar6 = -0x5d5cb27c61202e55;
      }
      else if (lVar7 == -0x6d488e375e46e850) {
        lVar6 = (**(code **)(*param_2 + 0x390))(param_2,local_78,local_b8,unaff_x20);
        *param_4 = lVar6;
        lVar5 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar6 = -0x480adf0aa46d36d7;
        if (lVar5 != 0) {
          lVar6 = -0x5c6e1ac561874dd;
        }
      }
      goto LAB_00181280;
    }
    bVar3 = local_78 == 0;
    lVar6 = 0x85ae5a0f26fdf1c;
    lVar5 = 0x4d730209ff7c01ef;
  }
  else {
    if (lVar7 < -0x4da0b14374d11173) {
      if (lVar7 == -0x5b9dc9d29b3f84e1) {
        DAT_0021ddc1 = DAT_0021ddc1 ^ 0xd0;
        DAT_0021ddc0 = DAT_0021ddc0 ^ 0xd0;
        DAT_0021ddc2 = DAT_0021ddc2 ^ 0xd0;
        DAT_0021ddc3 = DAT_0021ddc3 ^ 0xd0;
        DAT_0021ddc4 = DAT_0021ddc4 ^ 0xd0;
        DAT_0021ddc6 = DAT_0021ddc6 ^ 0xd0;
        DAT_0021ddc5 = DAT_0021ddc5 ^ 0xd0;
        _DAT_0021ddb0 = _DAT_0021ddb0 ^ 0xd0d0d0d0d0d0d0d0;
        uRam000000000021ddb8 = uRam000000000021ddb8 ^ 0xd0d0d0d0d0d0d0d0;
        DAT_0021f9ec = '\x01';
        lVar6 = -0x4d3eb90b44b5c4e;
      }
      else if (lVar7 == -0x54ce595ec8d9b919) {
        unaff_x20 = (**(code **)(*param_2 + 0x538))(param_2,param_3);
        lVar5 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar6 = -0x1f99dc14788c094a;
        if (lVar5 != 0) {
          lVar6 = 0x562880e9cfa347ff;
        }
      }
      else if (lVar7 == -0x520b46a94cb5dced) {
        *param_4 = 0;
        lVar6 = 0x5808b3f2945da450;
      }
      goto LAB_00181280;
    }
    if (lVar7 == -0x4da0b14374d11173) {
      DAT_0021f890 = 0;
      lVar6 = 0x358a77dfff6b8627;
      goto LAB_00181280;
    }
    if (lVar7 == -0x4bcd0d339289515d) {
      lVar6 = 0x63cd280170834625;
      bVar3 = DAT_0021f9ed == '\0';
      lVar5 = -0x692480724dd609ae;
      goto LAB_00182170;
    }
    if (lVar7 != -0x480adf0aa46d36d7) goto LAB_00181280;
    lVar6 = 0x646b53d029c41f15;
    bVar3 = *param_4 == 0;
    lVar5 = 0x5ab159c7a48faee4;
  }
LAB_00181278:
  if (!bVar3) {
    lVar6 = lVar5;
  }
  goto LAB_00181280;
}

