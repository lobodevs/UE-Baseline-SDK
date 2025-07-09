#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
struct WorldSubsystem;
}
namespace _Script_Engine {
struct LocalPlayerSubsystem;
}
namespace _Script_Engine {
struct PlayerController;
}
namespace _Script_Engine {
struct EngineSubsystem;
}
namespace _Script_Engine {
struct GameInstanceSubsystem;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SubsystemBlueprintLibrary : public BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    _Script_Engine::WorldSubsystem* GetWorldSubsystem(_Script_CoreUObject::Object* ContextObject, void* Class);
    _Script_Engine::LocalPlayerSubsystem* GetLocalPlayerSubSystemFromPlayerController(_Script_Engine::PlayerController* PlayerController, void* Class);
    _Script_Engine::LocalPlayerSubsystem* GetLocalPlayerSubsystem(_Script_CoreUObject::Object* ContextObject, void* Class);
    _Script_Engine::GameInstanceSubsystem* GetGameInstanceSubsystem(_Script_CoreUObject::Object* ContextObject, void* Class);
    _Script_Engine::EngineSubsystem* GetEngineSubsystem(void* Class);
}; // Size: 0x28
#pragma pack(pop)
}
