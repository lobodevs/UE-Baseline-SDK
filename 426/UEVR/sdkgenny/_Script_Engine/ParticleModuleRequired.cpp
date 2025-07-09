#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialInterface.hpp"
#include "ParticleModule.hpp"
#include "ParticleModuleRequired.hpp"
#include "Texture2D.hpp"
void _Script_Engine::ParticleModuleRequired::set_bKillOnCompleted(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x59 + 0);
    *(uint8_t*)((uintptr_t)this + 0x59 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
_Script_Engine::MaterialInterface*& _Script_Engine::ParticleModuleRequired::get_Material() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x30);
}
void* _Script_Engine::ParticleModuleRequired::get_NormalsSphereCenter() {
    return (void*)((uintptr_t)this + 0xd4);
}
float& _Script_Engine::ParticleModuleRequired::get_MinFacingCameraBlendDistance() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_Engine::ParticleModuleRequired::get_MaxFacingCameraBlendDistance() {
    return *(float*)((uintptr_t)this + 0x3c);
}
void* _Script_Engine::ParticleModuleRequired::get_EmitterOrigin() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::ParticleModuleRequired::get_BoundingMode() {
    return (void*)((uintptr_t)this + 0xd1);
}
void* _Script_Engine::ParticleModuleRequired::get_EmitterRotation() {
    return (void*)((uintptr_t)this + 0x4c);
}
bool _Script_Engine::ParticleModuleRequired::get_bUseLocalSpace() {
    return (*(uint8_t*)((uintptr_t)this + 0x59 + 0)) & 1 != 0;
}
bool _Script_Engine::ParticleModuleRequired::get_bDurationRecalcEachLoop() {
    return (*(uint8_t*)((uintptr_t)this + 0xd2 + 0)) & 1 != 0;
}
void* _Script_Engine::ParticleModuleRequired::get_ScreenAlignment() {
    return (void*)((uintptr_t)this + 0x58);
}
void _Script_Engine::ParticleModuleRequired::set_bUseLocalSpace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x59 + 0);
    *(uint8_t*)((uintptr_t)this + 0x59 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::ParticleModuleRequired::get_EmitterNormalsMode() {
    return (void*)((uintptr_t)this + 0xae);
}
bool _Script_Engine::ParticleModuleRequired::get_bKillOnDeactivate() {
    return (*(uint8_t*)((uintptr_t)this + 0x59 + 0)) & 2 != 0;
}
void _Script_Engine::ParticleModuleRequired::set_bKillOnDeactivate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x59 + 0);
    *(uint8_t*)((uintptr_t)this + 0x59 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::ParticleModuleRequired::get_bKillOnCompleted() {
    return (*(uint8_t*)((uintptr_t)this + 0x59 + 0)) & 4 != 0;
}
void* _Script_Engine::ParticleModuleRequired::get_SortMode() {
    return (void*)((uintptr_t)this + 0x5a);
}
bool _Script_Engine::ParticleModuleRequired::get_bUseLegacyEmitterTime() {
    return (*(uint8_t*)((uintptr_t)this + 0x5b + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleRequired::set_bDurationRecalcEachLoop(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd2 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::ParticleModuleRequired::set_bUseLegacyEmitterTime(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5b + 0);
    *(uint8_t*)((uintptr_t)this + 0x5b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::ParticleModuleRequired::get_OpacitySourceMode() {
    return (void*)((uintptr_t)this + 0xad);
}
bool _Script_Engine::ParticleModuleRequired::get_bRemoveHMDRoll() {
    return (*(uint8_t*)((uintptr_t)this + 0x5b + 0)) & 2 != 0;
}
void _Script_Engine::ParticleModuleRequired::set_bRemoveHMDRoll(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5b + 0);
    *(uint8_t*)((uintptr_t)this + 0x5b + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
int32_t& _Script_Engine::ParticleModuleRequired::get_EmitterLoops() {
    return *(int32_t*)((uintptr_t)this + 0xe4);
}
bool _Script_Engine::ParticleModuleRequired::get_bEmitterDurationUseRange() {
    return (*(uint8_t*)((uintptr_t)this + 0x5b + 0)) & 4 != 0;
}
void _Script_Engine::ParticleModuleRequired::set_bEmitterDurationUseRange(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5b + 0);
    *(uint8_t*)((uintptr_t)this + 0x5b + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
float& _Script_Engine::ParticleModuleRequired::get_EmitterDuration() {
    return *(float*)((uintptr_t)this + 0x5c);
}
void* _Script_Engine::ParticleModuleRequired::get_SpawnRate() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_Engine::ParticleModuleRequired::get_BurstList() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_Engine::ParticleModuleRequired::get_NamedMaterialOverrides() {
    return (void*)((uintptr_t)this + 0x108);
}
float& _Script_Engine::ParticleModuleRequired::get_EmitterDelay() {
    return *(float*)((uintptr_t)this + 0xa0);
}
float& _Script_Engine::ParticleModuleRequired::get_EmitterDelayLow() {
    return *(float*)((uintptr_t)this + 0xa4);
}
float& _Script_Engine::ParticleModuleRequired::get_AlphaThreshold() {
    return *(float*)((uintptr_t)this + 0xe0);
}
bool _Script_Engine::ParticleModuleRequired::get_bDelayFirstLoopOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0xa8 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleRequired::set_bDelayFirstLoopOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ParticleModuleRequired::get_bOverrideSystemMacroUV() {
    return (*(uint8_t*)((uintptr_t)this + 0xac + 0)) & 1 != 0;
}
void* _Script_Engine::ParticleModuleRequired::get_InterpolationMethod() {
    return (void*)((uintptr_t)this + 0xa9);
}
bool _Script_Engine::ParticleModuleRequired::get_bScaleUV() {
    return (*(uint8_t*)((uintptr_t)this + 0xaa + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleRequired::set_bScaleUV(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xaa + 0);
    *(uint8_t*)((uintptr_t)this + 0xaa + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ParticleModuleRequired::get_bEmitterDelayUseRange() {
    return (*(uint8_t*)((uintptr_t)this + 0xaa + 0)) & 2 != 0;
}
void _Script_Engine::ParticleModuleRequired::set_bEmitterDelayUseRange(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xaa + 0);
    *(uint8_t*)((uintptr_t)this + 0xaa + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::ParticleModuleRequired::get_ParticleBurstMethod() {
    return (void*)((uintptr_t)this + 0xab);
}
void _Script_Engine::ParticleModuleRequired::set_bOverrideSystemMacroUV(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xac + 0);
    *(uint8_t*)((uintptr_t)this + 0xac + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ParticleModuleRequired::get_bUseMaxDrawCount() {
    return (*(uint8_t*)((uintptr_t)this + 0xac + 0)) & 2 != 0;
}
void _Script_Engine::ParticleModuleRequired::set_bUseMaxDrawCount(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xac + 0);
    *(uint8_t*)((uintptr_t)this + 0xac + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::ParticleModuleRequired::get_bOrbitModuleAffectsVelocityAlignment() {
    return (*(uint8_t*)((uintptr_t)this + 0xaf + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleRequired::set_bOrbitModuleAffectsVelocityAlignment(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xaf + 0);
    *(uint8_t*)((uintptr_t)this + 0xaf + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::ParticleModuleRequired::get_SubImages_Horizontal() {
    return *(int32_t*)((uintptr_t)this + 0xb0);
}
int32_t& _Script_Engine::ParticleModuleRequired::get_SubImages_Vertical() {
    return *(int32_t*)((uintptr_t)this + 0xb4);
}
float& _Script_Engine::ParticleModuleRequired::get_RandomImageTime() {
    return *(float*)((uintptr_t)this + 0xb8);
}
int32_t& _Script_Engine::ParticleModuleRequired::get_RandomImageChanges() {
    return *(int32_t*)((uintptr_t)this + 0xbc);
}
void* _Script_Engine::ParticleModuleRequired::get_MacroUVPosition() {
    return (void*)((uintptr_t)this + 0xc0);
}
float& _Script_Engine::ParticleModuleRequired::get_MacroUVRadius() {
    return *(float*)((uintptr_t)this + 0xcc);
}
void* _Script_Engine::ParticleModuleRequired::get_UVFlippingMode() {
    return (void*)((uintptr_t)this + 0xd0);
}
_Script_Engine::Texture2D*& _Script_Engine::ParticleModuleRequired::get_CutoutTexture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0xe8);
}
int32_t& _Script_Engine::ParticleModuleRequired::get_MaxDrawCount() {
    return *(int32_t*)((uintptr_t)this + 0xf0);
}
float& _Script_Engine::ParticleModuleRequired::get_EmitterDurationLow() {
    return *(float*)((uintptr_t)this + 0xf4);
}
void* _Script_Engine::ParticleModuleRequired::get_NormalsCylinderDirection() {
    return (void*)((uintptr_t)this + 0xf8);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleRequired::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleRequired");
    return result;
}
