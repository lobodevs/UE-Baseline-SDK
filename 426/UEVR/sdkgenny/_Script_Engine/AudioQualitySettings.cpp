#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AudioQualitySettings.hpp"
void* _Script_Engine::AudioQualitySettings::get_DisplayName() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::AudioQualitySettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AudioQualitySettings");
    return result;
}
int32_t& _Script_Engine::AudioQualitySettings::get_MaxChannels() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
