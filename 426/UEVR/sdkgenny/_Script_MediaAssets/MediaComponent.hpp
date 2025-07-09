#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_MediaAssets {
struct MediaTexture;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MediaAssets {
struct MediaPlayer;
}
namespace _Script_MediaAssets {
#pragma pack(push, 1)
struct MediaComponent : public _Script_Engine::ActorComponent {
    private: char pad_b0[0x10]; public:
    _Script_MediaAssets::MediaTexture*& get_MediaTexture();
    _Script_MediaAssets::MediaPlayer*& get_MediaPlayer();
    static _Script_CoreUObject::Class* static_class();
    _Script_MediaAssets::MediaTexture* GetMediaTexture();
    _Script_MediaAssets::MediaPlayer* GetMediaPlayer();
}; // Size: 0xc0
#pragma pack(pop)
}
