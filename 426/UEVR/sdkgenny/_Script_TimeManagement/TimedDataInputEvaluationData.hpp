#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_TimeManagement {
#pragma pack(push, 1)
struct TimedDataInputEvaluationData {
    private: char pad_0[0x8]; public:
    float& get_DistanceToNewestSampleSeconds();
    float& get_DistanceToOldestSampleSeconds();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x8
#pragma pack(pop)
}
