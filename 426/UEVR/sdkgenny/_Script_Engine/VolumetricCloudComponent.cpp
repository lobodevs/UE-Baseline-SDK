#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Color.hpp"
#include "MaterialInterface.hpp"
#include "SceneComponent.hpp"
#include "VolumetricCloudComponent.hpp"
float& _Script_Engine::VolumetricCloudComponent::get_LayerBottomAltitude() {
    return *(float*)((uintptr_t)this + 0x1f8);
}
void* _Script_Engine::VolumetricCloudComponent::get_GroundAlbedo() {
    return (void*)((uintptr_t)this + 0x20c);
}
float& _Script_Engine::VolumetricCloudComponent::get_LayerHeight() {
    return *(float*)((uintptr_t)this + 0x1fc);
}
float& _Script_Engine::VolumetricCloudComponent::get_PlanetRadius() {
    return *(float*)((uintptr_t)this + 0x208);
}
float& _Script_Engine::VolumetricCloudComponent::get_TracingStartMaxDistance() {
    return *(float*)((uintptr_t)this + 0x200);
}
void _Script_Engine::VolumetricCloudComponent::SetReflectionSampleCountScale(float NewValue) {
    return;
}
float& _Script_Engine::VolumetricCloudComponent::get_TracingMaxDistance() {
    return *(float*)((uintptr_t)this + 0x204);
}
bool _Script_Engine::VolumetricCloudComponent::get_bUsePerSampleAtmosphericLightTransmittance() {
    return (*(uint8_t*)((uintptr_t)this + 0x218 + 0)) & 1 != 0;
}
_Script_Engine::MaterialInterface*& _Script_Engine::VolumetricCloudComponent::get_Material() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x210);
}
void _Script_Engine::VolumetricCloudComponent::set_bUsePerSampleAtmosphericLightTransmittance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x218 + 0);
    *(uint8_t*)((uintptr_t)this + 0x218 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::VolumetricCloudComponent::get_SkyLightCloudBottomOcclusion() {
    return *(float*)((uintptr_t)this + 0x21c);
}
float& _Script_Engine::VolumetricCloudComponent::get_ViewSampleCountScale() {
    return *(float*)((uintptr_t)this + 0x220);
}
float& _Script_Engine::VolumetricCloudComponent::get_ReflectionSampleCountScale() {
    return *(float*)((uintptr_t)this + 0x224);
}
float& _Script_Engine::VolumetricCloudComponent::get_ShadowViewSampleCountScale() {
    return *(float*)((uintptr_t)this + 0x228);
}
float& _Script_Engine::VolumetricCloudComponent::get_ShadowReflectionSampleCountScale() {
    return *(float*)((uintptr_t)this + 0x22c);
}
float& _Script_Engine::VolumetricCloudComponent::get_ShadowTracingDistance() {
    return *(float*)((uintptr_t)this + 0x230);
}
_Script_CoreUObject::Class* _Script_Engine::VolumetricCloudComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.VolumetricCloudComponent");
    return result;
}
void _Script_Engine::VolumetricCloudComponent::SetViewSampleCountScale(float NewValue) {
    return;
}
void _Script_Engine::VolumetricCloudComponent::SetTracingStartMaxDistance(float NewValue) {
    return;
}
void _Script_Engine::VolumetricCloudComponent::SetTracingMaxDistance(float NewValue) {
    return;
}
void _Script_Engine::VolumetricCloudComponent::SetSkyLightCloudBottomOcclusion(float NewValue) {
    return;
}
void _Script_Engine::VolumetricCloudComponent::SetShadowViewSampleCountScale(float NewValue) {
    return;
}
void _Script_Engine::VolumetricCloudComponent::SetShadowTracingDistance(float NewValue) {
    return;
}
void _Script_Engine::VolumetricCloudComponent::SetShadowReflectionSampleCountScale(float NewValue) {
    return;
}
void _Script_Engine::VolumetricCloudComponent::SetPlanetRadius(float NewValue) {
    return;
}
void _Script_Engine::VolumetricCloudComponent::SetMaterial(_Script_Engine::MaterialInterface* NewValue) {
    return;
}
void _Script_Engine::VolumetricCloudComponent::SetLayerHeight(float NewValue) {
    return;
}
void _Script_Engine::VolumetricCloudComponent::SetLayerBottomAltitude(float NewValue) {
    return;
}
void _Script_Engine::VolumetricCloudComponent::SetGroundAlbedo(_Script_CoreUObject::Color NewValue) {
    return;
}
void _Script_Engine::VolumetricCloudComponent::SetbUsePerSampleAtmosphericLightTransmittance(bool NewValue) {
    return;
}
