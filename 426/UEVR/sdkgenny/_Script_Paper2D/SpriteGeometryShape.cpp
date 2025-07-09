#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SpriteGeometryShape.hpp"
void* _Script_Paper2D::SpriteGeometryShape::get_ShapeType() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Paper2D::SpriteGeometryShape::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Paper2D.SpriteGeometryShape");
    return result;
}
void* _Script_Paper2D::SpriteGeometryShape::get_Vertices() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Paper2D::SpriteGeometryShape::get_BoxPosition() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Paper2D::SpriteGeometryShape::get_BoxSize() {
    return (void*)((uintptr_t)this + 0x18);
}
float& _Script_Paper2D::SpriteGeometryShape::get_Rotation() {
    return *(float*)((uintptr_t)this + 0x28);
}
bool _Script_Paper2D::SpriteGeometryShape::get_bNegativeWinding() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c + 0)) & 1 != 0;
}
void _Script_Paper2D::SpriteGeometryShape::set_bNegativeWinding(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
