#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SoundEffectSourcePreset.hpp"
#include "SourceEffectWaveShaperPreset.hpp"
#include "SourceEffectWaveShaperSettings.hpp"
void* _Script_Synthesis::SourceEffectWaveShaperPreset::get_Settings() {
    return (void*)((uintptr_t)this + 0x98);
}
_Script_CoreUObject::Class* _Script_Synthesis::SourceEffectWaveShaperPreset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Synthesis.SourceEffectWaveShaperPreset");
    return result;
}
void _Script_Synthesis::SourceEffectWaveShaperPreset::SetSettings(_Script_Synthesis::SourceEffectWaveShaperSettings& InSettings) {
    return;
}
