#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PrimitiveComponent.hpp"
#include "PrimitiveComponentInstanceData.hpp"
#include "SceneComponentInstanceData.hpp"
void* _Script_Engine::PrimitiveComponentInstanceData::get_ComponentTransform() {
    return (void*)((uintptr_t)this + 0xc0);
}
int32_t& _Script_Engine::PrimitiveComponentInstanceData::get_VisibilityId() {
    return *(int32_t*)((uintptr_t)this + 0xf0);
}
_Script_Engine::PrimitiveComponent*& _Script_Engine::PrimitiveComponentInstanceData::get_LODParent() {
    return *(_Script_Engine::PrimitiveComponent**)((uintptr_t)this + 0xf8);
}
_Script_CoreUObject::Class* _Script_Engine::PrimitiveComponentInstanceData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.PrimitiveComponentInstanceData");
    return result;
}
