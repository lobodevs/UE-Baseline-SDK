#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundNode.hpp"
#include "SoundNodeRandom.hpp"
void* _Script_Engine::SoundNodeRandom::get_Weights() {
    return (void*)((uintptr_t)this + 0x48);
}
void _Script_Engine::SoundNodeRandom::set_bSoundCueExcludedFromBranchCulling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x70 + 0);
    *(uint8_t*)((uintptr_t)this + 0x70 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::SoundNodeRandom::get_HasBeenUsed() {
    return (void*)((uintptr_t)this + 0x58);
}
bool _Script_Engine::SoundNodeRandom::get_bShouldExcludeFromBranchCulling() {
    return (*(uint8_t*)((uintptr_t)this + 0x70 + 0)) & 1 != 0;
}
int32_t& _Script_Engine::SoundNodeRandom::get_NumRandomUsed() {
    return *(int32_t*)((uintptr_t)this + 0x68);
}
int32_t& _Script_Engine::SoundNodeRandom::get_PreselectAtLevelLoad() {
    return *(int32_t*)((uintptr_t)this + 0x6c);
}
void _Script_Engine::SoundNodeRandom::set_bShouldExcludeFromBranchCulling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x70 + 0);
    *(uint8_t*)((uintptr_t)this + 0x70 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::SoundNodeRandom::get_bSoundCueExcludedFromBranchCulling() {
    return (*(uint8_t*)((uintptr_t)this + 0x70 + 0)) & 2 != 0;
}
bool _Script_Engine::SoundNodeRandom::get_bRandomizeWithoutReplacement() {
    return (*(uint8_t*)((uintptr_t)this + 0x70 + 0)) & 4 != 0;
}
void _Script_Engine::SoundNodeRandom::set_bRandomizeWithoutReplacement(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x70 + 0);
    *(uint8_t*)((uintptr_t)this + 0x70 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::SoundNodeRandom::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SoundNodeRandom");
    return result;
}
