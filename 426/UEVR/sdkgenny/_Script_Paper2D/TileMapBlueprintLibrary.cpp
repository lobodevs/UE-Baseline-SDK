#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "PaperTileInfo.hpp"
#include "PaperTileSet.hpp"
#include "TileMapBlueprintLibrary.hpp"
_Script_CoreUObject::Class* _Script_Paper2D::TileMapBlueprintLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Paper2D.TileMapBlueprintLibrary");
    return result;
}
_Script_CoreUObject::Transform _Script_Paper2D::TileMapBlueprintLibrary::GetTileTransform(_Script_Paper2D::PaperTileInfo Tile) {
    return;
}
_Script_Paper2D::PaperTileInfo _Script_Paper2D::TileMapBlueprintLibrary::MakeTile(int32_t TileIndex, _Script_Paper2D::PaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD) {
    return;
}
void* _Script_Paper2D::TileMapBlueprintLibrary::GetTileUserData(_Script_Paper2D::PaperTileInfo Tile) {
    return;
}
void _Script_Paper2D::TileMapBlueprintLibrary::BreakTile(_Script_Paper2D::PaperTileInfo Tile, int32_t& TileIndex, _Script_Paper2D::PaperTileSet*& TileSet, bool& bFlipH, bool& bFlipV, bool& bFlipD) {
    return;
}
