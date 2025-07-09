#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SoundEffectSubmixPreset.hpp"
#include "SubmixEffectFlexiverbPreset.hpp"
#include "SubmixEffectFlexiverbSettings.hpp"
void* _Script_Synthesis::SubmixEffectFlexiverbPreset::get_Settings() {
    return (void*)((uintptr_t)this + 0xa0);
}
_Script_CoreUObject::Class* _Script_Synthesis::SubmixEffectFlexiverbPreset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Synthesis.SubmixEffectFlexiverbPreset");
    return result;
}
void _Script_Synthesis::SubmixEffectFlexiverbPreset::SetSettings(_Script_Synthesis::SubmixEffectFlexiverbSettings& InSettings) {
    return;
}
