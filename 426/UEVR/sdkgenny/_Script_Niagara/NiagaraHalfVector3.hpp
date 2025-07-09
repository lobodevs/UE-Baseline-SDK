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
struct NiagaraHalfVector3 {
    private: char pad_0[0x6]; public:
    void* get_X();
    void* get_Y();
    void* get_Z();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x6
#pragma pack(pop)
}
