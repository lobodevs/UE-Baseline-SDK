#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MediaUtils {
#pragma pack(push, 1)
struct MediaPlayerOptions {
    private: char pad_0[0x30]; public:
    void* get_Tracks();
    void* get_SeekTime();
    void* get_PlayOnOpen();
    void* get_Loop();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
