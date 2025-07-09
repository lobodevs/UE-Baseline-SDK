#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Class.hpp"
namespace _Script_CoreUObject {
#pragma pack(push, 1)
struct DynamicClass : public Class {
    private: char pad_230[0x80]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2b0
#pragma pack(pop)
}
