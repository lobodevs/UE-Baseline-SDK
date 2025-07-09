#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "FoliageType.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Foliage {
#pragma pack(push, 1)
struct FoliageType_Actor : public FoliageType {
    private: char pad_3a8[0x10]; public:
    void* get_ActorClass();
    bool get_bShouldAttachToBaseComponent();
    void set_bShouldAttachToBaseComponent(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3b8
#pragma pack(pop)
}
