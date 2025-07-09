#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_ActorLayerUtilities {
struct ActorLayer;
}
namespace _Script_ActorLayerUtilities {
#pragma pack(push, 1)
struct LayersBlueprintLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void RemoveActorFromLayer(_Script_Engine::Actor* InActor, _Script_ActorLayerUtilities::ActorLayer& Layer);
    void* GetActors(_Script_CoreUObject::Object* WorldContextObject, _Script_ActorLayerUtilities::ActorLayer& ActorLayer);
    void AddActorToLayer(_Script_Engine::Actor* InActor, _Script_ActorLayerUtilities::ActorLayer& Layer);
}; // Size: 0x28
#pragma pack(pop)
}
