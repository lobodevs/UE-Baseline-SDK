#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct AnimSequence;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimationSharing {
#pragma pack(push, 1)
struct AnimationSetup {
    private: char pad_0[0x18]; public:
    _Script_Engine::AnimSequence*& get_AnimSequence();
    void* get_AnimBlueprint();
    void* get_NumRandomizedInstances();
    void* get_Enabled();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
