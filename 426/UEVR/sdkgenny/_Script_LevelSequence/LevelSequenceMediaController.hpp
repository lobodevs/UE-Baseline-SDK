#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_LevelSequence {
struct LevelSequenceActor;
}
namespace _Script_MediaAssets {
struct MediaComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LevelSequence {
#pragma pack(push, 1)
struct LevelSequenceMediaController : public _Script_Engine::Actor {
    private: char pad_220[0x28]; public:
    _Script_LevelSequence::LevelSequenceActor*& get_Sequence();
    _Script_MediaAssets::MediaComponent*& get_MediaComponent();
    float& get_ServerStartTimeSeconds();
    static _Script_CoreUObject::Class* static_class();
    void SynchronizeToServer(float DesyncThresholdSeconds);
    void Play();
    void OnRep_ServerStartTimeSeconds();
    _Script_LevelSequence::LevelSequenceActor* GetSequence();
    _Script_MediaAssets::MediaComponent* GetMediaComponent();
}; // Size: 0x248
#pragma pack(pop)
}
