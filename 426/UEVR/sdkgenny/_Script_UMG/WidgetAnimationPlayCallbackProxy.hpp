#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
struct UMGSequencePlayer;
}
namespace _Script_UMG {
struct UserWidget;
}
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct WidgetAnimationPlayCallbackProxy : public _Script_CoreUObject::Object {
    private: char pad_28[0x20]; public:
    void* get_Finished();
    static _Script_CoreUObject::Class* static_class();
    _Script_UMG::WidgetAnimationPlayCallbackProxy* CreatePlayAnimationTimeRangeProxyObject(_Script_UMG::UMGSequencePlayer*& Result, _Script_UMG::UserWidget* Widget, _Script_UMG::WidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, void* PlayMode, float PlaybackSpeed);
    _Script_UMG::WidgetAnimationPlayCallbackProxy* CreatePlayAnimationProxyObject(_Script_UMG::UMGSequencePlayer*& Result, _Script_UMG::UserWidget* Widget, _Script_UMG::WidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, void* PlayMode, float PlaybackSpeed);
}; // Size: 0x48
#pragma pack(pop)
}
