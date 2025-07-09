#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LevelStreamingVolume.hpp"
#include "Volume.hpp"
void* _Script_Engine::LevelStreamingVolume::get_StreamingLevelNames() {
    return (void*)((uintptr_t)this + 0x258);
}
void _Script_Engine::LevelStreamingVolume::set_bDisabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x268 + 0);
    *(uint8_t*)((uintptr_t)this + 0x268 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::LevelStreamingVolume::get_bEditorPreVisOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0x268 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::LevelStreamingVolume::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.LevelStreamingVolume");
    return result;
}
void _Script_Engine::LevelStreamingVolume::set_bEditorPreVisOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x268 + 0);
    *(uint8_t*)((uintptr_t)this + 0x268 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::LevelStreamingVolume::get_StreamingUsage() {
    return (void*)((uintptr_t)this + 0x26c);
}
bool _Script_Engine::LevelStreamingVolume::get_bDisabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x268 + 0)) & 2 != 0;
}
