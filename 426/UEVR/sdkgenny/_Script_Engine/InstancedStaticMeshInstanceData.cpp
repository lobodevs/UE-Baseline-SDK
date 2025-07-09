#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InstancedStaticMeshInstanceData.hpp"
_Script_CoreUObject::Class* _Script_Engine::InstancedStaticMeshInstanceData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.InstancedStaticMeshInstanceData");
    return result;
}
void* _Script_Engine::InstancedStaticMeshInstanceData::get_Transform() {
    return (void*)((uintptr_t)this + 0x0);
}
