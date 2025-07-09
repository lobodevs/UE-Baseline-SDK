#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\ScriptStruct.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct UserDefinedStruct : public _Script_CoreUObject::ScriptStruct {
    private: char pad_c0[0x48]; public:
    void* get_Status();
    void* get_Guid();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x108
#pragma pack(pop)
}
