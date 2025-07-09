#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNode_Base.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct AnimNode_RandomPlayer : public _Script_Engine::AnimNode_Base {
    private: char pad_10[0x68]; public:
    void* get_Entries();
    bool get_bShuffleMode();
    void set_bShuffleMode(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x78
#pragma pack(pop)
}
