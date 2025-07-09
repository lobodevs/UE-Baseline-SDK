#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "ChaosPhysicalMaterial.hpp"
float& _Script_PhysicsCore::ChaosPhysicalMaterial::get_Friction() {
    return *(float*)((uintptr_t)this + 0x28);
}
float& _Script_PhysicsCore::ChaosPhysicalMaterial::get_Restitution() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_PhysicsCore::ChaosPhysicalMaterial::get_StaticFriction() {
    return *(float*)((uintptr_t)this + 0x2c);
}
float& _Script_PhysicsCore::ChaosPhysicalMaterial::get_LinearEtherDrag() {
    return *(float*)((uintptr_t)this + 0x34);
}
float& _Script_PhysicsCore::ChaosPhysicalMaterial::get_AngularEtherDrag() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_PhysicsCore::ChaosPhysicalMaterial::get_SleepingAngularVelocityThreshold() {
    return *(float*)((uintptr_t)this + 0x40);
}
float& _Script_PhysicsCore::ChaosPhysicalMaterial::get_SleepingLinearVelocityThreshold() {
    return *(float*)((uintptr_t)this + 0x3c);
}
_Script_CoreUObject::Class* _Script_PhysicsCore::ChaosPhysicalMaterial::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/PhysicsCore.ChaosPhysicalMaterial");
    return result;
}
