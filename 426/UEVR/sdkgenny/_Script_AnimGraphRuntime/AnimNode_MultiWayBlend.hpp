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
struct AnimNode_MultiWayBlend : public _Script_Engine::AnimNode_Base {
    private: char pad_10[0x40]; public:
    void* get_Poses();
    void* get_DesiredAlphas();
    void* get_AlphaScaleBias();
    bool get_bAdditiveNode();
    void set_bAdditiveNode(bool value);
    bool get_bNormalizeAlpha();
    void set_bNormalizeAlpha(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
