#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Volume.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct CameraBlockingVolume : public Volume {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x258
#pragma pack(pop)
}
