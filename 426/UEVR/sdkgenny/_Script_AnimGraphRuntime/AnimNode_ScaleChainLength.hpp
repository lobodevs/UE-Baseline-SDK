#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNode_Base.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct AnimNode_ScaleChainLength : public _Script_Engine::AnimNode_Base {
    private: char pad_10[0x68]; public:
    void* get_InputPose();
    float& get_DefaultChainLength();
    void* get_ChainStartBone();
    void* get_ChainEndBone();
    void* get_TargetLocation();
    float& get_Alpha();
    void* get_AlphaScaleBias();
    void* get_ChainInitialLength();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x78
#pragma pack(pop)
}
