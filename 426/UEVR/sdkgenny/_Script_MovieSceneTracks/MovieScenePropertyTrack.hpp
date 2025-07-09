#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneNameableTrack.hpp"
namespace _Script_MovieScene {
struct MovieSceneSection;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieScenePropertyTrack : public _Script_MovieScene::MovieSceneNameableTrack {
    private: char pad_78[0x30]; public:
    _Script_MovieScene::MovieSceneSection*& get_SectionToKey();
    void* get_PropertyBinding();
    void* get_Sections();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa8
#pragma pack(pop)
}
