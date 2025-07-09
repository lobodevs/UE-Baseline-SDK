#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundWave.hpp"
#include "SoundWaveEnvelopeDataPerSound.hpp"
_Script_CoreUObject::Class* _Script_Engine::SoundWaveEnvelopeDataPerSound::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SoundWaveEnvelopeDataPerSound");
    return result;
}
float& _Script_Engine::SoundWaveEnvelopeDataPerSound::get_Envelope() {
    return *(float*)((uintptr_t)this + 0x0);
}
_Script_Engine::SoundWave*& _Script_Engine::SoundWaveEnvelopeDataPerSound::get_SoundWave() {
    return *(_Script_Engine::SoundWave**)((uintptr_t)this + 0x8);
}
float& _Script_Engine::SoundWaveEnvelopeDataPerSound::get_PlaybackTime() {
    return *(float*)((uintptr_t)this + 0x4);
}
