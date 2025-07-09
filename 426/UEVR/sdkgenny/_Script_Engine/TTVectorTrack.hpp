#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "TTPropertyTrack.hpp"
namespace _Script_Engine {
struct CurveVector;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct TTVectorTrack : public TTPropertyTrack {
    private: char pad_20[0x8]; public:
    _Script_Engine::CurveVector*& get_CurveVector();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
