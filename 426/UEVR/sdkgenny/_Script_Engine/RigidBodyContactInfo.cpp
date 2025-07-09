#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RigidBodyContactInfo.hpp"
#include "..\_Script_PhysicsCore\PhysicalMaterial.hpp"
void* _Script_Engine::RigidBodyContactInfo::get_ContactPosition() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::RigidBodyContactInfo::get_ContactNormal() {
    return (void*)((uintptr_t)this + 0xc);
}
float& _Script_Engine::RigidBodyContactInfo::get_ContactPenetration() {
    return *(float*)((uintptr_t)this + 0x18);
}
_Script_PhysicsCore::PhysicalMaterial*& _Script_Engine::RigidBodyContactInfo::get_PhysMaterial() {
    return *(_Script_PhysicsCore::PhysicalMaterial**)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_Engine::RigidBodyContactInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RigidBodyContactInfo");
    return result;
}
