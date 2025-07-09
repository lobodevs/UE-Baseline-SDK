#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNode_Base.hpp"
namespace _Script_Engine {
struct CurveFloat;
}
namespace _Script_Engine {
struct BlendProfile;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct AnimNode_BlendListBase : public _Script_Engine::AnimNode_Base {
    private: char pad_10[0x88]; public:
    void* get_BlendPose();
    void* get_BlendTime();
    void* get_TransitionType();
    void* get_BlendType();
    bool get_bResetChildOnActivation();
    void set_bResetChildOnActivation(bool value);
    _Script_Engine::CurveFloat*& get_CustomBlendCurve();
    _Script_Engine::BlendProfile*& get_BlendProfile();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x98
#pragma pack(pop)
}
