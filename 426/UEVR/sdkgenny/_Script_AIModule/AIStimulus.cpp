#include "..\FUObjectArray.hpp"
#include "AIStimulus.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void _Script_AIModule::AIStimulus::set_bSuccessfullySensed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_AIModule::AIStimulus::get_Age() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_AIModule::AIStimulus::get_ExpirationAge() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_AIModule::AIStimulus::get_Strength() {
    return *(float*)((uintptr_t)this + 0x8);
}
void* _Script_AIModule::AIStimulus::get_StimulusLocation() {
    return (void*)((uintptr_t)this + 0xc);
}
void* _Script_AIModule::AIStimulus::get_ReceiverLocation() {
    return (void*)((uintptr_t)this + 0x18);
}
bool _Script_AIModule::AIStimulus::get_bSuccessfullySensed() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 2 != 0;
}
void* _Script_AIModule::AIStimulus::get_Tag() {
    return (void*)((uintptr_t)this + 0x24);
}
_Script_CoreUObject::Class* _Script_AIModule::AIStimulus::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AIModule.AIStimulus");
    return result;
}
