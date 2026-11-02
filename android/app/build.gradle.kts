// OPTC Legacy — custom Android app module.
//
// This is OUR OWN rebuild (not a re-signed original): the native engine
// is compiled from the clean-room src/ tree and mounted behind a thin
// Kotlin shell that mirrors the original Bisque entry points.
plugins {
    id("com.android.application")
    id("org.jetbrains.kotlin.android")
}

android {
    namespace = "com.optc.legacy"
    compileSdk = 35
    ndkVersion = "28.0.12433566" // matches the r28c-class toolchain seen in the original

    defaultConfig {
        applicationId = "com.optc.legacy"
        minSdk = 24          // same floor as the original 16.2.1
        targetSdk = 35
        versionCode = 1
        versionName = "0.1.0-decomp"
        ndk {
            // The original ships both ABIs; our rebuild does too.
            abiFilters += listOf("arm64-v8a", "armeabi-v7a")
        }
        externalNativeBuild {
            cmake {
                arguments += listOf("-DOPTC_TARGET=android")
            }
        }
    }

    signingConfigs {
        create("legacy") {
            // Community signing key — see keystore/README.md.
            // Intentionally public (AOSP test-key model): everyone must be
            // able to build & update the same custom build.
            storeFile = file("../../keystore/optc-legacy.jks")
            storePassword = "OPTCLegacy2025!"
            keyAlias = "optc-legacy"
            keyPassword = "OPTCLegacy2025!"
        }
    }

    buildTypes {
        release {
            isMinifyEnabled = false
            signingConfig = signingConfigs.getByName("legacy")
        }
        debug {
            signingConfig = signingConfigs.getByName("legacy")
        }
    }

    externalNativeBuild {
        cmake {
            path = file("../../src/CMakeLists.txt")
            version = "3.22.1"
        }
    }

    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_17
        targetCompatibility = JavaVersion.VERSION_17
    }
    kotlinOptions { jvmTarget = "17" }
}

dependencies {
    implementation("androidx.core:core-ktx:1.13.1")
    implementation("androidx.appcompat:appcompat:1.7.0")
}
