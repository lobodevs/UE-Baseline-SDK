#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Paper2D {
struct PaperTileMapComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Paper2D {
#pragma pack(push, 1)
struct PaperTileMapActor : public _Script_Engine::Actor {
    private: char pad_220[0x8]; public:
    _Script_Paper2D::PaperTileMapComponent*& get_RenderComponent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x228
#pragma pack(pop)
}
