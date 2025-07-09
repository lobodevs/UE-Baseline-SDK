#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "StaticParameterBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct StaticMaterialLayersParameter : public StaticParameterBase {
    private: char pad_24[0x44]; public:
    void* get_Value();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x68
#pragma pack(pop)
}
