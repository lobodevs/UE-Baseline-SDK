#include "..\FUObjectArray.hpp"
#include "ChaosClothConfig.hpp"
#include "..\_Script_ClothingSystemRuntimeCommon\ClothConfigCommon.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void _Script_ChaosCloth::ChaosClothConfig::set_bUseBendingElements(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x44 + 0);
    *(uint8_t*)((uintptr_t)this + 0x44 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_ChaosCloth::ChaosClothConfig::get_Density() {
    return *(float*)((uintptr_t)this + 0x34);
}
void* _Script_ChaosCloth::ChaosClothConfig::get_MassMode() {
    return (void*)((uintptr_t)this + 0x28);
}
float& _Script_ChaosCloth::ChaosClothConfig::get_UniformMass() {
    return *(float*)((uintptr_t)this + 0x2c);
}
float& _Script_ChaosCloth::ChaosClothConfig::get_BendingStiffness() {
    return *(float*)((uintptr_t)this + 0x40);
}
float& _Script_ChaosCloth::ChaosClothConfig::get_TotalMass() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_ChaosCloth::ChaosClothConfig::get_MinPerParticleMass() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_ChaosCloth::ChaosClothConfig::get_EdgeStiffness() {
    return *(float*)((uintptr_t)this + 0x3c);
}
bool _Script_ChaosCloth::ChaosClothConfig::get_bUseBendingElements() {
    return (*(uint8_t*)((uintptr_t)this + 0x44 + 0)) & 1 != 0;
}
void* _Script_ChaosCloth::ChaosClothConfig::get_TetherMode() {
    return (void*)((uintptr_t)this + 0x58);
}
float& _Script_ChaosCloth::ChaosClothConfig::get_AreaStiffness() {
    return *(float*)((uintptr_t)this + 0x48);
}
float& _Script_ChaosCloth::ChaosClothConfig::get_VolumeStiffness() {
    return *(float*)((uintptr_t)this + 0x4c);
}
float& _Script_ChaosCloth::ChaosClothConfig::get_StrainLimitingStiffness() {
    return *(float*)((uintptr_t)this + 0x50);
}
void _Script_ChaosCloth::ChaosClothConfig::set_bUsePointBasedWindModel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x78 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_ChaosCloth::ChaosClothConfig::get_LimitScale() {
    return *(float*)((uintptr_t)this + 0x54);
}
bool _Script_ChaosCloth::ChaosClothConfig::get_bUseGeodesicDistance() {
    return (*(uint8_t*)((uintptr_t)this + 0x59 + 0)) & 1 != 0;
}
void _Script_ChaosCloth::ChaosClothConfig::set_bUseGeodesicDistance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x59 + 0);
    *(uint8_t*)((uintptr_t)this + 0x59 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_ChaosCloth::ChaosClothConfig::get_ShapeTargetStiffness() {
    return *(float*)((uintptr_t)this + 0x5c);
}
_Script_CoreUObject::Class* _Script_ChaosCloth::ChaosClothConfig::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ChaosCloth.ChaosClothConfig");
    return result;
}
float& _Script_ChaosCloth::ChaosClothConfig::get_CollisionThickness() {
    return *(float*)((uintptr_t)this + 0x60);
}
float& _Script_ChaosCloth::ChaosClothConfig::get_FrictionCoefficient() {
    return *(float*)((uintptr_t)this + 0x64);
}
void _Script_ChaosCloth::ChaosClothConfig::set_bUseContinuousCollisionDetection(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xae + 0);
    *(uint8_t*)((uintptr_t)this + 0xae + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ChaosCloth::ChaosClothConfig::get_bUseSelfCollisions() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 1 != 0;
}
void _Script_ChaosCloth::ChaosClothConfig::set_bUseSelfCollisions(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ChaosCloth::ChaosClothConfig::get_bUseGravityOverride() {
    return (*(uint8_t*)((uintptr_t)this + 0x84 + 0)) & 1 != 0;
}
float& _Script_ChaosCloth::ChaosClothConfig::get_SelfCollisionThickness() {
    return *(float*)((uintptr_t)this + 0x6c);
}
bool _Script_ChaosCloth::ChaosClothConfig::get_bUseLegacyBackstop() {
    return (*(uint8_t*)((uintptr_t)this + 0x70 + 0)) & 1 != 0;
}
void _Script_ChaosCloth::ChaosClothConfig::set_bUseGravityOverride(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x84 + 0);
    *(uint8_t*)((uintptr_t)this + 0x84 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_ChaosCloth::ChaosClothConfig::set_bUseLegacyBackstop(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x70 + 0);
    *(uint8_t*)((uintptr_t)this + 0x70 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_ChaosCloth::ChaosClothConfig::get_DampingCoefficient() {
    return *(float*)((uintptr_t)this + 0x74);
}
bool _Script_ChaosCloth::ChaosClothConfig::get_bUsePointBasedWindModel() {
    return (*(uint8_t*)((uintptr_t)this + 0x78 + 0)) & 1 != 0;
}
float& _Script_ChaosCloth::ChaosClothConfig::get_DragCoefficient() {
    return *(float*)((uintptr_t)this + 0x7c);
}
float& _Script_ChaosCloth::ChaosClothConfig::get_LiftCoefficient() {
    return *(float*)((uintptr_t)this + 0x80);
}
float& _Script_ChaosCloth::ChaosClothConfig::get_GravityScale() {
    return *(float*)((uintptr_t)this + 0x88);
}
void* _Script_ChaosCloth::ChaosClothConfig::get_Gravity() {
    return (void*)((uintptr_t)this + 0x8c);
}
float& _Script_ChaosCloth::ChaosClothConfig::get_AnimDriveSpringStiffness() {
    return *(float*)((uintptr_t)this + 0x98);
}
void* _Script_ChaosCloth::ChaosClothConfig::get_LinearVelocityScale() {
    return (void*)((uintptr_t)this + 0x9c);
}
float& _Script_ChaosCloth::ChaosClothConfig::get_AngularVelocityScale() {
    return *(float*)((uintptr_t)this + 0xa8);
}
bool _Script_ChaosCloth::ChaosClothConfig::get_bUseTetrahedralConstraints() {
    return (*(uint8_t*)((uintptr_t)this + 0xac + 0)) & 1 != 0;
}
void _Script_ChaosCloth::ChaosClothConfig::set_bUseTetrahedralConstraints(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xac + 0);
    *(uint8_t*)((uintptr_t)this + 0xac + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ChaosCloth::ChaosClothConfig::get_bUseThinShellVolumeConstraints() {
    return (*(uint8_t*)((uintptr_t)this + 0xad + 0)) & 1 != 0;
}
void _Script_ChaosCloth::ChaosClothConfig::set_bUseThinShellVolumeConstraints(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xad + 0);
    *(uint8_t*)((uintptr_t)this + 0xad + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ChaosCloth::ChaosClothConfig::get_bUseContinuousCollisionDetection() {
    return (*(uint8_t*)((uintptr_t)this + 0xae + 0)) & 1 != 0;
}
