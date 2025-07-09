#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Field.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
#pragma pack(push, 1)
struct Struct : public Field {
    private: char pad_30[0x80]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb0
#pragma pack(pop)
}
