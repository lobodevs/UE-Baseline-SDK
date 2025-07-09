#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "PaperTileSet.hpp"
void* _Script_Paper2D::PaperTileSet::get_TileSize() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_Engine::Texture2D*& _Script_Paper2D::PaperTileSet::get_TileSheet() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x30);
}
int32_t& _Script_Paper2D::PaperTileSet::get_HeightInTiles() {
    return *(int32_t*)((uintptr_t)this + 0x6c);
}
void* _Script_Paper2D::PaperTileSet::get_AdditionalSourceTextures() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Paper2D::PaperTileSet::get_BorderMargin() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Paper2D::PaperTileSet::get_PerTileSpacing() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Paper2D::PaperTileSet::get_DrawingOffset() {
    return (void*)((uintptr_t)this + 0x60);
}
int32_t& _Script_Paper2D::PaperTileSet::get_WidthInTiles() {
    return *(int32_t*)((uintptr_t)this + 0x68);
}
int32_t& _Script_Paper2D::PaperTileSet::get_AllocatedWidth() {
    return *(int32_t*)((uintptr_t)this + 0x70);
}
int32_t& _Script_Paper2D::PaperTileSet::get_AllocatedHeight() {
    return *(int32_t*)((uintptr_t)this + 0x74);
}
void* _Script_Paper2D::PaperTileSet::get_PerTileData() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_Paper2D::PaperTileSet::get_Terrains() {
    return (void*)((uintptr_t)this + 0x88);
}
int32_t& _Script_Paper2D::PaperTileSet::get_TileWidth() {
    return *(int32_t*)((uintptr_t)this + 0x98);
}
int32_t& _Script_Paper2D::PaperTileSet::get_TileHeight() {
    return *(int32_t*)((uintptr_t)this + 0x9c);
}
int32_t& _Script_Paper2D::PaperTileSet::get_Margin() {
    return *(int32_t*)((uintptr_t)this + 0xa0);
}
int32_t& _Script_Paper2D::PaperTileSet::get_Spacing() {
    return *(int32_t*)((uintptr_t)this + 0xa4);
}
_Script_CoreUObject::Class* _Script_Paper2D::PaperTileSet::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Paper2D.PaperTileSet");
    return result;
}
