// rea decompile_all
// name: FUN_00008fd0
// address: 0x8fd0
// body: available
// range: 0x8fd0-0x92b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint * FUN_00008fd0(undefined8 param_1,uint *param_2,long param_3,long param_4,ulong param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  uint local_4;
  
  if (param_2 != (uint *)0x0) {
    uVar2 = *param_2;
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    uVar10 = (ulong)uVar3;
    lVar11 = (ulong)uVar2 - (ulong)param_2[1];
    if ((uVar3 - 1 & uVar3) == 0) {
      uVar7 = FUN_00008ce8(param_1);
      uVar8 = FUN_0000d964(uVar7,0x40);
      uVar12 = *(ulong *)(param_2 + (ulong)(uVar8 & uVar3 - 1) * 2 + 4);
      uVar13 = FUN_0000d994(uVar7,0x40);
      uVar14 = FUN_0000d994(uVar7 >> (ulong)(uVar4 & 0x1f),0x40);
      if ((uVar12 >> (uVar13 & 0x3f) & uVar12 >> (uVar14 & 0x3f) & 1) != 0) {
        uVar12 = FUN_0000d994(uVar7,(ulong)uVar2);
        local_4 = param_2[uVar10 * 2 + (uVar12 & 0xffffffff) + 4];
        if (param_2[uVar10 * 2 + (uVar12 & 0xffffffff) + 4] != 0) {
          do {
            puVar1 = (uint *)(param_3 + (ulong)local_4 * 0x18);
            cVar6 = FUN_00008d50(puVar1);
            if ((cVar6 == '\x01') && (*puVar1 <= param_5)) {
              if (((param_2[uVar10 * 2 + lVar11 + (ulong)local_4 + 4] ^ uVar7) >> 1 == 0) &&
                 ((iVar9 = FUN_0000c554(param_4 + (ulong)*puVar1,param_1), iVar9 == 0 &&
                  (cVar6 = FUN_00008d50(puVar1), cVar6 != '\0')))) {
                bVar5 = true;
              }
              else {
                bVar5 = false;
              }
              if (bVar5) {
                return puVar1;
              }
            }
            uVar12 = (ulong)local_4;
            local_4 = local_4 + 1;
          } while ((param_2[uVar10 * 2 + lVar11 + uVar12 + 4] & 1) == 0);
        }
      }
    }
  }
  return (uint *)0x0;
}

