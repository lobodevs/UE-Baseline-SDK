#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNode_Base.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamVRInputDevice {
#pragma pack(push, 1)
struct AnimNode_SteamVRSetWristTransform : public _Script_Engine::AnimNode_Base {
    private: char pad_10[0x30]; public:
    void* get_ReferencePose();
    void* get_HandSkeleton();
    void* get_TargetPose();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
