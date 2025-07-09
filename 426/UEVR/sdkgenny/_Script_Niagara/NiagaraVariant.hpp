#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Niagara {
struct NiagaraDataInterface;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraVariant {
    private: char pad_0[0x28]; public:
    _Script_CoreUObject::Object*& get_Object();
    _Script_Niagara::NiagaraDataInterface*& get_DataInterface();
    void* get_Bytes();
    void* get_CurrentMode();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
