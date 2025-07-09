#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "LevelStreaming.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct LevelStreamingDynamic : public LevelStreaming {
    bool get_bInitiallyLoaded();
    void set_bInitiallyLoaded(bool value);
    bool get_bInitiallyVisible();
    void set_bInitiallyVisible(bool value);
    static _Script_CoreUObject::Class* static_class();
    _Script_Engine::LevelStreamingDynamic* LoadLevelInstanceBySoftObjectPtr(_Script_CoreUObject::Object* WorldContextObject, void* Level, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Rotation, bool& bOutSuccess, void* OptionalLevelNameOverride);
    _Script_Engine::LevelStreamingDynamic* LoadLevelInstance(_Script_CoreUObject::Object* WorldContextObject, void* LevelName, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Rotation, bool& bOutSuccess, void* OptionalLevelNameOverride);
}; // Size: 0x150
#pragma pack(pop)
}
