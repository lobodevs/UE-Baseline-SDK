#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Texture.hpp"
namespace _Script_MediaAssets {
struct MediaPlayer;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MediaAssets {
#pragma pack(push, 1)
struct MediaTexture : public _Script_Engine::Texture {
    private: char pad_d8[0xd8]; public:
    void* get_AddressX();
    void* get_AddressY();
    bool get_AutoClear();
    void set_AutoClear(bool value);
    void* get_ClearColor();
    bool get_EnableGenMips();
    void set_EnableGenMips(bool value);
    void* get_NumMips();
    bool get_NewStyleOutput();
    void set_NewStyleOutput(bool value);
    void* get_OutputFormat();
    float& get_CurrentAspectRatio();
    void* get_CurrentOrientation();
    _Script_MediaAssets::MediaPlayer*& get_MediaPlayer();
    static _Script_CoreUObject::Class* static_class();
    void SetMediaPlayer(_Script_MediaAssets::MediaPlayer* NewMediaPlayer);
    int32_t GetWidth();
    _Script_MediaAssets::MediaPlayer* GetMediaPlayer();
    int32_t GetHeight();
    float GetAspectRatio();
}; // Size: 0x1b0
#pragma pack(pop)
}
