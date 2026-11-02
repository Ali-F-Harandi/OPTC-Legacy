// rea decompile_all
// name: FUN_00207134
// address: 0x207134
// body: available
// range: 0x207134-0x207adb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x207ad8 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00207134(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined8 *__optval;
  undefined1 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong unaff_x19;
  int unaff_w20;
  uint unaff_w26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  ulong uVar7;
  undefined1 auStack_c0 [8];
  long local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 *local_98;
  undefined8 *local_90;
  sockaddr *local_88;
  uint local_7c;
  long local_78;
  
  local_b8 = tpidr_el0;
  local_78 = *(long *)(local_b8 + 0x28);
  uStack_a8 = 100000;
  local_b0 = 0;
  puVar3 = (undefined8 *)auStack_c0;
  puVar2 = (undefined1 *)0x49b9b00eeff4c15a;
  local_98 = param_1;
LAB_002071e8:
  do {
    while( true ) {
      while (puVar6 = puVar2, __optval = local_90, uVar1 = local_b0, puVar2 = puVar6,
            0x29ff0ff794febe2d < (long)puVar6) {
        if ((long)puVar6 < 0x5039187a35dab08d) {
          if ((long)puVar6 < 0x36f07785a64d7584) {
            puVar2 = (undefined1 *)0x75df443d79079721;
            if (((puVar6 != (undefined1 *)0x29ff0ff794febe2e) &&
                (puVar2 = (undefined1 *)0xc0f51250277e5cfd,
                puVar6 != (undefined1 *)0x3007aa9d32d99be8)) &&
               (puVar2 = puVar6, puVar6 == (undefined1 *)0x34ee749c3dc3cf5c)) {
              puVar2 = (undefined1 *)0x29ff0ff794febe2e;
              if (DAT_0021fb6d == '\0') {
                puVar2 = (undefined1 *)0x7e713fa43f38c582;
              }
            }
          }
          else {
            puVar2 = (undefined1 *)0xc879bc31bae5bb14;
            if (puVar6 != (undefined1 *)0x36f07785a64d7584) {
              if (puVar6 == (undefined1 *)0x418b7d3c908df894) {
                _DAT_0021f030 =
                     CONCAT17(~(byte)((ulong)_DAT_0021f030 >> 0x38),
                              CONCAT16(~(byte)((ulong)_DAT_0021f030 >> 0x30),
                                       CONCAT15(~(byte)((ulong)_DAT_0021f030 >> 0x28),
                                                CONCAT14(~(byte)((ulong)_DAT_0021f030 >> 0x20),
                                                         CONCAT13(~(byte)((ulong)_DAT_0021f030 >>
                                                                         0x18),
                                                                  CONCAT12(~(byte)((ulong)
                                                  _DAT_0021f030 >> 0x10),
                                                  CONCAT11(~(byte)((ulong)_DAT_0021f030 >> 8),
                                                           ~(byte)_DAT_0021f030)))))));
                uRam000000000021f038 =
                     CONCAT17(~(byte)((ulong)uRam000000000021f038 >> 0x38),
                              CONCAT16(~(byte)((ulong)uRam000000000021f038 >> 0x30),
                                       CONCAT15(~(byte)((ulong)uRam000000000021f038 >> 0x28),
                                                CONCAT14(~(byte)((ulong)uRam000000000021f038 >> 0x20
                                                                ),CONCAT13(~(byte)((ulong)
                                                  uRam000000000021f038 >> 0x18),
                                                  CONCAT12(~(byte)((ulong)uRam000000000021f038 >>
                                                                  0x10),
                                                           CONCAT11(~(byte)((ulong)
                                                  uRam000000000021f038 >> 8),
                                                  ~(byte)uRam000000000021f038)))))));
                DAT_0021fb6f = '\x01';
                _DAT_0021f040 =
                     CONCAT17(~(byte)((ulong)_DAT_0021f040 >> 0x38),
                              CONCAT16(~(byte)((ulong)_DAT_0021f040 >> 0x30),
                                       CONCAT15(~(byte)((ulong)_DAT_0021f040 >> 0x28),
                                                CONCAT14(~(byte)((ulong)_DAT_0021f040 >> 0x20),
                                                         CONCAT13(~(byte)((ulong)_DAT_0021f040 >>
                                                                         0x18),
                                                                  CONCAT12(~(byte)((ulong)
                                                  _DAT_0021f040 >> 0x10),
                                                  CONCAT11(~(byte)((ulong)_DAT_0021f040 >> 8),
                                                           ~(byte)_DAT_0021f040)))))));
                uRam000000000021f048 =
                     CONCAT17(~(byte)((ulong)uRam000000000021f048 >> 0x38),
                              CONCAT16(~(byte)((ulong)uRam000000000021f048 >> 0x30),
                                       CONCAT15(~(byte)((ulong)uRam000000000021f048 >> 0x28),
                                                CONCAT14(~(byte)((ulong)uRam000000000021f048 >> 0x20
                                                                ),CONCAT13(~(byte)((ulong)
                                                  uRam000000000021f048 >> 0x18),
                                                  CONCAT12(~(byte)((ulong)uRam000000000021f048 >>
                                                                  0x10),
                                                           CONCAT11(~(byte)((ulong)
                                                  uRam000000000021f048 >> 8),
                                                  ~(byte)uRam000000000021f048)))))));
                _DAT_0021f050 =
                     CONCAT17(~(byte)((ulong)_DAT_0021f050 >> 0x38),
                              CONCAT16(~(byte)((ulong)_DAT_0021f050 >> 0x30),
                                       CONCAT15(~(byte)((ulong)_DAT_0021f050 >> 0x28),
                                                CONCAT14(~(byte)((ulong)_DAT_0021f050 >> 0x20),
                                                         CONCAT13(~(byte)((ulong)_DAT_0021f050 >>
                                                                         0x18),
                                                                  CONCAT12(~(byte)((ulong)
                                                  _DAT_0021f050 >> 0x10),
                                                  CONCAT11(~(byte)((ulong)_DAT_0021f050 >> 8),
                                                           ~(byte)_DAT_0021f050)))))));
                uRam000000000021f058 =
                     CONCAT17(~(byte)((ulong)uRam000000000021f058 >> 0x38),
                              CONCAT16(~(byte)((ulong)uRam000000000021f058 >> 0x30),
                                       CONCAT15(~(byte)((ulong)uRam000000000021f058 >> 0x28),
                                                CONCAT14(~(byte)((ulong)uRam000000000021f058 >> 0x20
                                                                ),CONCAT13(~(byte)((ulong)
                                                  uRam000000000021f058 >> 0x18),
                                                  CONCAT12(~(byte)((ulong)uRam000000000021f058 >>
                                                                  0x10),
                                                           CONCAT11(~(byte)((ulong)
                                                  uRam000000000021f058 >> 8),
                                                  ~(byte)uRam000000000021f058)))))));
                _DAT_0021f060 =
                     CONCAT17(~(byte)((ulong)_DAT_0021f060 >> 0x38),
                              CONCAT16(~(byte)((ulong)_DAT_0021f060 >> 0x30),
                                       CONCAT15(~(byte)((ulong)_DAT_0021f060 >> 0x28),
                                                CONCAT14(~(byte)((ulong)_DAT_0021f060 >> 0x20),
                                                         CONCAT13(~(byte)((ulong)_DAT_0021f060 >>
                                                                         0x18),
                                                                  CONCAT12(~(byte)((ulong)
                                                  _DAT_0021f060 >> 0x10),
                                                  CONCAT11(~(byte)((ulong)_DAT_0021f060 >> 8),
                                                           ~(byte)_DAT_0021f060)))))));
                uRam000000000021f068 =
                     CONCAT17(~(byte)((ulong)uRam000000000021f068 >> 0x38),
                              CONCAT16(~(byte)((ulong)uRam000000000021f068 >> 0x30),
                                       CONCAT15(~(byte)((ulong)uRam000000000021f068 >> 0x28),
                                                CONCAT14(~(byte)((ulong)uRam000000000021f068 >> 0x20
                                                                ),CONCAT13(~(byte)((ulong)
                                                  uRam000000000021f068 >> 0x18),
                                                  CONCAT12(~(byte)((ulong)uRam000000000021f068 >>
                                                                  0x10),
                                                           CONCAT11(~(byte)((ulong)
                                                  uRam000000000021f068 >> 8),
                                                  ~(byte)uRam000000000021f068)))))));
                _DAT_0021f070 =
                     CONCAT17(~(byte)((ulong)_DAT_0021f070 >> 0x38),
                              CONCAT16(~(byte)((ulong)_DAT_0021f070 >> 0x30),
                                       CONCAT15(~(byte)((ulong)_DAT_0021f070 >> 0x28),
                                                CONCAT14(~(byte)((ulong)_DAT_0021f070 >> 0x20),
                                                         CONCAT13(~(byte)((ulong)_DAT_0021f070 >>
                                                                         0x18),
                                                                  CONCAT12(~(byte)((ulong)
                                                  _DAT_0021f070 >> 0x10),
                                                  CONCAT11(~(byte)((ulong)_DAT_0021f070 >> 8),
                                                           ~(byte)_DAT_0021f070)))))));
                uRam000000000021f078 =
                     CONCAT17(~(byte)((ulong)uRam000000000021f078 >> 0x38),
                              CONCAT16(~(byte)((ulong)uRam000000000021f078 >> 0x30),
                                       CONCAT15(~(byte)((ulong)uRam000000000021f078 >> 0x28),
                                                CONCAT14(~(byte)((ulong)uRam000000000021f078 >> 0x20
                                                                ),CONCAT13(~(byte)((ulong)
                                                  uRam000000000021f078 >> 0x18),
                                                  CONCAT12(~(byte)((ulong)uRam000000000021f078 >>
                                                                  0x10),
                                                           CONCAT11(~(byte)((ulong)
                                                  uRam000000000021f078 >> 8),
                                                  ~(byte)uRam000000000021f078)))))));
                _DAT_0021f080 =
                     CONCAT17(~(byte)((ulong)_DAT_0021f080 >> 0x38),
                              CONCAT16(~(byte)((ulong)_DAT_0021f080 >> 0x30),
                                       CONCAT15(~(byte)((ulong)_DAT_0021f080 >> 0x28),
                                                CONCAT14(~(byte)((ulong)_DAT_0021f080 >> 0x20),
                                                         CONCAT13(~(byte)((ulong)_DAT_0021f080 >>
                                                                         0x18),
                                                                  CONCAT12(~(byte)((ulong)
                                                  _DAT_0021f080 >> 0x10),
                                                  CONCAT11(~(byte)((ulong)_DAT_0021f080 >> 8),
                                                           ~(byte)_DAT_0021f080)))))));
                uRam000000000021f088 =
                     CONCAT17(~(byte)((ulong)uRam000000000021f088 >> 0x38),
                              CONCAT16(~(byte)((ulong)uRam000000000021f088 >> 0x30),
                                       CONCAT15(~(byte)((ulong)uRam000000000021f088 >> 0x28),
                                                CONCAT14(~(byte)((ulong)uRam000000000021f088 >> 0x20
                                                                ),CONCAT13(~(byte)((ulong)
                                                  uRam000000000021f088 >> 0x18),
                                                  CONCAT12(~(byte)((ulong)uRam000000000021f088 >>
                                                                  0x10),
                                                           CONCAT11(~(byte)((ulong)
                                                  uRam000000000021f088 >> 8),
                                                  ~(byte)uRam000000000021f088)))))));
                _DAT_0021f090 =
                     CONCAT17(~(byte)((ulong)_DAT_0021f090 >> 0x38),
                              CONCAT16(~(byte)((ulong)_DAT_0021f090 >> 0x30),
                                       CONCAT15(~(byte)((ulong)_DAT_0021f090 >> 0x28),
                                                CONCAT14(~(byte)((ulong)_DAT_0021f090 >> 0x20),
                                                         CONCAT13(~(byte)((ulong)_DAT_0021f090 >>
                                                                         0x18),
                                                                  CONCAT12(~(byte)((ulong)
                                                  _DAT_0021f090 >> 0x10),
                                                  CONCAT11(~(byte)((ulong)_DAT_0021f090 >> 8),
                                                           ~(byte)_DAT_0021f090)))))));
                uRam000000000021f098 =
                     CONCAT17(~(byte)((ulong)uRam000000000021f098 >> 0x38),
                              CONCAT16(~(byte)((ulong)uRam000000000021f098 >> 0x30),
                                       CONCAT15(~(byte)((ulong)uRam000000000021f098 >> 0x28),
                                                CONCAT14(~(byte)((ulong)uRam000000000021f098 >> 0x20
                                                                ),CONCAT13(~(byte)((ulong)
                                                  uRam000000000021f098 >> 0x18),
                                                  CONCAT12(~(byte)((ulong)uRam000000000021f098 >>
                                                                  0x10),
                                                           CONCAT11(~(byte)((ulong)
                                                  uRam000000000021f098 >> 8),
                                                  ~(byte)uRam000000000021f098)))))));
                _DAT_0021f0a0 =
                     CONCAT17(~(byte)((ulong)_DAT_0021f0a0 >> 0x38),
                              CONCAT16(~(byte)((ulong)_DAT_0021f0a0 >> 0x30),
                                       CONCAT15(~(byte)((ulong)_DAT_0021f0a0 >> 0x28),
                                                CONCAT14(~(byte)((ulong)_DAT_0021f0a0 >> 0x20),
                                                         CONCAT13(~(byte)((ulong)_DAT_0021f0a0 >>
                                                                         0x18),
                                                                  CONCAT12(~(byte)((ulong)
                                                  _DAT_0021f0a0 >> 0x10),
                                                  CONCAT11(~(byte)((ulong)_DAT_0021f0a0 >> 8),
                                                           ~(byte)_DAT_0021f0a0)))))));
                uRam000000000021f0a8 =
                     CONCAT17(~(byte)((ulong)uRam000000000021f0a8 >> 0x38),
                              CONCAT16(~(byte)((ulong)uRam000000000021f0a8 >> 0x30),
                                       CONCAT15(~(byte)((ulong)uRam000000000021f0a8 >> 0x28),
                                                CONCAT14(~(byte)((ulong)uRam000000000021f0a8 >> 0x20
                                                                ),CONCAT13(~(byte)((ulong)
                                                  uRam000000000021f0a8 >> 0x18),
                                                  CONCAT12(~(byte)((ulong)uRam000000000021f0a8 >>
                                                                  0x10),
                                                           CONCAT11(~(byte)((ulong)
                                                  uRam000000000021f0a8 >> 8),
                                                  ~(byte)uRam000000000021f0a8)))))));
                _DAT_0021f0b0 =
                     CONCAT17(~(byte)((ulong)_DAT_0021f0b0 >> 0x38),
                              CONCAT16(~(byte)((ulong)_DAT_0021f0b0 >> 0x30),
                                       CONCAT15(~(byte)((ulong)_DAT_0021f0b0 >> 0x28),
                                                CONCAT14(~(byte)((ulong)_DAT_0021f0b0 >> 0x20),
                                                         CONCAT13(~(byte)((ulong)_DAT_0021f0b0 >>
                                                                         0x18),
                                                                  CONCAT12(~(byte)((ulong)
                                                  _DAT_0021f0b0 >> 0x10),
                                                  CONCAT11(~(byte)((ulong)_DAT_0021f0b0 >> 8),
                                                           ~(byte)_DAT_0021f0b0)))))));
                uRam000000000021f0b8 =
                     CONCAT17(~(byte)((ulong)uRam000000000021f0b8 >> 0x38),
                              CONCAT16(~(byte)((ulong)uRam000000000021f0b8 >> 0x30),
                                       CONCAT15(~(byte)((ulong)uRam000000000021f0b8 >> 0x28),
                                                CONCAT14(~(byte)((ulong)uRam000000000021f0b8 >> 0x20
                                                                ),CONCAT13(~(byte)((ulong)
                                                  uRam000000000021f0b8 >> 0x18),
                                                  CONCAT12(~(byte)((ulong)uRam000000000021f0b8 >>
                                                                  0x10),
                                                           CONCAT11(~(byte)((ulong)
                                                  uRam000000000021f0b8 >> 8),
                                                  ~(byte)uRam000000000021f0b8)))))));
                DAT_0021f0c0 = CONCAT17(~(byte)((ulong)DAT_0021f0c0 >> 0x38),
                                        CONCAT16(~(byte)((ulong)DAT_0021f0c0 >> 0x30),
                                                 CONCAT15(~(byte)((ulong)DAT_0021f0c0 >> 0x28),
                                                          CONCAT14(~(byte)((ulong)DAT_0021f0c0 >>
                                                                          0x20),
                                                                   CONCAT13(~(byte)((ulong)
                                                  DAT_0021f0c0 >> 0x18),
                                                  CONCAT12(~(byte)((ulong)DAT_0021f0c0 >> 0x10),
                                                           CONCAT11(~(byte)((ulong)DAT_0021f0c0 >> 8
                                                                           ),~(byte)DAT_0021f0c0))))
                                                  )));
                puVar2 = (undefined1 *)0x8e3a3d610d847caf;
              }
              else {
                puVar2 = puVar6;
                if (puVar6 == (undefined1 *)0x49b9b00eeff4c15a) {
                  puVar2 = (undefined1 *)0x5ece82223eee3411;
                }
              }
            }
          }
        }
        else if ((long)puVar6 < 0x75df443d79079721) {
          if (puVar6 == (undefined1 *)0x5039187a35dab08d) {
            local_90[1] = uStack_a8;
            *__optval = uVar1;
            setsockopt(unaff_w20,1,0x14,__optval,0x10);
            iVar4 = connect(unaff_w20,local_88,0x10);
            puVar2 = (undefined1 *)0xedbefc38c6cf9bfe;
            if (iVar4 != -1) {
              puVar2 = (undefined1 *)0x77f0428eaa711148;
            }
          }
          else {
            puVar2 = (undefined1 *)0x5ece82223eee3411;
            if ((puVar6 != (undefined1 *)0x58b842c6f86d5804) &&
               (puVar2 = puVar6, puVar6 == (undefined1 *)0x5ece82223eee3411)) {
              iVar4 = FUN_00212730(0,1,&DAT_0021fb60);
              puVar2 = (undefined1 *)0x34ee749c3dc3cf5c;
              if (iVar4 != 0) {
                puVar2 = (undefined1 *)0x58b842c6f86d5804;
              }
            }
          }
        }
        else if ((long)puVar6 < 0x7d8bf94548220fb8) {
          if (puVar6 == (undefined1 *)0x75df443d79079721) {
            local_88 = (sockaddr *)(puVar3 + -2);
            DAT_0021fb60 = 0;
            local_90 = puVar3 + -4;
            unaff_x27 = puVar3 + -0x14;
            unaff_x28 = puVar3 + -0x16;
            FUN_001e38f8(local_88,0,0x10);
            *(undefined2 *)(puVar3 + -2) = 2;
            inet_aton((char *)&DAT_0021f018,(in_addr *)((long)puVar3 + -0xc));
            *(undefined2 *)((long)puVar3 + -0xe) = 0xa269;
            unaff_w20 = socket(2,1,0);
            puVar3 = unaff_x28;
            puVar2 = (undefined1 *)0xa865ab623572e331;
            if (-1 < unaff_w20) {
              puVar2 = (undefined1 *)0x5039187a35dab08d;
            }
          }
          else if (puVar6 == (undefined1 *)0x77f0428eaa711148) {
            puVar2 = (undefined1 *)0x7d8bf94548220fb8;
          }
        }
        else if (puVar6 == (undefined1 *)0x7d8bf94548220fb8) {
          iVar4 = FUN_00212730(0,1,&DAT_0021fb68);
          puVar2 = (undefined1 *)0x22f3f9cf91cbb9a6;
          if (iVar4 != 0) {
            puVar2 = (undefined1 *)0xba8fbc7d3623138d;
          }
        }
        else if (puVar6 == (undefined1 *)0x7e713fa43f38c582) {
          DAT_0021f020 = DAT_0021f020 ^ 0xb4;
          DAT_0021f021 = DAT_0021f021 ^ 0xb4;
          DAT_0021f018 = DAT_0021f018 ^ 0xb4b4b4b4b4b4b4b4;
          DAT_0021fb6d = '\x01';
          puVar2 = (undefined1 *)0x75df443d79079721;
        }
      }
      if ((long)puVar6 < -0x3f0aedafd881a303) break;
      if ((long)puVar6 < -0x1b715090d60a355e) {
        if (puVar6 == (undefined1 *)0xc0f51250277e5cfd) {
          uVar7 = unaff_x19;
          if (0x7f < unaff_x19) {
            uVar7 = 0x80;
          }
          DAT_0021fb6c = 0;
          *unaff_x28 = CONCAT35(DAT_0021f0c8._5_3_,(undefined5)DAT_0021f0c8);
          *(ulong *)((long)unaff_x28 + 5) =
               CONCAT17(DAT_0021f0d4,
                        CONCAT16(DAT_0021f0d3,
                                 CONCAT15(DAT_0021f0d2,CONCAT14(DAT_0021f0d1,ram0x0021f0cd))));
          lVar5 = FUN_001ebd68(unaff_x27,uVar7,unaff_x28,0xc);
          unaff_w26 = (uint)(lVar5 != 0);
          puVar2 = (undefined1 *)0xe7622641fcb090c6;
        }
        else {
          puVar2 = (undefined1 *)0xc879bc31bae5bb14;
          if ((puVar6 != &DAT_c45038db124ae016) &&
             (puVar2 = puVar6, puVar6 == (undefined1 *)0xc879bc31bae5bb14)) {
            iVar4 = FUN_00212730(0,1,&DAT_0021fb6c);
            puVar2 = (undefined1 *)0x940bdddd24f52ce3;
            if (iVar4 != 0) {
              puVar2 = &DAT_c45038db124ae016;
            }
          }
        }
      }
      else if ((long)puVar6 < -0x124103c739306402) {
        puVar2 = (undefined1 *)0x8e3a3d610d847caf;
        if ((puVar6 != (undefined1 *)0xe48eaf6f29f5caa2) &&
           (puVar2 = puVar6, puVar6 == (undefined1 *)0xe7622641fcb090c6)) {
          FUN_001f3aa0(unaff_w20);
          puVar2 = (undefined1 *)0x87b1ff2df68e38ae;
          local_7c = unaff_w26;
        }
      }
      else if (puVar6 == (undefined1 *)0xedbefc38c6cf9bfe) {
LAB_002071d4:
        unaff_w26 = 0;
        puVar2 = (undefined1 *)0xe7622641fcb090c6;
      }
      else if (puVar6 == (undefined1 *)0x22f3f9cf91cbb9a6) {
        puVar2 = (undefined1 *)0xe48eaf6f29f5caa2;
        if (DAT_0021fb6f == '\0') {
          puVar2 = (undefined1 *)0x418b7d3c908df894;
        }
      }
    }
    if ((long)puVar6 < -0x69f7a720f4f21bbf) {
      if ((long)puVar6 < -0x71c5c29ef27b8351) {
        if (puVar6 == (undefined1 *)0x8500be9b057d300e) {
          DAT_0021f0d1 = DAT_0021f0d1 ^ 0xb8;
          DAT_0021f0d2 = DAT_0021f0d2 ^ 0xb8;
          DAT_0021f0d3 = DAT_0021f0d3 ^ 0xb8;
          DAT_0021f0d4 = DAT_0021f0d4 ^ 0xb8;
          uVar7 = CONCAT35(DAT_0021f0c8._5_3_,(undefined5)DAT_0021f0c8) ^ 0xb8b8b8b8b8b8b8b8;
          DAT_0021f0c8._0_5_ = (undefined5)uVar7;
          DAT_0021f0c8._5_3_ = (undefined3)(uVar7 >> 0x28);
          ram0x0021f0cd = CONCAT13(DAT_0021f0d0,DAT_0021f0c8._5_3_) ^ 0xb8000000;
          DAT_0021fb70 = '\x01';
          puVar2 = (undefined1 *)0xc0f51250277e5cfd;
        }
        else if (puVar6 == (undefined1 *)0x87b1ff2df68e38ae) {
          if (*(long *)(local_b8 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return local_7c & 1;
        }
      }
      else if (puVar6 == (undefined1 *)0x8e3a3d610d847caf) {
        DAT_0021fb68 = 0;
        write(unaff_w20,&DAT_0021f030,0x97);
        FUN_001e38f8(unaff_x27,0,0x80);
        unaff_x19 = recvfrom(unaff_w20,unaff_x27,0x80,0,(sockaddr *)0x0,(socklen_t *)0x0);
        puVar2 = (undefined1 *)0x960858df0b0de441;
        if (0 < (long)unaff_x19) {
          puVar2 = (undefined1 *)0x36f07785a64d7584;
        }
      }
      else if (puVar6 == (undefined1 *)0x940bdddd24f52ce3) {
        puVar2 = (undefined1 *)0x3007aa9d32d99be8;
        if (DAT_0021fb70 == '\0') {
          puVar2 = (undefined1 *)0x8500be9b057d300e;
        }
      }
      goto LAB_002071e8;
    }
    if (puVar6 == (undefined1 *)0x960858df0b0de441) goto LAB_002071d4;
    if (puVar6 == (undefined1 *)0xa865ab623572e331) {
      local_7c = 0;
      *local_98 = 6;
      puVar2 = (undefined1 *)0x87b1ff2df68e38ae;
    }
    else if (puVar6 == (undefined1 *)0xba8fbc7d3623138d) {
      puVar2 = (undefined1 *)0x7d8bf94548220fb8;
    }
  } while( true );
}

