#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct LODSyncComponent : public ActorComponent {
    private: char pad_b0[0x90]; public:
    int32_t& get_NumLODs();
    int32_t& get_ForcedLOD();
    void* get_ComponentsToSync();
    void* get_CustomLODMapping();
    int32_t& get_CurrentLOD();
    int32_t& get_CurrentNumLODs();
    void* get_DriveComponents();
    void* get_SubComponents();
    static _Script_CoreUObject::Class* static_class();
    void* GetLODSyncDebugText();
}; // Size: 0x140
#pragma pack(pop)
}
