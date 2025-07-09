#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SourceEffectWaveShaperSettings.hpp"
float& _Script_Synthesis::SourceEffectWaveShaperSettings::get_Amount() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Synthesis::SourceEffectWaveShaperSettings::get_OutputGainDb() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_Synthesis::SourceEffectWaveShaperSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Synthesis.SourceEffectWaveShaperSettings");
    return result;
}
