#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\StaticMesh.hpp"
#include "MotionControllerComponent.hpp"
void* _Script_HeadMountedDisplay::MotionControllerComponent::get_MotionSource() {
    return (void*)((uintptr_t)this + 0x448);
}
int32_t& _Script_HeadMountedDisplay::MotionControllerComponent::get_PlayerIndex() {
    return *(int32_t*)((uintptr_t)this + 0x440);
}
bool _Script_HeadMountedDisplay::MotionControllerComponent::get_bDisableLowLatencyUpdate() {
    return (*(uint8_t*)((uintptr_t)this + 0x450 + 0)) & 1 != 0;
}
void* _Script_HeadMountedDisplay::MotionControllerComponent::get_hand() {
    return (void*)((uintptr_t)this + 0x444);
}
void _Script_HeadMountedDisplay::MotionControllerComponent::set_bDisableLowLatencyUpdate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x450 + 0);
    *(uint8_t*)((uintptr_t)this + 0x450 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HeadMountedDisplay::MotionControllerComponent::get_CurrentTrackingStatus() {
    return (void*)((uintptr_t)this + 0x454);
}
bool _Script_HeadMountedDisplay::MotionControllerComponent::get_bDisplayDeviceModel() {
    return (*(uint8_t*)((uintptr_t)this + 0x455 + 0)) & 1 != 0;
}
void _Script_HeadMountedDisplay::MotionControllerComponent::set_bDisplayDeviceModel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x455 + 0);
    *(uint8_t*)((uintptr_t)this + 0x455 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HeadMountedDisplay::MotionControllerComponent::get_DisplayModelSource() {
    return (void*)((uintptr_t)this + 0x458);
}
_Script_Engine::StaticMesh*& _Script_HeadMountedDisplay::MotionControllerComponent::get_CustomDisplayMesh() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x460);
}
void* _Script_HeadMountedDisplay::MotionControllerComponent::get_DisplayMeshMaterialOverrides() {
    return (void*)((uintptr_t)this + 0x468);
}
_Script_Engine::PrimitiveComponent*& _Script_HeadMountedDisplay::MotionControllerComponent::get_DisplayComponent() {
    return *(_Script_Engine::PrimitiveComponent**)((uintptr_t)this + 0x4e0);
}
_Script_CoreUObject::Class* _Script_HeadMountedDisplay::MotionControllerComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HeadMountedDisplay.MotionControllerComponent");
    return result;
}
void _Script_HeadMountedDisplay::MotionControllerComponent::SetTrackingSource(void* NewSource) {
    return;
}
void _Script_HeadMountedDisplay::MotionControllerComponent::SetTrackingMotionSource(void* NewSource) {
    return;
}
void _Script_HeadMountedDisplay::MotionControllerComponent::SetShowDeviceModel(bool bShowControllerModel) {
    return;
}
void _Script_HeadMountedDisplay::MotionControllerComponent::SetDisplayModelSource(void* NewDisplayModelSource) {
    return;
}
void _Script_HeadMountedDisplay::MotionControllerComponent::SetCustomDisplayMesh(_Script_Engine::StaticMesh* NewDisplayMesh) {
    return;
}
void _Script_HeadMountedDisplay::MotionControllerComponent::SetAssociatedPlayerIndex(int32_t NewPlayer) {
    return;
}
void _Script_HeadMountedDisplay::MotionControllerComponent::OnMotionControllerUpdated() {
    return;
}
bool _Script_HeadMountedDisplay::MotionControllerComponent::IsTracked() {
    return;
}
void* _Script_HeadMountedDisplay::MotionControllerComponent::GetTrackingSource() {
    return;
}
float _Script_HeadMountedDisplay::MotionControllerComponent::GetParameterValue(void* InName, bool& bValueFound) {
    return;
}
_Script_CoreUObject::Vector _Script_HeadMountedDisplay::MotionControllerComponent::GetHandJointPosition(int32_t jointIndex, bool& bValueFound) {
    return;
}
