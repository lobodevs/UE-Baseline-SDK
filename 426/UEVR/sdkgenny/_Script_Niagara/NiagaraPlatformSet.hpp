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
struct NiagaraPlatformSet {
    private: char pad_0[0x30]; public:
    int32_t& get_QualityLevelMask();
    void* get_DeviceProfileStates();
    void* get_CVarConditions();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
