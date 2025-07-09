#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MaterialCachedParameterEntry {
    private: char pad_0[0x40]; public:
    void* get_NameHashes();
    void* get_ParameterInfos();
    void* get_ExpressionGuids();
    void* get_Overrides();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
