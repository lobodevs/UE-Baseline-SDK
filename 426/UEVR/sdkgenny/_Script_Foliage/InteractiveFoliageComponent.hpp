#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\StaticMeshComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Foliage {
#pragma pack(push, 1)
struct InteractiveFoliageComponent : public _Script_Engine::StaticMeshComponent {
    private: char pad_4d0[0x10]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x4e0
#pragma pack(pop)
}
