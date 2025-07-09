#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SoundEffectSubmixPreset.hpp"
#include "SubmixEffectFilterPreset.hpp"
#include "SubmixEffectFilterSettings.hpp"
void* _Script_Synthesis::SubmixEffectFilterPreset::get_Settings() {
    return (void*)((uintptr_t)this + 0x9c);
}
void _Script_Synthesis::SubmixEffectFilterPreset::SetFilterCutoffFrequency(float InFrequency) {
    return;
}
_Script_CoreUObject::Class* _Script_Synthesis::SubmixEffectFilterPreset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Synthesis.SubmixEffectFilterPreset");
    return result;
}
void _Script_Synthesis::SubmixEffectFilterPreset::SetFilterQ(float InQ) {
    return;
}
void _Script_Synthesis::SubmixEffectFilterPreset::SetSettings(_Script_Synthesis::SubmixEffectFilterSettings& InSettings) {
    return;
}
void _Script_Synthesis::SubmixEffectFilterPreset::SetFilterType(void* InType) {
    return;
}
void _Script_Synthesis::SubmixEffectFilterPreset::SetFilterQMod(float InQ) {
    return;
}
void _Script_Synthesis::SubmixEffectFilterPreset::SetFilterCutoffFrequencyMod(float InFrequency) {
    return;
}
void _Script_Synthesis::SubmixEffectFilterPreset::SetFilterAlgorithm(void* InAlgorithm) {
    return;
}
