#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
namespace _Script_MediaAssets {
struct MediaSource;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MediaCompositing {
#pragma pack(push, 1)
struct MovieSceneMediaPlayerPropertySection : public _Script_MovieScene::MovieSceneSection {
    private: char pad_e8[0x10]; public:
    _Script_MediaAssets::MediaSource*& get_MediaSource();
    bool get_bLoop();
    void set_bLoop(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf8
#pragma pack(pop)
}
