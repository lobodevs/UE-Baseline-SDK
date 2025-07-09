#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PaperTileSetTerrain.hpp"
void* _Script_Paper2D::PaperTileSetTerrain::get_TerrainName() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Paper2D::PaperTileSetTerrain::get_CenterTileIndex() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Paper2D::PaperTileSetTerrain::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Paper2D.PaperTileSetTerrain");
    return result;
}
