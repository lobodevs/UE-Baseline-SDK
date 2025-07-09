#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "PaperTileInfo.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Paper2D {
struct PaperTileSet;
}
namespace _Script_Paper2D {
#pragma pack(push, 1)
struct TileMapBlueprintLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    _Script_Paper2D::PaperTileInfo MakeTile(int32_t TileIndex, _Script_Paper2D::PaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD);
    void* GetTileUserData(_Script_Paper2D::PaperTileInfo Tile);
    _Script_CoreUObject::Transform GetTileTransform(_Script_Paper2D::PaperTileInfo Tile);
    void BreakTile(_Script_Paper2D::PaperTileInfo Tile, int32_t& TileIndex, _Script_Paper2D::PaperTileSet*& TileSet, bool& bFlipH, bool& bFlipV, bool& bFlipD);
}; // Size: 0x28
#pragma pack(pop)
}
