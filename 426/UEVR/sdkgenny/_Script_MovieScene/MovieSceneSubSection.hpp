#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovieSceneSection.hpp"
namespace _Script_MovieScene {
struct MovieSceneSequence;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieSceneSubSection : public MovieSceneSection {
    private: char pad_e8[0x78]; public:
    void* get_Parameters();
    float& get_StartOffset();
    float& get_TimeScale();
    float& get_PrerollTime0();
    _Script_MovieScene::MovieSceneSequence*& get_SubSequence();
    void* get_ActorToRecord();
    void* get_TargetSequenceName();
    void* get_TargetPathToRecordTo();
    static _Script_CoreUObject::Class* static_class();
    void SetSequence(_Script_MovieScene::MovieSceneSequence* Sequence);
    _Script_MovieScene::MovieSceneSequence* GetSequence();
}; // Size: 0x160
#pragma pack(pop)
}
