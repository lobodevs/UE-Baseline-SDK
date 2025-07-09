#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraRandInfo {
    private: char pad_0[0xc]; public:
    int32_t& get_Seed1();
    int32_t& get_Seed2();
    int32_t& get_Seed3();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
