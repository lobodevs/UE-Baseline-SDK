#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieSceneSequencePlaybackParams {
    private: char pad_0[0x28]; public:
    void* get_Frame();
    float& get_Time();
    void* get_MarkedFrame();
    void* get_PositionType();
    void* get_UpdateMethod();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
