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
struct MovieScenePrimitiveMaterialSection : public _Script_MovieScene::MovieSceneSection {
    private: char pad_e8[0xc0]; public:
    void* get_MaterialChannel();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1a8
#pragma pack(pop)
}
