#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SplineComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Paper2D {
#pragma pack(push, 1)
struct PaperTerrainSplineComponent : public _Script_Engine::SplineComponent {
    private: char pad_540[0x10]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x550
#pragma pack(pop)
}
