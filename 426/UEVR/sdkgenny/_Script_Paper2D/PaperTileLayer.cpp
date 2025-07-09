#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "PaperTileLayer.hpp"
#include "PaperTileSet.hpp"
void* _Script_Paper2D::PaperTileLayer::get_LayerName() {
    return (void*)((uintptr_t)this + 0x28);
}
bool _Script_Paper2D::PaperTileLayer::get_bOverrideCollisionThickness() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 4 != 0;
}
int32_t& _Script_Paper2D::PaperTileLayer::get_LayerWidth() {
    return *(int32_t*)((uintptr_t)this + 0x40);
}
void _Script_Paper2D::PaperTileLayer::set_bHiddenInGame(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Paper2D::PaperTileLayer::get_LayerHeight() {
    return *(int32_t*)((uintptr_t)this + 0x44);
}
bool _Script_Paper2D::PaperTileLayer::get_bLayerCollides() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 2 != 0;
}
bool _Script_Paper2D::PaperTileLayer::get_bHiddenInGame() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
void _Script_Paper2D::PaperTileLayer::set_bLayerCollides(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Paper2D::PaperTileLayer::set_bOverrideCollisionThickness(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Paper2D::PaperTileLayer::get_bOverrideCollisionOffset() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 8 != 0;
}
void _Script_Paper2D::PaperTileLayer::set_bOverrideCollisionOffset(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
_Script_CoreUObject::Class* _Script_Paper2D::PaperTileLayer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Paper2D.PaperTileLayer");
    return result;
}
float& _Script_Paper2D::PaperTileLayer::get_CollisionThicknessOverride() {
    return *(float*)((uintptr_t)this + 0x4c);
}
float& _Script_Paper2D::PaperTileLayer::get_CollisionOffsetOverride() {
    return *(float*)((uintptr_t)this + 0x50);
}
void* _Script_Paper2D::PaperTileLayer::get_LayerColor() {
    return (void*)((uintptr_t)this + 0x54);
}
int32_t& _Script_Paper2D::PaperTileLayer::get_AllocatedWidth() {
    return *(int32_t*)((uintptr_t)this + 0x64);
}
int32_t& _Script_Paper2D::PaperTileLayer::get_AllocatedHeight() {
    return *(int32_t*)((uintptr_t)this + 0x68);
}
void* _Script_Paper2D::PaperTileLayer::get_AllocatedCells() {
    return (void*)((uintptr_t)this + 0x70);
}
_Script_Paper2D::PaperTileSet*& _Script_Paper2D::PaperTileLayer::get_TileSet() {
    return *(_Script_Paper2D::PaperTileSet**)((uintptr_t)this + 0x80);
}
void* _Script_Paper2D::PaperTileLayer::get_AllocatedGrid() {
    return (void*)((uintptr_t)this + 0x88);
}
