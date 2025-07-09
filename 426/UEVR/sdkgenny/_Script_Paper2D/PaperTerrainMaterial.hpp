#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DataAsset.hpp"
namespace _Script_Paper2D {
struct PaperSprite;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Paper2D {
#pragma pack(push, 1)
struct PaperTerrainMaterial : public _Script_Engine::DataAsset {
    private: char pad_30[0x18]; public:
    void* get_Rules();
    _Script_Paper2D::PaperSprite*& get_InteriorFill();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
