#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundNode.hpp"
#include "SoundNodeDoppler.hpp"
float& _Script_Engine::SoundNodeDoppler::get_DopplerIntensity() {
    return *(float*)((uintptr_t)this + 0x48);
}
bool _Script_Engine::SoundNodeDoppler::get_bUseSmoothing() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c + 0)) & 1 != 0;
}
void _Script_Engine::SoundNodeDoppler::set_bUseSmoothing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::SoundNodeDoppler::get_SmoothingInterpSpeed() {
    return *(float*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_Engine::SoundNodeDoppler::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SoundNodeDoppler");
    return result;
}
