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
struct AnimNode_Fabrik : public AnimNode_SkeletalControlBase {
    private: char pad_c8[0xc8]; public:
    void* get_EffectorTransform();
    void* get_EffectorTarget();
    void* get_TipBone();
    void* get_RootBone();
    float& get_Precision();
    int32_t& get_MaxIterations();
    void* get_EffectorTransformSpace();
    void* get_EffectorRotationSource();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x190
#pragma pack(pop)
}
