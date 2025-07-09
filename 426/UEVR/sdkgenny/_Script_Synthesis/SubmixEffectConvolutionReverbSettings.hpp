#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Synthesis {
struct AudioImpulseResponse;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Synthesis {
#pragma pack(push, 1)
struct SubmixEffectConvolutionReverbSettings {
    private: char pad_0[0x28]; public:
    float& get_NormalizationVolumeDb();
    bool get_bBypass();
    void set_bBypass(bool value);
    bool get_bMixInputChannelFormatToImpulseResponseFormat();
    void set_bMixInputChannelFormatToImpulseResponseFormat(bool value);
    bool get_bMixReverbOutputToOutputChannelFormat();
    void set_bMixReverbOutputToOutputChannelFormat(bool value);
    float& get_SurroundRearChannelBleedDb();
    bool get_bInvertRearChannelBleedPhase();
    void set_bInvertRearChannelBleedPhase(bool value);
    bool get_bSurroundRearChannelFlip();
    void set_bSurroundRearChannelFlip(bool value);
    float& get_SurroundRearChannelBleedAmount();
    _Script_Synthesis::AudioImpulseResponse*& get_ImpulseResponse();
    bool get_AllowHArdwareAcceleration();
    void set_AllowHArdwareAcceleration(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
