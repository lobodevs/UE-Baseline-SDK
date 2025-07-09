#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundSubmixSpectralAnalysisBandSettings.hpp"
float& _Script_Engine::SoundSubmixSpectralAnalysisBandSettings::get_BandFrequency() {
    return *(float*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Engine::SoundSubmixSpectralAnalysisBandSettings::get_AttackTimeMsec() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
float& _Script_Engine::SoundSubmixSpectralAnalysisBandSettings::get_QFactor() {
    return *(float*)((uintptr_t)this + 0xc);
}
int32_t& _Script_Engine::SoundSubmixSpectralAnalysisBandSettings::get_ReleaseTimeMsec() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::SoundSubmixSpectralAnalysisBandSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SoundSubmixSpectralAnalysisBandSettings");
    return result;
}
