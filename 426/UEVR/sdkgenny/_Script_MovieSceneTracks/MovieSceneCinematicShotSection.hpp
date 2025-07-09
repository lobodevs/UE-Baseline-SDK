#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneSubSection.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieSceneCinematicShotSection : public _Script_MovieScene::MovieSceneSubSection {
    private: char pad_160[0x28]; public:
    void* get_ShotDisplayName();
    void* get_DisplayName();
    static _Script_CoreUObject::Class* static_class();
    void SetShotDisplayName(void* InShotDisplayName);
    void* GetShotDisplayName();
}; // Size: 0x188
#pragma pack(pop)
}
