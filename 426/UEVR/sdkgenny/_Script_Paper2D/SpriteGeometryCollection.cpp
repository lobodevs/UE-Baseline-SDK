#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SpriteGeometryCollection.hpp"
void* _Script_Paper2D::SpriteGeometryCollection::get_Shapes() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Paper2D::SpriteGeometryCollection::get_GeometryType() {
    return (void*)((uintptr_t)this + 0x10);
}
int32_t& _Script_Paper2D::SpriteGeometryCollection::get_PixelsPerSubdivisionX() {
    return *(int32_t*)((uintptr_t)this + 0x14);
}
float& _Script_Paper2D::SpriteGeometryCollection::get_DetailAmount() {
    return *(float*)((uintptr_t)this + 0x24);
}
int32_t& _Script_Paper2D::SpriteGeometryCollection::get_PixelsPerSubdivisionY() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
bool _Script_Paper2D::SpriteGeometryCollection::get_bAvoidVertexMerging() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 1 != 0;
}
void _Script_Paper2D::SpriteGeometryCollection::set_bAvoidVertexMerging(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Paper2D::SpriteGeometryCollection::get_AlphaThreshold() {
    return *(float*)((uintptr_t)this + 0x20);
}
float& _Script_Paper2D::SpriteGeometryCollection::get_SimplifyEpsilon() {
    return *(float*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Paper2D::SpriteGeometryCollection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Paper2D.SpriteGeometryCollection");
    return result;
}
