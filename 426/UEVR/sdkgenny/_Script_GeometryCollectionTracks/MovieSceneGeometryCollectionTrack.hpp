#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneNameableTrack.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GeometryCollectionTracks {
#pragma pack(push, 1)
struct MovieSceneGeometryCollectionTrack : public _Script_MovieScene::MovieSceneNameableTrack {
    private: char pad_78[0x18]; public:
    void* get_AnimationSections();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
