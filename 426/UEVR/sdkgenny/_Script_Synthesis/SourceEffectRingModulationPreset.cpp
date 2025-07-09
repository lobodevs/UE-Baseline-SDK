#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SoundEffectSourcePreset.hpp"
#include "SourceEffectRingModulationPreset.hpp"
#include "SourceEffectRingModulationSettings.hpp"
void* _Script_Synthesis::SourceEffectRingModulationPreset::get_Settings() {
    return (void*)((uintptr_t)this + 0xb0);
}
_Script_CoreUObject::Class* _Script_Synthesis::SourceEffectRingModulationPreset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Synthesis.SourceEffectRingModulationPreset");
    return result;
}
void _Script_Synthesis::SourceEffectRingModulationPreset::SetSettings(_Script_Synthesis::SourceEffectRingModulationSettings& InSettings) {
    return;
}
