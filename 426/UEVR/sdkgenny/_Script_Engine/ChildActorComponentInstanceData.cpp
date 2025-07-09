#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ChildActorComponentInstanceData.hpp"
#include "SceneComponentInstanceData.hpp"
void* _Script_Engine::ChildActorComponentInstanceData::get_AttachedActors() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_Engine::ChildActorComponentInstanceData::get_ChildActorClass() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_Engine::ChildActorComponentInstanceData::get_ChildActorName() {
    return (void*)((uintptr_t)this + 0xc0);
}
_Script_CoreUObject::Class* _Script_Engine::ChildActorComponentInstanceData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ChildActorComponentInstanceData");
    return result;
}
