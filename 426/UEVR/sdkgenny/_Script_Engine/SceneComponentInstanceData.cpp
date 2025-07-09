#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ActorComponentInstanceData.hpp"
#include "SceneComponentInstanceData.hpp"
_Script_CoreUObject::Class* _Script_Engine::SceneComponentInstanceData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SceneComponentInstanceData");
    return result;
}
void* _Script_Engine::SceneComponentInstanceData::get_AttachedInstanceComponents() {
    return (void*)((uintptr_t)this + 0x68);
}
