#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SoundEffectSubmixPreset.hpp"
#include "SubmixEffectStereoDelayPreset.hpp"
#include "SubmixEffectStereoDelaySettings.hpp"
void* _Script_Synthesis::SubmixEffectStereoDelayPreset::get_Settings() {
    return (void*)((uintptr_t)this + 0xb4);
}
_Script_CoreUObject::Class* _Script_Synthesis::SubmixEffectStereoDelayPreset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Synthesis.SubmixEffectStereoDelayPreset");
    return result;
}
void _Script_Synthesis::SubmixEffectStereoDelayPreset::SetSettings(_Script_Synthesis::SubmixEffectStereoDelaySettings& InSettings) {
    return;
}
