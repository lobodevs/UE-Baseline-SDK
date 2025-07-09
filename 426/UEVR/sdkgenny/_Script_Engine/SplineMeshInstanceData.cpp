#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SceneComponentInstanceData.hpp"
#include "SplineMeshInstanceData.hpp"
void* _Script_Engine::SplineMeshInstanceData::get_StartPos() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_Engine::SplineMeshInstanceData::get_EndPos() {
    return (void*)((uintptr_t)this + 0xc4);
}
void* _Script_Engine::SplineMeshInstanceData::get_StartTangent() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_Engine::SplineMeshInstanceData::get_EndTangent() {
    return (void*)((uintptr_t)this + 0xdc);
}
_Script_CoreUObject::Class* _Script_Engine::SplineMeshInstanceData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SplineMeshInstanceData");
    return result;
}
