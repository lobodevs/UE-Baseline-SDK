#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieSceneFieldEntry_ChildTemplate {
    private: char pad_0[0x8]; public:
    void* get_ChildIndex();
    void* get_Flags();
    void* get_ForcedTime();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x8
#pragma pack(pop)
}
