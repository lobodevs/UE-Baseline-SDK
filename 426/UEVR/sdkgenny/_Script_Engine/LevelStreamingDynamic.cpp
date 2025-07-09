#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "LevelStreaming.hpp"
#include "LevelStreamingDynamic.hpp"
_Script_Engine::LevelStreamingDynamic* _Script_Engine::LevelStreamingDynamic::LoadLevelInstanceBySoftObjectPtr(_Script_CoreUObject::Object* WorldContextObject, void* Level, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Rotation, bool& bOutSuccess, void* OptionalLevelNameOverride) {
    return;
}
bool _Script_Engine::LevelStreamingDynamic::get_bInitiallyLoaded() {
    return (*(uint8_t*)((uintptr_t)this + 0x148 + 0)) & 1 != 0;
}
void _Script_Engine::LevelStreamingDynamic::set_bInitiallyLoaded(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x148 + 0);
    *(uint8_t*)((uintptr_t)this + 0x148 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::LevelStreamingDynamic::get_bInitiallyVisible() {
    return (*(uint8_t*)((uintptr_t)this + 0x148 + 0)) & 2 != 0;
}
_Script_Engine::LevelStreamingDynamic* _Script_Engine::LevelStreamingDynamic::LoadLevelInstance(_Script_CoreUObject::Object* WorldContextObject, void* LevelName, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Rotation, bool& bOutSuccess, void* OptionalLevelNameOverride) {
    return;
}
_Script_CoreUObject::Class* _Script_Engine::LevelStreamingDynamic::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.LevelStreamingDynamic");
    return result;
}
void _Script_Engine::LevelStreamingDynamic::set_bInitiallyVisible(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x148 + 0);
    *(uint8_t*)((uintptr_t)this + 0x148 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
