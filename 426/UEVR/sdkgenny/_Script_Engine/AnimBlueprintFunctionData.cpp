#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimBlueprintFunctionData.hpp"
void* _Script_Engine::AnimBlueprintFunctionData::get_OutputPoseNodeProperty() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::AnimBlueprintFunctionData::get_InputPoseNodeProperties() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::AnimBlueprintFunctionData::get_InputProperties() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::AnimBlueprintFunctionData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimBlueprintFunctionData");
    return result;
}
