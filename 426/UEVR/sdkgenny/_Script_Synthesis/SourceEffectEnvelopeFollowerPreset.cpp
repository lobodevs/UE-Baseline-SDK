#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SoundEffectSourcePreset.hpp"
#include "EnvelopeFollowerListener.hpp"
#include "SourceEffectEnvelopeFollowerPreset.hpp"
#include "SourceEffectEnvelopeFollowerSettings.hpp"
void _Script_Synthesis::SourceEffectEnvelopeFollowerPreset::RegisterEnvelopeFollowerListener(_Script_Synthesis::EnvelopeFollowerListener* EnvelopeFollowerListener) {
    return;
}
void* _Script_Synthesis::SourceEffectEnvelopeFollowerPreset::get_Settings() {
    return (void*)((uintptr_t)this + 0x9c);
}
_Script_CoreUObject::Class* _Script_Synthesis::SourceEffectEnvelopeFollowerPreset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Synthesis.SourceEffectEnvelopeFollowerPreset");
    return result;
}
void _Script_Synthesis::SourceEffectEnvelopeFollowerPreset::UnregisterEnvelopeFollowerListener(_Script_Synthesis::EnvelopeFollowerListener* EnvelopeFollowerListener) {
    return;
}
void _Script_Synthesis::SourceEffectEnvelopeFollowerPreset::SetSettings(_Script_Synthesis::SourceEffectEnvelopeFollowerSettings& InSettings) {
    return;
}
