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
struct AnimSharingAdditiveInstance : public _Script_Engine::AnimInstance {
    private: char pad_2c0[0x10]; public:
    void* get_BaseComponent();
    void* get_AdditiveAnimation();
    float& get_Alpha();
    bool get_bStateBool();
    void set_bStateBool(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2d0
#pragma pack(pop)
}
