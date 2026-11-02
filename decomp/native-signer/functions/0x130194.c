// rea decompile_all
// name: FUN_00130194
// address: 0x130194
// body: available
// range: 0x130194-0x13089b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x130898 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00130194(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined *local_290;
  undefined8 *puStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined *local_190;
  undefined8 *puStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  long local_88;
  
  local_90 = tpidr_el0;
  local_88 = *(long *)(local_90 + 0x28);
  lVar1 = -0x18b8a9cbc3cd974b;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while (lVar3 = lVar1, lVar1 = lVar3, lVar3 < 0x2b1b641f467d8267) {
              if (lVar3 < -0x18b8a9cbc3cd974b) {
                if (lVar3 < -0x457d79423d7639dd) {
                  lVar1 = 0x7637e52127f19ce7;
                  if ((lVar3 != -0x711dbf3c1c45e064) &&
                     (lVar1 = lVar3, lVar3 == -0x60bd5b7d3ae1364a)) {
                    lVar1 = 0x722a1a4f76db9025;
                  }
                }
                else if (lVar3 == -0x457d79423d7639dd) {
                  DAT_0021f334 = 0;
                  lVar1 = 0x7637e52127f19ce7;
                }
                else if (lVar3 == -0x44c8cf93a480b850) {
                  DAT_0021c810 = DAT_0021c810 ^ 0x52;
                  DAT_0021c811 = DAT_0021c811 ^ 0x52;
                  DAT_0021c808 = DAT_0021c808 ^ 0x5252525252525252;
                  DAT_0021f685 = '\x01';
                  lVar1 = 0x1869af6c47890a69;
                }
              }
              else if (lVar3 < 0x3b618bd89901766) {
                lVar1 = 0x765806476486e594;
                if ((lVar3 != -0x18b8a9cbc3cd974b) && (lVar1 = lVar3, lVar3 == -0xdee245aaa4df7cc))
                {
                  DAT_0021c838 = DAT_0021c838 ^ 0x90;
                  DAT_0021c839 = DAT_0021c839 ^ 0x90;
                  DAT_0021c83a = DAT_0021c83a ^ 0x90;
                  DAT_0021c83b = DAT_0021c83b ^ 0x90;
                  DAT_0021c83c = DAT_0021c83c ^ 0x90;
                  DAT_0021c83d = DAT_0021c83d ^ 0x90;
                  DAT_0021c83e = DAT_0021c83e ^ 0x90;
                  _DAT_0021c820 = _DAT_0021c820 ^ 0x9090909090909090;
                  uRam000000000021c828 = uRam000000000021c828 ^ 0x9090909090909090;
                  DAT_0021c830 = DAT_0021c830 ^ 0x9090909090909090;
                  DAT_0021f686 = '\x01';
                  lVar1 = -0x457d79423d7639dd;
                }
              }
              else {
                lVar1 = 0x1869af6c47890a69;
                if (lVar3 != 0x3b618bd89901766) {
                  if (lVar3 == 0x150a4407391476c9) {
                    lVar1 = 0x3b618bd89901766;
                    if (DAT_0021f685 == '\0') {
                      lVar1 = -0x44c8cf93a480b850;
                    }
                  }
                  else {
                    lVar1 = lVar3;
                    if (lVar3 == 0x1869af6c47890a69) {
                      DAT_0021f330 = 0;
                      lVar1 = 0x58eb107533ee1fff;
                    }
                  }
                }
              }
            }
            if (0x722a1a4f76db9024 < lVar3) break;
            if (lVar3 < 0x58eb107533ee1fff) {
              if (lVar3 == 0x2b1b641f467d8267) {
                lVar1 = -0x60bd5b7d3ae1364a;
                if (DAT_0021f667 == '\0') {
                  lVar1 = 0x7d40df864304d79f;
                }
              }
              else if (lVar3 == 0x4a852f77d34b64cc) {
                lVar1 = 0x5c598656993fb56c;
                if (DAT_0021f686 == '\0') {
                  lVar1 = -0xdee245aaa4df7cc;
                }
              }
            }
            else if (lVar3 == 0x58eb107533ee1fff) {
              iVar2 = FUN_00212730(0,1,&DAT_0021f2b8);
              lVar1 = 0x2b1b641f467d8267;
              if (iVar2 != 0) {
                lVar1 = 0x7af17e6e9e5cafd7;
              }
            }
            else {
              lVar1 = 0x765806476486e594;
              if ((lVar3 != 0x5b3f986b41bda326) && (lVar1 = lVar3, lVar3 == 0x5c598656993fb56c)) {
                lVar1 = -0x457d79423d7639dd;
              }
            }
          }
          if (lVar3 < 0x7af17e6e9e5cafd7) break;
          lVar1 = 0x58eb107533ee1fff;
          if ((lVar3 != 0x7af17e6e9e5cafd7) && (lVar1 = lVar3, lVar3 == 0x7d40df864304d79f)) {
            _DAT_0021c600 = _DAT_0021c600 ^ 0x1c1c1c1c1c1c1c1c;
            uRam000000000021c608 = uRam000000000021c608 ^ 0x1c1c1c1c1c1c1c1c;
            DAT_0021c610 = DAT_0021c610 ^ 0x1c1c1c1c1c1c1c1c;
            DAT_0021f667 = '\x01';
            lVar1 = 0x722a1a4f76db9025;
          }
        }
        if (lVar3 != 0x7637e52127f19ce7) break;
        iVar2 = FUN_00212730(0,1,&DAT_0021f330);
        lVar1 = 0x150a4407391476c9;
        if (iVar2 != 0) {
          lVar1 = -0x711dbf3c1c45e064;
        }
      }
      if (lVar3 != 0x765806476486e594) break;
      iVar2 = FUN_00212730(0,1,&DAT_0021f334);
      lVar1 = 0x4a852f77d34b64cc;
      if (iVar2 != 0) {
        lVar1 = 0x5b3f986b41bda326;
      }
    }
  } while (lVar3 != 0x722a1a4f76db9025);
  DAT_0021f2b8 = 0;
  local_a0 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_268 = 0;
  local_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  local_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  local_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  local_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  local_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_1a0 = 0;
  uStack_278 = 0;
  local_280 = 0;
  local_290 = &DAT_0021c600;
  puStack_288 = &DAT_0021c808;
  uStack_1e8 = 3;
  local_198 = 1;
  local_190 = &DAT_0021c820;
  puStack_188 = &DAT_0021c808;
  local_e8 = 3;
  local_98 = 1;
  FUN_00125518(&local_290,2);
  if (*(long *)(local_90 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}

