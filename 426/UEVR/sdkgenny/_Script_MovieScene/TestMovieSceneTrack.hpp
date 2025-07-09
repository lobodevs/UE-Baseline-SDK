#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovieSceneTrack.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct TestMovieSceneTrack : public MovieSceneTrack {
    private: char pad_78[0x20]; public:
    bool get_bHighPassFilter();
    void set_bHighPassFilter(bool value);
    void* get_SectionArray();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x98
#pragma pack(pop)
}
