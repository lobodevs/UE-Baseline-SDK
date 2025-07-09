#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "VirtualTexture2D.hpp"
#include "VirtualTextureBuilder.hpp"
_Script_Engine::VirtualTexture2D*& _Script_Engine::VirtualTextureBuilder::get_Texture() {
    return *(_Script_Engine::VirtualTexture2D**)((uintptr_t)this + 0x28);
}
void* _Script_Engine::VirtualTextureBuilder::get_BuildHash() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::VirtualTextureBuilder::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.VirtualTextureBuilder");
    return result;
}
