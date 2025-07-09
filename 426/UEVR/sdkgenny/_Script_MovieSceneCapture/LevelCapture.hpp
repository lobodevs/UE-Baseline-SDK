#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovieSceneCapture.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneCapture {
#pragma pack(push, 1)
struct LevelCapture : public MovieSceneCapture {
    private: char pad_220[0x20]; public:
    bool get_bAutoStartCapture();
    void set_bAutoStartCapture(bool value);
    void* get_PrerequisiteActorId();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x240
#pragma pack(pop)
}
