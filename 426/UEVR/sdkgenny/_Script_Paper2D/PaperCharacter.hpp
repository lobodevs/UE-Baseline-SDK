#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Character.hpp"
namespace _Script_Paper2D {
struct PaperFlipbookComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Paper2D {
#pragma pack(push, 1)
struct PaperCharacter : public _Script_Engine::Character {
    _Script_Paper2D::PaperFlipbookComponent*& get_Sprite();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x4c0
#pragma pack(pop)
}
