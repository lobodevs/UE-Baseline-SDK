#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SoundEffectSubmixPreset.hpp"
#include "SubmixEffectTapDelayPreset.hpp"
#include "SubmixEffectTapDelaySettings.hpp"
#include "TapDelayInfo.hpp"
void* _Script_Synthesis::SubmixEffectTapDelayPreset::get_Settings() {
    return (void*)((uintptr_t)this + 0xa8);
}
void _Script_Synthesis::SubmixEffectTapDelayPreset::GetTapIds(void*& TapIds) {
    return;
}
_Script_CoreUObject::Class* _Script_Synthesis::SubmixEffectTapDelayPreset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Synthesis.SubmixEffectTapDelayPreset");
    return result;
}
void _Script_Synthesis::SubmixEffectTapDelayPreset::SetTap(int32_t TapId, _Script_Synthesis::TapDelayInfo& TapInfo) {
    return;
}
void _Script_Synthesis::SubmixEffectTapDelayPreset::SetSettings(_Script_Synthesis::SubmixEffectTapDelaySettings& InSettings) {
    return;
}
void _Script_Synthesis::SubmixEffectTapDelayPreset::SetInterpolationTime(float Time) {
    return;
}
void _Script_Synthesis::SubmixEffectTapDelayPreset::GetTap(int32_t TapId, _Script_Synthesis::TapDelayInfo& TapInfo) {
    return;
}
void _Script_Synthesis::SubmixEffectTapDelayPreset::RemoveTap(int32_t TapId) {
    return;
}
float _Script_Synthesis::SubmixEffectTapDelayPreset::GetMaxDelayInMilliseconds() {
    return;
}
void _Script_Synthesis::SubmixEffectTapDelayPreset::AddTap(int32_t& TapId) {
    return;
}
