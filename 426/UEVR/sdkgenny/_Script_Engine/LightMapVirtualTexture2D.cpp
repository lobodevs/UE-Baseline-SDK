#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LightMapVirtualTexture2D.hpp"
#include "Texture2D.hpp"
void* _Script_Engine::LightMapVirtualTexture2D::get_TypeToLayer() {
    return (void*)((uintptr_t)this + 0x100);
}
_Script_CoreUObject::Class* _Script_Engine::LightMapVirtualTexture2D::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.LightMapVirtualTexture2D");
    return result;
}
