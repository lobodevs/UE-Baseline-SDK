#include "..\FUObjectArray.hpp"
#include "AnimationStateEntry.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimationSharing::AnimationStateEntry::get_State() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_AnimationSharing::AnimationStateEntry::get_AnimationSetups() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_AnimationSharing::AnimationStateEntry::get_bOnDemand() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 1 != 0;
}
float& _Script_AnimationSharing::AnimationStateEntry::get_BlendTime() {
    return *(float*)((uintptr_t)this + 0x1c);
}
void _Script_AnimationSharing::AnimationStateEntry::set_bAdditive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x19 + 0);
    *(uint8_t*)((uintptr_t)this + 0x19 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_AnimationSharing::AnimationStateEntry::set_bOnDemand(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AnimationSharing::AnimationStateEntry::get_bReturnToPreviousState() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 1 != 0;
}
bool _Script_AnimationSharing::AnimationStateEntry::get_bAdditive() {
    return (*(uint8_t*)((uintptr_t)this + 0x19 + 0)) & 1 != 0;
}
void _Script_AnimationSharing::AnimationStateEntry::set_bReturnToPreviousState(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AnimationSharing::AnimationStateEntry::get_bSetNextState() {
    return (*(uint8_t*)((uintptr_t)this + 0x21 + 0)) & 1 != 0;
}
void _Script_AnimationSharing::AnimationStateEntry::set_bSetNextState(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x21 + 0);
    *(uint8_t*)((uintptr_t)this + 0x21 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AnimationSharing::AnimationStateEntry::get_NextState() {
    return (void*)((uintptr_t)this + 0x22);
}
void* _Script_AnimationSharing::AnimationStateEntry::get_MaximumNumberOfConcurrentInstances() {
    return (void*)((uintptr_t)this + 0x24);
}
float& _Script_AnimationSharing::AnimationStateEntry::get_WiggleTimePercentage() {
    return *(float*)((uintptr_t)this + 0x28);
}
bool _Script_AnimationSharing::AnimationStateEntry::get_bRequiresCurves() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c + 0)) & 1 != 0;
}
void _Script_AnimationSharing::AnimationStateEntry::set_bRequiresCurves(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AnimationSharing::AnimationStateEntry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimationSharing.AnimationStateEntry");
    return result;
}
