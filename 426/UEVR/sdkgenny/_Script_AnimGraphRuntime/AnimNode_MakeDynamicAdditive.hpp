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
struct AnimNode_MakeDynamicAdditive : public _Script_Engine::AnimNode_Base {
    private: char pad_10[0x28]; public:
    void* get_Base();
    void* get_Additive();
    bool get_bMeshSpaceAdditive();
    void set_bMeshSpaceAdditive(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
