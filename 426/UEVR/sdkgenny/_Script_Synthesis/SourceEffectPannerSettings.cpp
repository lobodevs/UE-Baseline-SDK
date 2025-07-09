#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SourceEffectPannerSettings.hpp"
float& _Script_Synthesis::SourceEffectPannerSettings::get_Spread() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Synthesis::SourceEffectPannerSettings::get_Pan() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_Synthesis::SourceEffectPannerSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Synthesis.SourceEffectPannerSettings");
    return result;
}
