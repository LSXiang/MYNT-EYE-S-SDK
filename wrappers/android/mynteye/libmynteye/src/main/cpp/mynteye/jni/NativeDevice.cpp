// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from mynteye.djinni

#include "NativeDevice.hpp"  // my header
#include "Marshal.hpp"
#include "NativeDeviceUsbInfo.hpp"
#include "NativeMotionData.hpp"
#include "NativeSource.hpp"
#include "NativeStream.hpp"
#include "NativeStreamData.hpp"
#include "NativeStreamRequest.hpp"

namespace djinni_generated {

NativeDevice::NativeDevice() : ::djinni::JniInterface<::mynteye_jni::Device, NativeDevice>("com/slightech/mynteye/Device$CppProxy") {}

NativeDevice::~NativeDevice() = default;


CJNIEXPORT void JNICALL Java_com_slightech_mynteye_Device_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::mynteye_jni::Device>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_com_slightech_mynteye_Device_00024CppProxy_query(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::mynteye_jni::Device::Query();
        return ::djinni::release(::djinni::List<::djinni_generated::NativeDeviceUsbInfo>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_com_slightech_mynteye_Device_00024CppProxy_create(JNIEnv* jniEnv, jobject /*this*/, ::djinni_generated::NativeDeviceUsbInfo::JniType j_info)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::mynteye_jni::Device::Create(::djinni_generated::NativeDeviceUsbInfo::toCpp(jniEnv, j_info));
        return ::djinni::release(::djinni_generated::NativeDevice::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_com_slightech_mynteye_Device_00024CppProxy_native_1getStreamRequests(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::mynteye_jni::Device>(nativeRef);
        auto r = ref->GetStreamRequests();
        return ::djinni::release(::djinni::List<::djinni_generated::NativeStreamRequest>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_com_slightech_mynteye_Device_00024CppProxy_native_1configStreamRequest(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeStreamRequest::JniType j_request)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::mynteye_jni::Device>(nativeRef);
        ref->ConfigStreamRequest(::djinni_generated::NativeStreamRequest::toCpp(jniEnv, j_request));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_com_slightech_mynteye_Device_00024CppProxy_native_1start(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeSource::JniType j_source)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::mynteye_jni::Device>(nativeRef);
        ref->Start(::djinni_generated::NativeSource::toCpp(jniEnv, j_source));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_com_slightech_mynteye_Device_00024CppProxy_native_1stop(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeSource::JniType j_source)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::mynteye_jni::Device>(nativeRef);
        ref->Stop(::djinni_generated::NativeSource::toCpp(jniEnv, j_source));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_com_slightech_mynteye_Device_00024CppProxy_native_1waitForStreams(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::mynteye_jni::Device>(nativeRef);
        ref->WaitForStreams();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT ::djinni_generated::NativeStreamData::JniType JNICALL Java_com_slightech_mynteye_Device_00024CppProxy_native_1getStreamData(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeStream::JniType j_stream)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::mynteye_jni::Device>(nativeRef);
        auto r = ref->GetStreamData(::djinni_generated::NativeStream::toCpp(jniEnv, j_stream));
        return ::djinni::release(::djinni_generated::NativeStreamData::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_com_slightech_mynteye_Device_00024CppProxy_native_1getStreamDatas(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeStream::JniType j_stream)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::mynteye_jni::Device>(nativeRef);
        auto r = ref->GetStreamDatas(::djinni_generated::NativeStream::toCpp(jniEnv, j_stream));
        return ::djinni::release(::djinni::List<::djinni_generated::NativeStreamData>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_com_slightech_mynteye_Device_00024CppProxy_native_1enableCacheMotionDatas(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jint j_maxSize)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::mynteye_jni::Device>(nativeRef);
        ref->EnableCacheMotionDatas(::djinni::I32::toCpp(jniEnv, j_maxSize));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_com_slightech_mynteye_Device_00024CppProxy_native_1getMotionDatas(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::mynteye_jni::Device>(nativeRef);
        auto r = ref->GetMotionDatas();
        return ::djinni::release(::djinni::List<::djinni_generated::NativeMotionData>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated
