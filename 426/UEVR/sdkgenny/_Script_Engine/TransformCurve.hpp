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
struct TransformCurve : public AnimCurveBase {
    private: char pad_18[0x4c8]; public:
    void* get_TranslationCurve();
    void* get_RotationCurve();
    void* get_ScaleCurve();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x4e0
#pragma pack(pop)
}
