#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SoundEffectSourcePreset.hpp"
#include "SourceEffectPhaserPreset.hpp"
#include "SourceEffectPhaserSettings.hpp"
void* _Script_Synthesis::SourceEffectPhaserPreset::get_Settings() {
    return (void*)((uintptr_t)this + 0xa0);
}
_Script_CoreUObject::Class* _Script_Synthesis::SourceEffectPhaserPreset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Synthesis.SourceEffectPhaserPreset");
    return result;
}
void _Script_Synthesis::SourceEffectPhaserPreset::SetSettings(_Script_Synthesis::SourceEffectPhaserSettings& InSettings) {
    return;
}
