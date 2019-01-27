// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from mynteye_types.djinni

#pragma once

#include "device_usb_info.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeDeviceUsbInfo final {
public:
    using CppType = ::mynteye_jni::DeviceUsbInfo;
    using JniType = jobject;

    using Boxed = NativeDeviceUsbInfo;

    ~NativeDeviceUsbInfo();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeDeviceUsbInfo();
    friend ::djinni::JniClass<NativeDeviceUsbInfo>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("com/slightech/mynteye/DeviceUsbInfo") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(ILjava/lang/String;Ljava/lang/String;)V") };
    const jfieldID field_mIndex { ::djinni::jniGetFieldID(clazz.get(), "mIndex", "I") };
    const jfieldID field_mName { ::djinni::jniGetFieldID(clazz.get(), "mName", "Ljava/lang/String;") };
    const jfieldID field_mSn { ::djinni::jniGetFieldID(clazz.get(), "mSn", "Ljava/lang/String;") };
};

}  // namespace djinni_generated
