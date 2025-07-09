#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_AudioExtensions {
struct SoundModulatorBase;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SoundModulationDestinationSettings {
    private: char pad_0[0x10]; public:
    float& get_Value();
    _Script_AudioExtensions::SoundModulatorBase*& get_Modulator();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
