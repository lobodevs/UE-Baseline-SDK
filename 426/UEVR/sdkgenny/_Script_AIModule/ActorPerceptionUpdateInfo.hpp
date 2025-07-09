#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct ActorPerceptionUpdateInfo {
    private: char pad_0[0x48]; public:
    int32_t& get_TargetId();
    void* get_Target();
    void* get_Stimulus();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
