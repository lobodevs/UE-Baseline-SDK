#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "Actor.hpp"
#include "ActorComponent.hpp"
bool _Script_Engine::ActorComponent::ComponentHasTag(void* Tag) {
    return;
}
void* _Script_Engine::ActorComponent::get_AssetUserData() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_Engine::ActorComponent::get_PrimaryComponentTick() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::ActorComponent::get_ComponentTags() {
    return (void*)((uintptr_t)this + 0x60);
}
void _Script_Engine::ActorComponent::ReceiveBeginPlay() {
    return;
}
int32_t& _Script_Engine::ActorComponent::get_UCSSerializationIndex() {
    return *(int32_t*)((uintptr_t)this + 0x84);
}
void _Script_Engine::ActorComponent::set_bNetAddressable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x88 + 0);
    *(uint8_t*)((uintptr_t)this + 0x88 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_Engine::ActorComponent::RemoveTickPrerequisiteActor(_Script_Engine::Actor* PrerequisiteActor) {
    return;
}
bool _Script_Engine::ActorComponent::get_bNetAddressable() {
    return (*(uint8_t*)((uintptr_t)this + 0x88 + 0)) & 8 != 0;
}
bool _Script_Engine::ActorComponent::get_bReplicates() {
    return (*(uint8_t*)((uintptr_t)this + 0x88 + 0)) & 16 != 0;
}
void _Script_Engine::ActorComponent::ReceiveEndPlay(void* EndPlayReason) {
    return;
}
void _Script_Engine::ActorComponent::set_bReplicates(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x88 + 0);
    *(uint8_t*)((uintptr_t)this + 0x88 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::ActorComponent::get_bAutoActivate() {
    return (*(uint8_t*)((uintptr_t)this + 0x89 + 0)) & 128 != 0;
}
void _Script_Engine::ActorComponent::set_bAutoActivate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x89 + 0);
    *(uint8_t*)((uintptr_t)this + 0x89 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::ActorComponent::get_bIsActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x8a + 0)) & 1 != 0;
}
float _Script_Engine::ActorComponent::GetComponentTickInterval() {
    return;
}
void _Script_Engine::ActorComponent::set_bIsActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8a + 0);
    *(uint8_t*)((uintptr_t)this + 0x8a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ActorComponent::get_bEditableWhenInherited() {
    return (*(uint8_t*)((uintptr_t)this + 0x8a + 0)) & 2 != 0;
}
void _Script_Engine::ActorComponent::set_bEditableWhenInherited(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8a + 0);
    *(uint8_t*)((uintptr_t)this + 0x8a + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::ActorComponent::AddTickPrerequisiteActor(_Script_Engine::Actor* PrerequisiteActor) {
    return;
}
bool _Script_Engine::ActorComponent::get_bCanEverAffectNavigation() {
    return (*(uint8_t*)((uintptr_t)this + 0x8a + 0)) & 8 != 0;
}
void _Script_Engine::ActorComponent::set_bCanEverAffectNavigation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8a + 0);
    *(uint8_t*)((uintptr_t)this + 0x8a + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_Engine::ActorComponent::SetComponentTickInterval(float TickInterval) {
    return;
}
bool _Script_Engine::ActorComponent::get_bIsEditorOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0x8a + 0)) & 32 != 0;
}
void _Script_Engine::ActorComponent::set_bIsEditorOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8a + 0);
    *(uint8_t*)((uintptr_t)this + 0x8a + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
void* _Script_Engine::ActorComponent::get_CreationMethod() {
    return (void*)((uintptr_t)this + 0x8c);
}
void* _Script_Engine::ActorComponent::get_OnComponentActivated() {
    return (void*)((uintptr_t)this + 0x8d);
}
void* _Script_Engine::ActorComponent::get_OnComponentDeactivated() {
    return (void*)((uintptr_t)this + 0x8e);
}
bool _Script_Engine::ActorComponent::IsActive() {
    return;
}
void* _Script_Engine::ActorComponent::get_UCSModifiedProperties() {
    return (void*)((uintptr_t)this + 0x90);
}
_Script_CoreUObject::Class* _Script_Engine::ActorComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ActorComponent");
    return result;
}
void _Script_Engine::ActorComponent::ToggleActive() {
    return;
}
void _Script_Engine::ActorComponent::SetTickGroup(void* NewTickGroup) {
    return;
}
void _Script_Engine::ActorComponent::SetTickableWhenPaused(bool bTickableWhenPaused) {
    return;
}
void _Script_Engine::ActorComponent::SetIsReplicated(bool ShouldReplicate) {
    return;
}
void _Script_Engine::ActorComponent::SetComponentTickIntervalAndCooldown(float TickInterval) {
    return;
}
void _Script_Engine::ActorComponent::SetComponentTickEnabled(bool bEnabled) {
    return;
}
void _Script_Engine::ActorComponent::SetAutoActivate(bool bNewAutoActivate) {
    return;
}
void _Script_Engine::ActorComponent::SetActive(bool bNewActive, bool bReset) {
    return;
}
void _Script_Engine::ActorComponent::RemoveTickPrerequisiteComponent(_Script_Engine::ActorComponent* PrerequisiteComponent) {
    return;
}
void _Script_Engine::ActorComponent::ReceiveTick(float DeltaSeconds) {
    return;
}
void _Script_Engine::ActorComponent::OnRep_IsActive() {
    return;
}
void _Script_Engine::ActorComponent::K2_DestroyComponent(_Script_CoreUObject::Object* Object) {
    return;
}
bool _Script_Engine::ActorComponent::IsBeingDestroyed() {
    return;
}
bool _Script_Engine::ActorComponent::IsComponentTickEnabled() {
    return;
}
_Script_Engine::Actor* _Script_Engine::ActorComponent::GetOwner() {
    return;
}
void _Script_Engine::ActorComponent::Deactivate() {
    return;
}
void _Script_Engine::ActorComponent::AddTickPrerequisiteComponent(_Script_Engine::ActorComponent* PrerequisiteComponent) {
    return;
}
void _Script_Engine::ActorComponent::Activate(bool bReset) {
    return;
}
