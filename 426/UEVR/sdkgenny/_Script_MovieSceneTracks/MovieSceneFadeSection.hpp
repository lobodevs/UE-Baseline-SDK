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
struct MovieSceneFadeSection : public _Script_MovieScene::MovieSceneSection {
    private: char pad_e8[0xb8]; public:
    void* get_FloatCurve();
    void* get_FadeColor();
    bool get_bFadeAudio();
    void set_bFadeAudio(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1a0
#pragma pack(pop)
}
