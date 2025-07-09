#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SoundEffectSourcePreset.hpp"
#include "SourceEffectEQPreset.hpp"
#include "SourceEffectEQSettings.hpp"
void _Script_Synthesis::SourceEffectEQPreset::SetSettings(_Script_Synthesis::SourceEffectEQSettings& InSettings) {
    return;
}
void* _Script_Synthesis::SourceEffectEQPreset::get_Settings() {
    return (void*)((uintptr_t)this + 0xa0);
}
_Script_CoreUObject::Class* _Script_Synthesis::SourceEffectEQPreset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Synthesis.SourceEffectEQPreset");
    return result;
}
