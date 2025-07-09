#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Volume.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_NavigationSystem {
#pragma pack(push, 1)
struct NavModifierVolume : public _Script_Engine::Volume {
    private: char pad_258[0x18]; public:
    void* get_AreaClass();
    bool get_bMaskFillCollisionUnderneathForNavmesh();
    void set_bMaskFillCollisionUnderneathForNavmesh(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SetAreaClass(void* NewAreaClass);
}; // Size: 0x270
#pragma pack(pop)
}
