#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SoundEffectSubmixPreset.hpp"
namespace _Script_Synthesis {
struct AudioImpulseResponse;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Synthesis {
struct SubmixEffectConvolutionReverbSettings;
}
namespace _Script_Synthesis {
#pragma pack(push, 1)
struct SubmixEffectConvolutionReverbPreset : public _Script_Engine::SoundEffectSubmixPreset {
    private: char pad_68[0x88]; public:
    _Script_Synthesis::AudioImpulseResponse*& get_ImpulseResponse();
    void* get_Settings();
    void* get_BlockSize();
    bool get_bEnableHardwareAcceleration();
    void set_bEnableHardwareAcceleration(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SetSettings(_Script_Synthesis::SubmixEffectConvolutionReverbSettings& InSettings);
    void SetImpulseResponse(_Script_Synthesis::AudioImpulseResponse* InImpulseResponse);
}; // Size: 0xf0
#pragma pack(pop)
}
