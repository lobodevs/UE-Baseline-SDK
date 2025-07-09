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
struct SourceEffectFilterSettings {
    private: char pad_0[0x20]; public:
    void* get_FilterCircuit();
    void* get_FilterType();
    float& get_CutoffFrequency();
    float& get_FilterQ();
    void* get_AudioBusModulation();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
