#pragma once

#include <cassert>
#include <jni.h>

namespace HackinARM::Env {
    bool checkJavaEnv(JNIEnv* jniEnv, jobject object) {
        assert(jniEnv != nullptr && object != nullptr);
        return true;
    }

}
