#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CinematicCamera {
#pragma pack(push, 1)
struct CameraTrackingFocusSettings {
    private: char pad_0[0x38]; public:
    void* get_ActorToTrack();
    void* get_RelativeOffset();
    bool get_bDrawDebugTrackingFocusPoint();
    void set_bDrawDebugTrackingFocusPoint(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
