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
struct AnimNode_Constraint : public AnimNode_SkeletalControlBase {
    private: char pad_c8[0x40]; public:
    void* get_BoneToModify();
    void* get_ConstraintSetup();
    void* get_ConstraintWeights();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x108
#pragma pack(pop)
}
