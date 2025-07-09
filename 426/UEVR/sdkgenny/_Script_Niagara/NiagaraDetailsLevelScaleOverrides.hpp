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
struct NiagaraDetailsLevelScaleOverrides {
    private: char pad_0[0x14]; public:
    float& get_Low();
    float& get_Medium();
    float& get_High();
    float& get_Epic();
    float& get_Cine();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x14
#pragma pack(pop)
}
