#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneCaptureSettings.hpp"
void* _Script_MovieSceneCapture::MovieSceneCaptureSettings::get_OutputDirectory() {
    return (void*)((uintptr_t)this + 0x0);
}
void _Script_MovieSceneCapture::MovieSceneCaptureSettings::set_bUseRelativeFrameNumbers(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29 + 0);
    *(uint8_t*)((uintptr_t)this + 0x29 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_MovieSceneCapture::MovieSceneCaptureSettings::get_PathTracerSamplePerPixel() {
    return *(int32_t*)((uintptr_t)this + 0x68);
}
void* _Script_MovieSceneCapture::MovieSceneCaptureSettings::get_GameModeOverride() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_MovieSceneCapture::MovieSceneCaptureSettings::get_OutputFormat() {
    return (void*)((uintptr_t)this + 0x18);
}
void _Script_MovieSceneCapture::MovieSceneCaptureSettings::set_bUsePathTracer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x67 + 0);
    *(uint8_t*)((uintptr_t)this + 0x67 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MovieSceneCapture::MovieSceneCaptureSettings::get_bOverwriteExisting() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void _Script_MovieSceneCapture::MovieSceneCaptureSettings::set_bOverwriteExisting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MovieSceneCapture::MovieSceneCaptureSettings::get_bUseRelativeFrameNumbers() {
    return (*(uint8_t*)((uintptr_t)this + 0x29 + 0)) & 1 != 0;
}
bool _Script_MovieSceneCapture::MovieSceneCaptureSettings::get_bCinematicMode() {
    return (*(uint8_t*)((uintptr_t)this + 0x62 + 0)) & 1 != 0;
}
int32_t& _Script_MovieSceneCapture::MovieSceneCaptureSettings::get_HandleFrames() {
    return *(int32_t*)((uintptr_t)this + 0x2c);
}
bool _Script_MovieSceneCapture::MovieSceneCaptureSettings::get_bShowHUD() {
    return (*(uint8_t*)((uintptr_t)this + 0x66 + 0)) & 1 != 0;
}
void* _Script_MovieSceneCapture::MovieSceneCaptureSettings::get_MovieExtension() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_MovieSceneCapture::MovieSceneCaptureSettings::get_ZeroPadFrameNumbers() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_MovieSceneCapture::MovieSceneCaptureSettings::get_FrameRate() {
    return (void*)((uintptr_t)this + 0x44);
}
bool _Script_MovieSceneCapture::MovieSceneCaptureSettings::get_bUseCustomFrameRate() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c + 0)) & 1 != 0;
}
void _Script_MovieSceneCapture::MovieSceneCaptureSettings::set_bUseCustomFrameRate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_MovieSceneCapture::MovieSceneCaptureSettings::get_CustomFrameRate() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_MovieSceneCapture::MovieSceneCaptureSettings::get_Resolution() {
    return (void*)((uintptr_t)this + 0x58);
}
bool _Script_MovieSceneCapture::MovieSceneCaptureSettings::get_bEnableTextureStreaming() {
    return (*(uint8_t*)((uintptr_t)this + 0x60 + 0)) & 1 != 0;
}
void _Script_MovieSceneCapture::MovieSceneCaptureSettings::set_bEnableTextureStreaming(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x60 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_MovieSceneCapture::MovieSceneCaptureSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneCapture.MovieSceneCaptureSettings");
    return result;
}
bool _Script_MovieSceneCapture::MovieSceneCaptureSettings::get_bCinematicEngineScalability() {
    return (*(uint8_t*)((uintptr_t)this + 0x61 + 0)) & 1 != 0;
}
void _Script_MovieSceneCapture::MovieSceneCaptureSettings::set_bCinematicEngineScalability(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x61 + 0);
    *(uint8_t*)((uintptr_t)this + 0x61 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_MovieSceneCapture::MovieSceneCaptureSettings::set_bShowHUD(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x66 + 0);
    *(uint8_t*)((uintptr_t)this + 0x66 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_MovieSceneCapture::MovieSceneCaptureSettings::set_bCinematicMode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x62 + 0);
    *(uint8_t*)((uintptr_t)this + 0x62 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MovieSceneCapture::MovieSceneCaptureSettings::get_bAllowMovement() {
    return (*(uint8_t*)((uintptr_t)this + 0x63 + 0)) & 1 != 0;
}
void _Script_MovieSceneCapture::MovieSceneCaptureSettings::set_bAllowMovement(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x63 + 0);
    *(uint8_t*)((uintptr_t)this + 0x63 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MovieSceneCapture::MovieSceneCaptureSettings::get_bAllowTurning() {
    return (*(uint8_t*)((uintptr_t)this + 0x64 + 0)) & 1 != 0;
}
void _Script_MovieSceneCapture::MovieSceneCaptureSettings::set_bAllowTurning(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x64 + 0);
    *(uint8_t*)((uintptr_t)this + 0x64 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MovieSceneCapture::MovieSceneCaptureSettings::get_bShowPlayer() {
    return (*(uint8_t*)((uintptr_t)this + 0x65 + 0)) & 1 != 0;
}
void _Script_MovieSceneCapture::MovieSceneCaptureSettings::set_bShowPlayer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x65 + 0);
    *(uint8_t*)((uintptr_t)this + 0x65 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MovieSceneCapture::MovieSceneCaptureSettings::get_bUsePathTracer() {
    return (*(uint8_t*)((uintptr_t)this + 0x67 + 0)) & 1 != 0;
}
