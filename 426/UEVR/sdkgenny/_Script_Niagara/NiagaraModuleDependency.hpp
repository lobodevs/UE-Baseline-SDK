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
struct NiagaraModuleDependency {
    private: char pad_0[0x28]; public:
    void* get_ID();
    void* get_Type();
    void* get_ScriptConstraint();
    void* get_Description();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
