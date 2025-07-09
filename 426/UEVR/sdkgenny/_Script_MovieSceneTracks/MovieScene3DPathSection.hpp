#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovieScene3DConstraintSection.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieScene3DPathSection : public MovieScene3DConstraintSection {
    private: char pad_110[0xa8]; public:
    void* get_TimingCurve();
    void* get_FrontAxisEnum();
    void* get_UpAxisEnum();
    bool get_bFollow();
    void set_bFollow(bool value);
    bool get_bReverse();
    void set_bReverse(bool value);
    bool get_bForceUpright();
    void set_bForceUpright(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1b8
#pragma pack(pop)
}
