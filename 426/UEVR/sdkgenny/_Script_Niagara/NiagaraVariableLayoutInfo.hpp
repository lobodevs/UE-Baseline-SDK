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
struct NiagaraVariableLayoutInfo {
    private: char pad_0[0x70]; public:
    void* get_FloatComponentStart();
    void* get_Int32ComponentStart();
    void* get_HalfComponentStart();
    void* get_LayoutInfo();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
