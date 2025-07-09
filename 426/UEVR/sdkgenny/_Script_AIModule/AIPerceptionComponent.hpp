#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_AIModule {
struct AIController;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_AIModule {
struct ActorPerceptionBlueprintInfo;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct AIPerceptionComponent : public _Script_Engine::ActorComponent {
    private: char pad_b0[0xe0]; public:
    void* get_SensesConfig();
    void* get_DominantSense();
    _Script_AIModule::AIController*& get_AIOwner();
    void* get_OnPerceptionUpdated();
    void* get_OnTargetPerceptionUpdated();
    void* get_OnTargetPerceptionInfoUpdated();
    static _Script_CoreUObject::Class* static_class();
    void SetSenseEnabled(void* SenseClass, bool bEnable);
    void RequestStimuliListenerUpdate();
    void OnOwnerEndPlay(_Script_Engine::Actor* Actor, void* EndPlayReason);
    void GetPerceivedHostileActorsBySense(void* SenseToUse, void*& OutActors);
    void GetPerceivedHostileActors(void*& OutActors);
    void GetPerceivedActors(void* SenseToUse, void*& OutActors);
    void GetKnownPerceivedActors(void* SenseToUse, void*& OutActors);
    void GetCurrentlyPerceivedActors(void* SenseToUse, void*& OutActors);
    bool GetActorsPerception(_Script_Engine::Actor* Actor, _Script_AIModule::ActorPerceptionBlueprintInfo& Info);
    void ForgetAll();
}; // Size: 0x190
#pragma pack(pop)
}
