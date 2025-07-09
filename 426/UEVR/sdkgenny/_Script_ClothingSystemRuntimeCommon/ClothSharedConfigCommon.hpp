#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ClothConfigCommon.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ClothingSystemRuntimeCommon {
#pragma pack(push, 1)
struct ClothSharedConfigCommon : public ClothConfigCommon {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
