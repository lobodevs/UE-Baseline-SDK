#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "TickFunction.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SkeletalMeshComponentClothTickFunction : public TickFunction {
    private: char pad_28[0x8]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
