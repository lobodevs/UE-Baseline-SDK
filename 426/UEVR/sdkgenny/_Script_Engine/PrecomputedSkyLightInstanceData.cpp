#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PrecomputedSkyLightInstanceData.hpp"
#include "SceneComponentInstanceData.hpp"
void* _Script_Engine::PrecomputedSkyLightInstanceData::get_LightGuid() {
    return (void*)((uintptr_t)this + 0xb8);
}
float& _Script_Engine::PrecomputedSkyLightInstanceData::get_AverageBrightness() {
    return *(float*)((uintptr_t)this + 0xc8);
}
_Script_CoreUObject::Class* _Script_Engine::PrecomputedSkyLightInstanceData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.PrecomputedSkyLightInstanceData");
    return result;
}
