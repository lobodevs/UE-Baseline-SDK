#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SoundEffectSourcePreset.hpp"
#include "SourceEffectDynamicsProcessorPreset.hpp"
#include "SourceEffectDynamicsProcessorSettings.hpp"
void* _Script_Synthesis::SourceEffectDynamicsProcessorPreset::get_Settings() {
    return (void*)((uintptr_t)this + 0xb8);
}
_Script_CoreUObject::Class* _Script_Synthesis::SourceEffectDynamicsProcessorPreset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Synthesis.SourceEffectDynamicsProcessorPreset");
    return result;
}
void _Script_Synthesis::SourceEffectDynamicsProcessorPreset::SetSettings(_Script_Synthesis::SourceEffectDynamicsProcessorSettings& InSettings) {
    return;
}
