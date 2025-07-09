#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct AnimPhysConstraintSetup {
    private: char pad_0[0x48]; public:
    void* get_LinearXLimitType();
    void* get_LinearYLimitType();
    void* get_LinearZLimitType();
    void* get_LinearAxesMin();
    void* get_LinearAxesMax();
    void* get_AngularConstraintType();
    void* get_TwistAxis();
    void* get_AngularTargetAxis();
    float& get_ConeAngle();
    void* get_AngularLimitsMin();
    void* get_AngularLimitsMax();
    void* get_AngularTarget();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
