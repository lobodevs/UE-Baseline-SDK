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
struct AnimNode_BlendBoneByChannel : public _Script_Engine::AnimNode_Base {
    private: char pad_10[0x58]; public:
    void* get_A();
    void* get_B();
    void* get_BoneDefinitions();
    float& get_Alpha();
    void* get_AlphaScaleBias();
    void* get_TransformsSpace();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x68
#pragma pack(pop)
}
