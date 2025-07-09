#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RBFEntry.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct RBFTarget : public RBFEntry {
    private: char pad_10[0x90]; public:
    float& get_ScaleFactor();
    bool get_bApplyCustomCurve();
    void set_bApplyCustomCurve(bool value);
    void* get_CustomCurve();
    void* get_DistanceMethod();
    void* get_FunctionType();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa0
#pragma pack(pop)
}
