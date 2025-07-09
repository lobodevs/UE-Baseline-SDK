#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundWave.hpp"
#include "SoundWaveSpectralDataPerSound.hpp"
void* _Script_Engine::SoundWaveSpectralDataPerSound::get_SpectralData() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::SoundWaveSpectralDataPerSound::get_PlaybackTime() {
    return *(float*)((uintptr_t)this + 0x10);
}
_Script_Engine::SoundWave*& _Script_Engine::SoundWaveSpectralDataPerSound::get_SoundWave() {
    return *(_Script_Engine::SoundWave**)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_Engine::SoundWaveSpectralDataPerSound::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SoundWaveSpectralDataPerSound");
    return result;
}
