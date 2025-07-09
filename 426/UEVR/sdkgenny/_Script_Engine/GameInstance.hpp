#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct OnlineSession;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct GameInstance : public _Script_CoreUObject::Object {
    private: char pad_28[0x180]; public:
    void* get_LocalPlayers();
    _Script_Engine::OnlineSession*& get_OnlineSession();
    void* get_ReferencedObjects();
    void* get_OnPawnControllerChangedDelegates();
    static _Script_CoreUObject::Class* static_class();
    void ReceiveShutdown();
    void ReceiveInit();
    void HandleTravelError(void* FailureType);
    void HandleNetworkError(void* FailureType, bool bIsServer);
    void DebugRemovePlayer(int32_t ControllerId);
    void DebugCreatePlayer(int32_t ControllerId);
}; // Size: 0x1a8
#pragma pack(pop)
}
