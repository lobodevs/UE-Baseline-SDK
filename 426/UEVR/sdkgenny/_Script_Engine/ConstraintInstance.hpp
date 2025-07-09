#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ConstraintInstanceBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ConstraintInstance : public ConstraintInstanceBase {
    private: char pad_18[0x1a8]; public:
    void* get_JointName();
    void* get_ConstraintBone1();
    void* get_ConstraintBone2();
    void* get_Pos1();
    void* get_PriAxis1();
    void* get_SecAxis1();
    void* get_Pos2();
    void* get_PriAxis2();
    void* get_SecAxis2();
    void* get_AngularRotationOffset();
    bool get_bScaleLinearLimits();
    void set_bScaleLinearLimits(bool value);
    void* get_ProfileInstance();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1c0
#pragma pack(pop)
}
