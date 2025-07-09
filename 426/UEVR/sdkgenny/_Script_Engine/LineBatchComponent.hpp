#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PrimitiveComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct LineBatchComponent : public PrimitiveComponent {
    private: char pad_440[0x40]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x480
#pragma pack(pop)
}
