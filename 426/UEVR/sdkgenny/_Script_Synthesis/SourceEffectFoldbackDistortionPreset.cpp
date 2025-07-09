#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SoundEffectSourcePreset.hpp"
#include "SourceEffectFoldbackDistortionPreset.hpp"
#include "SourceEffectFoldbackDistortionSettings.hpp"
void* _Script_Synthesis::SourceEffectFoldbackDistortionPreset::get_Settings() {
    return (void*)((uintptr_t)this + 0x9c);
}
void _Script_Synthesis::SourceEffectFoldbackDistortionPreset::SetSettings(_Script_Synthesis::SourceEffectFoldbackDistortionSettings& InSettings) {
    return;
}
_Script_CoreUObject::Class* _Script_Synthesis::SourceEffectFoldbackDistortionPreset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Synthesis.SourceEffectFoldbackDistortionPreset");
    return result;
}
