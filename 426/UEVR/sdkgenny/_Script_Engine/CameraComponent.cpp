#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CameraComponent.hpp"
#include "MinimalViewInfo.hpp"
#include "SceneComponent.hpp"
float& _Script_Engine::CameraComponent::get_OrthoNearClipPlane() {
    return *(float*)((uintptr_t)this + 0x200);
}
float& _Script_Engine::CameraComponent::get_FieldOfView() {
    return *(float*)((uintptr_t)this + 0x1f8);
}
float& _Script_Engine::CameraComponent::get_OrthoWidth() {
    return *(float*)((uintptr_t)this + 0x1fc);
}
float& _Script_Engine::CameraComponent::get_OrthoFarClipPlane() {
    return *(float*)((uintptr_t)this + 0x204);
}
void _Script_Engine::CameraComponent::set_bConstrainAspectRatio(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20c + 0);
    *(uint8_t*)((uintptr_t)this + 0x20c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::CameraComponent::get_AspectRatio() {
    return *(float*)((uintptr_t)this + 0x208);
}
bool _Script_Engine::CameraComponent::get_bUseFieldOfViewForLOD() {
    return (*(uint8_t*)((uintptr_t)this + 0x20c + 0)) & 2 != 0;
}
bool _Script_Engine::CameraComponent::get_bConstrainAspectRatio() {
    return (*(uint8_t*)((uintptr_t)this + 0x20c + 0)) & 1 != 0;
}
void _Script_Engine::CameraComponent::set_bUseFieldOfViewForLOD(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20c + 0);
    *(uint8_t*)((uintptr_t)this + 0x20c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::CameraComponent::get_bLockToHmd() {
    return (*(uint8_t*)((uintptr_t)this + 0x20c + 0)) & 4 != 0;
}
void _Script_Engine::CameraComponent::set_bLockToHmd(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20c + 0);
    *(uint8_t*)((uintptr_t)this + 0x20c + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::CameraComponent::get_bUsePawnControlRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0x20c + 0)) & 8 != 0;
}
void _Script_Engine::CameraComponent::set_bUsePawnControlRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20c + 0);
    *(uint8_t*)((uintptr_t)this + 0x20c + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void* _Script_Engine::CameraComponent::get_ProjectionMode() {
    return (void*)((uintptr_t)this + 0x20d);
}
float& _Script_Engine::CameraComponent::get_PostProcessBlendWeight() {
    return *(float*)((uintptr_t)this + 0x240);
}
void* _Script_Engine::CameraComponent::get_PostProcessSettings() {
    return (void*)((uintptr_t)this + 0x270);
}
_Script_CoreUObject::Class* _Script_Engine::CameraComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.CameraComponent");
    return result;
}
void _Script_Engine::CameraComponent::SetUseFieldOfViewForLOD(bool bInUseFieldOfViewForLOD) {
    return;
}
void _Script_Engine::CameraComponent::SetProjectionMode(void* InProjectionMode) {
    return;
}
void _Script_Engine::CameraComponent::SetPostProcessBlendWeight(float InPostProcessBlendWeight) {
    return;
}
void _Script_Engine::CameraComponent::SetOrthoWidth(float InOrthoWidth) {
    return;
}
void _Script_Engine::CameraComponent::SetOrthoNearClipPlane(float InOrthoNearClipPlane) {
    return;
}
void _Script_Engine::CameraComponent::SetOrthoFarClipPlane(float InOrthoFarClipPlane) {
    return;
}
void _Script_Engine::CameraComponent::SetFieldOfView(float InFieldOfView) {
    return;
}
void _Script_Engine::CameraComponent::SetConstraintAspectRatio(bool bInConstrainAspectRatio) {
    return;
}
void _Script_Engine::CameraComponent::SetAspectRatio(float InAspectRatio) {
    return;
}
void _Script_Engine::CameraComponent::RemoveBlendable(void* InBlendableObject) {
    return;
}
void _Script_Engine::CameraComponent::OnCameraMeshHiddenChanged() {
    return;
}
void _Script_Engine::CameraComponent::GetCameraView(float DeltaTime, _Script_Engine::MinimalViewInfo& DesiredView) {
    return;
}
void _Script_Engine::CameraComponent::AddOrUpdateBlendable(void* InBlendableObject, float InWeight) {
    return;
}
