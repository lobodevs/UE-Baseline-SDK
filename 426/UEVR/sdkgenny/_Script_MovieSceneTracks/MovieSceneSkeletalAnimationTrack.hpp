#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneNameableTrack.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieSceneSkeletalAnimationTrack : public _Script_MovieScene::MovieSceneNameableTrack {
    private: char pad_78[0x58]; public:
    void* get_AnimationSections();
    bool get_bUseLegacySectionIndexBlend();
    void set_bUseLegacySectionIndexBlend(bool value);
    void* get_RootMotionParams();
    bool get_bBlendFirstChildOfRoot();
    void set_bBlendFirstChildOfRoot(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd0
#pragma pack(pop)
}
