#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct AnimSequenceBase;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieSceneSkeletalAnimationParams {
    private: char pad_0[0xd8]; public:
    _Script_Engine::AnimSequenceBase*& get_Animation();
    void* get_FirstLoopStartFrameOffset();
    void* get_StartFrameOffset();
    void* get_EndFrameOffset();
    float& get_PlayRate();
    bool get_bReverse();
    void set_bReverse(bool value);
    void* get_SlotName();
    void* get_Weight();
    bool get_bSkipAnimNotifiers();
    void set_bSkipAnimNotifiers(bool value);
    bool get_bForceCustomMode();
    void set_bForceCustomMode(bool value);
    float& get_StartOffset();
    float& get_EndOffset();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd8
#pragma pack(pop)
}
