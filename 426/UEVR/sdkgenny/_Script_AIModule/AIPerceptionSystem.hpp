#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AISubsystem.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_AIModule {
struct AISenseEvent;
}
namespace _Script_AIModule {
struct AIStimulus;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct AIPerceptionSystem : public AISubsystem {
    private: char pad_38[0xf8]; public:
    void* get_Senses();
    float& get_PerceptionAgingRate();
    static _Script_CoreUObject::Class* static_class();
    void ReportPerceptionEvent(_Script_CoreUObject::Object* WorldContextObject, _Script_AIModule::AISenseEvent* PerceptionEvent);
    void ReportEvent(_Script_AIModule::AISenseEvent* PerceptionEvent);
    bool RegisterPerceptionStimuliSource(_Script_CoreUObject::Object* WorldContextObject, void* Sense, _Script_Engine::Actor* Target);
    void OnPerceptionStimuliSourceEndPlay(_Script_Engine::Actor* Actor, void* EndPlayReason);
    void* GetSenseClassForStimulus(_Script_CoreUObject::Object* WorldContextObject, _Script_AIModule::AIStimulus& Stimulus);
}; // Size: 0x130
#pragma pack(pop)
}
