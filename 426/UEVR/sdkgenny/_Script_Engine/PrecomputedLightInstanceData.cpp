#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PrecomputedLightInstanceData.hpp"
#include "SceneComponentInstanceData.hpp"
void* _Script_Engine::PrecomputedLightInstanceData::get_Transform() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_Engine::PrecomputedLightInstanceData::get_LightGuid() {
    return (void*)((uintptr_t)this + 0xf0);
}
int32_t& _Script_Engine::PrecomputedLightInstanceData::get_PreviewShadowMapChannel() {
    return *(int32_t*)((uintptr_t)this + 0x100);
}
_Script_CoreUObject::Class* _Script_Engine::PrecomputedLightInstanceData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.PrecomputedLightInstanceData");
    return result;
}
