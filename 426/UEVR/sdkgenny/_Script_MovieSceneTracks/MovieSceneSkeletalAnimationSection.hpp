#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
namespace _Script_Engine {
struct AnimSequence;
}
namespace _Script_Engine {
struct AnimSequenceBase;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieSceneSkeletalAnimationSection : public _Script_MovieScene::MovieSceneSection {
    private: char pad_e8[0x188]; public:
    void* get_Params();
    _Script_Engine::AnimSequence*& get_AnimSequence();
    _Script_Engine::AnimSequenceBase*& get_Animation();
    float& get_StartOffset();
    float& get_EndOffset();
    float& get_PlayRate();
    bool get_bReverse();
    void set_bReverse(bool value);
    void* get_SlotName();
    void* get_StartLocationOffset();
    void* get_StartRotationOffset();
    bool get_bMatchWithPrevious();
    void set_bMatchWithPrevious(bool value);
    void* get_MatchedBoneName();
    void* get_MatchedLocationOffset();
    void* get_MatchedRotationOffset();
    bool get_bMatchTranslation();
    void set_bMatchTranslation(bool value);
    bool get_bMatchIncludeZHeight();
    void set_bMatchIncludeZHeight(bool value);
    bool get_bMatchRotationYaw();
    void set_bMatchRotationYaw(bool value);
    bool get_bMatchRotationPitch();
    void set_bMatchRotationPitch(bool value);
    bool get_bMatchRotationRoll();
    void set_bMatchRotationRoll(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x270
#pragma pack(pop)
}
