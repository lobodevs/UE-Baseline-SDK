#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SceneCaptureComponent.hpp"
#include "SceneCaptureComponent2D.hpp"
#include "TextureRenderTarget2D.hpp"
float& _Script_Engine::SceneCaptureComponent2D::get_OrthoWidth() {
    return *(float*)((uintptr_t)this + 0x2b8);
}
void* _Script_Engine::SceneCaptureComponent2D::get_ProjectionType() {
    return (void*)((uintptr_t)this + 0x2b0);
}
void* _Script_Engine::SceneCaptureComponent2D::get_CompositeMode() {
    return (void*)((uintptr_t)this + 0x2c8);
}
float& _Script_Engine::SceneCaptureComponent2D::get_FOVAngle() {
    return *(float*)((uintptr_t)this + 0x2b4);
}
_Script_Engine::TextureRenderTarget2D*& _Script_Engine::SceneCaptureComponent2D::get_TextureTarget() {
    return *(_Script_Engine::TextureRenderTarget2D**)((uintptr_t)this + 0x2c0);
}
bool _Script_Engine::SceneCaptureComponent2D::get_bOverride_CustomNearClippingPlane() {
    return (*(uint8_t*)((uintptr_t)this + 0x824 + 0)) & 1 != 0;
}
void* _Script_Engine::SceneCaptureComponent2D::get_PostProcessSettings() {
    return (void*)((uintptr_t)this + 0x2d0);
}
float& _Script_Engine::SceneCaptureComponent2D::get_PostProcessBlendWeight() {
    return *(float*)((uintptr_t)this + 0x820);
}
void _Script_Engine::SceneCaptureComponent2D::set_bOverride_CustomNearClippingPlane(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x824 + 0);
    *(uint8_t*)((uintptr_t)this + 0x824 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::SceneCaptureComponent2D::get_CustomNearClippingPlane() {
    return *(float*)((uintptr_t)this + 0x828);
}
void _Script_Engine::SceneCaptureComponent2D::AddOrUpdateBlendable(void* InBlendableObject, float InWeight) {
    return;
}
bool _Script_Engine::SceneCaptureComponent2D::get_bUseCustomProjectionMatrix() {
    return (*(uint8_t*)((uintptr_t)this + 0x82c + 0)) & 1 != 0;
}
void _Script_Engine::SceneCaptureComponent2D::set_bUseCustomProjectionMatrix(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x82c + 0);
    *(uint8_t*)((uintptr_t)this + 0x82c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::SceneCaptureComponent2D::get_CustomProjectionMatrix() {
    return (void*)((uintptr_t)this + 0x830);
}
bool _Script_Engine::SceneCaptureComponent2D::get_bEnableClipPlane() {
    return (*(uint8_t*)((uintptr_t)this + 0x870 + 0)) & 1 != 0;
}
void _Script_Engine::SceneCaptureComponent2D::set_bEnableClipPlane(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x870 + 0);
    *(uint8_t*)((uintptr_t)this + 0x870 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::SceneCaptureComponent2D::set_bDisableFlipCopyGLES(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x890 + 0);
    *(uint8_t*)((uintptr_t)this + 0x890 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::SceneCaptureComponent2D::get_ClipPlaneBase() {
    return (void*)((uintptr_t)this + 0x874);
}
void* _Script_Engine::SceneCaptureComponent2D::get_ClipPlaneNormal() {
    return (void*)((uintptr_t)this + 0x880);
}
bool _Script_Engine::SceneCaptureComponent2D::get_bCameraCutThisFrame() {
    return (*(uint8_t*)((uintptr_t)this + 0x88c + 0)) & 1 != 0;
}
void _Script_Engine::SceneCaptureComponent2D::set_bCameraCutThisFrame(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x88c + 0);
    *(uint8_t*)((uintptr_t)this + 0x88c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::SceneCaptureComponent2D::get_bConsiderUnrenderedOpaquePixelAsFullyTranslucent() {
    return (*(uint8_t*)((uintptr_t)this + 0x88c + 0)) & 2 != 0;
}
void _Script_Engine::SceneCaptureComponent2D::set_bConsiderUnrenderedOpaquePixelAsFullyTranslucent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x88c + 0);
    *(uint8_t*)((uintptr_t)this + 0x88c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::SceneCaptureComponent2D::get_bDisableFlipCopyGLES() {
    return (*(uint8_t*)((uintptr_t)this + 0x890 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::SceneCaptureComponent2D::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SceneCaptureComponent2D");
    return result;
}
void _Script_Engine::SceneCaptureComponent2D::CaptureScene() {
    return;
}
