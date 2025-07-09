#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PaperSprite.hpp"
#include "SpriteInstanceData.hpp"
void* _Script_Paper2D::SpriteInstanceData::get_Transform() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Paper2D::SpriteInstanceData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Paper2D.SpriteInstanceData");
    return result;
}
_Script_Paper2D::PaperSprite*& _Script_Paper2D::SpriteInstanceData::get_SourceSprite() {
    return *(_Script_Paper2D::PaperSprite**)((uintptr_t)this + 0x40);
}
void* _Script_Paper2D::SpriteInstanceData::get_VertexColor() {
    return (void*)((uintptr_t)this + 0x48);
}
int32_t& _Script_Paper2D::SpriteInstanceData::get_MaterialIndex() {
    return *(int32_t*)((uintptr_t)this + 0x4c);
}
