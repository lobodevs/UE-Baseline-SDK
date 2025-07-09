#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "BodySetupCore.hpp"
void* _Script_PhysicsCore::BodySetupCore::get_BoneName() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_PhysicsCore::BodySetupCore::get_PhysicsType() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_PhysicsCore::BodySetupCore::get_CollisionTraceFlag() {
    return (void*)((uintptr_t)this + 0x31);
}
void* _Script_PhysicsCore::BodySetupCore::get_CollisionReponse() {
    return (void*)((uintptr_t)this + 0x32);
}
_Script_CoreUObject::Class* _Script_PhysicsCore::BodySetupCore::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/PhysicsCore.BodySetupCore");
    return result;
}
