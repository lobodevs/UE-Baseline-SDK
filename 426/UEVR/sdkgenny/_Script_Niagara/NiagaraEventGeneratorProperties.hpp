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
struct NiagaraEventGeneratorProperties {
    private: char pad_0[0x50]; public:
    int32_t& get_MaxEventsPerFrame();
    void* get_ID();
    void* get_DataSetCompiledData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
