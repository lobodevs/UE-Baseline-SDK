#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovieSceneSignedObject.hpp"
namespace _Script_MovieScene {
struct MovieSceneTrack;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieScene : public MovieSceneSignedObject {
    private: char pad_50[0xf8]; public:
    void* get_Spawnables();
    void* get_Possessables();
    void* get_ObjectBindings();
    void* get_BindingGroups();
    void* get_MasterTracks();
    _Script_MovieScene::MovieSceneTrack*& get_CameraCutTrack();
    void* get_SelectionRange();
    void* get_PlaybackRange();
    void* get_TickResolution();
    void* get_DisplayRate();
    void* get_EvaluationType();
    void* get_ClockSource();
    void* get_CustomClockSourcePath();
    void* get_MarkedFrames();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x148
#pragma pack(pop)
}
