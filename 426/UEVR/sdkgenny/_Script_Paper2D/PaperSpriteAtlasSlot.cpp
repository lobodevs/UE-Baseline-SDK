#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PaperSpriteAtlasSlot.hpp"
void* _Script_Paper2D::PaperSpriteAtlasSlot::get_SpriteRef() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Paper2D::PaperSpriteAtlasSlot::get_AtlasIndex() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
int32_t& _Script_Paper2D::PaperSpriteAtlasSlot::get_Width() {
    return *(int32_t*)((uintptr_t)this + 0x34);
}
int32_t& _Script_Paper2D::PaperSpriteAtlasSlot::get_X() {
    return *(int32_t*)((uintptr_t)this + 0x2c);
}
int32_t& _Script_Paper2D::PaperSpriteAtlasSlot::get_Y() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
int32_t& _Script_Paper2D::PaperSpriteAtlasSlot::get_Height() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Paper2D::PaperSpriteAtlasSlot::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Paper2D.PaperSpriteAtlasSlot");
    return result;
}
