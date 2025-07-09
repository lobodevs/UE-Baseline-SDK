#include "..\FUObjectArray.hpp"
#include "AnimNode_Slot.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNode_Base.hpp"
void* _Script_AnimGraphRuntime::AnimNode_Slot::get_Source() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_AnimGraphRuntime::AnimNode_Slot::get_SlotName() {
    return (void*)((uintptr_t)this + 0x20);
}
bool _Script_AnimGraphRuntime::AnimNode_Slot::get_bAlwaysUpdateSourcePose() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_Slot::set_bAlwaysUpdateSourcePose(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_Slot::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_Slot");
    return result;
}
