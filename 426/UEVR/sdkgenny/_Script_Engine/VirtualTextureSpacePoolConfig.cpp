#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "VirtualTextureSpacePoolConfig.hpp"
void _Script_Engine::VirtualTextureSpacePoolConfig::set_bAllowSizeScale(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::VirtualTextureSpacePoolConfig::get_MinTileSize() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::VirtualTextureSpacePoolConfig::get_ScalabilityGroup() {
    return (void*)((uintptr_t)this + 0x20);
}
bool _Script_Engine::VirtualTextureSpacePoolConfig::get_bAllowSizeScale() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 1 != 0;
}
int32_t& _Script_Engine::VirtualTextureSpacePoolConfig::get_MaxTileSize() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
int32_t& _Script_Engine::VirtualTextureSpacePoolConfig::get_SizeInMegabyte() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
void* _Script_Engine::VirtualTextureSpacePoolConfig::get_Formats() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::VirtualTextureSpacePoolConfig::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.VirtualTextureSpacePoolConfig");
    return result;
}
