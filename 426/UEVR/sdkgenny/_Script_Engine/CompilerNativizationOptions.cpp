#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CompilerNativizationOptions.hpp"
void* _Script_Engine::CompilerNativizationOptions::get_PlatformName() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_Engine::CompilerNativizationOptions::get_ServerOnlyPlatform() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void _Script_Engine::CompilerNativizationOptions::set_ServerOnlyPlatform(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::CompilerNativizationOptions::get_ClientOnlyPlatform() {
    return (*(uint8_t*)((uintptr_t)this + 0x9 + 0)) & 1 != 0;
}
void* _Script_Engine::CompilerNativizationOptions::get_ExcludedModules() {
    return (void*)((uintptr_t)this + 0x10);
}
void _Script_Engine::CompilerNativizationOptions::set_ClientOnlyPlatform(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::CompilerNativizationOptions::get_bExcludeMonolithicHeaders() {
    return (*(uint8_t*)((uintptr_t)this + 0xa + 0)) & 1 != 0;
}
void _Script_Engine::CompilerNativizationOptions::set_bExcludeMonolithicHeaders(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa + 0);
    *(uint8_t*)((uintptr_t)this + 0xa + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::CompilerNativizationOptions::get_ExcludedAssets() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::CompilerNativizationOptions::get_ExcludedFolderPaths() {
    return (void*)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_Engine::CompilerNativizationOptions::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.CompilerNativizationOptions");
    return result;
}
