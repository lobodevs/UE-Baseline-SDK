#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Synthesis {
#pragma pack(push, 1)
struct ModularSynthPresetBank : public _Script_CoreUObject::Object {
    private: char pad_28[0x10]; public:
    void* get_Presets();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
