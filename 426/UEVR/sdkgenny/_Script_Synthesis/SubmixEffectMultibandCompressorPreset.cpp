#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SoundEffectSubmixPreset.hpp"
#include "SubmixEffectMultibandCompressorPreset.hpp"
#include "SubmixEffectMultibandCompressorSettings.hpp"
void* _Script_Synthesis::SubmixEffectMultibandCompressorPreset::get_Settings() {
    return (void*)((uintptr_t)this + 0xb0);
}
_Script_CoreUObject::Class* _Script_Synthesis::SubmixEffectMultibandCompressorPreset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Synthesis.SubmixEffectMultibandCompressorPreset");
    return result;
}
void _Script_Synthesis::SubmixEffectMultibandCompressorPreset::SetSettings(_Script_Synthesis::SubmixEffectMultibandCompressorSettings& InSettings) {
    return;
}
