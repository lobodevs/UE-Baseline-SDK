#include "..\FUObjectArray.hpp"
#include "ChaosClothSharedSimConfig.hpp"
#include "..\_Script_ClothingSystemRuntimeCommon\ClothSharedConfigCommon.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void _Script_ChaosCloth::ChaosClothSharedSimConfig::set_bUseDampingOverride(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_ChaosCloth::ChaosClothSharedSimConfig::get_IterationCount() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
int32_t& _Script_ChaosCloth::ChaosClothSharedSimConfig::get_SubdivisionCount() {
    return *(int32_t*)((uintptr_t)this + 0x2c);
}
float& _Script_ChaosCloth::ChaosClothSharedSimConfig::get_SelfCollisionThickness() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_ChaosCloth::ChaosClothSharedSimConfig::get_CollisionThickness() {
    return *(float*)((uintptr_t)this + 0x34);
}
bool _Script_ChaosCloth::ChaosClothSharedSimConfig::get_bUseDampingOverride() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
float& _Script_ChaosCloth::ChaosClothSharedSimConfig::get_Damping() {
    return *(float*)((uintptr_t)this + 0x3c);
}
bool _Script_ChaosCloth::ChaosClothSharedSimConfig::get_bUseGravityOverride() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 1 != 0;
}
void _Script_ChaosCloth::ChaosClothSharedSimConfig::set_bUseGravityOverride(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_ChaosCloth::ChaosClothSharedSimConfig::get_GravityScale() {
    return *(float*)((uintptr_t)this + 0x44);
}
void* _Script_ChaosCloth::ChaosClothSharedSimConfig::get_Gravity() {
    return (void*)((uintptr_t)this + 0x48);
}
bool _Script_ChaosCloth::ChaosClothSharedSimConfig::get_bUseLocalSpaceSimulation() {
    return (*(uint8_t*)((uintptr_t)this + 0x54 + 0)) & 1 != 0;
}
void _Script_ChaosCloth::ChaosClothSharedSimConfig::set_bUseLocalSpaceSimulation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x54 + 0);
    *(uint8_t*)((uintptr_t)this + 0x54 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ChaosCloth::ChaosClothSharedSimConfig::get_bUseXPBDConstraints() {
    return (*(uint8_t*)((uintptr_t)this + 0x55 + 0)) & 1 != 0;
}
void _Script_ChaosCloth::ChaosClothSharedSimConfig::set_bUseXPBDConstraints(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x55 + 0);
    *(uint8_t*)((uintptr_t)this + 0x55 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_ChaosCloth::ChaosClothSharedSimConfig::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ChaosCloth.ChaosClothSharedSimConfig");
    return result;
}
