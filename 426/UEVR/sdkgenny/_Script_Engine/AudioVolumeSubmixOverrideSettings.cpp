#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AudioVolumeSubmixOverrideSettings.hpp"
#include "SoundSubmix.hpp"
void* _Script_Engine::AudioVolumeSubmixOverrideSettings::get_SubmixEffectChain() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_Engine::SoundSubmix*& _Script_Engine::AudioVolumeSubmixOverrideSettings::get_Submix() {
    return *(_Script_Engine::SoundSubmix**)((uintptr_t)this + 0x0);
}
float& _Script_Engine::AudioVolumeSubmixOverrideSettings::get_CrossfadeTime() {
    return *(float*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_Engine::AudioVolumeSubmixOverrideSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AudioVolumeSubmixOverrideSettings");
    return result;
}
