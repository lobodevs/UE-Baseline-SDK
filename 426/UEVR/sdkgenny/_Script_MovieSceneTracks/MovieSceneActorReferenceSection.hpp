#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieSceneActorReferenceSection : public _Script_MovieScene::MovieSceneSection {
    private: char pad_e8[0x140]; public:
    void* get_ActorReferenceData();
    void* get_ActorGuidIndexCurve();
    void* get_ActorGuidStrings();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x228
#pragma pack(pop)
}
