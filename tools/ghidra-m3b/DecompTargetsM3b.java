import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.PrintWriter;
import java.io.BufferedWriter;
import java.io.FileWriter;

public class DecompTargetsM3b extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String tgtFile = args[0];
        String outFile = args[1];

        PrintWriter out = new PrintWriter(new BufferedWriter(new FileWriter(outFile)));
        DecompInterface di = new DecompInterface();
        DecompileOptions opts = new DecompileOptions();
        opts.setMaxInstructions(12000);
        di.setOptions(opts);
        di.openProgram(currentProgram);

        BufferedReader r = new BufferedReader(new FileReader(tgtFile));
        String line;
        int n = 0;
        while ((line = r.readLine()) != null) {
            String[] p = line.split("\t");
            if (p.length < 4 || !p[0].equals("TGT")) continue;
            long addr = Long.parseLong(p[1], 16);
            String tag = p[3];
            Address a = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(addr);
            Function f = currentProgram.getFunctionManager().getFunctionAt(a);
            if (f == null) { f = createFunction(a, tag); }
            if (f == null) { out.println("//==== MISSING " + tag + " @ " + Long.toHexString(addr)); continue; }
            out.println("//#### TARGET " + tag + " @ " + Long.toHexString(addr) + " ####");
            try {
                DecompileResults res = di.decompileFunction(f, 180, monitor);
                if (res != null && res.decompileCompleted()) {
                    out.println(res.getDecompiledFunction().getC());
                } else {
                    out.println("// DECOMPILE FAILED: " + (res == null ? "null" : res.getErrorMessage()));
                }
                n++;
            } catch (Exception e) {
                out.println("// EXCEPTION " + e);
            }
            out.flush();
        }
        r.close();
        out.close();
        println("DECOMPILED " + n + " targets");
    }
}
