#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SoundEffectSourcePreset.hpp"
#include "SourceEffectSimpleDelayPreset.hpp"
#include "SourceEffectSimpleDelaySettings.hpp"
void* _Script_Synthesis::SourceEffectSimpleDelayPreset::get_Settings() {
    return (void*)((uintptr_t)this + 0xa8);
}
_Script_CoreUObject::Class* _Script_Synthesis::SourceEffectSimpleDelayPreset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Synthesis.SourceEffectSimpleDelayPreset");
    return result;
}
void _Script_Synthesis::SourceEffectSimpleDelayPreset::SetSettings(_Script_Synthesis::SourceEffectSimpleDelaySettings& InSettings) {
    return;
}
