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
struct NiagaraTypeLayoutInfo {
    private: char pad_0[0x60]; public:
    void* get_FloatComponentByteOffsets();
    void* get_FloatComponentRegisterOffsets();
    void* get_Int32ComponentByteOffsets();
    void* get_Int32ComponentRegisterOffsets();
    void* get_HalfComponentByteOffsets();
    void* get_HalfComponentRegisterOffsets();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
