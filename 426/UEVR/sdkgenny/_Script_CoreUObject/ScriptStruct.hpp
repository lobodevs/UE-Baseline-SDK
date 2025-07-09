#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Struct.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
#pragma pack(push, 1)
struct ScriptStruct : public Struct {
    private: char pad_b0[0x10]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc0
#pragma pack(pop)
}
