#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ReflectionCapture.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct BoxReflectionCapture : public ReflectionCapture {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x228
#pragma pack(pop)
}
