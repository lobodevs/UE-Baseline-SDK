#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SoundEffectSourcePreset.hpp"
#include "SourceEffectFilterPreset.hpp"
#include "SourceEffectFilterSettings.hpp"
void* _Script_Synthesis::SourceEffectFilterPreset::get_Settings() {
    return (void*)((uintptr_t)this + 0xb0);
}
_Script_CoreUObject::Class* _Script_Synthesis::SourceEffectFilterPreset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Synthesis.SourceEffectFilterPreset");
    return result;
}
void _Script_Synthesis::SourceEffectFilterPreset::SetSettings(_Script_Synthesis::SourceEffectFilterSettings& InSettings) {
    return;
}
