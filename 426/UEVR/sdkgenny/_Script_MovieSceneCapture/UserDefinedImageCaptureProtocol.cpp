#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Texture.hpp"
#include "CapturedPixels.hpp"
#include "CapturedPixelsID.hpp"
#include "FrameMetrics.hpp"
#include "UserDefinedCaptureProtocol.hpp"
#include "UserDefinedImageCaptureProtocol.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneCapture::UserDefinedImageCaptureProtocol::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneCapture.UserDefinedImageCaptureProtocol");
    return result;
}
void* _Script_MovieSceneCapture::UserDefinedImageCaptureProtocol::get_Format() {
    return (void*)((uintptr_t)this + 0xd8);
}
int32_t& _Script_MovieSceneCapture::UserDefinedImageCaptureProtocol::get_CompressionQuality() {
    return *(int32_t*)((uintptr_t)this + 0xdc);
}
bool _Script_MovieSceneCapture::UserDefinedImageCaptureProtocol::get_bEnableCompression() {
    return (*(uint8_t*)((uintptr_t)this + 0xd9 + 0)) & 1 != 0;
}
void _Script_MovieSceneCapture::UserDefinedImageCaptureProtocol::set_bEnableCompression(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd9 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_MovieSceneCapture::UserDefinedImageCaptureProtocol::WriteImageToDisk(_Script_MovieSceneCapture::CapturedPixels& PixelData, _Script_MovieSceneCapture::CapturedPixelsID& StreamID, _Script_MovieSceneCapture::FrameMetrics& FrameMetrics, bool bCopyImageData) {
    return;
}
void* _Script_MovieSceneCapture::UserDefinedImageCaptureProtocol::GenerateFilenameForCurrentFrame() {
    return;
}
void* _Script_MovieSceneCapture::UserDefinedImageCaptureProtocol::GenerateFilenameForBuffer(_Script_Engine::Texture* Buffer, _Script_MovieSceneCapture::CapturedPixelsID& StreamID) {
    return;
}
