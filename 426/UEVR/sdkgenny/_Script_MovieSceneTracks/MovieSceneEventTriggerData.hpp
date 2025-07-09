#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieSceneEventTriggerData {
    private: char pad_0[0x48]; public:
    void* get_Ptrs();
    void* get_ObjectBindingId();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
