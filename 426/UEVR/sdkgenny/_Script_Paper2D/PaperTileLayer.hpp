#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Paper2D {
struct PaperTileSet;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Paper2D {
#pragma pack(push, 1)
struct PaperTileLayer : public _Script_CoreUObject::Object {
    private: char pad_28[0x70]; public:
    void* get_LayerName();
    int32_t& get_LayerWidth();
    int32_t& get_LayerHeight();
    bool get_bHiddenInGame();
    void set_bHiddenInGame(bool value);
    bool get_bLayerCollides();
    void set_bLayerCollides(bool value);
    bool get_bOverrideCollisionThickness();
    void set_bOverrideCollisionThickness(bool value);
    bool get_bOverrideCollisionOffset();
    void set_bOverrideCollisionOffset(bool value);
    float& get_CollisionThicknessOverride();
    float& get_CollisionOffsetOverride();
    void* get_LayerColor();
    int32_t& get_AllocatedWidth();
    int32_t& get_AllocatedHeight();
    void* get_AllocatedCells();
    _Script_Paper2D::PaperTileSet*& get_TileSet();
    void* get_AllocatedGrid();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x98
#pragma pack(pop)
}
