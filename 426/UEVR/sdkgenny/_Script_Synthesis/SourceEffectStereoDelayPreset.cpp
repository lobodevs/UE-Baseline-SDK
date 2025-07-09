#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SoundEffectSourcePreset.hpp"
#include "SourceEffectStereoDelayPreset.hpp"
#include "SourceEffectStereoDelaySettings.hpp"
void* _Script_Synthesis::SourceEffectStereoDelayPreset::get_Settings() {
    return (void*)((uintptr_t)this + 0xb4);
}
void _Script_Synthesis::SourceEffectStereoDelayPreset::SetSettings(_Script_Synthesis::SourceEffectStereoDelaySettings& InSettings) {
    return;
}
_Script_CoreUObject::Class* _Script_Synthesis::SourceEffectStereoDelayPreset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Synthesis.SourceEffectStereoDelayPreset");
    return result;
}
