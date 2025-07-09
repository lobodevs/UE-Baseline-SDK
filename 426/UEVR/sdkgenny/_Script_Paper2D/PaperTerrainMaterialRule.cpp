#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PaperSprite.hpp"
#include "PaperTerrainMaterialRule.hpp"
void _Script_Paper2D::PaperTerrainMaterialRule::set_bEnableCollision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Paper2D::PaperTerrainMaterialRule::get_MaximumAngle() {
    return *(float*)((uintptr_t)this + 0x24);
}
_Script_CoreUObject::Class* _Script_Paper2D::PaperTerrainMaterialRule::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Paper2D.PaperTerrainMaterialRule");
    return result;
}
_Script_Paper2D::PaperSprite*& _Script_Paper2D::PaperTerrainMaterialRule::get_StartCap() {
    return *(_Script_Paper2D::PaperSprite**)((uintptr_t)this + 0x0);
}
void* _Script_Paper2D::PaperTerrainMaterialRule::get_Body() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_Paper2D::PaperSprite*& _Script_Paper2D::PaperTerrainMaterialRule::get_EndCap() {
    return *(_Script_Paper2D::PaperSprite**)((uintptr_t)this + 0x18);
}
float& _Script_Paper2D::PaperTerrainMaterialRule::get_MinimumAngle() {
    return *(float*)((uintptr_t)this + 0x20);
}
bool _Script_Paper2D::PaperTerrainMaterialRule::get_bEnableCollision() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
float& _Script_Paper2D::PaperTerrainMaterialRule::get_CollisionOffset() {
    return *(float*)((uintptr_t)this + 0x2c);
}
int32_t& _Script_Paper2D::PaperTerrainMaterialRule::get_DrawOrder() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
