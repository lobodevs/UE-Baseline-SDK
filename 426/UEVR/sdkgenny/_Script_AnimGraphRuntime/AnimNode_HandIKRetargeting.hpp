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
struct AnimNode_HandIKRetargeting : public AnimNode_SkeletalControlBase {
    private: char pad_c8[0x58]; public:
    void* get_RightHandFK();
    void* get_LeftHandFK();
    void* get_RightHandIK();
    void* get_LeftHandIK();
    void* get_IKBonesToMove();
    float& get_HandFKWeight();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x120
#pragma pack(pop)
}
