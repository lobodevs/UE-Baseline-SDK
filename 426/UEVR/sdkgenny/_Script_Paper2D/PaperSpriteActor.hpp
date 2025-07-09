#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Paper2D {
struct PaperSpriteComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Paper2D {
#pragma pack(push, 1)
struct PaperSpriteActor : public _Script_Engine::Actor {
    private: char pad_220[0x8]; public:
    _Script_Paper2D::PaperSpriteComponent*& get_RenderComponent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x228
#pragma pack(pop)
}
