#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "FixedFrameRateCustomTimeStep.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_TimeManagement {
#pragma pack(push, 1)
struct GenlockedCustomTimeStep : public FixedFrameRateCustomTimeStep {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
