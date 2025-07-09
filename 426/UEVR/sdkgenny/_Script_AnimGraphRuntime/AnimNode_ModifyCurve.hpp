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
struct AnimNode_ModifyCurve : public _Script_Engine::AnimNode_Base {
    private: char pad_10[0x48]; public:
    void* get_SourcePose();
    void* get_CurveValues();
    void* get_CurveNames();
    float& get_Alpha();
    void* get_ApplyMode();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
