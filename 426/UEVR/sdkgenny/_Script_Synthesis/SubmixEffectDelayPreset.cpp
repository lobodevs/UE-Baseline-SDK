#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SoundEffectSubmixPreset.hpp"
#include "SubmixEffectDelayPreset.hpp"
#include "SubmixEffectDelaySettings.hpp"
void _Script_Synthesis::SubmixEffectDelayPreset::SetSettings(_Script_Synthesis::SubmixEffectDelaySettings& InSettings) {
    return;
}
void* _Script_Synthesis::SubmixEffectDelayPreset::get_Settings() {
    return (void*)((uintptr_t)this + 0x9c);
}
float _Script_Synthesis::SubmixEffectDelayPreset::GetMaxDelayInMilliseconds() {
    return;
}
void* _Script_Synthesis::SubmixEffectDelayPreset::get_DynamicSettings() {
    return (void*)((uintptr_t)this + 0xa8);
}
void _Script_Synthesis::SubmixEffectDelayPreset::SetInterpolationTime(float Time) {
    return;
}
_Script_CoreUObject::Class* _Script_Synthesis::SubmixEffectDelayPreset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Synthesis.SubmixEffectDelayPreset");
    return result;
}
void _Script_Synthesis::SubmixEffectDelayPreset::SetDelay(float Length) {
    return;
}
