#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SoundModulationDefaultSettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SoundModulationDefaultRoutingSettings : public SoundModulationDefaultSettings {
    private: char pad_40[0x8]; public:
    void* get_VolumeRouting();
    void* get_PitchRouting();
    void* get_HighpassRouting();
    void* get_LowpassRouting();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
