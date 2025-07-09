#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AudioVolumeSubmixSendSettings.hpp"
void* _Script_Engine::AudioVolumeSubmixSendSettings::get_ListenerLocationState() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::AudioVolumeSubmixSendSettings::get_SourceLocationState() {
    return (void*)((uintptr_t)this + 0x1);
}
void* _Script_Engine::AudioVolumeSubmixSendSettings::get_SubmixSends() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::AudioVolumeSubmixSendSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AudioVolumeSubmixSendSettings");
    return result;
}
