#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovieSceneSection.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieSceneBoolSection : public MovieSceneSection {
    private: char pad_e8[0x98]; public:
    bool get_DefaultValue();
    void set_DefaultValue(bool value);
    void* get_BoolCurve();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x180
#pragma pack(pop)
}
