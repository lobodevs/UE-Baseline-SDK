#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FXSystemAsset.hpp"
#include "InterpCurveEdSetup.hpp"
#include "ParticleSystem.hpp"
#include "ParticleSystemComponent.hpp"
void* _Script_Engine::ParticleSystem::get_MinTimeBetweenTicks() {
    return (void*)((uintptr_t)this + 0xb8);
}
float& _Script_Engine::ParticleSystem::get_UpdateTime_FPS() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_Engine::ParticleSystem::get_UpdateTime_Delta() {
    return *(float*)((uintptr_t)this + 0x34);
}
float& _Script_Engine::ParticleSystem::get_LODDistanceCheckTime() {
    return *(float*)((uintptr_t)this + 0x60);
}
float& _Script_Engine::ParticleSystem::get_WarmupTime() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_Engine::ParticleSystem::get_WarmupTickRate() {
    return *(float*)((uintptr_t)this + 0x3c);
}
void _Script_Engine::ParticleSystem::set_bRegenerateLODDuplicate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb1 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void* _Script_Engine::ParticleSystem::get_Emitters() {
    return (void*)((uintptr_t)this + 0x40);
}
void _Script_Engine::ParticleSystem::set_bAllowManagedTicking(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb1 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
_Script_Engine::ParticleSystemComponent*& _Script_Engine::ParticleSystem::get_PreviewComponent() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x50);
}
_Script_Engine::InterpCurveEdSetup*& _Script_Engine::ParticleSystem::get_CurveEdSetup() {
    return *(_Script_Engine::InterpCurveEdSetup**)((uintptr_t)this + 0x58);
}
void* _Script_Engine::ParticleSystem::get_NamedMaterialSlots() {
    return (void*)((uintptr_t)this + 0xf8);
}
float& _Script_Engine::ParticleSystem::get_MacroUVRadius() {
    return *(float*)((uintptr_t)this + 0x64);
}
void* _Script_Engine::ParticleSystem::get_InsignificantReaction() {
    return (void*)((uintptr_t)this + 0xb4);
}
void* _Script_Engine::ParticleSystem::get_LODDistances() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_Engine::ParticleSystem::get_LODSettings() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_Engine::ParticleSystem::get_FixedRelativeBoundingBox() {
    return (void*)((uintptr_t)this + 0x88);
}
float& _Script_Engine::ParticleSystem::get_SecondsBeforeInactive() {
    return *(float*)((uintptr_t)this + 0xa4);
}
void _Script_Engine::ParticleSystem::set_bAutoDeactivate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb1 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
float& _Script_Engine::ParticleSystem::get_Delay() {
    return *(float*)((uintptr_t)this + 0xa8);
}
float& _Script_Engine::ParticleSystem::get_DelayLow() {
    return *(float*)((uintptr_t)this + 0xac);
}
bool _Script_Engine::ParticleSystem::get_bOrientZAxisTowardCamera() {
    return (*(uint8_t*)((uintptr_t)this + 0xb0 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleSystem::set_bOrientZAxisTowardCamera(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ParticleSystem::get_bUseFixedRelativeBoundingBox() {
    return (*(uint8_t*)((uintptr_t)this + 0xb0 + 0)) & 2 != 0;
}
bool _Script_Engine::ParticleSystem::get_bRegenerateLODDuplicate() {
    return (*(uint8_t*)((uintptr_t)this + 0xb1 + 0)) & 8 != 0;
}
void _Script_Engine::ParticleSystem::set_bUseFixedRelativeBoundingBox(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::ParticleSystem::get_bShouldResetPeakCounts() {
    return (*(uint8_t*)((uintptr_t)this + 0xb0 + 0)) & 4 != 0;
}
void _Script_Engine::ParticleSystem::set_bShouldResetPeakCounts(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb0 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleSystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleSystem");
    return result;
}
bool _Script_Engine::ParticleSystem::get_bHasPhysics() {
    return (*(uint8_t*)((uintptr_t)this + 0xb0 + 0)) & 8 != 0;
}
void _Script_Engine::ParticleSystem::set_bHasPhysics(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb0 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::ParticleSystem::get_bUseRealtimeThumbnail() {
    return (*(uint8_t*)((uintptr_t)this + 0xb0 + 0)) & 16 != 0;
}
void _Script_Engine::ParticleSystem::set_bUseRealtimeThumbnail(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb0 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::ParticleSystem::get_ThumbnailImageOutOfDate() {
    return (*(uint8_t*)((uintptr_t)this + 0xb0 + 0)) & 32 != 0;
}
void _Script_Engine::ParticleSystem::set_ThumbnailImageOutOfDate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb0 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::ParticleSystem::get_bUseDelayRange() {
    return (*(uint8_t*)((uintptr_t)this + 0xb1 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleSystem::set_bUseDelayRange(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ParticleSystem::get_bAllowManagedTicking() {
    return (*(uint8_t*)((uintptr_t)this + 0xb1 + 0)) & 2 != 0;
}
bool _Script_Engine::ParticleSystem::get_bAutoDeactivate() {
    return (*(uint8_t*)((uintptr_t)this + 0xb1 + 0)) & 4 != 0;
}
void* _Script_Engine::ParticleSystem::get_SystemUpdateMode() {
    return (void*)((uintptr_t)this + 0xb2);
}
void* _Script_Engine::ParticleSystem::get_LODMethod() {
    return (void*)((uintptr_t)this + 0xb3);
}
void* _Script_Engine::ParticleSystem::get_OcclusionBoundsMethod() {
    return (void*)((uintptr_t)this + 0xb5);
}
void* _Script_Engine::ParticleSystem::get_MaxSignificanceLevel() {
    return (void*)((uintptr_t)this + 0xb7);
}
float& _Script_Engine::ParticleSystem::get_InsignificanceDelay() {
    return *(float*)((uintptr_t)this + 0xbc);
}
void* _Script_Engine::ParticleSystem::get_MacroUVPosition() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_Engine::ParticleSystem::get_CustomOcclusionBounds() {
    return (void*)((uintptr_t)this + 0xcc);
}
void* _Script_Engine::ParticleSystem::get_SoloTracking() {
    return (void*)((uintptr_t)this + 0xe8);
}
bool _Script_Engine::ParticleSystem::ContainsEmitterType(void* TypeData) {
    return;
}
