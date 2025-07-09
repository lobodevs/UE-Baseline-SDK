#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovieSceneChannel.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieSceneObjectPathChannel : public MovieSceneChannel {
    private: char pad_8[0xb8]; public:
    void* get_PropertyClass();
    void* get_Times();
    void* get_Values();
    void* get_DefaultValue();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc0
#pragma pack(pop)
}
