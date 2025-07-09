#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ChildActorAttachedActorInfo.hpp"
void* _Script_Engine::ChildActorAttachedActorInfo::get_Actor() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::ChildActorAttachedActorInfo::get_SocketName() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::ChildActorAttachedActorInfo::get_RelativeTransform() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::ChildActorAttachedActorInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ChildActorAttachedActorInfo");
    return result;
}
