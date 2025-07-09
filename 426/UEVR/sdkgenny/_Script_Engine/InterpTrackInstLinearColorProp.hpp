#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "InterpTrackInstProperty.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct InterpTrackInstLinearColorProp : public InterpTrackInstProperty {
    private: char pad_50[0x18]; public:
    void* get_ResetColor();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x68
#pragma pack(pop)
}
