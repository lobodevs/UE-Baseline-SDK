#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraParameterStore {
    private: char pad_0[0x78]; public:
    _Script_CoreUObject::Object*& get_Owner();
    void* get_SortedParameterOffsets();
    void* get_ParameterData();
    void* get_DataInterfaces();
    void* get_UObjects();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x78
#pragma pack(pop)
}
