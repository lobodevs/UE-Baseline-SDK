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
struct NiagaraPlatformSetConflictInfo {
    private: char pad_0[0x18]; public:
    int32_t& get_SetAIndex();
    int32_t& get_SetBIndex();
    void* get_Conflicts();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
