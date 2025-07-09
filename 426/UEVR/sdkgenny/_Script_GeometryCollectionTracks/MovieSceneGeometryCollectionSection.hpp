#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GeometryCollectionTracks {
#pragma pack(push, 1)
struct MovieSceneGeometryCollectionSection : public _Script_MovieScene::MovieSceneSection {
    private: char pad_e8[0x30]; public:
    void* get_Params();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x118
#pragma pack(pop)
}
