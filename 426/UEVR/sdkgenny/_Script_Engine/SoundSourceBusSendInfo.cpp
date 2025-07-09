#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AudioBus.hpp"
#include "SoundSourceBus.hpp"
#include "SoundSourceBusSendInfo.hpp"
float& _Script_Engine::SoundSourceBusSendInfo::get_MaxSendLevel() {
    return *(float*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::SoundSourceBusSendInfo::get_SourceBusSendLevelControlMethod() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::SoundSourceBusSendInfo::get_SendLevel() {
    return *(float*)((uintptr_t)this + 0x18);
}
_Script_Engine::AudioBus*& _Script_Engine::SoundSourceBusSendInfo::get_AudioBus() {
    return *(_Script_Engine::AudioBus**)((uintptr_t)this + 0x10);
}
_Script_Engine::SoundSourceBus*& _Script_Engine::SoundSourceBusSendInfo::get_SoundSourceBus() {
    return *(_Script_Engine::SoundSourceBus**)((uintptr_t)this + 0x8);
}
float& _Script_Engine::SoundSourceBusSendInfo::get_MinSendLevel() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_Engine::SoundSourceBusSendInfo::get_MinSendDistance() {
    return *(float*)((uintptr_t)this + 0x24);
}
float& _Script_Engine::SoundSourceBusSendInfo::get_MaxSendDistance() {
    return *(float*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::SoundSourceBusSendInfo::get_CustomSendLevelCurve() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::SoundSourceBusSendInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SoundSourceBusSendInfo");
    return result;
}
