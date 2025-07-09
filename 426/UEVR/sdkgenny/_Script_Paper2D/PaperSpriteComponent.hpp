#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_Engine\MeshComponent.hpp"
namespace _Script_Paper2D {
struct PaperSprite;
}
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Paper2D {
#pragma pack(push, 1)
struct PaperSpriteComponent : public _Script_Engine::MeshComponent {
    private: char pad_470[0x20]; public:
    _Script_Paper2D::PaperSprite*& get_SourceSprite();
    _Script_Engine::MaterialInterface*& get_MaterialOverride();
    void* get_SpriteColor();
    static _Script_CoreUObject::Class* static_class();
    void SetSpriteColor(_Script_CoreUObject::LinearColor NewColor);
    bool SetSprite(_Script_Paper2D::PaperSprite* NewSprite);
    _Script_Paper2D::PaperSprite* GetSprite();
}; // Size: 0x490
#pragma pack(pop)
}
