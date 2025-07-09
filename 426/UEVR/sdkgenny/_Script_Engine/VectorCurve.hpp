#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimCurveBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct VectorCurve : public AnimCurveBase {
    private: char pad_18[0x180]; public:
    void* get_FloatCurves();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x198
#pragma pack(pop)
}
