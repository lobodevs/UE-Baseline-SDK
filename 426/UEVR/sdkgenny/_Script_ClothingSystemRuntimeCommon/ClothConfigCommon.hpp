#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_ClothingSystemRuntimeInterface\ClothConfigBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ClothingSystemRuntimeCommon {
#pragma pack(push, 1)
struct ClothConfigCommon : public _Script_ClothingSystemRuntimeInterface::ClothConfigBase {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
