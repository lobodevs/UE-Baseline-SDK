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
struct AnimNode_SteamVRInputAnimPose : public _Script_Engine::AnimNode_Base {
    private: char pad_10[0x610]; public:
    void* get_MotionRange();
    void* get_hand();
    void* get_HandSkeleton();
    bool get_Mirror();
    void set_Mirror(bool value);
    void* get_SteamVRSkeletalTransform();
    void* get_UE4RetargettingRefs();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x620
#pragma pack(pop)
}
