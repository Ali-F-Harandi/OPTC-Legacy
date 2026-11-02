// rea decompile_all
// name: FUN_00194f30
// address: 0x194f30
// body: available
// range: 0x194f30-0x195a83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00194f30(int *param_1,long *param_2,long param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x27;
  long local_90;
  int local_88;
  int local_84;
  int local_74;
  
  lVar1 = 0x7b2f6ffc35bdbc94;
  if (param_3 != 0) {
    lVar1 = 0x3aa0b1fb83b2558a;
  }
  lVar4 = -0x28cf2a27624d55dd;
LAB_00195034:
  while (lVar3 = lVar4, lVar4 = lVar3, -0x8850930e4155231 < lVar3) {
    if (lVar3 < 0x54a5018c6722ad9d) {
      if (lVar3 < 0x3118625a2df47752) {
        if (lVar3 < 0x9e5390dd5bc4776) {
          if (lVar3 == -0x8850930e4155230) {
            lVar4 = 0x3ffd4f1391a82011;
            if (unaff_x27 != 0) {
              lVar4 = 0x9e5390dd5bc4776;
            }
          }
          else if (lVar3 == 0x449cb5d9b89bd23) {
            local_88 = 0x11;
            goto LAB_00195498;
          }
        }
        else {
          lVar4 = 0x54a5018c6722ad9d;
          if (lVar3 != 0x9e5390dd5bc4776) {
            if (lVar3 == 0x14096f70e1e43f56) {
              lVar4 = -0x36fc1679913ae3b4;
              if (DAT_0021fa11 == '\0') {
                lVar4 = -0x6736978b9af4e43d;
              }
            }
            else {
              lVar4 = lVar3;
              if (lVar3 == 0x1c9aaf9e70f1863c) {
                lVar4 = 0x54a5018c6722ad9d;
              }
            }
          }
        }
      }
      else if (lVar3 < 0x3ffd4f1391a82011) {
        if (lVar3 == 0x3aa0b1fb83b2558a) {
          unaff_x27 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
          lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar4 = -0x8850930e4155230;
          if (lVar3 != 0) {
            lVar4 = -0x56113aff5c6fd666;
          }
        }
        else if (lVar3 == 0x3f153cd402340bb7) {
          *param_1 = local_84;
          lVar4 = 0x5ff8374435ac5a23;
        }
        else if (lVar3 == 0x3118625a2df47752) {
          return;
        }
      }
      else if (lVar3 == 0x3ffd4f1391a82011) {
        local_84 = 0x11;
LAB_0019596c:
        lVar4 = 0x3f153cd402340bb7;
      }
      else if (lVar3 == 0x43af3929eeee76fd) {
        lVar4 = -0x45b5503cc22f23e9;
      }
    }
    else if (lVar3 < 0x5ff8374435ac5a23) {
      if (lVar3 < 0x5dc65485ea435449) {
        if (lVar3 == 0x54a5018c6722ad9d) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f92c);
          lVar4 = -0x90a753454583b0d;
          if (iVar2 != 0) {
            lVar4 = 0x1c9aaf9e70f1863c;
          }
        }
        else if (lVar3 == 0x5d88617172bec015) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f928);
          lVar4 = 0x14096f70e1e43f56;
          if (iVar2 != 0) {
            lVar4 = 0x5f9824e0865115b3;
          }
        }
      }
      else if (lVar3 == 0x5dc65485ea435449) {
        DAT_0021f92c = 0;
        lVar4 = 0x5d88617172bec015;
      }
      else if (lVar3 == 0x5f9824e0865115b3) {
        lVar4 = 0x5d88617172bec015;
      }
    }
    else if (lVar3 < 0x7b2f6ffc35bdbc94) {
      if (lVar3 == 0x5ff8374435ac5a23) {
        *param_4 = 0;
        lVar4 = 0x3118625a2df47752;
      }
      else if (lVar3 == 0x79a92fb90839fdc7) {
        lVar4 = -0x4d639f690ca37e23;
        if (*param_4 != 0) {
          lVar4 = 0x43af3929eeee76fd;
        }
      }
    }
    else {
      if (lVar3 == 0x7b2f6ffc35bdbc94) {
        local_84 = 3;
        goto LAB_0019596c;
      }
      if (lVar3 == 0x7bfdd0f52b196613) {
        lVar4 = -0x7ca3f85d747a4cdf;
        if (local_90 != 0) {
          lVar4 = -0x6776b8dbd80e0a69;
        }
      }
      else if (lVar3 == 0x7f46f073c3668aa7) {
        local_88 = 0x1b;
LAB_00195498:
        lVar4 = -0x563930cc5856f4d8;
      }
    }
  }
  if (lVar3 < -0x4d639f690ca37e23) {
    if (lVar3 < -0x62ca8371a08e8353) {
      if (-0x6776b8dbd80e0a6a < lVar3) {
        if (lVar3 == -0x6776b8dbd80e0a69) {
          lVar4 = (**(code **)(*param_2 + 0x2f8))(param_2,param_3,local_90);
          *param_4 = lVar4;
          lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar4 = 0x79a92fb90839fdc7;
          if (lVar3 != 0) {
            lVar4 = 0x7f46f073c3668aa7;
          }
        }
        else if (lVar3 == -0x6736978b9af4e43d) {
          DAT_0021e258 = DAT_0021e258 ^ 0x37;
          DAT_0021e25a = DAT_0021e25a ^ 0x37;
          DAT_0021e259 = DAT_0021e259 ^ 0x37;
          DAT_0021e250 = DAT_0021e250 ^ 0x3737373737373737;
          DAT_0021fa11 = '\x01';
          lVar4 = -0x62ca8371a08e8353;
        }
        goto LAB_00195034;
      }
      if (lVar3 != -0x7ca3f85d747a4cdf) {
        if (lVar3 == -0x6d8fa9412ec2025b) {
          lVar4 = 0x5ff8374435ac5a23;
        }
        goto LAB_00195034;
      }
      local_74 = 0x11;
    }
    else {
      if (lVar3 < -0x563930cc5856f4d8) {
        if (lVar3 == -0x62ca8371a08e8353) {
          DAT_0021f928 = 0;
          local_90 = (**(code **)(*param_2 + 0x2f0))(param_2,unaff_x27,&DAT_0021e250,&DAT_0021e260);
          lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar4 = 0x7bfdd0f52b196613;
          if (lVar3 != 0) {
            lVar4 = 0x449cb5d9b89bd23;
          }
        }
        else if (lVar3 == -0x5affdd1cd5b3ca08) {
          lVar4 = -0x45b5503cc22f23e9;
        }
        goto LAB_00195034;
      }
      if (lVar3 != -0x563930cc5856f4d8) {
        if (lVar3 == -0x56113aff5c6fd666) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          lVar4 = -0x3bd84a77cb8efb94;
          if (unaff_x27 != 0) {
            lVar4 = -0x5affdd1cd5b3ca08;
          }
          *param_1 = 0x11;
        }
        else if (lVar3 == -0x5578eaae15f71d2e) {
          _DAT_0021e260 = _DAT_0021e260 ^ 0x2a2a2a2a2a2a2a2a;
          uRam000000000021e268 = uRam000000000021e268 ^ 0x2a2a2a2a2a2a2a2a;
          _DAT_0021e270 = _DAT_0021e270 ^ 0x2a2a2a2a2a2a2a2a;
          uRam000000000021e278 = uRam000000000021e278 ^ 0x2a2a2a2a2a2a2a2a;
          DAT_0021fa12 = '\x01';
          lVar4 = 0x5dc65485ea435449;
        }
        goto LAB_00195034;
      }
      (**(code **)(*param_2 + 0x80))(param_2);
      (**(code **)(*param_2 + 0x88))(param_2);
      local_74 = local_88;
    }
  }
  else {
    if (-0x36fc1679913ae3b5 < lVar3) {
      if (lVar3 < -0x1cd5075efc733bfd) {
        lVar4 = -0x62ca8371a08e8353;
        if ((lVar3 != -0x36fc1679913ae3b4) && (lVar4 = lVar3, lVar3 == -0x28cf2a27624d55dd)) {
          lVar4 = lVar1;
        }
      }
      else if (lVar3 == -0x1cd5075efc733bfd) {
        *param_1 = local_74;
        lVar4 = -0x45b5503cc22f23e9;
      }
      else {
        lVar4 = 0x5dc65485ea435449;
        if ((lVar3 != -0x1069740e59bbf902) && (lVar4 = lVar3, lVar3 == -0x90a753454583b0d)) {
          lVar4 = -0x1069740e59bbf902;
          if (DAT_0021fa12 == '\0') {
            lVar4 = -0x5578eaae15f71d2e;
          }
        }
      }
      goto LAB_00195034;
    }
    if (-0x45b5503cc22f23ea < lVar3) {
      if (lVar3 == -0x45b5503cc22f23e9) {
        (**(code **)(*param_2 + 0xb8))(param_2,unaff_x27);
        lVar4 = -0x4c7d707d0984aec1;
        if (*param_1 != 0) {
          lVar4 = -0x6d8fa9412ec2025b;
        }
      }
      else if (lVar3 == -0x3bd84a77cb8efb94) {
        lVar4 = 0x5ff8374435ac5a23;
      }
      goto LAB_00195034;
    }
    if (lVar3 != -0x4d639f690ca37e23) {
      if (lVar3 == -0x4c7d707d0984aec1) {
        lVar4 = 0x3118625a2df47752;
      }
      goto LAB_00195034;
    }
    local_74 = 0x1b;
  }
  lVar4 = -0x1cd5075efc733bfd;
  goto LAB_00195034;
}

