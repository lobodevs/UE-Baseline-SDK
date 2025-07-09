#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Paper2D {
#pragma pack(push, 1)
struct PaperTileSet : public _Script_CoreUObject::Object {
    private: char pad_28[0x80]; public:
    void* get_TileSize();
    _Script_Engine::Texture2D*& get_TileSheet();
    void* get_AdditionalSourceTextures();
    void* get_BorderMargin();
    void* get_PerTileSpacing();
    void* get_DrawingOffset();
    int32_t& get_WidthInTiles();
    int32_t& get_HeightInTiles();
    int32_t& get_AllocatedWidth();
    int32_t& get_AllocatedHeight();
    void* get_PerTileData();
    void* get_Terrains();
    int32_t& get_TileWidth();
    int32_t& get_TileHeight();
    int32_t& get_Margin();
    int32_t& get_Spacing();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa8
#pragma pack(pop)
}
