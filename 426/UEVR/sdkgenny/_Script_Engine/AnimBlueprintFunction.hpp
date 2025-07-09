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
struct AnimBlueprintFunction {
    private: char pad_0[0x68]; public:
    void* get_Name();
    void* get_Group();
    int32_t& get_OutputPoseNodeIndex();
    void* get_InputPoseNames();
    void* get_InputPoseNodeIndices();
    bool get_bImplemented();
    void set_bImplemented(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x68
#pragma pack(pop)
}
