#include "..\FUObjectArray.hpp"
#include "AudioAnalyzerAsset.hpp"
#include "AudioAnalyzerNRT.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SoundWave.hpp"
float& _Script_AudioAnalyzer::AudioAnalyzerNRT::get_DurationInSeconds() {
    return *(float*)((uintptr_t)this + 0x30);
}
_Script_Engine::SoundWave*& _Script_AudioAnalyzer::AudioAnalyzerNRT::get_Sound() {
    return *(_Script_Engine::SoundWave**)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_AudioAnalyzer::AudioAnalyzerNRT::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AudioAnalyzer.AudioAnalyzerNRT");
    return result;
}
