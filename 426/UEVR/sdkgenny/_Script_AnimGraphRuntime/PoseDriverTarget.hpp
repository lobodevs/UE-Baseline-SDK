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
struct PoseDriverTarget {
    private: char pad_0[0xc0]; public:
    void* get_BoneTransforms();
    void* get_TargetRotation();
    float& get_TargetScale();
    void* get_DistanceMethod();
    void* get_FunctionType();
    bool get_bApplyCustomCurve();
    void set_bApplyCustomCurve(bool value);
    void* get_CustomCurve();
    void* get_DrivenName();
    bool get_bIsHidden();
    void set_bIsHidden(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc0
#pragma pack(pop)
}
