#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_SlateCore\SlateBrush.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Paper2D {
struct PaperSprite;
}
namespace _Script_Paper2D {
#pragma pack(push, 1)
struct PaperSpriteBlueprintLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    _Script_SlateCore::SlateBrush MakeBrushFromSprite(_Script_Paper2D::PaperSprite* Sprite, int32_t Width, int32_t Height);
}; // Size: 0x28
#pragma pack(pop)
}
