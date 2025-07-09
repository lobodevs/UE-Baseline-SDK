#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SourceEffectFoldbackDistortionSettings.hpp"
_Script_CoreUObject::Class* _Script_Synthesis::SourceEffectFoldbackDistortionSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Synthesis.SourceEffectFoldbackDistortionSettings");
    return result;
}
float& _Script_Synthesis::SourceEffectFoldbackDistortionSettings::get_InputGainDb() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Synthesis::SourceEffectFoldbackDistortionSettings::get_ThresholdDb() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_Synthesis::SourceEffectFoldbackDistortionSettings::get_OutputGainDb() {
    return *(float*)((uintptr_t)this + 0x8);
}
