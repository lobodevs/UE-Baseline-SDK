#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Synthesis {
#pragma pack(push, 1)
struct SubmixEffectMultibandCompressorSettings {
    private: char pad_0[0x20]; public:
    void* get_DynamicsProcessorType();
    void* get_PeakMode();
    float& get_LookAheadMsec();
    bool get_bLinkChannels();
    void set_bLinkChannels(bool value);
    bool get_bAnalogMode();
    void set_bAnalogMode(bool value);
    bool get_bFourPole();
    void set_bFourPole(bool value);
    void* get_Bands();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
