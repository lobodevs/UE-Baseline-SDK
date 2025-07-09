#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "VirtualTexturePoolConfig.hpp"
void* _Script_Engine::VirtualTexturePoolConfig::get_Pools() {
    return (void*)((uintptr_t)this + 0x30);
}
int32_t& _Script_Engine::VirtualTexturePoolConfig::get_DefaultSizeInMegabyte() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Engine::VirtualTexturePoolConfig::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.VirtualTexturePoolConfig");
    return result;
}
