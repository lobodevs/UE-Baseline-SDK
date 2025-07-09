#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimBlueprintFunction.hpp"
_Script_CoreUObject::Class* _Script_Engine::AnimBlueprintFunction::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimBlueprintFunction");
    return result;
}
void* _Script_Engine::AnimBlueprintFunction::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_Engine::AnimBlueprintFunction::get_bImplemented() {
    return (*(uint8_t*)((uintptr_t)this + 0x60 + 0)) & 1 != 0;
}
void* _Script_Engine::AnimBlueprintFunction::get_Group() {
    return (void*)((uintptr_t)this + 0x8);
}
int32_t& _Script_Engine::AnimBlueprintFunction::get_OutputPoseNodeIndex() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::AnimBlueprintFunction::get_InputPoseNames() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Engine::AnimBlueprintFunction::get_InputPoseNodeIndices() {
    return (void*)((uintptr_t)this + 0x28);
}
void _Script_Engine::AnimBlueprintFunction::set_bImplemented(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x60 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
