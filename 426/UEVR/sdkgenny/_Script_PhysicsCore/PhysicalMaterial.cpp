#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "PhysicalMaterial.hpp"
#include "PhysicalMaterialPropertyBase.hpp"
bool _Script_PhysicsCore::PhysicalMaterial::get_bOverrideFrictionCombineMode() {
    return (*(uint8_t*)((uintptr_t)this + 0x31 + 0)) & 1 != 0;
}
float& _Script_PhysicsCore::PhysicalMaterial::get_Friction() {
    return *(float*)((uintptr_t)this + 0x28);
}
float& _Script_PhysicsCore::PhysicalMaterial::get_StaticFriction() {
    return *(float*)((uintptr_t)this + 0x2c);
}
void* _Script_PhysicsCore::PhysicalMaterial::get_FrictionCombineMode() {
    return (void*)((uintptr_t)this + 0x30);
}
void _Script_PhysicsCore::PhysicalMaterial::set_bOverrideFrictionCombineMode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x31 + 0);
    *(uint8_t*)((uintptr_t)this + 0x31 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_PhysicsCore::PhysicalMaterial::get_RestitutionCombineMode() {
    return (void*)((uintptr_t)this + 0x38);
}
float& _Script_PhysicsCore::PhysicalMaterial::get_Restitution() {
    return *(float*)((uintptr_t)this + 0x34);
}
bool _Script_PhysicsCore::PhysicalMaterial::get_bOverrideRestitutionCombineMode() {
    return (*(uint8_t*)((uintptr_t)this + 0x39 + 0)) & 1 != 0;
}
void _Script_PhysicsCore::PhysicalMaterial::set_bOverrideRestitutionCombineMode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x39 + 0);
    *(uint8_t*)((uintptr_t)this + 0x39 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_PhysicsCore::PhysicalMaterial::get_Density() {
    return *(float*)((uintptr_t)this + 0x3c);
}
float& _Script_PhysicsCore::PhysicalMaterial::get_SleepLinearVelocityThreshold() {
    return *(float*)((uintptr_t)this + 0x40);
}
float& _Script_PhysicsCore::PhysicalMaterial::get_SleepAngularVelocityThreshold() {
    return *(float*)((uintptr_t)this + 0x44);
}
int32_t& _Script_PhysicsCore::PhysicalMaterial::get_SleepCounterThreshold() {
    return *(int32_t*)((uintptr_t)this + 0x48);
}
float& _Script_PhysicsCore::PhysicalMaterial::get_RaiseMassToPower() {
    return *(float*)((uintptr_t)this + 0x4c);
}
float& _Script_PhysicsCore::PhysicalMaterial::get_DestructibleDamageThresholdScale() {
    return *(float*)((uintptr_t)this + 0x50);
}
_Script_PhysicsCore::PhysicalMaterialPropertyBase*& _Script_PhysicsCore::PhysicalMaterial::get_PhysicalMaterialProperty() {
    return *(_Script_PhysicsCore::PhysicalMaterialPropertyBase**)((uintptr_t)this + 0x58);
}
void* _Script_PhysicsCore::PhysicalMaterial::get_SurfaceType() {
    return (void*)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_PhysicsCore::PhysicalMaterial::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/PhysicsCore.PhysicalMaterial");
    return result;
}
