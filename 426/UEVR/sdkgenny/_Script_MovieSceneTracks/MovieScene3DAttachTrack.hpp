#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovieScene3DConstraintTrack.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieScene3DAttachTrack : public MovieScene3DConstraintTrack {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x88
#pragma pack(pop)
}
