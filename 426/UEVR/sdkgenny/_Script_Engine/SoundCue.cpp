#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundBase.hpp"
#include "SoundCue.hpp"
#include "SoundNode.hpp"
bool _Script_Engine::SoundCue::get_bPrimeOnLoad() {
    return (*(uint8_t*)((uintptr_t)this + 0x1b8 + 0)) & 1 != 0;
}
void _Script_Engine::SoundCue::set_bPrimeOnLoad(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1b8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::SoundCue::get_bOverrideAttenuation() {
    return (*(uint8_t*)((uintptr_t)this + 0x578 + 0)) & 1 != 0;
}
void* _Script_Engine::SoundCue::get_AttenuationOverrides() {
    return (void*)((uintptr_t)this + 0x1d0);
}
_Script_Engine::SoundNode*& _Script_Engine::SoundCue::get_FirstNode() {
    return *(_Script_Engine::SoundNode**)((uintptr_t)this + 0x1c0);
}
float& _Script_Engine::SoundCue::get_VolumeMultiplier() {
    return *(float*)((uintptr_t)this + 0x1c8);
}
float& _Script_Engine::SoundCue::get_PitchMultiplier() {
    return *(float*)((uintptr_t)this + 0x1cc);
}
float& _Script_Engine::SoundCue::get_SubtitlePriority() {
    return *(float*)((uintptr_t)this + 0x570);
}
void _Script_Engine::SoundCue::set_bOverrideAttenuation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x578 + 0);
    *(uint8_t*)((uintptr_t)this + 0x578 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::SoundCue::get_bExcludeFromRandomNodeBranchCulling() {
    return (*(uint8_t*)((uintptr_t)this + 0x578 + 0)) & 2 != 0;
}
void _Script_Engine::SoundCue::set_bExcludeFromRandomNodeBranchCulling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x578 + 0);
    *(uint8_t*)((uintptr_t)this + 0x578 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
int32_t& _Script_Engine::SoundCue::get_CookedQualityIndex() {
    return *(int32_t*)((uintptr_t)this + 0x57c);
}
bool _Script_Engine::SoundCue::get_bHasPlayWhenSilent() {
    return (*(uint8_t*)((uintptr_t)this + 0x580 + 0)) & 1 != 0;
}
void _Script_Engine::SoundCue::set_bHasPlayWhenSilent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x580 + 0);
    *(uint8_t*)((uintptr_t)this + 0x580 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::SoundCue::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SoundCue");
    return result;
}
