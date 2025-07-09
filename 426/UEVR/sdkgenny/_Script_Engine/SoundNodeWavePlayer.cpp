#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundNodeAssetReferencer.hpp"
#include "SoundNodeWavePlayer.hpp"
#include "SoundWave.hpp"
bool _Script_Engine::SoundNodeWavePlayer::get_bLooping() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 1 != 0;
}
void* _Script_Engine::SoundNodeWavePlayer::get_SoundWaveAssetPtr() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_Engine::SoundWave*& _Script_Engine::SoundNodeWavePlayer::get_SoundWave() {
    return *(_Script_Engine::SoundWave**)((uintptr_t)this + 0x70);
}
void _Script_Engine::SoundNodeWavePlayer::set_bLooping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::SoundNodeWavePlayer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SoundNodeWavePlayer");
    return result;
}
