import ghidra.app.script.GhidraScript;
import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.data.StringDataInstance;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.Function;
import ghidra.program.model.mem.Memory;

public class M3dPrep extends GhidraScript {
    @Override
    public void run() throws Exception {
        long[][] regions = {
            {0x1ef0000L, 0x1ef5000L},   // cache family
            {0x39d3000L, 0x39d5000L},   // key expansion + ciphers
            {0x39dd000L, 0x39e0000L},   // NTY family
            {0x39f2000L, 0x39f7000L},   // FileStream family
            {0x39fe000L, 0x3a10000L},   // GNP cluster
            {0x3F0B230L, 0x3FB93C0L},   // PLT
        };
        Memory mem = currentProgram.getMemory();
        // 1) linear disassembly of target regions
        for (long[] r : regions) {
            Address lo = toAddr(r[0]), hi = toAddr(r[1]);
            AddressSet set = new AddressSet(lo, hi.subtract(1));
            DisassembleCommand cmd = new DisassembleCommand(lo, set, true);
            cmd.applyTo(currentProgram, monitor);
            println("disassembled [" + Long.toHexString(r[0]) + "," + Long.toHexString(r[1]) + ")");
        }
        // 2) ASCII strings in the rodata/string windows
        long[][] strRegions = {
            {0x1300000L, 0x1600000L},
        };
        for (long[] r : strRegions) {
            Address a = toAddr(r[0]);
            Address end = toAddr(r[1]);
            int made = 0;
            while (a.compareTo(end) < 0) {
                Data d = getDataAt(a);
                if (d != null && d.hasStringValue()) { a = d.getMaxAddress().add(1); continue; }
                try {
                    Data nd = createAsciiString(a);
                    if (nd != null && nd.getLength() >= 5) {
                        made++;
                        a = nd.getMaxAddress().add(1);
                        continue;
                    }
                } catch (Exception e) { }
                a = a.add(1);
            }
            println("strings created in [" + Long.toHexString(r[0]) + "," + Long.toHexString(r[1]) + "): " + made);
        }
        // 3) create functions at known entries
        long[] fns = {
            0x1ef0604L, 0x1ef0580L, 0x1ef07a8L, 0x1ef082cL, 0x1ef1588L, 0x1ef1784L,
            0x1ef0d18L, 0x1ef0e20L, 0x1ef48b8L, 0x1ef3750L, 0x1ef34bcL, 0x1ef4338L,
            0x39d39f4L, 0x39d3fd0L, 0x39dda24L, 0x39ddab4L, 0x39de16cL, 0x39de5d0L,
            0x39def6cL, 0x39df238L, 0x39f3a88L, 0x39f3884L, 0x39f544cL,
            0x39fec20L, 0x39ff304L, 0x39ff360L, 0x39ff688L, 0x39ff728L, 0x39ff7b8L,
            0x39ff9f0L, 0x39ffd9cL, 0x39ffef4L, 0x3a00110L, 0x3a00290L, 0x3a00388L,
            0x3a006f4L, 0x3a00a58L, 0x3a00c30L, 0x3a00d00L, 0x3a01000L, 0x3a010f0L,
            0x3a01290L, 0x3a01430L, 0x3a01530L, 0x3a01730L, 0x3a01820L, 0x3a030bcL,
            0x3a0332cL, 0x3a05958L, 0x3a05e1cL, 0x3a061acL, 0x3a061f0L, 0x3a09e94L,
            0x3a0de74L, 0x3a07e00L, 0x3a08a00L,
        };
        int made = 0;
        for (long f : fns) {
            Address a = toAddr(f);
            if (getFunctionAt(a) == null) {
                Function fn = createFunction(a, "m3d_" + Long.toHexString(f));
                if (fn != null) made++;
            }
        }
        println("functions created: " + made);
    }
}
