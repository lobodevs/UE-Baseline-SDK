#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SoundEffectSourcePreset.hpp"
#include "SourceEffectMidSideSpreaderPreset.hpp"
#include "SourceEffectMidSideSpreaderSettings.hpp"
void* _Script_Synthesis::SourceEffectMidSideSpreaderPreset::get_Settings() {
    return (void*)((uintptr_t)this + 0x98);
}
_Script_CoreUObject::Class* _Script_Synthesis::SourceEffectMidSideSpreaderPreset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Synthesis.SourceEffectMidSideSpreaderPreset");
    return result;
}
void _Script_Synthesis::SourceEffectMidSideSpreaderPreset::SetSettings(_Script_Synthesis::SourceEffectMidSideSpreaderSettings& InSettings) {
    return;
}
