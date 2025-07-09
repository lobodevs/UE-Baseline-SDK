#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialCachedParameters.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialCachedParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.MaterialCachedParameters");
    return result;
}
void* _Script_Engine::MaterialCachedParameters::get_ScalarValues() {
    return (void*)((uintptr_t)this + 0x140);
}
void* _Script_Engine::MaterialCachedParameters::get_RuntimeEntries() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::MaterialCachedParameters::get_VectorValues() {
    return (void*)((uintptr_t)this + 0x150);
}
void* _Script_Engine::MaterialCachedParameters::get_TextureValues() {
    return (void*)((uintptr_t)this + 0x160);
}
void* _Script_Engine::MaterialCachedParameters::get_FontValues() {
    return (void*)((uintptr_t)this + 0x170);
}
void* _Script_Engine::MaterialCachedParameters::get_FontPageValues() {
    return (void*)((uintptr_t)this + 0x180);
}
void* _Script_Engine::MaterialCachedParameters::get_RuntimeVirtualTextureValues() {
    return (void*)((uintptr_t)this + 0x190);
}
