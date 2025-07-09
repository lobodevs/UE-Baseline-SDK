#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "MeshComponent.hpp"
#include "PrimitiveComponent.hpp"
void* _Script_Engine::MeshComponent::get_OverrideMaterials() {
    return (void*)((uintptr_t)this + 0x440);
}
bool _Script_Engine::MeshComponent::IsMaterialSlotNameValid(void* MaterialSlotName) {
    return;
}
_Script_CoreUObject::Class* _Script_Engine::MeshComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MeshComponent");
    return result;
}
bool _Script_Engine::MeshComponent::get_bEnableMaterialParameterCaching() {
    return (*(uint8_t*)((uintptr_t)this + 0x460 + 0)) & 1 != 0;
}
void _Script_Engine::MeshComponent::PrestreamTextures(float Seconds, bool bPrioritizeCharacterTextures, int32_t CinematicTextureGroups) {
    return;
}
void _Script_Engine::MeshComponent::set_bEnableMaterialParameterCaching(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x460 + 0);
    *(uint8_t*)((uintptr_t)this + 0x460 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::MeshComponent::SetVectorParameterValueOnMaterials(void* ParameterName, _Script_CoreUObject::Vector ParameterValue) {
    return;
}
void _Script_Engine::MeshComponent::SetScalarParameterValueOnMaterials(void* ParameterName, float ParameterValue) {
    return;
}
void* _Script_Engine::MeshComponent::GetMaterialSlotNames() {
    return;
}
void* _Script_Engine::MeshComponent::GetMaterials() {
    return;
}
int32_t _Script_Engine::MeshComponent::GetMaterialIndex(void* MaterialSlotName) {
    return;
}
