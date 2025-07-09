#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "PrimitiveComponent.hpp"
#include "SceneCaptureComponent.hpp"
#include "SceneComponent.hpp"
void* _Script_Engine::SceneCaptureComponent::get_PrimitiveRenderMode() {
    return (void*)((uintptr_t)this + 0x1f8);
}
void* _Script_Engine::SceneCaptureComponent::get_CaptureSource() {
    return (void*)((uintptr_t)this + 0x1f9);
}
void _Script_Engine::SceneCaptureComponent::set_bAlwaysPersistRenderingState(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1fb + 0);
    *(uint8_t*)((uintptr_t)this + 0x1fb + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::SceneCaptureComponent::set_bCaptureOnMovement(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1fa + 0);
    *(uint8_t*)((uintptr_t)this + 0x1fa + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::SceneCaptureComponent::get_bCaptureEveryFrame() {
    return (*(uint8_t*)((uintptr_t)this + 0x1fa + 0)) & 1 != 0;
}
bool _Script_Engine::SceneCaptureComponent::get_bCaptureOnMovement() {
    return (*(uint8_t*)((uintptr_t)this + 0x1fa + 0)) & 2 != 0;
}
void _Script_Engine::SceneCaptureComponent::set_bCaptureEveryFrame(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1fa + 0);
    *(uint8_t*)((uintptr_t)this + 0x1fa + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::SceneCaptureComponent::get_bAlwaysPersistRenderingState() {
    return (*(uint8_t*)((uintptr_t)this + 0x1fb + 0)) & 1 != 0;
}
void* _Script_Engine::SceneCaptureComponent::get_HiddenComponents() {
    return (void*)((uintptr_t)this + 0x200);
}
void* _Script_Engine::SceneCaptureComponent::get_HiddenActors() {
    return (void*)((uintptr_t)this + 0x210);
}
void* _Script_Engine::SceneCaptureComponent::get_ShowOnlyComponents() {
    return (void*)((uintptr_t)this + 0x220);
}
void* _Script_Engine::SceneCaptureComponent::get_ShowOnlyActors() {
    return (void*)((uintptr_t)this + 0x230);
}
float& _Script_Engine::SceneCaptureComponent::get_LODDistanceFactor() {
    return *(float*)((uintptr_t)this + 0x240);
}
float& _Script_Engine::SceneCaptureComponent::get_MaxViewDistanceOverride() {
    return *(float*)((uintptr_t)this + 0x244);
}
int32_t& _Script_Engine::SceneCaptureComponent::get_CaptureSortPriority() {
    return *(int32_t*)((uintptr_t)this + 0x248);
}
bool _Script_Engine::SceneCaptureComponent::get_bUseRayTracingIfEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x24c + 0)) & 1 != 0;
}
void _Script_Engine::SceneCaptureComponent::set_bUseRayTracingIfEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24c + 0);
    *(uint8_t*)((uintptr_t)this + 0x24c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::SceneCaptureComponent::get_ShowFlagSettings() {
    return (void*)((uintptr_t)this + 0x250);
}
void* _Script_Engine::SceneCaptureComponent::get_ProfilingEventName() {
    return (void*)((uintptr_t)this + 0x290);
}
_Script_CoreUObject::Class* _Script_Engine::SceneCaptureComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SceneCaptureComponent");
    return result;
}
void _Script_Engine::SceneCaptureComponent::ShowOnlyComponent(_Script_Engine::PrimitiveComponent* InComponent) {
    return;
}
void _Script_Engine::SceneCaptureComponent::ShowOnlyActorComponents(_Script_Engine::Actor* InActor, bool bIncludeFromChildActors) {
    return;
}
void _Script_Engine::SceneCaptureComponent::SetCaptureSortPriority(int32_t NewCaptureSortPriority) {
    return;
}
void _Script_Engine::SceneCaptureComponent::RemoveShowOnlyComponent(_Script_Engine::PrimitiveComponent* InComponent) {
    return;
}
void _Script_Engine::SceneCaptureComponent::RemoveShowOnlyActorComponents(_Script_Engine::Actor* InActor, bool bIncludeFromChildActors) {
    return;
}
void _Script_Engine::SceneCaptureComponent::HideComponent(_Script_Engine::PrimitiveComponent* InComponent) {
    return;
}
void _Script_Engine::SceneCaptureComponent::HideActorComponents(_Script_Engine::Actor* InActor, bool bIncludeFromChildActors) {
    return;
}
void _Script_Engine::SceneCaptureComponent::ClearShowOnlyComponents() {
    return;
}
void _Script_Engine::SceneCaptureComponent::ClearHiddenComponents() {
    return;
}
