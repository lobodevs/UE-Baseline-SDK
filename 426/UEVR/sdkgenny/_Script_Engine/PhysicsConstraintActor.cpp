#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "PhysicsConstraintActor.hpp"
#include "PhysicsConstraintComponent.hpp"
#include "RigidBodyBase.hpp"
void _Script_Engine::PhysicsConstraintActor::set_bDisableCollision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x238 + 0);
    *(uint8_t*)((uintptr_t)this + 0x238 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::PhysicsConstraintComponent*& _Script_Engine::PhysicsConstraintActor::get_ConstraintComp() {
    return *(_Script_Engine::PhysicsConstraintComponent**)((uintptr_t)this + 0x220);
}
_Script_CoreUObject::Class* _Script_Engine::PhysicsConstraintActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PhysicsConstraintActor");
    return result;
}
_Script_Engine::Actor*& _Script_Engine::PhysicsConstraintActor::get_ConstraintActor1() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x228);
}
_Script_Engine::Actor*& _Script_Engine::PhysicsConstraintActor::get_ConstraintActor2() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x230);
}
bool _Script_Engine::PhysicsConstraintActor::get_bDisableCollision() {
    return (*(uint8_t*)((uintptr_t)this + 0x238 + 0)) & 1 != 0;
}
