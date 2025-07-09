#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovieSceneNameableTrack.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieSceneSubTrack : public MovieSceneNameableTrack {
    private: char pad_78[0x10]; public:
    void* get_Sections();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x88
#pragma pack(pop)
}
