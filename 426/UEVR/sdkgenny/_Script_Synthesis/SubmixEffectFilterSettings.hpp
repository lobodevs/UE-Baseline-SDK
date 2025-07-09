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
struct SubmixEffectFilterSettings {
    private: char pad_0[0xc]; public:
    void* get_FilterType();
    void* get_FilterAlgorithm();
    float& get_FilterFrequency();
    float& get_FilterQ();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
