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
struct MovieSceneSectionParameters {
    private: char pad_0[0x24]; public:
    void* get_StartFrameOffset();
    bool get_bCanLoop();
    void set_bCanLoop(bool value);
    void* get_EndFrameOffset();
    void* get_FirstLoopStartFrameOffset();
    float& get_TimeScale();
    int32_t& get_HierarchicalBias();
    float& get_StartOffset();
    float& get_PrerollTime();
    float& get_PostrollTime();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x24
#pragma pack(pop)
}
