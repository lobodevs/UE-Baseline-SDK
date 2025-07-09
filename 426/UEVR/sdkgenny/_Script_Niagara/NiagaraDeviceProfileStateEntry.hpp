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
struct NiagaraDeviceProfileStateEntry {
    private: char pad_0[0x10]; public:
    void* get_ProfileName();
    void* get_QualityLevelMask();
    void* get_SetQualityLevelMask();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
