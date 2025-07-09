#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BoxComponent.hpp"
#include "PlanarReflectionComponent.hpp"
#include "SceneCaptureComponent.hpp"
float& _Script_Engine::PlanarReflectionComponent::get_DistanceFromPlaneFadeStart() {
    return *(float*)((uintptr_t)this + 0x2cc);
}
_Script_Engine::BoxComponent*& _Script_Engine::PlanarReflectionComponent::get_PreviewBox() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x2b0);
}
float& _Script_Engine::PlanarReflectionComponent::get_PrefilterRoughnessDistance() {
    return *(float*)((uintptr_t)this + 0x2c0);
}
float& _Script_Engine::PlanarReflectionComponent::get_NormalDistortionStrength() {
    return *(float*)((uintptr_t)this + 0x2b8);
}
float& _Script_Engine::PlanarReflectionComponent::get_PrefilterRoughness() {
    return *(float*)((uintptr_t)this + 0x2bc);
}
int32_t& _Script_Engine::PlanarReflectionComponent::get_ScreenPercentage() {
    return *(int32_t*)((uintptr_t)this + 0x2c4);
}
float& _Script_Engine::PlanarReflectionComponent::get_AngleFromPlaneFadeEnd() {
    return *(float*)((uintptr_t)this + 0x2e0);
}
float& _Script_Engine::PlanarReflectionComponent::get_ExtraFOV() {
    return *(float*)((uintptr_t)this + 0x2c8);
}
float& _Script_Engine::PlanarReflectionComponent::get_DistanceFromPlaneFadeEnd() {
    return *(float*)((uintptr_t)this + 0x2d0);
}
float& _Script_Engine::PlanarReflectionComponent::get_DistanceFromPlaneFadeoutStart() {
    return *(float*)((uintptr_t)this + 0x2d4);
}
void _Script_Engine::PlanarReflectionComponent::set_bRenderSceneTwoSided(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e5 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::PlanarReflectionComponent::get_DistanceFromPlaneFadeoutEnd() {
    return *(float*)((uintptr_t)this + 0x2d8);
}
float& _Script_Engine::PlanarReflectionComponent::get_AngleFromPlaneFadeStart() {
    return *(float*)((uintptr_t)this + 0x2dc);
}
bool _Script_Engine::PlanarReflectionComponent::get_bShowPreviewPlane() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e4 + 0)) & 1 != 0;
}
void _Script_Engine::PlanarReflectionComponent::set_bShowPreviewPlane(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PlanarReflectionComponent::get_bRenderSceneTwoSided() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e5 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::PlanarReflectionComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PlanarReflectionComponent");
    return result;
}
