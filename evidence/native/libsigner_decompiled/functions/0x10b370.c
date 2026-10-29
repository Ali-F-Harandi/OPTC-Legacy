// rea decompile_all
// name: FUN_0010b370
// address: 0x10b370
// body: available
// range: 0x10b370-0x10bdd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10bdd0 to 0x17696c FUN_0017696c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0010b370(undefined8 param_1,long *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  long local_88;
  
  puVar1 = (undefined1 *)0x49b9b00eeff4c15a;
  if (param_2 != (long *)0x0) {
    puVar1 = (undefined1 *)0x5ece82223eee3411;
  }
  puVar2 = (undefined1 *)0x52cde6c2dea1be4;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while (puVar4 = puVar2, puVar2 = puVar4, 0xfb13253120e52d4 < (long)puVar4) {
              if ((long)puVar4 < 0x49b9b00eeff4c15a) {
                if ((long)puVar4 < 0x3007aa9d32d99be8) {
                  if (puVar4 == (undefined1 *)0xfb13253120e52d5) {
                    puVar2 = (undefined1 *)0xfda5c16090bb3af4;
                    if (DAT_0021f18e == '\0') {
                      puVar2 = (undefined1 *)0xedbefc38c6cf9bfe;
                    }
                  }
                  else if (puVar4 == (undefined1 *)0x22f3f9cf91cbb9a6) {
                    puVar2 = (undefined1 *)0xe48eaf6f29f5caa2;
                    if (DAT_0021f18c == '\0') {
                      puVar2 = (undefined1 *)0xc879bc31bae5bb14;
                    }
                  }
                  else if (puVar4 == (undefined1 *)0x29ff0ff794febe2e) {
                    puVar2 = (undefined1 *)0x87b1ff2df68e38ae;
                  }
                }
                else if ((long)puVar4 < 0x36f07785a64d7584) {
                  puVar2 = (undefined1 *)0x8e3a3d610d847caf;
                  if ((puVar4 != (undefined1 *)0x3007aa9d32d99be8) &&
                     (puVar2 = puVar4, puVar4 == (undefined1 *)0x34ee749c3dc3cf5c)) {
                    puVar2 = (undefined1 *)0x29ff0ff794febe2e;
                    if (DAT_0021f18b == '\0') {
                      puVar2 = (undefined1 *)0xe7622641fcb090c6;
                    }
                  }
                }
                else {
                  puVar2 = (undefined1 *)0x960858df0b0de441;
                  if ((puVar4 != (undefined1 *)0x36f07785a64d7584) &&
                     (puVar2 = puVar4, puVar4 == (undefined1 *)0x418b7d3c908df894)) {
                    DAT_0021be40 = DAT_0021be40 ^ 0xf0;
                    DAT_0021be41 = DAT_0021be41 ^ 0xf0;
                    DAT_0021be42 = DAT_0021be42 ^ 0xf0;
                    DAT_0021be44 = DAT_0021be44 ^ 0xf0;
                    DAT_0021be45 = DAT_0021be45 ^ 0xf0;
                    DAT_0021be43 = DAT_0021be43 ^ 0xf0;
                    DAT_0021be46 = DAT_0021be46 ^ 0xf0;
                    DAT_0021be38 = DAT_0021be38 ^ 0xf0f0f0f0f0f0f0f0;
                    DAT_0021f18d = '\x01';
                    puVar2 = (undefined1 *)0x8e3a3d610d847caf;
                  }
                }
              }
              else if ((long)puVar4 < 0x75df443d79079721) {
                if ((long)puVar4 < 0x58b842c6f86d5804) {
                  puVar2 = (undefined1 *)0x75df443d79079721;
                  if ((puVar4 != (undefined1 *)0x49b9b00eeff4c15a) &&
                     (puVar2 = puVar4, puVar4 == (undefined1 *)0x5039187a35dab08d)) {
                    puVar2 = (undefined1 *)0xa865ab623572e331;
                  }
                }
                else {
                  puVar2 = (undefined1 *)0x75df443d79079721;
                  if ((puVar4 != (undefined1 *)0x58b842c6f86d5804) &&
                     (puVar2 = puVar4, puVar4 == (undefined1 *)0x5ece82223eee3411)) {
                    local_88 = *(long *)(param_3 + 0x18);
                    puVar2 = (undefined1 *)0x58b842c6f86d5804;
                    if (local_88 != 0) {
                      puVar2 = (undefined1 *)0x7e713fa43f38c582;
                    }
                  }
                }
              }
              else if ((long)puVar4 < 0x7d8bf94548220fb8) {
                puVar2 = (undefined1 *)0xa865ab623572e331;
                if ((puVar4 != (undefined1 *)0x75df443d79079721) &&
                   (puVar2 = puVar4, puVar4 == (undefined1 *)0x77f0428eaa711148)) {
                  DAT_0021f104 = 0;
                  puVar2 = (undefined1 *)0x7d8bf94548220fb8;
                }
              }
              else if (puVar4 == (undefined1 *)0x7d8bf94548220fb8) {
                iVar3 = FUN_00212730(0,1,&DAT_0021f100);
                puVar2 = (undefined1 *)0x940bdddd24f52ce3;
                if (iVar3 != 0) {
                  puVar2 = (undefined1 *)0xba8fbc7d3623138d;
                }
              }
              else if (puVar4 == (undefined1 *)0x7e713fa43f38c582) {
                (**(code **)(*param_2 + 0xb8))(param_2,local_88);
                puVar2 = (undefined1 *)0x75df443d79079721;
              }
            }
            if ((long)puVar4 < -0x3bafc724edb51fea) break;
            if ((long)puVar4 < -0x189dd9be034f6f3a) {
              if (puVar4 == &DAT_c45038db124ae016) {
                DAT_0021f0fc = 0;
                puVar2 = (undefined1 *)0x8500be9b057d300e;
              }
              else if (puVar4 == (undefined1 *)0xc879bc31bae5bb14) {
                DAT_0021be30 = DAT_0021be30 ^ 0xbb;
                DAT_0021be31 = DAT_0021be31 ^ 0xbb;
                DAT_0021be32 = DAT_0021be32 ^ 0xbb;
                DAT_0021be34 = DAT_0021be34 ^ 0xbb;
                DAT_0021be35 = DAT_0021be35 ^ 0xbb;
                DAT_0021be33 = DAT_0021be33 ^ 0xbb;
                DAT_0021be36 = DAT_0021be36 ^ 0xbb;
                DAT_0021be28 = DAT_0021be28 ^ 0xbbbbbbbbbbbbbbbb;
                DAT_0021f18c = '\x01';
                puVar2 = &DAT_c45038db124ae016;
              }
              else if (puVar4 == (undefined1 *)0xe48eaf6f29f5caa2) {
                puVar2 = &DAT_c45038db124ae016;
              }
            }
            else if ((long)puVar4 < -0x25a3e9f6f44c50c) {
              if (puVar4 == (undefined1 *)0xe7622641fcb090c6) {
                DAT_0021be20 = DAT_0021be20 ^ 0x7c;
                DAT_0021be22 = DAT_0021be22 ^ 0x7c;
                DAT_0021be21 = DAT_0021be21 ^ 0x7c;
                DAT_0021be18 = DAT_0021be18 ^ 0x7c7c7c7c7c7c7c7c;
                DAT_0021f18b = '\x01';
                puVar2 = (undefined1 *)0x87b1ff2df68e38ae;
              }
              else if (puVar4 == (undefined1 *)0xedbefc38c6cf9bfe) {
                DAT_0021be50 = DAT_0021be50 ^ 0x74;
                DAT_0021be51 = DAT_0021be51 ^ 0x74;
                DAT_0021be48 = DAT_0021be48 ^ 0x7474747474747474;
                DAT_0021f18e = '\x01';
                puVar2 = (undefined1 *)0x77f0428eaa711148;
              }
            }
            else {
              puVar2 = (undefined1 *)0x77f0428eaa711148;
              if ((puVar4 != (undefined1 *)0xfda5c16090bb3af4) &&
                 (puVar2 = puVar4, puVar4 == (undefined1 *)0x52cde6c2dea1be4)) {
                puVar2 = puVar1;
              }
            }
          }
          if ((long)puVar4 < -0x69f7a720f4f21bbf) break;
          if ((long)puVar4 < -0x45704382c9dcec73) {
            if (puVar4 == (undefined1 *)0x960858df0b0de441) {
              iVar3 = FUN_00212730(0,1,&DAT_0021f0fc);
              puVar2 = (undefined1 *)0x22f3f9cf91cbb9a6;
              if (iVar3 != 0) {
                puVar2 = (undefined1 *)0x36f07785a64d7584;
              }
            }
            else if (puVar4 == (undefined1 *)0xa865ab623572e331) {
              iVar3 = FUN_00212730(0,1,&DAT_0021f104);
              puVar2 = (undefined1 *)0xfb13253120e52d5;
              if (iVar3 != 0) {
                puVar2 = (undefined1 *)0x5039187a35dab08d;
              }
            }
          }
          else {
            puVar2 = (undefined1 *)0x7d8bf94548220fb8;
            if ((puVar4 != (undefined1 *)0xba8fbc7d3623138d) &&
               (puVar2 = puVar4, puVar4 == (undefined1 *)0xc0f51250277e5cfd)) {
              puVar2 = (undefined1 *)0x8500be9b057d300e;
            }
          }
        }
        if ((long)puVar4 < -0x71c5c29ef27b8351) break;
        if (puVar4 == (undefined1 *)0x8e3a3d610d847caf) {
          DAT_0021f100 = 0;
          puVar2 = (undefined1 *)0x960858df0b0de441;
        }
        else if (puVar4 == (undefined1 *)0x940bdddd24f52ce3) {
          puVar2 = (undefined1 *)0x3007aa9d32d99be8;
          if (DAT_0021f18d == '\0') {
            puVar2 = (undefined1 *)0x418b7d3c908df894;
          }
        }
      }
      if (puVar4 != (undefined1 *)0x8500be9b057d300e) break;
      iVar3 = FUN_00212730(0,1,&DAT_0021f0f4);
      puVar2 = (undefined1 *)0x34ee749c3dc3cf5c;
      if (iVar3 != 0) {
        puVar2 = (undefined1 *)0xc0f51250277e5cfd;
      }
    }
  } while (puVar4 != (undefined1 *)0x87b1ff2df68e38ae);
  DAT_0021f0f4 = 0;
  *(undefined8 *)(param_3 + 0x18) = 0;
  FUN_0017696c(param_1,param_2,*(undefined8 *)(param_3 + 0x10),&DAT_0021be18);
  FUN_0017696c(param_1,param_2,*(undefined8 *)(param_3 + 0x10),&DAT_0021be28);
  FUN_0017696c(param_1,param_2,*(undefined8 *)(param_3 + 0x10),&DAT_0021be38);
  FUN_0017696c(param_1,param_2,*(undefined8 *)(param_3 + 0x10),&DAT_0021be48);
  return;
}

