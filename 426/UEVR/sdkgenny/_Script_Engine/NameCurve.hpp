#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "IndexedCurve.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct NameCurve : public IndexedCurve {
    private: char pad_68[0x10]; public:
    void* get_Keys();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x78
#pragma pack(pop)
}
