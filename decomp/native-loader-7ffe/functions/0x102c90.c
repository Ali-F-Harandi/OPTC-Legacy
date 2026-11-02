// rea decompile_all
// name: FUN_00102c90
// address: 0x102c90
// body: available
// range: 0x102c90-0x1031bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte FUN_00102c90(byte *param_1,long *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_10e0 [32];
  undefined1 local_10c0 [4096];
  char local_c0;
  char local_bf;
  char local_be;
  char local_bd;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  char *local_80;
  long local_78;
  long local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  long local_50;
  undefined1 *local_48;
  byte local_39;
  undefined1 *local_38;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  uint local_1c;
  long local_18;
  long local_10;
  long local_8;
  
  if (param_3 == 0) {
    local_39 = 0;
  }
  else if (param_2 == (long *)0x0) {
    local_39 = 0;
  }
  else if (param_1 == (byte *)0x0) {
    local_39 = 0;
  }
  else {
    local_39 = 1;
    local_48 = (undefined1 *)((long)param_2 + 0x2c);
    *local_48 = 0;
    local_10c0[0] = 0;
    local_50 = FUN_00102c3c(local_10c0,0x1000,param_3);
    if (local_50 == 0) {
      *param_1 = 1;
    }
    else {
      if (local_39 != 0) {
        local_8 = 0;
        local_10 = 0;
        local_18 = 0;
        local_1c = 0;
        local_20 = 0;
        local_24 = 0;
        local_28 = 0;
        local_2c = 0;
        local_38 = local_10c0;
        if (local_38 != (undefined1 *)0x0) {
          FUN_001057dc(auStack_10e0,local_38);
          local_38 = (undefined1 *)FUN_00105688(local_38);
          local_58 = auStack_10e0;
          local_60 = (undefined1 *)FUN_00104bb4(auStack_10e0,0x2d);
          if (local_60 != (undefined1 *)0x0) {
            *local_60 = 0;
          }
          local_68 = local_60 + 1;
          local_70 = FUN_00105344(local_58);
          local_78 = FUN_00105344(local_68);
          local_8 = local_70;
          local_10 = local_78 - local_70;
        }
        if (local_38 != (undefined1 *)0x0) {
          FUN_001057dc(&local_c0,local_38);
          local_38 = (undefined1 *)FUN_00105688(local_38);
          local_80 = &local_c0;
          local_1c = 0;
          if (local_c0 == 'r') {
            local_1c = 4;
          }
          if (local_bf == 'w') {
            local_1c = local_1c | 2;
          }
          if (local_be == 'x') {
            local_1c = local_1c | 1;
          }
          local_20 = (uint)(local_bd == 's');
          if (local_bd == 'p') {
            local_20 = 2;
          }
        }
        if (local_38 != (undefined1 *)0x0) {
          FUN_001057dc(auStack_10e0,local_38);
          local_38 = (undefined1 *)FUN_00105688(local_38);
          local_18 = FUN_00105344(auStack_10e0);
        }
        if (local_38 != (undefined1 *)0x0) {
          FUN_001057dc(auStack_10e0,local_38);
          local_38 = (undefined1 *)FUN_00105688(local_38);
          local_88 = auStack_10e0;
          local_90 = (undefined1 *)FUN_00104bb4(auStack_10e0,0x3a);
          if (local_90 != (undefined1 *)0x0) {
            *local_90 = 0;
          }
          local_98 = local_90 + 1;
          local_24 = FUN_00105344(local_88);
          local_28 = FUN_00105344(local_98);
        }
        if (local_38 != (undefined1 *)0x0) {
          FUN_001057dc(auStack_10e0,local_38);
          local_38 = (undefined1 *)FUN_00105688(local_38);
          local_a0 = auStack_10e0;
          local_2c = FUN_00105430(local_a0);
        }
        if (local_38 != (undefined1 *)0x0) {
          FUN_00104598(local_48,0,0x400);
          FUN_00104e1c(local_48,local_38,0x3ff);
          local_a8 = (undefined1 *)FUN_00104bb4(local_48,10);
          if (local_a8 != (undefined1 *)0x0) {
            *local_a8 = 0;
          }
          puVar1 = (undefined1 *)FUN_00104bb4(local_48,0xd);
          if (puVar1 != (undefined1 *)0x0) {
            *puVar1 = 0;
          }
        }
        if (local_39 != 0) {
          *param_2 = local_8;
          param_2[1] = local_10;
          param_2[2] = local_18;
          *(uint *)(param_2 + 3) = local_1c;
          *(uint *)((long)param_2 + 0x1c) = local_20;
          *(undefined4 *)(param_2 + 5) = local_2c;
          *(undefined4 *)(param_2 + 4) = local_24;
          *(undefined4 *)((long)param_2 + 0x24) = local_28;
        }
      }
      *param_1 = local_39 ^ 1;
    }
  }
  return local_39;
}

