#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\MeshComponent.hpp"
#include "PaperTileInfo.hpp"
namespace _Script_Paper2D {
struct PaperTileSet;
}
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_Paper2D {
struct PaperTileMap;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Paper2D {
struct PaperTileLayer;
}
namespace _Script_Paper2D {
#pragma pack(push, 1)
struct PaperTileMapComponent : public _Script_Engine::MeshComponent {
    private: char pad_470[0x50]; public:
    int32_t& get_MapWidth();
    int32_t& get_MapHeight();
    int32_t& get_TileWidth();
    int32_t& get_TileHeight();
    _Script_Paper2D::PaperTileSet*& get_DefaultLayerTileSet();
    _Script_Engine::MaterialInterface*& get_Material();
    void* get_TileLayers();
    void* get_TileMapColor();
    int32_t& get_UseSingleLayerIndex();
    bool get_bUseSingleLayer();
    void set_bUseSingleLayer(bool value);
    _Script_Paper2D::PaperTileMap*& get_TileMap();
    static _Script_CoreUObject::Class* static_class();
    void SetTileMapColor(_Script_CoreUObject::LinearColor NewColor);
    bool SetTileMap(_Script_Paper2D::PaperTileMap* NewTileMap);
    void SetTile(int32_t X, int32_t Y, int32_t Layer, _Script_Paper2D::PaperTileInfo NewValue);
    void SetLayerColor(_Script_CoreUObject::LinearColor NewColor, int32_t Layer);
    void SetLayerCollision(int32_t Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision);
    void SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision);
    void ResizeMap(int32_t NewWidthInTiles, int32_t NewHeightInTiles);
    void RebuildCollision();
    bool OwnsTileMap();
    void MakeTileMapEditable();
    void GetTilePolygon(int32_t TileX, int32_t TileY, void*& Points, int32_t LayerIndex, bool bWorldSpace);
    _Script_CoreUObject::LinearColor GetTileMapColor();
    _Script_CoreUObject::Vector GetTileCornerPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace);
    _Script_CoreUObject::Vector GetTileCenterPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace);
    _Script_Paper2D::PaperTileInfo GetTile(int32_t X, int32_t Y, int32_t Layer);
    void GetMapSize(int32_t& MapWidth, int32_t& MapHeight, int32_t& NumLayers);
    _Script_CoreUObject::LinearColor GetLayerColor(int32_t Layer);
    void CreateNewTileMap(int32_t MapWidth, int32_t MapHeight, int32_t TileWidth, int32_t TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer);
    _Script_Paper2D::PaperTileLayer* AddNewLayer();
}; // Size: 0x4c0
#pragma pack(pop)
}
