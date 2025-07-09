#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_Engine {
struct BodySetup;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Paper2D {
#pragma pack(push, 1)
struct PaperTileMap : public _Script_CoreUObject::Object {
    private: char pad_28[0x80]; public:
    int32_t& get_MapWidth();
    int32_t& get_MapHeight();
    int32_t& get_TileWidth();
    int32_t& get_TileHeight();
    float& get_PixelsPerUnrealUnit();
    float& get_SeparationPerTileX();
    float& get_SeparationPerTileY();
    float& get_SeparationPerLayer();
    void* get_SelectedTileSet();
    _Script_Engine::MaterialInterface*& get_Material();
    void* get_TileLayers();
    float& get_CollisionThickness();
    void* get_SpriteCollisionDomain();
    void* get_ProjectionMode();
    int32_t& get_HexSideLength();
    _Script_Engine::BodySetup*& get_BodySetup();
    int32_t& get_LayerNameIndex();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa8
#pragma pack(pop)
}
