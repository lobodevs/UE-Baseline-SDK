#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\BodySetup.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "PaperTileMap.hpp"
int32_t& _Script_Paper2D::PaperTileMap::get_TileHeight() {
    return *(int32_t*)((uintptr_t)this + 0x34);
}
int32_t& _Script_Paper2D::PaperTileMap::get_MapHeight() {
    return *(int32_t*)((uintptr_t)this + 0x2c);
}
int32_t& _Script_Paper2D::PaperTileMap::get_MapWidth() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
int32_t& _Script_Paper2D::PaperTileMap::get_TileWidth() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
float& _Script_Paper2D::PaperTileMap::get_PixelsPerUnrealUnit() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_Paper2D::PaperTileMap::get_SeparationPerTileX() {
    return *(float*)((uintptr_t)this + 0x3c);
}
float& _Script_Paper2D::PaperTileMap::get_SeparationPerLayer() {
    return *(float*)((uintptr_t)this + 0x44);
}
float& _Script_Paper2D::PaperTileMap::get_SeparationPerTileY() {
    return *(float*)((uintptr_t)this + 0x40);
}
void* _Script_Paper2D::PaperTileMap::get_SelectedTileSet() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_Engine::MaterialInterface*& _Script_Paper2D::PaperTileMap::get_Material() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x70);
}
void* _Script_Paper2D::PaperTileMap::get_TileLayers() {
    return (void*)((uintptr_t)this + 0x78);
}
float& _Script_Paper2D::PaperTileMap::get_CollisionThickness() {
    return *(float*)((uintptr_t)this + 0x88);
}
void* _Script_Paper2D::PaperTileMap::get_SpriteCollisionDomain() {
    return (void*)((uintptr_t)this + 0x8c);
}
void* _Script_Paper2D::PaperTileMap::get_ProjectionMode() {
    return (void*)((uintptr_t)this + 0x8d);
}
int32_t& _Script_Paper2D::PaperTileMap::get_HexSideLength() {
    return *(int32_t*)((uintptr_t)this + 0x90);
}
_Script_Engine::BodySetup*& _Script_Paper2D::PaperTileMap::get_BodySetup() {
    return *(_Script_Engine::BodySetup**)((uintptr_t)this + 0x98);
}
int32_t& _Script_Paper2D::PaperTileMap::get_LayerNameIndex() {
    return *(int32_t*)((uintptr_t)this + 0xa0);
}
_Script_CoreUObject::Class* _Script_Paper2D::PaperTileMap::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Paper2D.PaperTileMap");
    return result;
}
