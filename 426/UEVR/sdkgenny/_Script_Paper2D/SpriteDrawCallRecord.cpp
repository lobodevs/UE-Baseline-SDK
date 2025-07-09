#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Texture.hpp"
#include "SpriteDrawCallRecord.hpp"
void* _Script_Paper2D::SpriteDrawCallRecord::get_Destination() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_Engine::Texture*& _Script_Paper2D::SpriteDrawCallRecord::get_BaseTexture() {
    return *(_Script_Engine::Texture**)((uintptr_t)this + 0x10);
}
void* _Script_Paper2D::SpriteDrawCallRecord::get_Color() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_Paper2D::SpriteDrawCallRecord::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Paper2D.SpriteDrawCallRecord");
    return result;
}
