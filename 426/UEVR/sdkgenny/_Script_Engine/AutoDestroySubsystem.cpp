#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "AutoDestroySubsystem.hpp"
#include "WorldSubsystem.hpp"
void* _Script_Engine::AutoDestroySubsystem::get_ActorsToPoll() {
    return (void*)((uintptr_t)this + 0x38);
}
void _Script_Engine::AutoDestroySubsystem::OnActorEndPlay(_Script_Engine::Actor* Actor, void* EndPlayReason) {
    return;
}
_Script_CoreUObject::Class* _Script_Engine::AutoDestroySubsystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AutoDestroySubsystem");
    return result;
}
