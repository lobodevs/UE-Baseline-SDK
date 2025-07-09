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
struct SourceEffectRingModulationSettings {
    private: char pad_0[0x20]; public:
    void* get_ModulatorType();
    float& get_Frequency();
    float& get_Depth();
    float& get_DryLevel();
    float& get_WetLevel();
    _Script_Engine::AudioBus*& get_AudioBusModulator();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
