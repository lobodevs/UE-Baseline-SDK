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
struct SourceEffectBitCrusherSettings {
    private: char pad_0[0x30]; public:
    float& get_CrushedSampleRate();
    void* get_SampleRateModulation();
    float& get_CrushedBits();
    void* get_BitModulation();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
