#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimNode_SkeletalControlBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct AnimNode_LookAt : public AnimNode_SkeletalControlBase {
    private: char pad_c8[0xe8]; public:
    void* get_BoneToModify();
    void* get_LookAtTarget();
    void* get_LookAtLocation();
    void* get_LookAt_Axis();
    bool get_bUseLookUpAxis();
    void set_bUseLookUpAxis(bool value);
    void* get_InterpolationType();
    void* get_LookUp_Axis();
    float& get_LookAtClamp();
    float& get_InterpolationTime();
    float& get_InterpolationTriggerThreashold();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1b0
#pragma pack(pop)
}
