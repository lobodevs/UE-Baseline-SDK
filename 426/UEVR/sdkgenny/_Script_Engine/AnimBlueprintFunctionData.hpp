#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimBlueprintFunctionData {
    private: char pad_0[0x40]; public:
    void* get_OutputPoseNodeProperty();
    void* get_InputPoseNodeProperties();
    void* get_InputProperties();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
