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
struct MovieSceneLevelVisibilitySection : public _Script_MovieScene::MovieSceneSection {
    private: char pad_e8[0x20]; public:
    void* get_Visibility();
    void* get_LevelNames();
    static _Script_CoreUObject::Class* static_class();
    void SetVisibility(void* InVisibility);
    void SetLevelNames(void*& InLevelNames);
    void* GetVisibility();
    void* GetLevelNames();
}; // Size: 0x108
#pragma pack(pop)
}
