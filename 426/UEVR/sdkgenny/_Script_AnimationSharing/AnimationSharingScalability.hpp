#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimationSharing {
#pragma pack(push, 1)
struct AnimationSharingScalability {
    private: char pad_0[0x10]; public:
    void* get_UseBlendTransitions();
    void* get_BlendSignificanceValue();
    void* get_MaximumNumberConcurrentBlends();
    void* get_TickSignificanceValue();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
