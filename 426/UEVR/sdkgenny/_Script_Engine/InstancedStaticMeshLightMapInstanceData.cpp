#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InstancedStaticMeshLightMapInstanceData.hpp"
void* _Script_Engine::InstancedStaticMeshLightMapInstanceData::get_Transform() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::InstancedStaticMeshLightMapInstanceData::get_MapBuildDataIds() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::InstancedStaticMeshLightMapInstanceData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.InstancedStaticMeshLightMapInstanceData");
    return result;
}
