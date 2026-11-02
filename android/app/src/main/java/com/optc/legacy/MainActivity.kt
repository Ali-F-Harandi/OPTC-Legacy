package com.optc.legacy

import android.os.Bundle
import android.widget.TextView
import androidx.appcompat.app.AppCompatActivity

/**
 * Milestone-0 shell.
 *
 * The original hands a GLES2 SurfaceView to libgame.so via the Bisque
 * framework (BQArtilleryJava/BQGameHelper). Our equivalent shell boots
 * the clean-room engine through JNI once the platform module lands in
 * src/platform/android/ — until then this activity reports the engine
 * module status the same way the desktop/WASM targets do.
 */
class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        val tv = TextView(this).apply {
            text = "OPTC Legacy 0.1.0-decomp\n\n" +
                "clean-room rebuild target:\n" +
                "com.namcobandaigames.spmoja010E 16.2.1\n\n" +
                "engine modules: bootstrapping…\n" +
                "(see PROGRESS.json — this shell gets its GLES surface\n" +
                " when the renderer module reaches milestone 1)"
            textSize = 16f
            setPadding(48, 96, 48, 48)
        }
        setContentView(tv)
    }
}
