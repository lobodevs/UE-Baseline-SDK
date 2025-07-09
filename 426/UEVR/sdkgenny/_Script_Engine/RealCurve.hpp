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
struct RealCurve : public IndexedCurve {
    private: char pad_68[0x8]; public:
    float& get_DefaultValue();
    void* get_PreInfinityExtrap();
    void* get_PostInfinityExtrap();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
