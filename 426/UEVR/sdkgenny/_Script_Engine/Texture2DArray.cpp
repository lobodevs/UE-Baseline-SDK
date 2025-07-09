#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Texture.hpp"
#include "Texture2DArray.hpp"
void* _Script_Engine::Texture2DArray::get_AddressX() {
    return (void*)((uintptr_t)this + 0x130);
}
void* _Script_Engine::Texture2DArray::get_AddressY() {
    return (void*)((uintptr_t)this + 0x131);
}
void* _Script_Engine::Texture2DArray::get_AddressZ() {
    return (void*)((uintptr_t)this + 0x132);
}
_Script_CoreUObject::Class* _Script_Engine::Texture2DArray::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.Texture2DArray");
    return result;
}
