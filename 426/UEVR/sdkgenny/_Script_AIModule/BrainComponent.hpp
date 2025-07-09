#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_AIModule {
struct BlackboardComponent;
}
namespace _Script_AIModule {
struct AIController;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct BrainComponent : public _Script_Engine::ActorComponent {
    private: char pad_b0[0x58]; public:
    _Script_AIModule::BlackboardComponent*& get_BlackboardComp();
    _Script_AIModule::AIController*& get_AIOwner();
    static _Script_CoreUObject::Class* static_class();
    void StopLogic(void* reason);
    void StartLogic();
    void RestartLogic();
    bool IsRunning();
    bool IsPaused();
}; // Size: 0x108
#pragma pack(pop)
}
