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
struct RotationRetargetingInfo {
    private: char pad_0[0x130]; public:
    bool get_bEnabled();
    void set_bEnabled(bool value);
    void* get_Source();
    void* get_Target();
    void* get_RotationComponent();
    void* get_TwistAxis();
    bool get_bUseAbsoluteAngle();
    void set_bUseAbsoluteAngle(bool value);
    float& get_SourceMinimum();
    float& get_SourceMaximum();
    float& get_TargetMinimum();
    float& get_TargetMaximum();
    void* get_EasingType();
    void* get_CustomCurve();
    bool get_bFlipEasing();
    void set_bFlipEasing(bool value);
    float& get_EasingWeight();
    bool get_bClamp();
    void set_bClamp(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x130
#pragma pack(pop)
}
