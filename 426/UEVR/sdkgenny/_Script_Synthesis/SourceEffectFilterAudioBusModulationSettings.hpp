#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct AudioBus;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Synthesis {
#pragma pack(push, 1)
struct SourceEffectFilterAudioBusModulationSettings {
    private: char pad_0[0x28]; public:
    _Script_Engine::AudioBus*& get_AudioBus();
    int32_t& get_EnvelopeFollowerAttackTimeMsec();
    int32_t& get_EnvelopeFollowerReleaseTimeMsec();
    float& get_EnvelopeGainMultiplier();
    void* get_FilterParam();
    float& get_MinFrequencyModulation();
    float& get_MaxFrequencyModulation();
    float& get_MinResonanceModulation();
    float& get_MaxResonanceModulation();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
