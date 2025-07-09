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
struct DirectorTrackCut {
    private: char pad_0[0x14]; public:
    float& get_Time();
    float& get_TransitionTime();
    void* get_TargetCamGroup();
    int32_t& get_ShotNumber();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x14
#pragma pack(pop)
}
