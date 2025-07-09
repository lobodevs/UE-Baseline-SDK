#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimInstance.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimationSharing {
#pragma pack(push, 1)
struct AnimSharingTransitionInstance : public _Script_Engine::AnimInstance {
    private: char pad_2c0[0x10]; public:
    void* get_FromComponent();
    void* get_ToComponent();
    float& get_BlendTime();
    bool get_bBlendBool();
    void set_bBlendBool(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2d0
#pragma pack(pop)
}
