// rea decompile_all
// name: FUN_00116468
// address: 0x116468
// body: available
// range: 0x116468-0x116c8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00116468(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong unaff_x23;
  
  lVar1 = 0x5d3a8da6cfe8ba7e;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (lVar3 = lVar1, lVar1 = lVar3, lVar3 < 0x1cfddd916887bb1f) {
            if (lVar3 < -0x4998112c928737e6) {
              if (lVar3 < -0x58cd83b6dc0ef610) {
                if (lVar3 == -0x70cfe65a81c05751) {
                  uVar2 = FUN_0014da04(param_1);
                  lVar1 = 0x57d81d665f63feb6;
                  if ((uVar2 & 1) == 0) {
                    lVar1 = -0x58cd83b6dc0ef610;
                  }
                }
                else if (lVar3 == -0x5da39d4a7fa4087b) {
                  uVar2 = FUN_00154224(param_1);
                  lVar1 = 0x4e65493d8a1095e7;
                  if ((uVar2 & 1) == 0) {
                    lVar1 = -0x58de13c83ba0cdbd;
                  }
                }
                else if (lVar3 == -0x58de13c83ba0cdbd) {
                  uVar2 = FUN_0015602c(param_1);
                  lVar1 = 0x5850ed984d80a3b9;
                  if ((uVar2 & 1) == 0) {
                    lVar1 = -0x343395c40d1ff58a;
                  }
                }
              }
              else if (lVar3 < -0x5305364773019bd4) {
                if (lVar3 == -0x58cd83b6dc0ef610) {
                  uVar2 = FUN_0014e974(param_1);
                  lVar1 = 0x55fed587f697adc1;
                  if ((uVar2 & 1) == 0) {
                    lVar1 = -0x5da39d4a7fa4087b;
                  }
                }
                else if (lVar3 == -0x557fa50d88e2ceb5) {
                  lVar1 = -0x30447ca73e52f593;
                }
              }
              else {
                lVar1 = -0x30447ca73e52f593;
                if ((lVar3 != -0x5305364773019bd4) && (lVar1 = lVar3, lVar3 == -0x4d760381a195eff7))
                {
                  uVar2 = FUN_0015ddf4(param_1);
                  lVar1 = 0x54c769c3021ec19f;
                  if ((uVar2 & 1) == 0) {
                    lVar1 = 0x3734b5ad4a2f797c;
                  }
                }
              }
            }
            else if (lVar3 < -0x37909449582c1f11) {
              lVar1 = -0x30447ca73e52f593;
              if (((lVar3 != -0x4998112c928737e6) && (lVar3 != -0x42cec7778c4a105e)) &&
                 (lVar1 = lVar3, lVar3 == -0x4161a0695fc77586)) {
                uVar2 = FUN_0014d0fc(param_1);
                lVar1 = -0x557fa50d88e2ceb5;
                if ((uVar2 & 1) == 0) {
                  lVar1 = -0x70cfe65a81c05751;
                }
              }
            }
            else if (lVar3 < -0x30447ca73e52f593) {
              lVar1 = -0x30447ca73e52f593;
              if ((lVar3 != -0x37909449582c1f11) && (lVar1 = lVar3, lVar3 == -0x343395c40d1ff58a)) {
                uVar2 = FUN_001580b4(param_1);
                lVar1 = -0x4998112c928737e6;
                if ((uVar2 & 1) == 0) {
                  lVar1 = 0x4603874f2af04d2f;
                }
              }
            }
            else if (lVar3 == -0x30447ca73e52f593) {
              FUN_002083ac(param_2 + 0x20,0x21);
              unaff_x23 = *(ulong *)(param_2 + 0x238) | 1;
              lVar1 = 0x4f39e04f3a179cf5;
            }
            else if (lVar3 == 0x140fe0ec13d3d2b3) {
              uVar2 = FUN_0015a764(param_1);
              lVar1 = 0x64be4ab1a22798fa;
              if ((uVar2 & 1) == 0) {
                lVar1 = 0x1cfddd916887bb1f;
              }
            }
          }
          if (lVar3 < 0x55fed587f697adc1) break;
          if (lVar3 < 0x5d3a8da6cfe8ba7e) {
            lVar1 = -0x30447ca73e52f593;
            if (((lVar3 != 0x55fed587f697adc1) && (lVar3 != 0x57d81d665f63feb6)) &&
               (lVar1 = lVar3, lVar3 == 0x5850ed984d80a3b9)) {
              lVar1 = -0x30447ca73e52f593;
            }
          }
          else if (lVar3 < 0x664b7490a4469cb9) {
            if (lVar3 == 0x5d3a8da6cfe8ba7e) {
              uVar2 = FUN_0014a19c(param_1);
              lVar1 = -0x37909449582c1f11;
              if ((uVar2 & 1) == 0) {
                lVar1 = -0x4161a0695fc77586;
              }
            }
            else if (lVar3 == 0x64be4ab1a22798fa) {
              lVar1 = -0x30447ca73e52f593;
            }
          }
          else {
            lVar1 = -0x30447ca73e52f593;
            if ((lVar3 != 0x664b7490a4469cb9) && (lVar1 = lVar3, lVar3 == 0x6dd297abc4210391)) {
              uVar2 = FUN_0015d8b4(param_1);
              lVar1 = -0x42cec7778c4a105e;
              if ((uVar2 & 1) == 0) {
                lVar1 = -0x4d760381a195eff7;
              }
            }
          }
        }
        if (0x4bed40b469a391df < lVar3) break;
        if (lVar3 < 0x454369ab9017066f) {
          if (lVar3 == 0x1cfddd916887bb1f) {
            uVar2 = FUN_0015b15c(param_1);
            lVar1 = 0x454369ab9017066f;
            if ((uVar2 & 1) == 0) {
              lVar1 = 0x6dd297abc4210391;
            }
          }
          else if (lVar3 == 0x3734b5ad4a2f797c) {
            uVar2 = FUN_0015e32c(param_1);
            lVar1 = 0x664b7490a4469cb9;
            if ((uVar2 & 1) == 0) {
              lVar1 = 0x4bed40b469a391e0;
            }
          }
        }
        else {
          lVar1 = -0x30447ca73e52f593;
          if ((lVar3 != 0x454369ab9017066f) && (lVar1 = lVar3, lVar3 == 0x4603874f2af04d2f)) {
            uVar2 = FUN_00159abc(param_1);
            lVar1 = -0x5305364773019bd4;
            if ((uVar2 & 1) == 0) {
              lVar1 = 0x140fe0ec13d3d2b3;
            }
          }
        }
      }
      if (0x4f39e04f3a179cf4 < lVar3) break;
      if (lVar3 == 0x4bed40b469a391e0) {
        unaff_x23 = *(ulong *)(param_2 + 0x238);
        lVar1 = 0x4f39e04f3a179cf5;
      }
      else if (lVar3 == 0x4e65493d8a1095e7) {
        lVar1 = -0x30447ca73e52f593;
      }
    }
    lVar1 = -0x30447ca73e52f593;
  } while ((lVar3 == 0x54c769c3021ec19f) || (lVar1 = lVar3, lVar3 != 0x4f39e04f3a179cf5));
  *(ulong *)(param_2 + 0x238) = unaff_x23 | 0x200000000;
  return;
}

