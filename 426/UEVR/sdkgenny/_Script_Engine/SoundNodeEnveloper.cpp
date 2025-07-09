#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DistributionFloatConstantCurve.hpp"
#include "SoundNode.hpp"
#include "SoundNodeEnveloper.hpp"
float& _Script_Engine::SoundNodeEnveloper::get_LoopStart() {
    return *(float*)((uintptr_t)this + 0x48);
}
void _Script_Engine::SoundNodeEnveloper::set_bLoop(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x58 + 0);
    *(uint8_t*)((uintptr_t)this + 0x58 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_Engine::SoundNodeEnveloper::get_LoopEnd() {
    return *(float*)((uintptr_t)this + 0x4c);
}
bool _Script_Engine::SoundNodeEnveloper::get_bLoop() {
    return (*(uint8_t*)((uintptr_t)this + 0x58 + 0)) & 2 != 0;
}
float& _Script_Engine::SoundNodeEnveloper::get_DurationAfterLoop() {
    return *(float*)((uintptr_t)this + 0x50);
}
int32_t& _Script_Engine::SoundNodeEnveloper::get_LoopCount() {
    return *(int32_t*)((uintptr_t)this + 0x54);
}
void _Script_Engine::SoundNodeEnveloper::set_bLoopIndefinitely(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x58 + 0);
    *(uint8_t*)((uintptr_t)this + 0x58 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::SoundNodeEnveloper::get_bLoopIndefinitely() {
    return (*(uint8_t*)((uintptr_t)this + 0x58 + 0)) & 1 != 0;
}
_Script_Engine::DistributionFloatConstantCurve*& _Script_Engine::SoundNodeEnveloper::get_VolumeInterpCurve() {
    return *(_Script_Engine::DistributionFloatConstantCurve**)((uintptr_t)this + 0x60);
}
_Script_Engine::DistributionFloatConstantCurve*& _Script_Engine::SoundNodeEnveloper::get_PitchInterpCurve() {
    return *(_Script_Engine::DistributionFloatConstantCurve**)((uintptr_t)this + 0x68);
}
void* _Script_Engine::SoundNodeEnveloper::get_VolumeCurve() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_Engine::SoundNodeEnveloper::get_PitchCurve() {
    return (void*)((uintptr_t)this + 0xf8);
}
float& _Script_Engine::SoundNodeEnveloper::get_PitchMin() {
    return *(float*)((uintptr_t)this + 0x180);
}
float& _Script_Engine::SoundNodeEnveloper::get_PitchMax() {
    return *(float*)((uintptr_t)this + 0x184);
}
float& _Script_Engine::SoundNodeEnveloper::get_VolumeMin() {
    return *(float*)((uintptr_t)this + 0x188);
}
float& _Script_Engine::SoundNodeEnveloper::get_VolumeMax() {
    return *(float*)((uintptr_t)this + 0x18c);
}
_Script_CoreUObject::Class* _Script_Engine::SoundNodeEnveloper::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SoundNodeEnveloper");
    return result;
}
