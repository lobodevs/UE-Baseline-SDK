#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieScenePropertySectionTemplate.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieSceneColorSectionTemplate : public _Script_MovieScene::MovieScenePropertySectionTemplate {
    private: char pad_38[0x288]; public:
    void* get_Curves();
    void* get_BlendType();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2c0
#pragma pack(pop)
}
