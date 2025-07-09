#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "WorldSubsystem.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ViewportStatsSubsystem : public WorldSubsystem {
    private: char pad_30[0x20]; public:
    static _Script_CoreUObject::Class* static_class();
    void RemoveDisplayDelegate(int32_t IndexToRemove);
    void AddTimedDisplay(void* Text, _Script_CoreUObject::LinearColor Color, float Duration);
    int32_t AddDisplayDelegate(void*& Delegate);
}; // Size: 0x50
#pragma pack(pop)
}
