#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SoundEffectSourcePreset.hpp"
#include "SourceEffectPannerPreset.hpp"
#include "SourceEffectPannerSettings.hpp"
void* _Script_Synthesis::SourceEffectPannerPreset::get_Settings() {
    return (void*)((uintptr_t)this + 0x98);
}
_Script_CoreUObject::Class* _Script_Synthesis::SourceEffectPannerPreset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Synthesis.SourceEffectPannerPreset");
    return result;
}
void _Script_Synthesis::SourceEffectPannerPreset::SetSettings(_Script_Synthesis::SourceEffectPannerSettings& InSettings) {
    return;
}
