#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamVR {
#pragma pack(push, 1)
struct SteamVRChaperoneComponent : public _Script_Engine::ActorComponent {
    private: char pad_b0[0x28]; public:
    void* get_OnLeaveBounds();
    void* get_OnReturnToBounds();
    static _Script_CoreUObject::Class* static_class();
    void* GetBounds();
}; // Size: 0xd8
#pragma pack(pop)
}
