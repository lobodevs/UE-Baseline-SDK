#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct AnimationEventBinding {
    private: char pad_0[0x28]; public:
    _Script_UMG::WidgetAnimation*& get_Animation();
    void* get_Delegate();
    void* get_AnimationEvent();
    void* get_UserTag();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
