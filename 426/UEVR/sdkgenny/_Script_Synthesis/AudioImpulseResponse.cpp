#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "AudioImpulseResponse.hpp"
void* _Script_Synthesis::AudioImpulseResponse::get_ImpulseResponse() {
    return (void*)((uintptr_t)this + 0x28);
}
int32_t& _Script_Synthesis::AudioImpulseResponse::get_NumChannels() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
int32_t& _Script_Synthesis::AudioImpulseResponse::get_SampleRate() {
    return *(int32_t*)((uintptr_t)this + 0x3c);
}
void* _Script_Synthesis::AudioImpulseResponse::get_IRData() {
    return (void*)((uintptr_t)this + 0x48);
}
float& _Script_Synthesis::AudioImpulseResponse::get_NormalizationVolumeDb() {
    return *(float*)((uintptr_t)this + 0x40);
}
bool _Script_Synthesis::AudioImpulseResponse::get_bTrueStereo() {
    return (*(uint8_t*)((uintptr_t)this + 0x44 + 0)) & 1 != 0;
}
void _Script_Synthesis::AudioImpulseResponse::set_bTrueStereo(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x44 + 0);
    *(uint8_t*)((uintptr_t)this + 0x44 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Synthesis::AudioImpulseResponse::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Synthesis.AudioImpulseResponse");
    return result;
}
